/**
 * Function: slh_dsa_signverify_msg_init
 * Address:  140d4ed50
 * Signature: undefined slh_dsa_signverify_msg_init(void)
 * Body size: 384 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 slh_dsa_signverify_msg_init(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined1 local_48 [56];
  undefined8 uStack_10;
  
  uStack_10 = 0x140d4ed66;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*param_1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\slh_dsa_sig.c",0x9d,
                 "slh_dsa_signverify_msg_init");
      FUN_140b91cc0(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = FUN_140da70f0(param_2,param_1[0x2b]);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_140da72c0(param_2);
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    *param_1 = param_2;
  }
  _Src = (void *)0x0;
  param_1[0x4c] = 0;
  iVar1 = FUN_140c21d90(local_48,param_1 + 0x2c,0x100);
  if ((iVar1 == 0) || (iVar1 = FUN_140dab1d0(local_48,0xffffffff,*param_1), iVar1 == 0)) {
    FUN_140c227c0(local_48);
  }
  else {
    iVar1 = FUN_140c21e60(local_48);
    if (iVar1 != 0) {
      FUN_140c22710(local_48,param_1 + 0x4c);
      _Src = (void *)FUN_140c22760(local_48);
    }
    FUN_140c227c0(local_48);
    if ((_Src != (void *)0x0) && (param_1[0x4c] != 0)) {
      memmove(param_1 + 0x2c,_Src,param_1[0x4c]);
    }
  }
  iVar1 = FUN_140d4e1a0(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

