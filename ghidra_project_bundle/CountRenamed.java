//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;
public class CountRenamed extends GhidraScript {
    public void run() throws Exception {
        File outFile = new File(getScriptArgs()[0]);
        PrintWriter pw = new PrintWriter(new FileWriter(outFile));
        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator fi = fm.getFunctions(true);
        int renamed = 0, funPrefix = 0;
        while (fi.hasNext() && !monitor.isCancelled()) {
            Function f = fi.next();
            String name = f.getName();
            if (name.startsWith("FUN_")) funPrefix++;
            else { renamed++; pw.println(f.getEntryPoint() + " | " + name); }
        }
        pw.println("\nRenamed: " + renamed + "  FUN_: " + funPrefix);
        pw.close();
        println("Renamed: " + renamed + "  FUN_: " + funPrefix);
    }
}
