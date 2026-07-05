/**
 * Function: providersimplementationssignaturesm2_sigc
 * Address:  140d4d2c0
 * Signature: undefined providersimplementationssignaturesm2_sigc(void)
 * Body size: 192 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 providersimplementationssignaturesm2_sigc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x140d4d2d0;
  uVar3 = 1;
  if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
    lVar2 = FUN_140b8da80(*(undefined8 *)(param_1 + 0x168),
                          "providers\\implementations\\signature\\sm2_sig.c",0x10b);
    if (((lVar2 == 0) ||
        (iVar1 = cryptosm2sm2_signc(lVar2,*(undefined8 *)(param_1 + 0x158),
                                    *(undefined8 *)(param_1 + 0x170),
                                    *(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x10)
                                    ,uVar4), iVar1 == 0)) ||
       (iVar1 = evp_digestupdate(*(undefined8 *)(param_1 + 0x160),lVar2,
                                 *(undefined8 *)(param_1 + 0x168)), iVar1 == 0)) {
      uVar3 = 0;
    }
    FUN_140b8d990(lVar2,"providers\\implementations\\signature\\sm2_sig.c",0x111);
    return uVar3;
  }
  return 1;
}

