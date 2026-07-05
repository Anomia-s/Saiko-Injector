//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;

public class DumpSome extends GhidraScript {
    public void run() throws Exception {
        String outDir = getScriptArgs()[0];
        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        decomp.setOptions(new DecompileOptions());
        FunctionIterator fi = fm.getFunctions(true);
        int count = 0, tried = 0;
        PrintWriter index = new PrintWriter(new FileWriter(outDir + "/INDEX.txt"));
        
        while (fi.hasNext() && count < 10 && tried < 500) {
            Function f = fi.next(); tried++;
            if (f.isExternal() || f.isThunk()) continue;
            if (f.getBody().getNumAddresses() < 20) continue; // skip tiny funcs
            
            DecompileResults r = decomp.decompileFunction(f, 30, monitor);
            if (r == null || !r.decompileCompleted()) continue;
            if (r.getErrorMessage() != null && !r.getErrorMessage().isEmpty()) continue;
            
            String ccode = r.getDecompiledFunction().getC();
            if (ccode.length() < 200) continue; // skip trivial stubs
            
            count++;
            String fname = String.format("%02d_FUN_%x.c", count, f.getEntryPoint().getOffset());
            PrintWriter pw = new PrintWriter(new FileWriter(outDir + "/" + fname));
            pw.println("// " + f.getName() + " @ " + f.getEntryPoint());
            pw.println("// Body size: " + f.getBody().getNumAddresses() + " bytes");
            pw.println();
            pw.print(ccode);
            pw.close();
            
            index.println(fname + " | " + f.getEntryPoint() + " | " + f.getBody().getNumAddresses() + " bytes");
            println(count + ": " + f.getEntryPoint() + " (" + f.getBody().getNumAddresses() + " bytes)");
        }
        
        decomp.closeProgram(); decomp.dispose();
        index.close();
        println("Dumped " + count + " functions to " + outDir);
    }
}
