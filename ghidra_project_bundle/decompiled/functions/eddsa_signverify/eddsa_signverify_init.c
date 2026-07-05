/**
 * Function: eddsa_signverify_init
 * Address:  140d46310
 * Signature: undefined eddsa_signverify_init(void)
 * Body size: 518 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 eddsa_signverify_init(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined1 local_48 [56];
  undefined8 uStack_10;
  
  uStack_10 = 0x140d46325;
  _Src = (void *)0x0;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\eddsa_sig.c",0xf2,"eddsa_signverify_init");
    FUN_140b91cc0(0x39,0x72,0);
    return 0;
  }
  iVar1 = FUN_140c131f0(param_2);
  if (iVar1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\eddsa_sig.c",0xf7,"eddsa_signverify_init");
    FUN_140b91cc0(0x39,0xc0103,0);
    return 0;
  }
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) & 0xffffffe2;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(longlong *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x110) = 0;
  iVar1 = FUN_140c21d90(local_48,param_1 + 0x10,0x100);
  if (*(int *)(param_2 + 0x60) == 2) {
    if (iVar1 == 0) goto LAB_140d464eb;
    iVar1 = FUN_140da7f50(local_48,0xffffffff,param_2);
  }
  else {
    if (*(int *)(param_2 + 0x60) != 3) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\eddsa_sig.c",0x115,"eddsa_signverify_init")
      ;
      FUN_140b91cc0(0x39,0xc0103,0);
      FUN_140c13180(param_2);
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_140c227c0(local_48);
      return 0;
    }
    if (iVar1 == 0) goto LAB_140d464eb;
    iVar1 = FUN_140da7fc0(local_48,0xffffffff,param_2);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_140c21e60(local_48);
    if (iVar1 != 0) {
      FUN_140c22710(local_48,param_1 + 0x110);
      _Src = (void *)FUN_140c22760(local_48);
    }
    FUN_140c227c0(local_48);
    if (_Src == (void *)0x0) {
      return 1;
    }
    if (*(size_t *)(param_1 + 0x110) == 0) {
      return 1;
    }
    memmove((void *)(param_1 + 0x10),_Src,*(size_t *)(param_1 + 0x110));
    return 1;
  }
LAB_140d464eb:
  FUN_140c227c0(local_48);
  return 1;
}

