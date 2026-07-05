//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.address.*;
import ghidra.app.decompiler.*;
import ghidra.util.task.TaskMonitor;
import java.io.*;
import java.util.*;

public class ExportImproved extends GhidraScript {

    @Override
    public void run() throws Exception {
        String baseDir = getScriptArgs().length > 0 ? getScriptArgs()[0] : "decompiled_improved";
        String functionsDir = baseDir + "/functions";
        String classesDir = baseDir + "/classes";
        String indexFile = baseDir + "/INDEX.md";

        new File(functionsDir).mkdirs();
        new File(classesDir).mkdirs();

        Program p = currentProgram;
        FunctionManager fm = p.getFunctionManager();
        Listing listing = p.getListing();

        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(p);
        decomp.setOptions(new DecompileOptions());

        Map<String, List<ExportEntry>> namespaceGroups = new LinkedHashMap<>();
        List<ExportEntry> noPrefix = new ArrayList<>();
        int totalFunctions = 0, totalExternal = 0, totalThunk = 0;
        int renamedCount = 0;
        int decompiledCount = 0;
        int skippedCount = 0;

        println("=== Phase 1: Scanning functions ===");

        FunctionIterator fi = fm.getFunctions(true);
        while (fi.hasNext() && !monitor.isCancelled()) {
            Function f = fi.next();
            totalFunctions++;

            if (f.isExternal()) { totalExternal++; continue; }
            if (f.isThunk()) { totalThunk++; continue; }

            String name = f.getName();

            // A function is "renamed" if its name does NOT start with "FUN_"
            if (name.startsWith("FUN_")) continue;
            renamedCount++;

            String prefix = extractNamespacePrefix(name);
            String safePrefix = sanitizeDirectoryName(prefix);

            ExportEntry entry = new ExportEntry();
            entry.name = name;
            entry.address = f.getEntryPoint().toString();
            entry.addressOffset = f.getEntryPoint().getOffset();
            entry.signature = f.getSignature().toString();
            entry.bodySize = f.getBody().getNumAddresses();
            entry.function = f;

            if (safePrefix.isEmpty()) {
                noPrefix.add(entry);
            } else {
                namespaceGroups.computeIfAbsent(safePrefix, k -> new ArrayList<>()).add(entry);
            }
        }

        println("Total functions: " + totalFunctions);
        println("External: " + totalExternal + ", Thunk: " + totalThunk);
        println("Renamed functions: " + renamedCount);

        // Phase 2: Decompile renamed functions
        println("=== Phase 2: Decompiling renamed functions ===");

        // Process namespaced groups
        for (Map.Entry<String, List<ExportEntry>> group : namespaceGroups.entrySet()) {
            String nsDir = functionsDir + "/" + group.getKey();
            new File(nsDir).mkdirs();

            for (ExportEntry entry : group.getValue()) {
                boolean ok = decompileAndSave(entry, nsDir, decomp);
                if (ok) decompiledCount++;
                else skippedCount++;
            }
        }

        // Process no-prefix functions
        for (ExportEntry entry : noPrefix) {
            boolean ok = decompileAndSave(entry, functionsDir, decomp);
            if (ok) decompiledCount++;
            else skippedCount++;
        }

        println("Decompiled: " + decompiledCount + ", Skipped: " + skippedCount);

        decomp.closeProgram();
        decomp.dispose();

        // Phase 3: Export data types (classes/structures)
        println("=== Phase 3: Exporting classes/structures ===");
        int classCount = exportDataTypes(p, classesDir);

        // Phase 4: Create INDEX.md
        println("=== Phase 4: Creating INDEX.md ===");
        createIndex(baseDir, functionsDir, classesDir, namespaceGroups, noPrefix,
                    totalFunctions, totalExternal, totalThunk, renamedCount,
                    decompiledCount, skippedCount, classCount);

        println("");
        println("========================================");
        println("EXPORT COMPLETE");
        println("Renamed functions found: " + renamedCount);
        println("Decompiled & exported: " + decompiledCount);
        println("Skipped (decomp failed): " + skippedCount);
        println("Classes/structures: " + classCount);
        println("Output: " + new File(baseDir).getAbsolutePath());
        println("========================================");
    }

