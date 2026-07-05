//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;

public class ListFuncs extends GhidraScript {
    public void run() throws Exception {
        File outFile = new File(getScriptArgs()[0]);
        PrintWriter pw = new PrintWriter(new FileWriter(outFile));
        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator fi = fm.getFunctions(true);
        int count = 0;
        // Skip to skip thunks and find real functions
        while (fi.hasNext() && count < 200) {
            Function f = fi.next();
            if (f.isExternal() || f.isThunk()) continue;
            String name = f.getName();
            // Only print non-default names or interesting names
            if (!name.startsWith("FUN_") || count < 20) {
                pw.println(f.getEntryPoint() + " | " + name + " | " + f.getSignature());
            }
            count++;
        }
        pw.println("\nTotal listed: " + count);
        pw.close();
        println("Listed " + count + " functions");
    }
}
