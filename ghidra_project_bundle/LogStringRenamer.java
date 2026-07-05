//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;

public class LogStringRenamer extends GhidraScript {

    private PrintWriter report;

    private static final String[] LOG_KEYWORDS = {
        "error", "warn", "info", "debug", "trace", "fail", "success",
        "fetch", "send", "recv", "connect", "http", "cdn", "session",
        "update", "launch", "auth", "token", "login", "download",
        "manifest", "bundle", "sha256", "playtest", "publish",
        "handshake", "socket", "resolve", "mfa", "pubkey", "mitm",
        "sign", "verify", "encrypt", "decrypt", "upload", "crash",
        "memory", "thread", "lock", "queue", "timer", "cache"
    };

    private static final Pattern SOURCE_FILE_PATTERN =
        Pattern.compile(".*/([^/]+/[^/]+/[^/]+\\.(?:cpp|c|h|hpp|cc|cxx))(?::(\\d+))?");

    private static final Pattern MODULE_ACTION_PATTERN =
        Pattern.compile("^([a-zA-Z_][a-zA-Z0-9_]*)\\s*:\\s*(.+)$");

    private static final Pattern NAMESPACE_PATTERN =
        Pattern.compile("^([a-zA-Z_][a-zA-Z0-9_]*)::(.+)$");

    private Map<Function, List<NameCandidate>> funcCandidates = new HashMap<>();
    private Map<Function, List<String>> funcSourceFileCandidates = new HashMap<>();
    private int totalStringsExamined = 0;
    private int totalLogStrings = 0;
    private int totalXrefs = 0;
    private int renamedCount = 0;
    private int skippedCount = 0;

    static class NameCandidate {
        String suggestedName;
        String sourceString;
        Address stringAddr;
        int priority;

        NameCandidate(String name, String src, Address addr, int pri) {
            this.suggestedName = name;
            this.sourceString = src;
            this.stringAddr = addr;
            this.priority = pri;
        }
    }

    @Override
    public void run() throws Exception {
        String outPath = getScriptArgs().length > 0
            ? getScriptArgs()[0]
            : System.getProperty("user.dir") + "/log_renamer_report.txt";
        report = new PrintWriter(new FileWriter(new File(outPath)));

        log("=== LogStringRenamer === ");
        log("Program: " + currentProgram.getName());
        log("Image base: " + currentProgram.getImageBase());
        log("");

        phaseStringsAndSourceFiles();

        phaseChooseAndRename();

        printSummary();

        report.close();
        log("Report saved to: " + outPath);
    }

    private void phaseStringsAndSourceFiles() throws Exception {
        Listing listing = currentProgram.getListing();
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        FunctionManager fm = currentProgram.getFunctionManager();

        List<Data> stringDatas = collectStringDataItems(listing);
        totalStringsExamined = stringDatas.size();
        log("Total string data items found: " + totalStringsExamined);
        log("");

        for (Data data : stringDatas) {
            String value = data.getDefaultValueRepresentation();
            if (value == null) continue;

            int len = value.length();
            if (len < 20) continue;

            boolean isSourceFile = false;
            Matcher srcMatcher = SOURCE_FILE_PATTERN.matcher(value);
            if (srcMatcher.matches()) {
                isSourceFile = true;
                String sourcePath = srcMatcher.group(1);
                Address srcAddr = data.getAddress();
                ReferenceIterator refs = refMgr.getReferencesTo(srcAddr);
                while (refs.hasNext()) {
                    Reference ref = refs.next();
                    Function owner = fm.getFunctionContaining(ref.getFromAddress());
                    if (owner == null || owner.isExternal() || owner.isThunk()) continue;
                    funcSourceFileCandidates
                        .computeIfAbsent(owner, k -> new ArrayList<>())
                        .add(sourcePath);
                    totalXrefs++;
                }
            }

            boolean looksLikeLog = isSourceFile;
            if (!isSourceFile) {
                looksLikeLog = isLogFormatString(value, len);
            }

            if (!looksLikeLog) continue;
            totalLogStrings++;

            Address strAddr = data.getAddress();
            ReferenceIterator refs = refMgr.getReferencesTo(strAddr);
            if (!refs.hasNext()) continue;

            if (isSourceFile) {
                while (refs.hasNext()) {
                    Reference ref = refs.next();
                    Function owner = fm.getFunctionContaining(ref.getFromAddress());
                    if (owner == null || owner.isExternal() || owner.isThunk()) continue;
                    String srcPath = determineSourcePath(value);
                    if (val(srcPath)) {
                        funcSourceFileCandidates
                            .computeIfAbsent(owner, k -> new ArrayList<>())
                            .add(srcPath);
                    }
                    totalXrefs++;
                }
                continue;
            }

            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function owner = fm.getFunctionContaining(ref.getFromAddress());
                if (owner == null || owner.isExternal() || owner.isThunk()) continue;
                totalXrefs++;

                String candidate = deriveFunctionName(value);
                if (!val(candidate)) continue;

                funcCandidates
                    .computeIfAbsent(owner, k -> new ArrayList<>())
                    .add(new NameCandidate(candidate, value, strAddr, scoreName(candidate, value)));
            }
        }

