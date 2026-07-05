/**
 * Function: providersimplementationssignatureslh_dsa_sigc
 * Address:  140d4ec80
 * Signature: undefined providersimplementationssignatureslh_dsa_sigc(void)
 * Body size: 205 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong providersimplementationssignatureslh_dsa_sigc(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_140b8da80(0x268,"providers\\implementations\\signature\\slh_dsa_sig.c",0x4b);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_140b76070(param_1);
  *(undefined8 *)(lVar2 + 0x148) = uVar3;
  if (param_2 != 0) {
    lVar4 = FUN_140b8c830(param_2,"providers\\implementations\\signature\\slh_dsa_sig.c",0x50);
    *(longlong *)(lVar2 + 0x150) = lVar4;
    if (lVar4 == 0) {
      providersimplementationssignatureslh_dsa_sigc(lVar2);
      return 0;
    }
  }
  *(char **)(lVar2 + 0x158) = "SLH-DSA-SHAKE-256f";
  *(undefined4 *)(lVar2 + 0x140) = 1;
  return lVar2;
}

