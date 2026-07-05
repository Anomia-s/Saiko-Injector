/**
 * Function: sm2sig_signature_init
 * Address:  140d4c490
 * Signature: undefined sm2sig_signature_init(void)
 * Body size: 485 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sm2sig_signature_init(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res20;
  longlong local_18 [2];
  
  local_18[1] = 0x140d4c4a5;
  iVar1 = FUN_140b69250();
  if ((iVar1 == 0) || (param_1 == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\sm2_sig.c",0x93,"sm2sig_signature_init");
      FUN_140b91cc0(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = FUN_140c0e380(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_140c0e290(*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = param_2;
  }
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    lVar2 = FUN_140b93540(param_3,"distid");
    if (lVar2 != 0) {
      local_res8 = 0;
      local_res20 = 0;
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        return 0;
      }
      if ((*(longlong *)(lVar2 + 0x18) != 0) &&
         (iVar1 = FUN_140b95120(lVar2,&local_res8,0,&local_res20), iVar1 == 0)) {
        return 0;
      }
      FUN_140b8d990(*(undefined8 *)(param_1 + 0x170),
                    "providers\\implementations\\signature\\sm2_sig.c",0x1d1);
      *(undefined8 *)(param_1 + 0x170) = local_res8;
      *(undefined8 *)(param_1 + 0x178) = local_res20;
    }
    lVar2 = FUN_140b93540(param_3,"digest-size");
    if (lVar2 != 0) {
      iVar1 = FUN_140b94310(lVar2,local_18);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_18[0] != *(longlong *)(param_1 + 0x168)) {
        return 0;
      }
    }
    lVar2 = FUN_140b93540(param_3,"digest");
    if (lVar2 != 0) {
      local_res8 = 0;
      iVar1 = FUN_140b94f00(lVar2,&local_res8,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = providersimplementationssignaturesm2_sigc(param_1,local_res8);
      if (iVar1 == 0) {
        FUN_140b8d990(local_res8,"providers\\implementations\\signature\\sm2_sig.c",0x1e8);
        return 0;
      }
      FUN_140b8d990(local_res8,"providers\\implementations\\signature\\sm2_sig.c",0x1eb);
    }
  }
  return 1;
}