        log("Log-format strings identified: " + totalLogStrings);
        log("Cross-references found: " + totalXrefs);
        log("Functions with candidates: " + funcCandidates.size());
        log("");
    }

    private void phaseChooseAndRename() throws Exception {
        Set<Function> allFunctions = new LinkedHashSet<>(funcCandidates.keySet());
        Set<Function> srcFileFunctions = funcSourceFileCandidates.keySet();
        allFunctions.addAll(srcFileFunctions);

        int processed = 0;
        for (Function func : allFunctions) {
            processed++;
            if (processed % 100 == 0) {
                log("  Processed " + processed + " functions...");
            }
            if (monitor.isCancelled()) break;

            String ns = null;
            if (funcSourceFileCandidates.containsKey(func)) {
                List<String> paths = funcSourceFileCandidates.get(func);
                ns = pathsToNamespace(paths);
            }

            if (funcCandidates.containsKey(func)) {
                renewFunction(func, ns);
            } else if (ns != null) {
                String defaultName = deriveNameFromNamespace(ns);
                if (val(defaultName) && isDefaultName(func)) {
                    tryRename(func, defaultName, ns, "source file path");
                }
            }
        }
    }

    private List<Data> collectStringDataItems(Listing listing) {
        List<Data> result = new ArrayList<>();
        CodeUnitIterator cuIter = listing.getCodeUnits(true);
        while (cuIter.hasNext()) {
            CodeUnit cu = cuIter.next();
            if (!(cu instanceof Data)) continue;
            Data data = (Data) cu;
            if (!data.isDefined()) continue;
            DataType dt = data.getDataType();
            if (dt == null) continue;
            if (!(dt instanceof AbstractStringDataType)) continue;
            result.add(data);
        }
        return result;
    }

    private boolean isLogFormatString(String value, int len) {
        if (len < 20) return false;
        if (value.startsWith("\"") && value.endsWith("\"")) return false;

        for (String kw : LOG_KEYWORDS) {
            if (value.toLowerCase().contains(kw)) return true;
        }

        if (value.contains("{}")) return true;

        if (MODULE_ACTION_PATTERN.matcher(value).matches()) return true;

        if (value.contains("::")) return true;

        if (value.contains(":") && countWords(value) >= 4) return true;

        return false;
    }

    private String deriveFunctionName(String value) {
        String v = value.trim();

        Matcher nm = NAMESPACE_PATTERN.matcher(v);
        if (nm.matches()) {
            String ns = nm.group(1);
            String rest = nm.group(2);
            return ns + "_" + camelToSnake(rest, 30);
        }

        Matcher ma = MODULE_ACTION_PATTERN.matcher(v);
        if (ma.matches()) {
            String mod = ma.group(1).toLowerCase();
            String act = camelToSnake(ma.group(2), 30);
            return mod + "_" + act;
        }

        return camelToSnake(v, 50);
    }

    private String camelToSnake(String input, int maxLen) {
        String cleaned = input.replaceAll("[{}%\"'(),;.!?\\[\\]]", "")
                              .replaceAll("\\s+", "_")
                              .replaceAll("_{2,}", "_")
                              .replaceAll("_+$", "")
                              .replaceAll("^_+", "")
                              .toLowerCase();

        cleaned = cleaned.replaceAll("[^a-zA-Z0-9_]", "");

        if (cleaned.length() > maxLen) {
            cleaned = cleaned.substring(0, maxLen);
            cleaned = cleaned.replaceAll("_+$", "");
        }
        return cleaned;
    }

    private int scoreName(String name, String sourceString) {
        int score = 0;
        if (name.contains("::")) score += 3;
        if (name.contains("_")) score += 1;
        int alphaCount = 0;
        for (char c : name.toCharArray()) {
            if (Character.isLetter(c)) alphaCount++;
        }
        if (alphaCount >= 10) score += 2;
        else if (alphaCount >= 5) score += 1;
        if (sourceString.length() >= 40) score += 1;
        return score;
    }

    private void renewFunction(Function func, String sourceNs) throws Exception {
        List<NameCandidate> cands = funcCandidates.get(func);

        cands.sort((a, b) -> Integer.compare(b.priority, a.priority));

        Set<String> nameVotes = new LinkedHashSet<>();
        for (NameCandidate c : cands) {
            nameVotes.add(c.suggestedName);
        }

        String chosenName = null;
        String chosenReason = null;

        for (String n : nameVotes) {
            if (n.length() >= 10 && n.contains("_")) {
                chosenName = n;
                chosenReason = "best log-string candidate (len>=10, has underscore)";
                break;
            }
        }

        if (chosenName == null) {
            for (NameCandidate c : cands) {
                if (c.priority >= 2) {
                    chosenName = c.suggestedName;
                    chosenReason = "highest priority candidate (score=" + c.priority + ")";
                    break;
                }
            }
        }

        if (chosenName == null) {
            chosenName = cands.get(0).suggestedName;
            chosenReason = "first candidate";
        }

        if (sourceNs != null && !isDefaultName(func) && func.getName().contains("::")) {
            report.println("[SKIP] " + func.getEntryPoint() + " already namespaced: " + func.getName());
            skippedCount++;
            return;
        }

        String finalName = chosenName;
        if (sourceNs != null) {
            finalName = sourceNs + "_" + chosenName;
            chosenReason += " + source-file-derived namespace: " + sourceNs;
        }

        String cleanName = cleanFunctionName(finalName);
        if (!val(cleanName) || cleanName.length() < 4) {
            skippedCount++;
            return;
        }

        if (isDefaultName(func) || func.getName().startsWith("FUN_")) {
            tryRename(func, cleanName, null, chosenReason);
        } else {
            report.println("[SKIP] " + func.getEntryPoint() + " already named: " + func.getName() +
                " (candidate: " + cleanName + ")");
            skippedCount++;
        }
    }

    private void tryRename(Function func, String name, String namespace, String reason) throws Exception {
        String fullName = (namespace != null) ? namespace + "_" + name : name;
        fullName = cleanFunctionName(fullName);
        if (fullName.length() > 60) {
            fullName = fullName.substring(0, 60);
        }

        try {
            String oldName = func.getName();
            func.setName(fullName, SourceType.ANALYSIS);
            renamedCount++;
            log("  RENAMED: " + func.getEntryPoint() + ": " + oldName + " -> " + fullName);
            report.println("[RENAME] " + func.getEntryPoint() +
                " | old=" + oldName +
                " | new=" + fullName +
                (reason != null ? " | reason=" + reason : ""));
        } catch (Exception e) {
            skippedCount++;
            report.println("[FAIL] " + func.getEntryPoint() +
                " | candidate=" + fullName +
                " | error=" + e.getMessage());
        }
    }

    private String determineSourcePath(String value) {
        Matcher m = SOURCE_FILE_PATTERN.matcher(value);
        if (!m.matches()) return null;
        return m.group(1);
    }

    private String pathsToNamespace(List<String> paths) {
        Map<String, Integer> dirCount = new LinkedHashMap<>();
        Map<String, String> fileToDir = new LinkedHashMap<>();
        for (String p : paths) {
            int lastSlash = p.lastIndexOf('/');
            if (lastSlash > 0) {
                String dir = p.substring(0, lastSlash);
                String file = p.substring(lastSlash + 1);
                int dot = file.lastIndexOf('.');
                if (dot > 0) file = file.substring(0, dot);
                dirCount.put(dir, dirCount.getOrDefault(dir, 0) + 1);
                fileToDir.putIfAbsent(file, dir);
            }
        }

        String bestDir = null;
        int bestCount = 0;
        for (Map.Entry<String, Integer> e : dirCount.entrySet()) {
            if (e.getValue() > bestCount) {
                bestCount = e.getValue();
                bestDir = e.getKey();
            }
        }

        if (bestDir != null) {
            String[] parts = bestDir.split("/");
            StringBuilder ns = new StringBuilder();
            for (int i = parts.length - 1; i >= 0 && ns.length() < 30; i--) {
                String part = parts[i].replaceAll("[^a-zA-Z0-9_]", "");
                if (part.isEmpty()) continue;
                if (ns.length() > 0) ns.insert(0, "_");
                ns.insert(0, part);
            }
            return ns.toString().toLowerCase();
        }
        return null;
    }

    private String deriveNameFromNamespace(String ns) {
        if (ns == null) return null;
        String[] parts = ns.split("_");
        if (parts.length >= 2) {
            return parts[parts.length - 1] + "_handler";
        }
        return ns + "_handler";
    }

    private boolean isDefaultName(Function func) {
        String name = func.getName();
        return name.startsWith("FUN_") || name.startsWith("sub_") ||
               name.matches("^[0-9a-fA-F]+$");
    }

    private String cleanFunctionName(String name) {
        String result = name.replaceAll("[^a-zA-Z0-9_]", "");
        result = result.replaceAll("_{2,}", "_");
        result = result.replaceAll("^_+|_+$", "");
        if (result.length() > 60) result = result.substring(0, 60);
        return result;
    }

    private int countWords(String s) {
        int count = 0;
        boolean inWord = false;
        for (char c : s.toCharArray()) {
            if (Character.isLetter(c)) {
                if (!inWord) { inWord = true; count++; }
            } else {
                inWord = false;
            }
        }
        return count;
    }

    private boolean val(String s) {
        return s != null && !s.isEmpty();
    }

    private void log(String msg) {
        println(msg);
        report.println(msg);
    }

    private void printSummary() {
        log("");
        log("========================================");
        log("SUMMARY");
        log("========================================");
        log("Total string data items: " + totalStringsExamined);
        log("Log-format strings identified: " + totalLogStrings);
        log("Cross-references found: " + totalXrefs);
        log("Functions with log-string candidates: " + funcCandidates.size());
        log("Functions with source-file candidates: " + funcSourceFileCandidates.size());
        log("Functions RENAMED: " + renamedCount);
        log("Functions SKIPPED (already named / no match): " + skippedCount);
        log("========================================");
        log("Script completed.");
    }
}
