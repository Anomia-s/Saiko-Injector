//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;

public class DecompSample2 extends GhidraScript {
    public void run() throws Exception {
        File outFile = new File(getScriptArgs()[0]);
        PrintWriter pw = new PrintWriter(new FileWriter(outFile));
        Program p = currentProgram;
        FunctionManager fm = p.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(p);
        decomp.setOptions(new DecompileOptions());
        int checked = 0, ok = 0, fail = 0, warn = 0;
        FunctionIterator funcs = fm.getFunctions(true);
        while (funcs.hasNext() && checked < 3000 && !monitor.isCancelled()) {
            Function f = funcs.next();
            if (f.isExternal() || f.isThunk()) continue;
            DecompileResults r = decomp.decompileFunction(f, 5, monitor);
            checked++;
            if (r != null && r.decompileCompleted()) {
                String err = r.getErrorMessage();
                if (err != null && !err.isEmpty()) { warn++; if (warn <= 5) pw.println("WARN " + f.getName() + ": " + err); }
                else { ok++; }
            } else {
                fail++;
                String err = (r != null) ? r.getErrorMessage() : "null";
                if (fail <= 10) pw.println("FAIL " + f.getEntryPoint() + " " + f.getName() + ": " + err);
            }
            if (checked % 1000 == 0) pw.println("  Progress: " + checked + " OK=" + ok + " FAIL=" + fail + " WARN=" + warn);
        }
        pw.println("\n=== 3000 FUNCTION SAMPLE ===");
        pw.println("Checked: " + checked + "  OK: " + ok + " (" + String.format("%.1f", 100.0*ok/checked) + "%)");
        pw.println("WARN: " + warn + "  FAIL: " + fail);
        pw.println("Projected for 39,873 functions: " + String.format("%.0f", okRate) + " successful");
        pw.close();
        decomp.closeProgram(); decomp.dispose();
        println("Done: " + checked + " checked, OK=" + ok + " WARN=" + warn + " FAIL=" + fail);
    }
    private double okRate;
}
