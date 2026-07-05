/**
 * Function: empty_pattern_not_allowed
 * Address:  14046bd30
 * Signature: undefined empty_pattern_not_allowed(void)
 * Body size: 257 bytes
 */


char * empty_pattern_not_allowed(byte *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  byte *pbVar4;
  byte bVar5;
  
  iVar1 = FUN_1400fd200(param_1,"*");
  if (iVar1 == 0) {
    return (char *)0x0;
  }
  bVar5 = *param_1;
  if (bVar5 != 0) {
    if ((((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
        (1 < bVar5 - 0x2d)) && (bVar5 != 0x5f)) {
      if (bVar5 == 0x3b) {
        return "Empty pattern not allowed";
      }
      return "Invalid character in pattern (Only [a-zA-Z0-9_.-] allowed, or a single *)";
    }
    bVar5 = param_1[1];
    if (bVar5 != 0) {
      pbVar4 = param_1 + 2;
      do {
        if (((9 < (byte)(bVar5 - 0x30)) && (0x19 < (byte)((bVar5 & 0xdf) + 0xbf))) &&
           ((1 < bVar5 - 0x2d && (bVar5 != 0x5f)))) {
          if (bVar5 != 0x3b) {
            return "Invalid character in pattern (Only [a-zA-Z0-9_.-] allowed, or a single *)";
          }
          if (pbVar4[-2] == 0x3b) {
            return "Empty pattern not allowed";
          }
        }
        bVar5 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar5 != 0);
    }
  }
  lVar2 = FUN_1400fc570(param_1);
  pcVar3 = (char *)0x0;
  if (param_1[lVar2 + -1] == 0x3b) {
    pcVar3 = "Empty pattern not allowed";
  }
  return pcVar3;
}

