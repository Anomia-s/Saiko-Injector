import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.data.DataTypeManager;
import java.io.*;
import java.util.*;

public class CountCppResultsScript extends GhidraScript {

    @Override
    public void run() throws Exception {
        String outputDir = getScriptArgs().length > 0 ? getScriptArgs()[0] :
            System.getProperty("user.dir");
        File outFile = new File(outputDir, "rtti_results.txt");
        BufferedWriter writer = new BufferedWriter(new FileWriter(outFile));

        try {
            writer.write("=============================================="); writer.newLine();
            writer.write("C++ RECOVERY & DEMANGLING RESULTS"); writer.newLine();
            writer.write("Program: " + currentProgram.getName()); writer.newLine();
            writer.write("=============================================="); writer.newLine();
            writer.newLine();

            countDemangledFunctions(writer);
            countClassesAndStructures(writer);
            countVTableStructures(writer);

            writer.newLine();
            writer.write("=============================================="); writer.newLine();
            writer.write("ANALYSIS COMPLETE"); writer.newLine();
            writer.write("=============================================="); writer.newLine();

            println("Results written to: " + outFile.getAbsolutePath());
        } finally {
            writer.close();
        }
    }

    private void countDemangledFunctions(BufferedWriter writer) throws Exception {
        writer.write("========================================"); writer.newLine();
        writer.write("FUNCTION DEMANGLING RESULTS"); writer.newLine();
        writer.write("========================================"); writer.newLine();

        FunctionManager funcMgr = currentProgram.getFunctionManager();
        FunctionIterator funcs = funcMgr.getFunctions(true);

        int total = 0;
        int internal = 0;
        int demangled = 0;
        int funPrefix = 0;
        int datPrefix = 0;
        int thunkPrefix = 0;
        int externalCount = 0;

        List<String> sampleDemangled = new ArrayList<>();
        List<String> sampleFun = new ArrayList<>();

        while (funcs.hasNext()) {
            Function f = funcs.next();
            total++;
            String name = f.getName();

            if (f.isExternal()) {
                externalCount++;
                continue;
            }
            if (f.isThunk()) {
                thunkPrefix++;
                continue;
            }

            internal++;
            if (name.startsWith("FUN_")) {
                funPrefix++;
                if (sampleFun.size() < 10) sampleFun.add(name);
            } else if (name.startsWith("DAT_")) {
                datPrefix++;
            } else {
                demangled++;
                if (sampleDemangled.size() < 20) sampleDemangled.add(name + " @ " + f.getEntryPoint());
            }
        }

        writer.write("Total functions in program: " + total); writer.newLine();
        writer.write("Internal (non-external) functions: " + internal); writer.newLine();
        writer.write("External functions: " + externalCount); writer.newLine();
        writer.write("Thunk functions: " + thunkPrefix); writer.newLine();
        writer.newLine();
        writer.write("FUN_ prefix (not demangled): " + funPrefix); writer.newLine();
        writer.write("DAT_ prefix (data labels): " + datPrefix); writer.newLine();
        writer.write("Demangled/meaningful names: " + demangled); writer.newLine();
        writer.write("  (demangled / internal) = " + (internal > 0 ? String.format("%.1f%%", 100.0 * demangled / internal) : "N/A")); writer.newLine();
        writer.newLine();

        if (!sampleDemangled.isEmpty()) {
            writer.write("Sample demangled functions:"); writer.newLine();
            for (String s : sampleDemangled) {
                writer.write("  " + s); writer.newLine();
            }
        }
        writer.newLine();

        if (!sampleFun.isEmpty()) {
            writer.write("Sample FUN_ functions (still unnamed):"); writer.newLine();
            for (String s : sampleFun) {
                writer.write("  " + s); writer.newLine();
            }
        }
    }

