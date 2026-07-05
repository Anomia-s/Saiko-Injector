import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.mem.*;
import ghidra.util.task.TaskMonitor;

import java.io.*;
import java.util.*;
import java.util.regex.*;

public class ExtractInfoScript extends GhidraScript {

    private BufferedWriter writer;
    private final String[] KEYWORDS = {
        "luduvo", "auth", "token", "login", "api", "http", "network",
        "session", "sign", "cdn", "download", "manifest", "update",
        "launch", "connect", "socket"
    };

    private final String[] AUTH_PATTERNS = {
        "auth", "token", "login", "password", "secret", "key", "session",
        "jwt", "bearer", "oauth", "credential", "signin", "signup", "apikey",
        "api_key", "authorization", "authenticate"
    };

    @Override
    public void run() throws Exception {
        String outputDir = getScriptArgs().length > 0 ? getScriptArgs()[0] :
            System.getProperty("user.dir");
        File outFile = new File(outputDir, "ghidra_extraction_results.txt");
        writer = new BufferedWriter(new FileWriter(outFile));

        try {
            writeLine("==============================================");
            writeLine("GHIDRA ANALYSIS RESULTS - " + currentProgram.getName());
            writeLine("==============================================");
            writeLine("");

            extractImports();
            extractKeywordFunctions();
            countTotalFunctions();
            extractInterestingStrings();

            writeLine("");
            writeLine("==============================================");
            writeLine("EXTRACTION COMPLETE");
            writeLine("==============================================");

            println("Results written to: " + outFile.getAbsolutePath());

        } finally {
            if (writer != null) {
                writer.close();
            }
        }
    }

    private void extractImports() throws Exception {
        writeLine("========================================");
        writeLine("IMPORTED DLLS AND FUNCTIONS");
        writeLine("========================================");

        ExternalManager extMgr = currentProgram.getExternalManager();
        String[] libNames = extMgr.getExternalLibraryNames();
        int totalImports = 0;

        for (String libName : libNames) {
            writeLine("");
            writeLine("--- Library: " + libName + " ---");

            ExternalLocationIterator extLocIter = extMgr.getExternalLocations(libName);
            Set<String> printed = new HashSet<>();

            int count = 0;
            while (extLocIter.hasNext()) {
                ExternalLocation loc = extLocIter.next();
                String label = loc.getLabel();
                if (label != null && !label.isEmpty() && !printed.contains(label)) {
                    printed.add(label);
                    writeLine("    " + label);
                    count++;
                }
            }
            writeLine("  [" + count + " functions from " + libName + "]");
            totalImports += count;
        }

        writeLine("");
        writeLine("TOTAL IMPORTED FUNCTIONS: " + totalImports);
        writeLine("TOTAL LIBRARIES: " + libNames.length);
    }

    private void extractKeywordFunctions() throws Exception {
        writeLine("");
        writeLine("========================================");
        writeLine("FUNCTIONS MATCHING KEYWORDS");
        writeLine("========================================");

        FunctionManager funcMgr = currentProgram.getFunctionManager();
        FunctionIterator funcs = funcMgr.getFunctions(true);

        Map<String, List<String>> keywordMatches = new LinkedHashMap<>();
        for (String kw : KEYWORDS) {
            keywordMatches.put(kw, new ArrayList<>());
        }

        while (funcs.hasNext()) {
            Function func = funcs.next();
            String name = func.getName().toLowerCase();

            for (String kw : KEYWORDS) {
                if (name.contains(kw)) {
                    keywordMatches.get(kw).add(
                        func.getName() + " @ 0x" + func.getEntryPoint().toString()
                    );
                }
            }
        }

        int totalMatches = 0;
        for (String kw : KEYWORDS) {
            List<String> matches = keywordMatches.get(kw);
            if (!matches.isEmpty()) {
                writeLine("");
                writeLine("--- Keyword: \"" + kw + "\" (" + matches.size() + " matches) ---");
                for (String m : matches) {
                    writeLine("    " + m);
                }
                totalMatches += matches.size();
            }
        }

        if (totalMatches == 0) {
            writeLine("No functions matched any of the keywords.");
        } else {
            writeLine("");
            writeLine("TOTAL KEYWORD MATCHING FUNCTIONS: " + totalMatches);
        }
    }

