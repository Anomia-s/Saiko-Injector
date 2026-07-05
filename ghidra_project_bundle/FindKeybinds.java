//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;

public class FindKeybinds extends GhidraScript {
    static final String[] KEYWORDS = {
        "QAction", "QShortcut", "setShortcut", "QKeySequence",
        "addAction", "Ctrl+", "Shift+", "Alt+",
        "F5", "sdl_window", "sdl_event", "keyboard",
        "toolbar", "menu_bar", "add_script", "delete_selection"
    };
    public void run() throws Exception {
        String outDir = getScriptArgs()[0];
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing listing = currentProgram.getListing();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        decomp.setOptions(new DecompileOptions());
        int count = 0;
        FunctionIterator fi = fm.getFunctions(true);
        while (fi.hasNext() && count < 50) {
            Function f = fi.next();
            if (f.isExternal() || f.isThunk()) continue;
            String name = f.getName().toLowerCase();
            boolean match = false;
            for (String kw : KEYWORDS) {
                if (name.contains(kw.toLowerCase())) { match = true; break; }
            }
            if (!match) continue;
            DecompileResults r = decomp.decompileFunction(f, 60, monitor);
            if (r == null || !r.decompileCompleted()) continue;
            String ccode = r.getDecompiledFunction().getC();
            String fname = String.format("%02d_%s.c", count, f.getName().replaceAll("[^a-zA-Z0-9_]", "_"));
            PrintWriter pw = new PrintWriter(new FileWriter(outDir + "/" + fname));
            pw.println("// " + f.getName() + " @ " + f.getEntryPoint());
            pw.println(ccode);
            pw.close();
            count++;
        }
        decomp.closeProgram(); decomp.dispose();
        println("Exported " + count + " keybinding-related functions to " + outDir);
    }
}
