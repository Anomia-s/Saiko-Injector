// Export functions that reference our interesting data strings via cross-reference
//@category Analysis
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import java.io.*;

public class ExportRefs extends GhidraScript {
    static final String[][] HUNTS = {
        {"luduvo://", "URI handler"},
        {"auth/token", "token auth"},
        {"session", "session"},
        {"client_handshake", "handshake"},
        {"cdn_resolver", "cdn"},
        {"publish_client", "publish"},
        {"MITM", "mitm detection"},
        {"ECD", "crypto"},
        {"LoginDialog", "login ui"},
    };

    public void run() throws Exception {
        String outDir = getScriptArgs()[0];
        Program p = currentProgram;
        Listing listing = p.getListing();
        ReferenceManager refMgr = p.getReferenceManager();
        FunctionManager fm = p.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(p);
        decomp.setOptions(new DecompileOptions());

        PrintWriter index = new PrintWriter(new FileWriter(outDir + "/INDEX.txt"));
        int count = 0;

        // Strategy: find the data items containing our target strings,
        // then follow cross-references to their containing functions
        for (String[] hunt : HUNTS) {
            String needle = hunt[0];
            String label = hunt[1];
            CodeUnitIterator cu = listing.getCodeUnits(true);
            while (cu.hasNext() && count < 200) {
                CodeUnit c = cu.next();
                if (!(c instanceof Data)) continue;
                Data d = (Data) c;
                if (!d.hasStringValue()) continue;
                String s = d.getDefaultValueRepresentation();
                if (s == null || !s.toLowerCase().contains(needle.toLowerCase())) continue;
                
                // Found a matching data item. Now find functions referencing it.
                ReferenceIterator refs = refMgr.getReferencesTo(d.getAddress());
                while (refs.hasNext() && count < 200) {
                    Reference ref = refs.next();
                    Address from = ref.getFromAddress();
                    Function owner = fm.getFunctionContaining(from);
                    if (owner == null || owner.isExternal() || owner.isThunk()) continue;
                    
                    DecompileResults r = decomp.decompileFunction(owner, 60, monitor);
                    if (r == null || !r.decompileCompleted()) continue;
                    
                    count++;
                    String ccode = r.getDecompiledFunction().getC();
                    String fname = String.format("%03d_%s_%x.c", count, label, owner.getEntryPoint().getOffset());
                    
                    PrintWriter pw = new PrintWriter(new FileWriter(outDir + "/" + fname));
                    pw.println("// Category: " + label);
                    pw.println("// Address:  " + owner.getEntryPoint());
                    pw.println("// Referenced string: \"" + s.replace("\n","\\n") + "\" at " + d.getAddress());
                    pw.println();
                    pw.print(ccode);
                    pw.close();
                    
                    index.println(fname + " | " + owner.getEntryPoint() + " | " + label + " | " + s.substring(0, Math.min(80, s.length())));
                    if (count % 20 == 0) println("Exported " + count + "...");
                }
            }
        }

        decomp.closeProgram(); decomp.dispose(); index.close();
        println("Exported " + count + " functions to " + outDir);
    }
}
