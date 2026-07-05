/**
 * Function: providersimplementationssignatureml_dsa_sigc
 * Address:  140d4dad0
 * Signature: undefined providersimplementationssignatureml_dsa_sigc(void)
 * Body size: 134 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong providersimplementationssignatureml_dsa_sigc(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_140b69250();
  if (iVar1 != 0) {
    lVar2 = FUN_140b8da80(0x260,"providers\\implementations\\signature\\ml_dsa_sig.c",0x4a);
    if (lVar2 != 0) {
      uVar3 = FUN_140b76070(param_1);
      *(undefined8 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0x140) = 1;
      *(undefined4 *)(lVar2 + 0x148) = param_2;
      return lVar2;
    }
  }
  return 0;
}

