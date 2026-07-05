/**
 * Function: cpu_doesnt_support_rdtsc_instruction
 * Address:  1401a9ee0
 * Signature: undefined cpu_doesnt_support_rdtsc_instruction(void)
 * Body size: 115 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001401a9f18) */
/* WARNING: Removing unreachable block (ram,0x0001401a9f04) */

void cpu_doesnt_support_rdtsc_instruction(void)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)FUN_1401a5b90("TRACY_NO_INVARIANT_CHECK");
  if ((pcVar4 != (char *)0x0) && (*pcVar4 == '1')) {
LAB_1401a9f25:
    uVar3 = rdtsc();
    DAT_141526c68 =
         uVar3 & 0xffffffff00000000 | CONCAT44((int)((ulonglong)pcVar4 >> 0x20),(int)uVar3);
    return;
  }
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 8) & 0x10) == 0) {
    tracy_profiler_initialization_failure_sn
              ("CPU doesn\'t support RDTSC instruction.",*(uint *)(lVar1 + 8),
               *(undefined4 *)(lVar1 + 4));
  }
  else {
    lVar1 = cpuid(0x80000007);
    pcVar4 = (char *)0x0;
    if ((*(uint *)(lVar1 + 8) & 0x100) != 0) goto LAB_1401a9f25;
  }
  tracy_profiler_initialization_failure_sn
            (
            "CPU doesn\'t support invariant TSC.\nDefine TRACY_NO_INVARIANT_CHECK=1 to ignore this error, *if you know what you are doing*.\nAlternatively you may rebuild the application with the TRACY_TIMER_QPC or TRACY_TIMER_FALLBACK define to use lower resolution timer."
            );
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

