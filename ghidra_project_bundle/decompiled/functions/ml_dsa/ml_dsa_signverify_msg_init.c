/**
 * Function: ml_dsa_signverify_msg_init
 * Address:  140d4db60
 * Signature: undefined ml_dsa_signverify_msg_init(void)
 * Body size: 365 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ml_dsa_signverify_msg_init(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined1 local_48 [56];
  undefined8 uStack_10;
  
  uStack_10 = 0x140d4db76;
  iVar1 = FUN_140b69250();
  if ((iVar1 == 0) || (param_1 == (longlong *)0x0)) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = *param_1;
    if (param_2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\ml_dsa_sig.c",0x88,
                 "ml_dsa_signverify_msg_init");
      FUN_140b91cc0(0x39,0x72,0);
      return 0;
    }
  }
  else {
    *param_1 = param_2;
  }
  iVar1 = FUN_140d9f3c0(param_2,(int)param_1[0x29]);
  if (iVar1 != 0) {
    _Src = (void *)0x0;
    param_1[0x4a] = 0;
    iVar1 = FUN_140c21d90(local_48,(longlong)param_1 + 0x14c,0x100);
    if ((iVar1 == 0) || (iVar1 = FUN_140daa6f0(local_48,0xffffffff,*param_1), iVar1 == 0)) {
      FUN_140c227c0(local_48);
    }
    else {
      iVar1 = FUN_140c21e60(local_48);
      if (iVar1 != 0) {
        FUN_140c22710(local_48,param_1 + 0x4a);
        _Src = (void *)FUN_140c22760(local_48);
      }
      FUN_140c227c0(local_48);
      if ((_Src != (void *)0x0) && (param_1[0x4a] != 0)) {
        memmove((void *)((longlong)param_1 + 0x14c),_Src,param_1[0x4a]);
      }
    }
    *(undefined4 *)(param_1 + 0x4b) = 0;
    uVar2 = providersimplementationssignatureml_dsa_sigc(param_1,param_3);
    return uVar2;
  }
  return 0;
}

