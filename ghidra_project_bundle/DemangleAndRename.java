// Demangle C++ mangled names in MSVC RTTI and apply to vtable functions
//@category Analysis.RTTI
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.app.util.demangler.*;
import ghidra.util.task.TaskMonitor;
import ghidra.util.Msg;

import java.io.*;
import java.util.*;
import java.util.regex.*;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class DemangleAndRename extends GhidraScript {

    private static final Pattern RTTI_CLASS_PATTERN = Pattern.compile("^\\.\\?AV.+@");
    private static final Pattern MANGLED_FUNC_PATTERN = Pattern.compile("^\\?(?!\\?AV).+@");

    private int rttiFound = 0;
    private int demangledOk = 0;
    private int demangledFailed = 0;
    private int functionsRenamed = 0;
    private int functionsCommented = 0;
    private int vtablesTraced = 0;
    private int xrefChainsCompleted = 0;

    private final List<String> reportLines = new ArrayList<>();
    private final Set<Long> processedAddrs = new HashSet<>();
    private final Set<String> processedMangled = new HashSet<>();

    private int ptrSize;
    private boolean is64bit;
    private AddressFactory addrFactory;

    @Override
    public void run() throws Exception {
        String outputDir;
        String[] args = getScriptArgs();
        if (args.length > 0) {
            outputDir = args[0];
        } else {
            outputDir = System.getProperty("user.dir");
        }

        Program program = currentProgram;
        ptrSize = program.getDefaultPointerSize();
        is64bit = (ptrSize == 8);
        addrFactory = program.getAddressFactory();
        Memory memory = program.getMemory();

        println("==============================================");
        println("RTTI Demangle & Rename Script");
        println("Program: " + program.getName());
        println("Pointer size: " + ptrSize + " bytes (" + (is64bit ? "64-bit" : "32-bit") + ")");
        println("==============================================");

        reportLines.add("==============================================");
        reportLines.add("RTTI DEMANGLE & RENAME REPORT");
        reportLines.add("Program: " + program.getName());
        reportLines.add("Date: " + new java.util.Date());
        reportLines.add("Pointer size: " + ptrSize + " bytes");
        reportLines.add("==============================================");
        reportLines.add("");

        // Phase 1: Collect and demangle RTTI class strings
        Map<String, RttiEntry> rttiEntries = new LinkedHashMap<>();
        collectRttiStrings(program, memory, rttiEntries);

        // Phase 2: Trace RTTI strings to vtables and functions via memory scan
        traceRttiToVtables(program, rttiEntries);

        // Phase 3: Search for standalone mangled function names in data
        collectMangledFunctionNames(program);

        // Phase 4: Apply demangled names (labels and comments)
        applyNames(program, rttiEntries);

        // Write report
        File reportFile = new File(outputDir, "rtti_demangle_report.txt");
        reportLines.add("");
        reportLines.add("==============================================");
        reportLines.add("SUMMARY");
        reportLines.add("==============================================");
        reportLines.add("RTTI class strings found: " + rttiFound);
        reportLines.add("Successfully demangled:   " + demangledOk);
        reportLines.add("Failed to demangle:       " + demangledFailed);
        reportLines.add("Vtable chains traced:     " + xrefChainsCompleted);
        reportLines.add("Functions renamed:        " + functionsRenamed);
        reportLines.add("Functions commented:      " + functionsCommented);
        reportLines.add("==============================================");

        PrintWriter pw = new PrintWriter(new FileWriter(reportFile));
        for (String line : reportLines) {
            pw.println(line);
        }
        pw.close();

        println("");
        println("RESULTS:");
        println("  RTTI strings found:    " + rttiFound);
        println("  Successfully demangled:" + demangledOk);
        println("  Failed to demangle:    " + demangledFailed);
        println("  Functions renamed:     " + functionsRenamed);
        println("  Functions commented:   " + functionsCommented);
        println("Report saved to: " + reportFile.getAbsolutePath());
    }

    private void collectRttiStrings(Program program, Memory memory,
            Map<String, RttiEntry> entries) throws Exception {
        Listing listing = program.getListing();

        reportLines.add("");
        reportLines.add("--- PHASE 1: Collecting RTTI strings ---");
        reportLines.add("");

        println("Scanning defined string data for RTTI patterns...");
        DataIterator dataIter = listing.getDefinedData(true);
        int stringDataChecked = 0;

        while (dataIter.hasNext()) {
            Data data = dataIter.next();
            if (!data.isDefined()) continue;

            String value = getStringValue(program, data);
            if (value == null || value.isEmpty()) continue;
            stringDataChecked++;

            if (RTTI_CLASS_PATTERN.matcher(value).find()) {
                String key = value.replaceAll("[^\\x20-\\x7E]", "");
                if (key.length() < 5) continue;
                if (processedMangled.contains(key)) {
                    RttiEntry existing = entries.get(key);
                    if (existing != null) existing.addLocation(data.getAddress());
                    continue;
                }
                processedMangled.add(key);
                RttiEntry entry = new RttiEntry(key, data.getAddress());
                entries.put(key, entry);
                processedAddrs.add(data.getAddress().getOffset());
            }
        }
        println("  Checked " + stringDataChecked + " defined string data items");

        // Strategy 2: Scan raw bytes in .rdata section for ".?AV" pattern
        println("Scanning .rdata memory for raw RTTI strings...");
        MemoryBlock[] blocks = memory.getBlocks();
        for (MemoryBlock block : blocks) {
            if (monitor.isCancelled()) break;
            if (!block.isRead() || !block.isInitialized()) continue;
            String blockName = block.getName().toLowerCase();
            if (!blockName.contains("rdata") && !blockName.contains("data")) continue;

            long blockSize = block.getSize();
            long blockStartOffset = block.getStart().getOffset();
            int chunkSize = 256 * 1024;

            for (long offset = 0; offset < blockSize; offset += chunkSize) {
                if (monitor.isCancelled()) break;
                long readSize = Math.min(chunkSize, blockSize - offset);
                if (readSize <= 0) break;
                try {
                    byte[] chunk = new byte[(int) readSize];
                    int bytesRead = memory.getBytes(
                        addrFactory.getDefaultAddressSpace().getAddress(blockStartOffset + offset),
                        chunk);
                    if (bytesRead <= 0) break;
                    scanChunkForRtti(entries, chunk, blockStartOffset + offset);
                } catch (Exception e) {
                    // Skip
                }
            }
        }

        rttiFound = entries.size();
        reportLines.add("  Total unique RTTI class strings found: " + rttiFound);

        for (Map.Entry<String, RttiEntry> e : entries.entrySet()) {
            RttiEntry entry = e.getValue();
            reportLines.add("  " + truncate(entry.mangled, 60) + " @ " + entry.primaryLocation);
        }
        reportLines.add("");
    }

    private void scanChunkForRtti(Map<String, RttiEntry> entries, byte[] chunk,
            long baseOffset) {
        byte[] pattern = { '.', '?', 'A', 'V' };
        for (int i = 0; i < chunk.length - 4; i++) {
            if (chunk[i] == pattern[0] && chunk[i+1] == pattern[1] &&
                chunk[i+2] == pattern[2] && chunk[i+3] == pattern[3]) {
                StringBuilder sb = new StringBuilder();
                for (int j = i; j < chunk.length; j++) {
                    if (chunk[j] == 0) break;
                    if (chunk[j] >= 32 && chunk[j] < 127) {
                        sb.append((char) chunk[j]);
                    } else {
                        break;
                    }
                }
                String candidate = sb.toString();
                if (candidate.startsWith(".?AV") && candidate.contains("@") &&
                    candidate.length() > 5 && candidate.length() < 1024) {
                    long absOffset = baseOffset + i;
                    if (!processedAddrs.contains(absOffset)) {
                        processedAddrs.add(absOffset);
                        if (!processedMangled.contains(candidate)) {
                            processedMangled.add(candidate);
                            Address strAddr = addrFactory.getDefaultAddressSpace().getAddress(absOffset);
                            entries.put(candidate, new RttiEntry(candidate, strAddr));
                        }
                    }
                }
            }
        }
    }

    @SuppressWarnings("deprecation")
    private void traceRttiToVtables(Program program, Map<String, RttiEntry> entries) throws Exception {
        reportLines.add("");
        reportLines.add("--- PHASE 2: Demangling and tracing RTTI to vtables ---");
        reportLines.add("");

        ReferenceManager refMgr = program.getReferenceManager();
        FunctionManager funcMgr = program.getFunctionManager();
        Memory memory = program.getMemory();
        Listing listing = program.getListing();

        int nameFieldOffset = is64bit ? 12 : 8;
        int colPtdOffset = is64bit ? 12 : 12;

        // Build address-to-entry map
        Map<Long, RttiEntry> addrToEntry = new HashMap<>();
        for (RttiEntry entry : entries.values()) {
            for (Address addr : entry.locations) {
                addrToEntry.put(addr.getOffset(), entry);
            }
        }

        // Build pointer index: map target address -> list of locations that point to it
        println("Building pointer index from .rdata sections...");
        Map<Long, List<Long>> ptrIndex = new HashMap<>();
        buildPointerIndex(memory, ptrIndex);
        println("  Pointer index: " + ptrIndex.size() + " unique targets");

        int count = 0;
        int refsViaXref = 0;
        int refsViaPtrIndex = 0;
        int diagnosticCount = 0;

        for (Map.Entry<String, RttiEntry> mapEntry : entries.entrySet()) {
            if (monitor.isCancelled()) break;
            count++;
            String mangled = mapEntry.getKey();
            RttiEntry entry = mapEntry.getValue();

            // Try demangling
            DemangledObject demangled = tryDemangle(program, mangled, entry.primaryLocation);
            if (demangled == null && mangled.startsWith(".")) {
                demangled = tryDemangle(program, mangled.substring(1), entry.primaryLocation);
            }

            String displayName = null;
            if (demangled != null && demangled.demangledNameSuccessfully()) {
                String rawName = demangled.getDemangledName();
                if (rawName != null && rawName.startsWith("AV")) {
                    displayName = parseRttiName(mangled);
                    if (displayName == null) displayName = rawName;
                } else {
                    displayName = rawName;
                }
                demangledOk++;
                entry.demangledName = displayName;
                entry.originalDemangled = demangled.getOriginalDemangled();
                entry.demangledObject = demangled;
            } else {
                String manual = parseRttiName(mangled);
                if (manual != null) {
                    demangledOk++;
                    displayName = manual;
                    entry.demangledName = manual;
                } else {
                    demangledFailed++;
                    entry.demangledName = "(failed)";
                    reportLines.add("  FAILED: " + truncate(mangled, 80) + " @ " + entry.primaryLocation);
                    continue;
                }
            }

            reportLines.add(String.format("  [%d/%d] %s -> %s",
                count, entries.size(), truncate(mangled, 60),
                displayName != null ? truncate(displayName, 60) : "(null)"));

            // Trace to vtable: try xrefs first, then memory scan
            for (Address rttiAddr : entry.locations) {
                if (monitor.isCancelled()) break;

                boolean foundVtable = traceViaXrefs(program, entry, rttiAddr, refMgr,
                    nameFieldOffset, colPtdOffset, memory);

                if (foundVtable) {
                    refsViaXref++;
                } else {
                    boolean foundViaScan = traceViaPtrIndex(program, entry, rttiAddr,
                        ptrIndex, nameFieldOffset, colPtdOffset, memory, funcMgr);
                    if (foundViaScan) refsViaPtrIndex++;
                    else if (diagnosticCount < 5) {
                        println("  DEBUG: No chain for " + truncate(mangled, 50)
                            + " at " + rttiAddr);
                        long tdOff = rttiAddr.getOffset() - (is64bit ? 16 : 8);
                        boolean inPtr = ptrIndex.containsKey(tdOff);
                        println("    TD at " + Long.toHexString(tdOff)
                            + " in ptrIndex: " + inPtr);
                        boolean rttiAsTarget = ptrIndex.containsKey(rttiAddr.getOffset());
                        println("    RTTI string as target: " + rttiAsTarget);
                        // Check negative offsets
                        for (int testOff = 4; testOff <= 32; testOff += 4) {
                            long test = rttiAddr.getOffset() - testOff;
                            if (ptrIndex.containsKey(test)) {
                                println("    FOUND at offset -" + testOff
                                    + " -> " + Long.toHexString(test)
                                    + " entries: " + ptrIndex.get(test).size());
                            }
                        }
                        // Check positive offsets too
                        for (int testOff = 4; testOff <= 32; testOff += 4) {
                            long test = rttiAddr.getOffset() + testOff;
                            if (ptrIndex.containsKey(test)) {
                                println("    FOUND at offset +" + testOff
                                    + " -> " + Long.toHexString(test)
                                    + " entries: " + ptrIndex.get(test).size());
                            }
                        }
                        // Check what block this address is in
                        try {
                            MemoryBlock blk = memory.getBlock(rttiAddr);
                            if (blk != null) {
                                println("    In block: " + blk.getName()
                                    + " [" + Long.toHexString(blk.getStart().getOffset())
                                    + "-" + Long.toHexString(blk.getEnd().getOffset()) + "]");
                            }
                        } catch (Exception e) {}
                        diagnosticCount++;
                    }
                }
            }
        }

        reportLines.add("");
        reportLines.add("  XRef-based vtable traces: " + refsViaXref);
        reportLines.add("  Pointer-index vtable traces: " + refsViaPtrIndex);
    }

    /**
     * Build a map from target pointer value -> list of locations
     * (addresses in all readable blocks that contain the pointer).
     */
    private void buildPointerIndex(Memory memory, Map<Long, List<Long>> ptrIndex) {
        println("Building pointer index from ALL readable blocks...");
        MemoryBlock[] blocks = memory.getBlocks();
        for (MemoryBlock block : blocks) {
            if (monitor.isCancelled()) break;
            if (!block.isRead() || !block.isInitialized()) continue;
            // Scan ALL blocks, not just rdata/data

            long blockStart = block.getStart().getOffset();
            long blockSize = block.getSize();
            int chunkSize = 256 * 1024;

            for (long off = 0; off < blockSize; off += chunkSize) {
                if (monitor.isCancelled()) break;
                int readSize = (int) Math.min(chunkSize, blockSize - off);
                if (readSize <= 0) break;
                try {
                    byte[] data = new byte[readSize];
                    int bytesRead = memory.getBytes(
                        addrFactory.getDefaultAddressSpace().getAddress(blockStart + off), data);
                    if (bytesRead <= 0) break;

                    for (int i = 0; i + ptrSize <= bytesRead; i += ptrSize) {
                        long ptrVal = bytesToLongAt(data, i);
                        if (ptrVal == 0) continue;
                        List<Long> locs = ptrIndex.computeIfAbsent(ptrVal, k -> new ArrayList<>());
                        locs.add(blockStart + off + i);
                    }
                } catch (Exception e) {
                    // Skip
                }
            }
        }
    }

    private long bytesToLongAt(byte[] data, int offset) {
        long val = 0;
        if (ptrSize == 8 && offset + 8 <= data.length) {
            for (int j = 7; j >= 0; j--) {
                val = (val << 8) | (data[offset + j] & 0xFFL);
            }
        } else if (offset + 4 <= data.length) {
            for (int j = 3; j >= 0; j--) {
                val = (val << 8) | (data[offset + j] & 0xFFL);
            }
            if (ptrSize == 4 && (val & 0x80000000L) != 0) {
                val |= 0xFFFFFFFF00000000L;
            }
        }
        return val;
    }

    private boolean traceViaPtrIndex(Program program, RttiEntry entry, Address rttiAddr,
            Map<Long, List<Long>> ptrIndex, int nameFieldOffset, int colPtdOffset,
            Memory memory, FunctionManager funcMgr) {
        // RTTI strings are stored INLINE inside TypeDescriptor structs.
        // TypeDescriptor layout (x64):
        //   +0:  vfTable ptr (8 bytes)
        //   +8:  spare/hash  (8 bytes)  
        //   +16: name (null-terminated string)
        // So TypeDescriptor starts at: string_addr - 16
        int tdNameOffset = is64bit ? 16 : 8;
        long rttiStrAddr = rttiAddr.getOffset();
        long typeDescAddr = rttiStrAddr - tdNameOffset;

        if (typeDescAddr < 0) return false;

        // Step 1: Find pointers TO the TypeDescriptor -> COL pTypeDescriptor fields
        List<Long> colFieldLocations = ptrIndex.get(typeDescAddr);
        if (colFieldLocations == null || colFieldLocations.isEmpty()) return false;

        boolean anyFound = false;
        for (long colFieldLoc : colFieldLocations) {
            if (anyFound) break;

            // CompleteObjectLocator layout (x64):
            //   +0:  signature (4 bytes, 0x00000001)
            //   +4:  offset (4 bytes)
            //   +8:  cdOffset (4 bytes)
            //   +12: pTypeDescriptor (8 bytes) -> points to TypeDescriptor
            //   +20: pClassHierarchyDescriptor (8 bytes)
            // COL: pTypeDescriptor is at offset 16 on x64 (after 3x4byte ints + 4byte pad)
            long colAddr = colFieldLoc - (is64bit ? 16L : 12L);
            if (colAddr < 0) continue;

            // Step 2: Find pointers TO the COL -> vtable prefix slot
            // The COL pointer is placed at offset -ptrSize from the vtable:
            //   vtable[-1] = &COL for that class
            List<Long> vtPrefixLocations = ptrIndex.get(colAddr);
            if (vtPrefixLocations == null || vtPrefixLocations.isEmpty()) continue;

            for (long vtPrefixLoc : vtPrefixLocations) {
                if (anyFound) break;
                // vtable starts right after the COL pointer
                long vtStart = vtPrefixLoc + ptrSize;

                Address vtableAddr = addrFactory.getDefaultAddressSpace().getAddress(vtStart);
                entry.vtableAddresses.add(vtableAddr);
                extractVtableFunctions(program, entry, vtableAddr, null, funcMgr, memory, null);
                vtablesTraced++;
                xrefChainsCompleted++;
                anyFound = true;
            }
        }
        return anyFound;
    }

    private boolean traceViaXrefs(Program program, RttiEntry entry, Address rttiAddr,
            ReferenceManager refMgr, int nameFieldOffset, int colPtdOffset, Memory memory) {
        ReferenceIterator refs = refMgr.getReferencesTo(rttiAddr);
        boolean anyFound = false;
        while (refs.hasNext()) {
            Reference ref = refs.next();
            Address fromAddr = ref.getFromAddress();
            Address typeDescAddr = subtractAddress(fromAddr, nameFieldOffset);
            if (typeDescAddr == null) continue;

            ReferenceIterator colRefs = refMgr.getReferencesTo(typeDescAddr);
            while (colRefs.hasNext()) {
                Reference colRef = colRefs.next();
                Address colFieldAddr = colRef.getFromAddress();
                Address colAddr = subtractAddress(colFieldAddr, colPtdOffset);
                if (colAddr == null) continue;

                ReferenceIterator vtRefs = refMgr.getReferencesTo(colAddr);
                while (vtRefs.hasNext()) {
                    Reference vtRef = vtRefs.next();
                    Address vtPrefixAddr = vtRef.getFromAddress();
                    Address vtableAddr = addToAddress(vtPrefixAddr, ptrSize);
                    if (vtableAddr == null) continue;

                    entry.vtableAddresses.add(vtableAddr);
                    extractVtableFunctions(program, entry, vtableAddr, null, program.getFunctionManager(), memory, null);
                    vtablesTraced++;
                    xrefChainsCompleted++;
                    anyFound = true;
                }
            }
        }
        return anyFound;
    }

    private void extractVtableFunctions(Program program, RttiEntry entry, Address vtableAddr,
            ReferenceManager refMgr, FunctionManager funcMgr, Memory memory, Listing listing) {
        int maxVfuncs = 50;
        for (int i = 0; i < maxVfuncs; i++) {
            try {
                Address ptrAddr = addToAddress(vtableAddr, (long) i * ptrSize);
                if (ptrAddr == null) break;

                byte[] ptrBytes = new byte[ptrSize];
                int bytesRead = memory.getBytes(ptrAddr, ptrBytes);
                if (bytesRead != ptrSize) break;

                long targetOffset = bytesToLong(ptrBytes);
                if (targetOffset == 0) break;

                Address targetAddr = addrFactory.getDefaultAddressSpace().getAddress(targetOffset);

                Function vfunc = funcMgr.getFunctionAt(targetAddr);
                if (vfunc == null) {
                    vfunc = funcMgr.getFunctionContaining(targetAddr);
                }

                if (vfunc != null) {
                    entry.vtableFunctions.add(new VfuncEntry(i, vfunc, targetAddr));
                } else {
                    entry.vtableFunctions.add(new VfuncEntry(i, null, targetAddr));
                }
            } catch (Exception e) {
                break;
            }
        }
    }

    @SuppressWarnings("deprecation")
    private void collectMangledFunctionNames(Program program) throws Exception {
        reportLines.add("");
        reportLines.add("--- PHASE 3: Searching for standalone mangled function names ---");
        reportLines.add("");

        Listing listing = program.getListing();
        DataIterator dataIter = listing.getDefinedData(true);

        int funcMangledFound = 0;
        while (dataIter.hasNext()) {
            if (monitor.isCancelled()) break;
            Data data = dataIter.next();
            if (!data.isDefined()) continue;

            String value = getStringValue(program, data);
            if (value == null || value.isEmpty()) continue;

            if (MANGLED_FUNC_PATTERN.matcher(value).find()) {
                try {
                    List<DemangledObject> results = DemanglerUtil.demangle(
                        program, value, data.getAddress());
                    DemangledObject demangled = (results != null && !results.isEmpty()) ?
                        results.get(0) : null;
                    if (demangled != null && demangled.demangledNameSuccessfully()) {
                        funcMangledFound++;
                        String name = demangled.getDemangledName();
                        reportLines.add("  FUNC: " + truncate(value, 60) + " -> " + name + " @ " + data.getAddress());
                    }
                } catch (Exception e) {
                    // Skip
                }
            }
        }
        reportLines.add("  Function-level mangled names found: " + funcMangledFound);
    }

    @SuppressWarnings("deprecation")
    private void applyNames(Program program, Map<String, RttiEntry> entries) throws Exception {
        reportLines.add("");
        reportLines.add("--- PHASE 4: Applying demangled names ---");
        reportLines.add("");

        SymbolTable symTable = program.getSymbolTable();
        Listing listing = program.getListing();
        FunctionManager funcMgr = program.getFunctionManager();

        for (Map.Entry<String, RttiEntry> mapEntry : entries.entrySet()) {
            if (monitor.isCancelled()) break;
            RttiEntry entry = mapEntry.getValue();

            String className = entry.demangledName;
            if (className == null || className.isEmpty() || className.equals("(failed)")) continue;

            // 1. Plate comment on RTTI string data locations
            for (Address rttiAddr : entry.locations) {
                try {
                    String comment = "RTTI: " + className;
                    listing.setComment(rttiAddr, CodeUnit.PLATE_COMMENT, comment);
                    functionsCommented++;
                } catch (Exception e) {
                    // Skip
                }
            }

            // 2. Label vtables and comment vtable functions
            for (Address vtAddr : entry.vtableAddresses) {
                try {
                    String vtLabel = "vtable_" + sanitizeName(className);
                    vtLabel = makeUniqueLabel(symTable, vtAddr, vtLabel);
                    symTable.createLabel(vtAddr, vtLabel, SourceType.ANALYSIS);
                    functionsRenamed++;
                } catch (Exception e) {
                    try {
                        String altLabel = "vft_" + sanitizeName(className);
                        altLabel = makeUniqueLabel(symTable, vtAddr, altLabel);
                        symTable.createLabel(vtAddr, altLabel, SourceType.ANALYSIS);
                        functionsRenamed++;
                    } catch (Exception e2) {
                        // Skip
                    }
                }

                try {
                    listing.setComment(vtAddr, CodeUnit.PLATE_COMMENT,
                        "Virtual table for: " + className);
                    functionsCommented++;
                } catch (Exception e) {
                    // Skip
                }

                for (VfuncEntry vfe : entry.vtableFunctions) {
                    if (vfe.function != null) {
                        try {
                            String funcName = vfe.function.getName();
                            if (funcName.startsWith("FUN_") || funcName.startsWith("thunk_") ||
                                funcName.startsWith("LAB_") || funcName.startsWith("DAT_") ||
                                funcName.startsWith("SUB_")) {

                                String shortName = className;
                                int lastColon = shortName.lastIndexOf("::");
                                if (lastColon >= 0) {
                                    shortName = shortName.substring(lastColon + 2);
                                }

                                String newName = sanitizeName(shortName) + "_vfunc" + vfe.index;
                                newName = makeUniqueLabel(symTable,
                                    vfe.function.getEntryPoint(), newName);
                                symTable.createLabel(vfe.function.getEntryPoint(),
                                    newName, SourceType.ANALYSIS);
                                functionsRenamed++;
                            } else {
                                listing.setComment(vfe.function.getEntryPoint(),
                                    CodeUnit.PRE_COMMENT,
                                    "[" + className + "] vfunc" + vfe.index);
                                functionsCommented++;
                            }
                        } catch (Exception e) {
                            // Skip
                        }
                    } else if (vfe.targetAddress != null) {
                        try {
                            Function existing = funcMgr.getFunctionAt(vfe.targetAddress);
                            if (existing == null) {
                                existing = funcMgr.getFunctionContaining(vfe.targetAddress);
                            }
                            if (existing != null) {
                                listing.setComment(existing.getEntryPoint(),
                                    CodeUnit.PRE_COMMENT,
                                    "[" + className + "] vfunc" + vfe.index);
                                functionsCommented++;
                            }
                        } catch (Exception e) {
                            // Skip
                        }
                    }
                }
            }
        }
    }

    // ---- Demangling helpers ----

    @SuppressWarnings("deprecation")
    private DemangledObject tryDemangle(Program program, String mangled, Address addr) {
        try {
            List<DemangledObject> results = DemanglerUtil.demangle(program, mangled, addr);
            if (results != null && !results.isEmpty()) {
                return results.get(0);
            }
        } catch (Exception e) {
            // ignore
        }
        try {
            return DemanglerUtil.demangle(program, mangled);
        } catch (Exception e) {
            // ignore
        }
        return null;
    }

    // ---- RTTI Name Parser ----

    private String parseRttiName(String mangled) {
        if (mangled == null) return null;
        String work = mangled;
        if (work.startsWith(".")) work = work.substring(1);
        if (work.startsWith("?AV")) work = work.substring(3);
        if (work.isEmpty()) return null;

        if (work.startsWith("?$")) {
            String templateName = extractTemplateName(work);
            String nsRest = extractNamespace(work);
            if (templateName != null && nsRest != null) {
                return buildFullName(templateName, nsRest);
            }
            if (templateName != null) return templateName;
            // Fallback: try to parse even complex template names
        }

        int firstAt = work.indexOf('@');
        if (firstAt < 0) return work;

        String className = work.substring(0, firstAt);
        String nsPart = work.substring(firstAt);

        List<String> nsComponents = new ArrayList<>();
        int pos = 0;
        while (pos < nsPart.length()) {
            if (nsPart.charAt(pos) != '@') break;
            pos++;
            if (pos >= nsPart.length()) break;
            if (nsPart.charAt(pos) == '@') break;
            int nextAt = nsPart.indexOf('@', pos);
            if (nextAt < 0) {
                nsComponents.add(nsPart.substring(pos));
                break;
            }
            nsComponents.add(nsPart.substring(pos, nextAt));
            pos = nextAt;
        }

        StringBuilder result = new StringBuilder();
        for (int i = nsComponents.size() - 1; i >= 0; i--) {
            if (result.length() > 0) result.append("::");
            result.append(nsComponents.get(i));
        }
        if (result.length() > 0) result.append("::");
        result.append(className);
        return result.toString();
    }

    private String extractTemplateName(String work) {
        if (!work.startsWith("?$")) return null;
        String rest = work.substring(2);
        int firstAt = rest.indexOf('@');
        if (firstAt < 0) return rest;
        return rest.substring(0, firstAt);
    }

    private String extractNamespace(String work) {
        int lastDoubleAt = work.lastIndexOf("@@");
        if (lastDoubleAt < 0) return null;
        if (lastDoubleAt + 2 < work.length()) {
            // There's content after @@
            return null;
        }

        // Find the first @ that starts the namespace part
        int firstAt = work.indexOf('@');
        if (firstAt < 0) return null;

        // For templates, the first @ is inside the template - skip
        // For non-templates, firstAt separates class from namespace
        // Find the last @@ in the template part (before namespace)
        // Strategy: find last @@, then work backwards to find namespace start

        String nsPart = work.substring(firstAt, lastDoubleAt + 2);
        List<String> nsComponents = new ArrayList<>();
        int pos = 0;
        while (pos < nsPart.length()) {
            if (nsPart.charAt(pos) != '@') break;
            pos++;
            if (pos >= nsPart.length()) break;
            if (nsPart.charAt(pos) == '@') break;
            int nextAt = nsPart.indexOf('@', pos);
            if (nextAt < 0) {
                nsComponents.add(nsPart.substring(pos));
                break;
            }
            nsComponents.add(nsPart.substring(pos, nextAt));
            pos = nextAt;
        }

        StringBuilder result = new StringBuilder();
        for (int i = nsComponents.size() - 1; i >= 0; i--) {
            if (result.length() > 0) result.append("::");
            result.append(nsComponents.get(i));
        }
        return result.length() > 0 ? result.toString() : null;
    }

    private String buildFullName(String templateName, String namespacePart) {
        if (namespacePart != null && !namespacePart.isEmpty()) {
            return namespacePart + "::" + templateName;
        }
        return templateName;
    }

    // ---- Address arithmetic helpers ----

    private Address subtractAddress(Address addr, long amount) {
        long newOffset = addr.getOffset() - amount;
        if (newOffset < 0) return null;
        try {
            return addrFactory.getDefaultAddressSpace().getAddress(newOffset);
        } catch (Exception e) {
            return null;
        }
    }

    private Address addToAddress(Address addr, long amount) {
        long newOffset = addr.getOffset() + amount;
        try {
            return addrFactory.getDefaultAddressSpace().getAddress(newOffset);
        } catch (Exception e) {
            return null;
        }
    }

    private long bytesToLong(byte[] bytes) {
        long value = 0;
        if (is64bit && bytes.length >= 8) {
            for (int i = 7; i >= 0; i--) {
                value = (value << 8) | (bytes[i] & 0xFF);
            }
        } else if (bytes.length >= 4) {
            for (int i = 3; i >= 0; i--) {
                value = (value << 8) | (bytes[i] & 0xFF);
            }
            if (ptrSize == 4 && (value & 0x80000000L) != 0) {
                value |= 0xFFFFFFFF00000000L;
            }
        }
        return value;
    }

    // ---- String helpers ----

    @SuppressWarnings("deprecation")
    private String getStringValue(Program program, Data data) {
        try {
            if (data.hasStringValue()) {
                return data.getDefaultValueRepresentation();
            }
            int len = data.getLength();
            if (len > 0 && len < 4096) {
                byte[] bytes = new byte[len];
                Memory memory = program.getMemory();
                int read = memory.getBytes(data.getAddress(), bytes);
                if (read <= 0) return null;
                if (bytes[0] != '.' && bytes[0] != '?') return null;

                StringBuilder sb = new StringBuilder();
                for (byte b : bytes) {
                    if (b >= 32 && b < 127) {
                        sb.append((char) b);
                    } else if (b == 0) {
                        break;
                    } else {
                        return null;
                    }
                }
                String result = sb.toString();
                if (result.length() > 0) return result;
            }
        } catch (Exception e) {
            // Ignore
        }
        return null;
    }

    private String truncate(String s, int maxLen) {
        if (s == null) return "(null)";
        if (s.length() <= maxLen) return s;
        return s.substring(0, maxLen - 3) + "...";
    }

    private String sanitizeName(String name) {
        if (name == null) return "unnamed";
        return name.replaceAll("[^a-zA-Z0-9_:\\-]", "_");
    }

    private String makeUniqueLabel(SymbolTable symTable, Address addr, String baseName) {
        String name = sanitizeName(baseName);
        if (name.length() > 2000) name = name.substring(0, 2000);
        try {
            Symbol[] syms = symTable.getSymbols(addr);
            for (Symbol s : syms) {
                if (s.getName().equals(name) && !s.getSource().equals(SourceType.DEFAULT)) {
                    return name + "_" + addr.toString().replaceAll("[^a-zA-Z0-9]", "_");
                }
            }
        } catch (Exception e) {
            // Ignore
        }
        return name;
    }

    // ---- Data classes ----

    static class RttiEntry {
        String mangled;
        String demangledName;
        String originalDemangled;
        DemangledObject demangledObject;
        Address primaryLocation;
        List<Address> locations = new ArrayList<>();
        List<Address> vtableAddresses = new ArrayList<>();
        List<VfuncEntry> vtableFunctions = new ArrayList<>();

        RttiEntry(String mangled, Address loc) {
            this.mangled = mangled;
            this.primaryLocation = loc;
            this.locations.add(loc);
        }

        void addLocation(Address loc) {
            if (!locations.contains(loc)) {
                locations.add(loc);
            }
        }
    }

    static class VfuncEntry {
        int index;
        Function function;
        Address targetAddress;

        VfuncEntry(int index, Function function, Address target) {
            this.index = index;
            this.function = function;
            this.targetAddress = target;
        }
    }
}