    private boolean decompileAndSave(ExportEntry entry, String dir, DecompInterface decomp) {
        try {
            DecompileResults r = decomp.decompileFunction(entry.function, 120, monitor);
            if (r == null || !r.decompileCompleted()) return false;

            String ccode = r.getDecompiledFunction().getC();

            String safeName = entry.name.replaceAll("[^a-zA-Z0-9_\\-]", "_");
            if (safeName.length() > 100) safeName = safeName.substring(0, 100);

            String fname = sanitizeFileName(safeName) + ".c";
            File outFile = new File(dir, fname);

            PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(outFile)));
            pw.println("/**");
            pw.println(" * Function: " + entry.name);
            pw.println(" * Address:  " + entry.address);
            pw.println(" * Signature: " + entry.signature);
            pw.println(" * Body size: " + entry.bodySize + " bytes");
            pw.println(" */");
            pw.println();
            pw.print(ccode);
            pw.close();

            return true;
        } catch (Exception e) {
            println("  ERROR decompiling " + entry.name + "@" + entry.address + ": " + e.getMessage());
            return false;
        }
    }

    private String extractNamespacePrefix(String name) {
        // Extract namespace from names like ldv_editor_*, ldv_client_*, ldv_network_*, etc.
        // Patterns: ldv_X_..., CORE_..., APP_..., etc.
        if (name.contains("_")) {
            int firstUnderscore = name.indexOf('_');
            int secondUnderscore = name.indexOf('_', firstUnderscore + 1);
            if (secondUnderscore > 0) {
                return name.substring(0, secondUnderscore);
            }
            if (firstUnderscore > 0) {
                return name.substring(0, firstUnderscore);
            }
        }
        // Check for CamelCase prefixes (e.g., "AuthHandler_xxx", "CdnResolver_xxx")
        for (int i = 0; i < name.length(); i++) {
            if (i > 0 && name.charAt(i) == '_') {
                return name.substring(0, i).toLowerCase();
            }
        }
        return "";
    }

    private String sanitizeDirectoryName(String name) {
        return name.replaceAll("[^a-zA-Z0-9_\\-]", "_").toLowerCase();
    }

    private String sanitizeFileName(String name) {
        return name.replaceAll("[^a-zA-Z0-9_\\-]", "_");
    }

    private int exportDataTypes(Program p, String classesDir) throws Exception {
        File outFile = new File(classesDir, "structures.txt");
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(outFile)));

        DataTypeManager dtm = p.getDataTypeManager();
        int count = 0;

        Iterator<DataType> allTypes = dtm.getAllDataTypes();
        Set<String> exported = new HashSet<>();

        pw.println("# Recovered Data Types / Structures");
        pw.println("# Program: " + p.getName());
        pw.println("# Generated: " + new java.util.Date());
        pw.println();

        while (allTypes.hasNext() && !monitor.isCancelled()) {
            DataType dt = allTypes.next();
            if (dt instanceof BuiltInDataType) continue;
            if (dt instanceof Pointer) continue;
            if (dt instanceof ArrayDataType) continue;

            String name = dt.getName();
            if (name == null || name.isEmpty()) continue;
            if (dt.getSourceDataType() != null && !(dt.getSourceDataType() instanceof StructureDataType) && !(dt.getSourceDataType() instanceof UnionDataType)) continue;

            if (exported.contains(name)) continue;
            exported.add(name);

            count++;
            pw.println("## " + name);
            pw.println("  Category: " + dt.getCategoryPath());
            pw.println("  Length: " + dt.getLength() + " bytes");

            if (dt instanceof Structure) {
                Structure struct = (Structure) dt;
                pw.println("  Members:");
                for (DataTypeComponent comp : struct.getComponents()) {
                    pw.println("    +0x" + Integer.toHexString(comp.getOffset()) +
                               "  " + comp.getFieldName() +
                               "  " + comp.getDataType().getName() +
                               " (size=" + comp.getLength() + ")");
                }
            }
            pw.println();
        }

        pw.println("\n# Total: " + count + " data types");
        pw.close();

        // Also extract from listing
        Listing listing = p.getListing();
        DataIterator di = listing.getDefinedData(true);
        Set<String> structNames = new HashSet<>();
        while (di.hasNext() && !monitor.isCancelled()) {
            Data d = di.next();
            DataType dt = d.getDataType();
            if (dt instanceof Structure) {
                String sn = dt.getName();
                if (sn != null && !sn.isEmpty() && !exported.contains(sn)) {
                    structNames.add(sn);
                }
            }
        }

        for (String sn : structNames) {
            if (exported.contains(sn)) continue;
            exported.add(sn);

            DataType dt = dtm.getDataType(new CategoryPath("/"), sn);
            if (dt == null) {
                for (Category cat : dtm.getCategories()) {
                    dt = dtm.getDataType(cat.getCategoryPath(), sn);
                    if (dt != null) break;
                }
            }
            if (dt == null) continue;

            count++;
            try (PrintWriter spw = new PrintWriter(new BufferedWriter(new FileWriter(classesDir + "/" + sanitizeFileName(sn) + ".txt")))) {
                spw.println("# Structure: " + sn);
                spw.println("# Size: " + dt.getLength() + " bytes");
                if (dt instanceof Structure) {
                    Structure struct = (Structure) dt;
                    for (DataTypeComponent comp : struct.getComponents()) {
                        spw.println("+0x" + Integer.toHexString(comp.getOffset()) +
                                    "  " + comp.getFieldName() +
                                    "  " + comp.getDataType().getName() +
                                    " (size=" + comp.getLength() + ")");
                    }
                }
            }
        }

        return count;
    }

    private void createIndex(String baseDir, String functionsDir, String classesDir,
                             Map<String, List<ExportEntry>> namespaceGroups,
                             List<ExportEntry> noPrefix,
                             int totalFunctions, int totalExternal, int totalThunk,
                             int renamedCount, int decompiledCount, int skippedCount,
                             int classCount) throws Exception {
        File indexFile = new File(baseDir, "INDEX.md");
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter(indexFile)));

        pw.println("# Decompilation Export - Improved Functions");
        pw.println();
        pw.println("## Summary");
        pw.println();
        pw.println("| Metric | Count |");
        pw.println("|--------|-------|");
        pw.println("| Total functions in binary | " + totalFunctions + " |");
        pw.println("| External (imported) | " + totalExternal + " |");
        pw.println("| Thunk functions | " + totalThunk + " |");
        pw.println("| **Renamed functions** | **" + renamedCount + "** |");
        pw.println("| Successfully decompiled | " + decompiledCount + " |");
        pw.println("| Decompilation failed | " + skippedCount + " |");
        pw.println("| Classes/structures | " + classCount + " |");
        pw.println();
        pw.println("## Directory Structure");
        pw.println();
        pw.println("```");
        pw.println("decompiled_improved/");
        pw.println("├── INDEX.md                     # This file");
        pw.println("├── classes/                     # Recovered data types");
        pw.println("│   └── structures.txt           # All structures listing");
        pw.println("└── functions/                   # Decompiled C code");
        for (String ns : namespaceGroups.keySet()) {
            pw.println("    ├── " + ns + "/              # " + namespaceGroups.get(ns).size() + " functions");
        }
        if (!noPrefix.isEmpty()) {
            pw.println("    └── (root)                   # " + noPrefix.size() + " functions without namespace prefix");
        }
        pw.println("```");
        pw.println();

        pw.println("## Functions by Namespace");
        pw.println();

        for (Map.Entry<String, List<ExportEntry>> group : namespaceGroups.entrySet()) {
            String ns = group.getKey();
            List<ExportEntry> entries = group.getValue();
            pw.println("### " + ns + " (" + entries.size() + " functions)");
            pw.println();
            pw.println("| # | Address | Function Name | Body Size |");
            pw.println("|---|---------|---------------|-----------|");
            int idx = 1;
            for (ExportEntry e : entries) {
                pw.println("| " + idx + " | `" + e.address + "` | `" + e.name + "` | " + e.bodySize + " |");
                idx++;
            }
            pw.println();
        }

        if (!noPrefix.isEmpty()) {
            pw.println("### No Namespace (" + noPrefix.size() + " functions)");
            pw.println();
            pw.println("| # | Address | Function Name | Body Size |");
            pw.println("|---|---------|---------------|-----------|");
            int idx = 1;
            for (ExportEntry e : noPrefix) {
                pw.println("| " + idx + " | `" + e.address + "` | `" + e.name + "` | " + e.bodySize + " |");
                idx++;
            }
            pw.println();
        }

        pw.close();
        println("INDEX.md created at: " + indexFile.getAbsolutePath());
    }

    static class ExportEntry {
        String name;
        String address;
        long addressOffset;
        String signature;
        long bodySize;
        Function function;
    }
}