    private void countTotalFunctions() throws Exception {
        writeLine("");
        writeLine("========================================");
        writeLine("FUNCTION COUNTS");
        writeLine("========================================");

        FunctionManager funcMgr = currentProgram.getFunctionManager();
        FunctionIterator allFuncs = funcMgr.getFunctions(true);

        int totalFuncs = 0;
        int externalFuncs = 0;
        int userDefined = 0;

        while (allFuncs.hasNext()) {
            Function func = allFuncs.next();
            totalFuncs++;
            if (func.isExternal()) externalFuncs++;
            else if (func.getSymbol().getSource() == SourceType.USER_DEFINED) userDefined++;
        }

        writeLine("Total functions: " + totalFuncs);
        writeLine("External/thunk functions: " + externalFuncs);
        writeLine("User-defined functions: " + userDefined);
        writeLine("Non-external functions: " + (totalFuncs - externalFuncs));
    }

    private void extractInterestingStrings() throws Exception {
        writeLine("");
        writeLine("========================================");
        writeLine("INTERESTING STRINGS (URLs/Domains/Auth)");
        writeLine("========================================");

        Listing listing = currentProgram.getListing();
        List<String> urlStrings = new ArrayList<>();
        List<String> domainStrings = new ArrayList<>();
        List<String> authStrings = new ArrayList<>();
        List<String> ipStrings = new ArrayList<>();
        List<String> pathStrings = new ArrayList<>();

        int totalDefinedStrings = 0;

        DataIterator dataIter = listing.getDefinedData(true);
        while (dataIter.hasNext()) {
            Data data = dataIter.next();
            if (!data.isDefined()) continue;

            DataType dt = data.getDataType();
            if (!(dt instanceof StringDataType) &&
                !(dt instanceof UnicodeDataType) &&
                !dt.getName().toLowerCase().contains("string") &&
                !dt.getName().toLowerCase().contains("unicode")) {
                continue;
            }

            totalDefinedStrings++;
            String value = data.getDefaultValueRepresentation();
            if (value == null || value.isEmpty()) continue;

            String upper = value.toUpperCase();

            if (String.valueOf(value).length() > 1000) {
                value = value.substring(0, 1000) + "...";
            }

            boolean logged = false;

            if (upper.matches(".*https?://.*") || upper.matches(".*ftp://.*") ||
                upper.matches(".*wss?://.*")) {
                urlStrings.add(data.getAddress().toString() + ": " + value.trim());
                logged = true;
            }

            if (!logged) {
                if (value.matches(".*\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}\\.\\d{1,3}.*")) {
                    ipStrings.add(data.getAddress().toString() + ": " + value.trim());
                    logged = true;
                }
            }

            if (!logged) {
                if (value.matches(".*\\.[a-zA-Z]{2,}[^a-zA-Z0-9\\-\\.].*") ||
                    value.matches(".*\\.[a-zA-Z]{2,}$")) {
                    boolean hasDotDomain = value.matches(".*\\.[a-zA-Z]{2,}([/:].*|$)");
                    if (hasDotDomain) {
                        domainStrings.add(data.getAddress().toString() + ": " + value.trim());
                        logged = true;
                    }
                }
            }

            if (!logged) {
                boolean hasAuth = false;
                for (String pat : AUTH_PATTERNS) {
                    if (upper.contains(pat.toUpperCase())) {
                        hasAuth = true;
                        break;
                    }
                }
                if (hasAuth) {
                    authStrings.add(data.getAddress().toString() + ": " + value.trim());
                    logged = true;
                }
            }

            if (!logged) {
                if (value.contains("/") && (value.contains("api") || value.contains("v") &&
                    value.matches(".*/v\\d+/.*"))) {
                    pathStrings.add(data.getAddress().toString() + ": " + value.trim());
                }
            }
        }

        writeLine("");
        writeLine("Total defined string data items: " + totalDefinedStrings);

        writeLine("");
        writeLine("--- URL Strings (" + urlStrings.size() + " found) ---");
        for (String s : urlStrings) {
            writeLine("  " + s);
        }

        writeLine("");
        writeLine("--- Domain-like Strings (" + domainStrings.size() + " found) ---");
        for (String s : domainStrings) {
            writeLine("  " + s);
        }

        writeLine("");
        writeLine("--- Auth/Token/Login Strings (" + authStrings.size() + " found) ---");
        for (String s : authStrings) {
            writeLine("  " + s);
        }

        writeLine("");
        writeLine("--- IP Address Strings (" + ipStrings.size() + " found) ---");
        for (String s : ipStrings) {
            writeLine("  " + s);
        }

        writeLine("");
        writeLine("--- API Path-like Strings (" + pathStrings.size() + " found) ---");
        for (String s : pathStrings) {
            writeLine("  " + s);
        }
    }

    private void writeLine(String line) throws IOException {
        writer.write(line);
        writer.newLine();
    }
}