    private void countClassesAndStructures(BufferedWriter writer) throws Exception {
        writer.newLine();
        writer.write("========================================"); writer.newLine();
        writer.write("DATA TYPE / STRUCTURE RESULTS"); writer.newLine();
        writer.write("========================================"); writer.newLine();

        DataTypeManager dtm = currentProgram.getDataTypeManager();

        int totalStructs = 0;
        int totalUnions = 0;
        int totalEnums = 0;
        int totalTypedefs = 0;
        int classStructs = 0;
        int vftableStructs = 0;

        List<String> classStructNames = new ArrayList<>();
        List<String> vftableStructNames = new ArrayList<>();

        Iterator<DataType> allTypes = dtm.getAllDataTypes();
        while (allTypes.hasNext()) {
            DataType dt = allTypes.next();
            if (dt instanceof Structure) {
                Structure struct = (Structure) dt;
                totalStructs++;
                String name = struct.getName();
                String catPath = struct.getCategoryPath().getPath();

                if (catPath.contains("class") || catPath.contains("Class") ||
                    catPath.contains("vftable") || catPath.contains("vtable") ||
                    catPath.contains("RTTI") || catPath.contains("rtti") ||
                    name.matches(".*(vftable|vtable|Vtable|Vftable).*") ||
                    name.matches(".*(Class|class).*")) {
                    classStructs++;
                    if (classStructNames.size() < 30) classStructNames.add(name);
                }

                if (name.contains("vftable") || name.contains("vtable") ||
                    name.contains("Vftable") || name.contains("Vtable")) {
                    vftableStructs++;
                    if (vftableStructNames.size() < 30) vftableStructNames.add(name);
                }

                if (struct.getNumComponents() == 1) {
                    DataTypeComponent dtc = struct.getComponent(0);
                    DataType compDt = dtc.getDataType();
                    if (compDt instanceof Pointer) {
                        Pointer ptr = (Pointer) compDt;
                        DataType pointedTo = ptr.getDataType();
                        if (pointedTo != null && (pointedTo.getName().contains("vftable") ||
                            pointedTo.getName().contains("vtable"))) {
                            classStructs++;
                        }
                    }
                }
            } else if (dt instanceof TypeDef) {
                totalTypedefs++;
            } else if (dt instanceof Enum) {
                totalEnums++;
            } else if (dt instanceof Union) {
                totalUnions++;
            }
        }

        writer.write("Total structures: " + totalStructs); writer.newLine();
        writer.write("Total unions: " + totalUnions); writer.newLine();
        writer.write("Total enums: " + totalEnums); writer.newLine();
        writer.write("Total typedefs: " + totalTypedefs); writer.newLine();
        writer.newLine();
        writer.write("Class-related structures: " + classStructs); writer.newLine();
        writer.write("Vftable structures: " + vftableStructs); writer.newLine();
        writer.newLine();

        if (!classStructNames.isEmpty()) {
            writer.write("Class-related structure names:"); writer.newLine();
            for (String s : classStructNames) {
                writer.write("  " + s); writer.newLine();
            }
            writer.newLine();
        }

        if (!vftableStructNames.isEmpty()) {
            writer.write("Vftable structure names:"); writer.newLine();
            for (String s : vftableStructNames) {
                writer.write("  " + s); writer.newLine();
            }
        }

        Iterator<DataType> allTypes2 = dtm.getAllDataTypes();
        int classCategoryCount = 0;
        Set<String> classCategories = new TreeSet<>();
        while (allTypes2.hasNext()) {
            DataType dt = allTypes2.next();
            CategoryPath cp = dt.getCategoryPath();
            if (cp != null) {
                String path = cp.getPath();
                if (path.contains("class") || path.contains("Class") ||
                    path.contains("RTTI") || path.contains("vftable") ||
                    path.contains("Recovered")) {
                    classCategories.add(path);
                    classCategoryCount++;
                }
            }
        }

        writer.newLine();
        writer.write("Types in class/RTTI categories: " + classCategoryCount); writer.newLine();
        if (!classCategories.isEmpty()) {
            writer.write("Class categories found:"); writer.newLine();
            for (String cat : classCategories) {
                writer.write("  " + cat); writer.newLine();
            }
        }
    }

    private void countVTableStructures(BufferedWriter writer) throws Exception {
        writer.newLine();
        writer.write("========================================"); writer.newLine();
        writer.write("VFTABLE / CLASS HIERARCHY ANALYSIS"); writer.newLine();
        writer.write("========================================"); writer.newLine();

        DataTypeManager dtm = currentProgram.getDataTypeManager();
        int vtableCount = 0;

        Iterator<DataType> allTypes = dtm.getAllDataTypes();
        while (allTypes.hasNext()) {
            DataType dt = allTypes.next();
            if (dt instanceof Structure) {
                Structure struct = (Structure) dt;
                String desc = struct.getDescription();
                if (desc != null && (desc.toLowerCase().contains("vtable") ||
                    desc.toLowerCase().contains("vftable") ||
                    desc.toLowerCase().contains("virtual"))) {
                    vtableCount++;
                }
            }
        }

        writer.write("Structures with virtual/vtable descriptions: " + vtableCount); writer.newLine();
    }
}
