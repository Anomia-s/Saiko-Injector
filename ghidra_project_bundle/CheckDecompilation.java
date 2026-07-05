// Check decompilation completeness for all functions
//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;

public class CheckDecompilation extends GhidraScript {

    @Override
    public void run() throws Exception {
        File outFile = new File(getScriptArgs()[0]);
        PrintWriter pw = new PrintWriter(new FileWriter(outFile));
        
        Program p = currentProgram;
        FunctionManager fm = p.getFunctionManager();
        FunctionIterator funcs = fm.getFunctions(true);
        
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(p);
        
        int total = 0;
        int success = 0;
        int warnings = 0;
        int errors = 0;
        int noReturn = 0;
        int external = 0;
        int thunk = 0;
        
        PrintWriter errorList = new PrintWriter(new FileWriter(new File(getScriptArgs()[0]).getParent() + "\\decomp_errors.txt"));
        PrintWriter successList = new PrintWriter(new FileWriter(new File(getScriptArgs()[0]).getParent() + "\\decomp_success.txt"));
        
        while (funcs.hasNext() && !monitor.isCancelled()) {
            Function f = funcs.next();
            total++;
            
            if (f.isExternal() || f.isThunk()) {
                if (f.isThunk()) thunk++;
                if (f.isExternal()) external++;
                continue;
            }
            
            DecompileResults result = decomp.decompileFunction(f, 60, monitor);
            if (result == null || !result.decompileCompleted()) {
                errors++;
                String err = (result != null) ? result.getErrorMessage() : "null result";
                errorList.println("FAILED: " + f.getEntryPoint() + " " + f.getName() + " - " + err);
                continue;
            }
            
            String msg = result.getErrorMessage();
            
            if (msg != null && !msg.isEmpty()) {
                warnings++;
                errorList.println("WARNING: " + f.getEntryPoint() + " " + f.getName() + " - " + msg);
            } else {
                success++;
            }
            
            if (total % 2000 == 0) {
                println("Progress: " + total + " functions processed...");
            }
        }
        
        int userFuncs = total - external - thunk;
        double pct = userFuncs > 0 ? (100.0 * success / userFuncs) : 0;
        
        pw.println("=== DECOMPILATION COMPLETENESS ===");
        pw.println("Total functions in symbol table: " + total);
        pw.println("  Externals (DLL imports): " + external);
        pw.println("  Thunks: " + thunk);
        pw.println("  User functions to decompile: " + userFuncs);
        pw.println("");
        pw.println("Decompilation results:");
        pw.println("  SUCCESS:      " + success + " (" + String.format("%.1f", pct) + "%)");
        pw.println("  WARNINGS:     " + warnings);
        pw.println("  ERRORS:       " + errors);
        pw.println("  NO_RETURN:    " + noReturn);
        pw.println("");
        
        if (errors + warnings > 0) {
            double successRate = 100.0 * (success + noReturn) / userFuncs;
            pw.println("Effective decompilation rate (success + no_return): " + String.format("%.1f", successRate) + "%");
            pw.println("See decomp_errors.txt for problematic functions");
        }
        
        pw.close();
        errorList.close();
        successList.close();
        decomp.closeProgram();
        decomp.dispose();
        
        println("Total: " + total + ", Success: " + success + " (" + String.format("%.1f", pct) + "%), Errors: " + errors + ", Warnings: " + warnings);
    }
}
