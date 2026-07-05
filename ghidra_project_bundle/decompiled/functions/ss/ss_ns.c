/**
 * Function: ss_ns
 * Address:  140be56b0
 * Signature: undefined ss_ns(void)
 * Body size: 213 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ss_ns(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  FUN_140c078a0(param_1,"%*s%s:\n%*s",param_4,&DAT_1413a2ad6,param_2,param_4 + 2,&DAT_1413a2ad6,
                0x140be56c5);
  ppuVar4 = &PTR_s_Unused_141236f88;
  do {
    iVar2 = FUN_140c28860(param_3,*(undefined4 *)(ppuVar4 + -1));
    if (iVar2 != 0) {
      if (bVar1) {
        bVar1 = false;
      }
      else {
        FUN_140b73bf0(param_1,&DAT_1413a7198);
      }
      FUN_140b73bf0(param_1,*ppuVar4);
    }
    ppuVar4 = ppuVar4 + 3;
  } while (*ppuVar4 != (undefined *)0x0);
  pcVar3 = "<EMPTY>\n";
  if (!bVar1) {
    pcVar3 = "\n";
  }
  FUN_140b73bf0(param_1,pcVar3);
  return 1;
}

