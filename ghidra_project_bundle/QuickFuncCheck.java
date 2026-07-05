//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;

public class QuickFuncCheck extends GhidraScript {
    public void run() throws Exception {
        File outFile = new File(getScriptArgs()[0]);
        PrintWriter pw = new PrintWriter(new FileWriter(outFile));
        Program p = currentProgram;
        FunctionManager fm = p.getFunctionManager();
        Listing listing = p.getListing();
        FunctionIterator funcs = fm.getFunctions(true);
        int total = 0, hasBody = 0, isExternal = 0, isThunk = 0;
        int minInstr = 0, gte10 = 0, gte50 = 0, gte100 = 0;
        while (funcs.hasNext() && !monitor.isCancelled()) {
            Function f = funcs.next(); total++;
            if (f.isExternal()) { isExternal++; continue; }
            if (f.isThunk()) { isThunk++; continue; }
            CodeUnitIterator cu = listing.getCodeUnits(f.getBody(), true);
            int instrs = 0;
            while (cu.hasNext()) { cu.next(); instrs++; if (instrs > 100) break; }
            if (instrs > 0) hasBody++;
            if (instrs >= 1) minInstr++;
            if (instrs >= 10) gte10++;
            if (instrs >= 50) gte50++;
            if (instrs >= 100) gte100++;
        }
        int userFuncs = total - isExternal - isThunk;
        pw.println("=== FUNCTION BODY ANALYSIS ===");
        pw.println("Total: " + total);
        pw.println("  External: " + isExternal);
        pw.println("  Thunks: " + isThunk);
        pw.println("  User functions: " + userFuncs);
        pw.println("");
        pw.println("User functions with:");
        pw.println("  1+ code units: " + hasBody + " (" + String.format("%.1f", 100.0*hasBody/userFuncs) + "%)");
        pw.println("  1+ instructions: " + minInstr + " (" + String.format("%.1f", 100.0*minInstr/userFuncs) + "%)");
        pw.println("  10+ code units: " + gte10 + " (" + String.format("%.1f", 100.0*gte10/userFuncs) + "%)");
        pw.println("  50+ code units: " + gte50 + " (" + String.format("%.1f", 100.0*gte50/userFuncs) + "%)");
        pw.println("  100+ code units: " + gte100 + " (" + String.format("%.1f", 100.0*gte100/userFuncs) + "%)");
        pw.close();
        println("Done. Total=" + total + " Ext=" + isExternal + " Thunk=" + isThunk + " User=" + userFuncs + " Bodies=" + hasBody);
    }
}
