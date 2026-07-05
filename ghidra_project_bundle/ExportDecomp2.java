//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

public class ExportDecomp2 extends GhidraScript {
    // Interesting string addresses we found in the binary
    static final String[] TARGET_STRINGS = {
        "luduvo://", "auth/token", "auth/login", "mfa_token", "session",
        "cdn_resolver", "client_handshake", "session_net", "publish_client",
        "luduvo-session-v1", "luduvo-auth-v1", "GameSession",
        "LoginDialog", "CdnResolver", "DecompressAndApply", "PollNetwork",
        "EC", "ECDH", "server_pubkey_hex", "MITM", "encryption",
        "backend_url", "place_id"
    };

    @Override
    public void run() throws Exception {
        String outDir = getScriptArgs()[0];
        Program p = currentProgram;
        Listing listing = p.getListing();
        FunctionManager fm = p.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(p);
        decomp.setOptions(new DecompileOptions());

        Set<Long> exportedAddrs = new HashSet<>();
        PrintWriter index = new PrintWriter(new FileWriter(outDir + "/INDEX.txt"));
        int count = 0;

        // Find data items containing target strings, then decompile their containing function
        CodeUnitIterator cu = listing.getCodeUnits(true);
        while (cu.hasNext() && count < 300) {
            CodeUnit c = cu.next();
            if (!(c instanceof Data)) continue;
            Data d = (Data) c;
            if (!d.hasStringValue()) continue;
            String s = d.getDefaultValueRepresentation();
            if (s == null) continue;
            String lower = s.toLowerCase();
            
            boolean match = false;
            for (String kw : TARGET_STRINGS) {
                if (lower.contains(kw.toLowerCase())) { match = true; break; }
            }
            if (!match) continue;

            Function owner = fm.getFunctionContaining(d.getAddress());
            if (owner == null) continue;
            long addr = owner.getEntryPoint().getOffset();
            if (exportedAddrs.contains(addr)) continue;
            exportedAddrs.add(addr);

            DecompileResults r = decomp.decompileFunction(owner, 60, monitor);
            if (r == null || !r.decompileCompleted()) continue;

            String ccode = r.getDecompiledFunction().getC();
            String safeName = owner.getName().replaceAll("[^a-zA-Z0-9_\\-]", "_");
            if (safeName.length() > 80) safeName = safeName.substring(0, 80);
            String fname = String.format("%03d_%s.c", count, safeName);
            
            PrintWriter pw = new PrintWriter(new FileWriter(outDir + "/" + fname));
            pw.println("// Function: " + owner.getName());
            pw.println("// Address:  " + owner.getEntryPoint());
            pw.println("// Signature: " + owner.getSignature());
            pw.println("// Referenced string: \"" + s.replace("\n","\\n") + "\"");
            pw.println();
            pw.print(ccode);
            pw.close();

            index.println(fname + " | " + owner.getEntryPoint() + " | " + owner.getName() + " | " + s.substring(0, Math.min(80, s.length())));
            count++;
        }

        decomp.closeProgram(); decomp.dispose();
        index.close();
        println("Exported " + count + " functions to " + outDir);
    }
}
