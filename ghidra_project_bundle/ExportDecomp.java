//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

public class ExportDecomp extends GhidraScript {
    static final Set<String> KEYWORDS = new HashSet<>(Arrays.asList(
        "session", "auth", "login", "token", "handshake", "cdn",
        "publish", "mfa", "connect", "GameSession", "CdnResolver",
        "PollNetwork", "ApplyLocalInput", "DecompressAndApply",
        "LoginDialog", "PublishDialog", "client_handshake", "editor_project"
    ));

    @Override
    public void run() throws Exception {
        String outDir = getScriptArgs()[0];
        new File(outDir).mkdirs();

        Program p = currentProgram;
        FunctionManager fm = p.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(p);
        decomp.setOptions(new DecompileOptions());

        int exported = 0;
        PrintWriter index = new PrintWriter(new FileWriter(outDir + "/INDEX.txt"));

        // Pass 1: by keyword match on function name
        FunctionIterator funcs = fm.getFunctions(true);
        while (funcs.hasNext() && exported < 200) {
            Function f = funcs.next();
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
            String safeName = f.getName().replaceAll("[^a-zA-Z0-9_]", "_");
            String fname = String.format("%04d_%s.c", exported, safeName);
            if (fname.length() > 120) fname = String.format("%04d_%s.c", exported, safeName.substring(0, 80));
            
            PrintWriter pw = new PrintWriter(new FileWriter(outDir + "/" + fname));
            pw.println("// Function: " + f.getName());
            pw.println("// Address:  " + f.getEntryPoint());
            pw.println("// Signature: " + f.getSignature());
            pw.println();
            pw.print(ccode);
            pw.close();

            index.println(fname + " | " + f.getEntryPoint() + " | " + f.getName());
            exported++;

            if (exported % 50 == 0) {
                println("Exported " + exported + " functions...");
            }
        }

        decomp.closeProgram();
        decomp.dispose();
        index.close();
        println("Exported " + exported + " functions to " + outDir);
    }
}
