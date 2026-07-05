/**
 * Function: out_of_memory
 * Address:  1400fc000
 * Signature: undefined out_of_memory(void)
 * Body size: 59 bytes
 */


char * out_of_memory(void)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = (int *)FUN_140137d10(0);
  pcVar2 = "";
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 2) {
      return "Out of memory";
    }
    if (*piVar1 == 1) {
      pcVar2 = *(char **)(piVar1 + 2);
    }
  }
  return pcVar2;
}

