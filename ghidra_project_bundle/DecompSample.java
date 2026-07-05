//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;

public class DecompSample extends GhidraScript {
    public void run() throws Exception {
        File outFile = new File(getScriptArgs()[0]);
        PrintWriter pw = new PrintWriter(new FileWriter(outFile));
        Program p = currentProgram;
        FunctionManager fm = p.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(p);
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        
        int checked = 0, ok = 0, failed = 0, warn = 0;
        FunctionIterator funcs = fm.getFunctions(true);
        
        while (funcs.hasNext() && checked < 500 && !monitor.isCancelled()) {
            Function f = funcs.next();
            if (f.isExternal() || f.isThunk()) continue;
            
            DecompileResults r = decomp.decompileFunction(f, 30, monitor);
            checked++;
            
            if (r != null && r.decompileCompleted()) {
                String err = r.getErrorMessage();
                if (err != null && !err.isEmpty()) {
                    warn++;
                    if (warn <= 10) pw.println("WARN[" + f.getEntryPoint() + "] " + f.getName() + ": " + err);
                } else {
                    ok++;
                }
            } else {
                failed++;
                String err = (r != null) ? r.getErrorMessage() : "null";
                if (failed <= 10) pw.println("FAIL[" + f.getEntryPoint() + "] " + f.getName() + ": " + err);
            }
            
            if (checked % 100 == 0) {
                pw.println("  ... " + checked + " checked, OK=" + ok + " WARN=" + warn + " FAIL=" + failed);
            }
        }
        
        double okRate = 100.0 * ok / checked;
        pw.println("\n=== DECOMPILATION QUALITY (sample of " + checked + " functions) ===");
        pw.println("OK:     " + ok + " (" + String.format("%.1f", okRate) + "%)");
        pw.println("WARN:   " + warn + " (" + String.format("%.1f", 100.0*warn/checked) + "%)");
        pw.println("FAIL:   " + failed + " (" + String.format("%.1f", 100.0*failed/checked) + "%)");
        pw.println("ESTIMATED for 39,873 functions:");
        pw.println("  ~" + (int)(okRate * 39873 / 100) + " functions decompile successfully");
        pw.println("  ~" + (int)((100-okRate) * 39873 / 100) + " functions may have issues");
        pw.close();
        decomp.closeProgram();
        decomp.dispose();
        println("Sample done. " + checked + " checked. OK=" + ok + " WARN=" + warn + " FAIL=" + failed);
    }
}
