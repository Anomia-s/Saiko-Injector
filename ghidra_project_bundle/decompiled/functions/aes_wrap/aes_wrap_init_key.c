/**
 * Function: aes_wrap_init_key
 * Address:  140b8a440
 * Signature: undefined aes_wrap_init_key(void)
 * Body size: 252 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_wrap_init_key(longlong param_1,longlong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  
  lVar3 = FUN_140b987a0();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
LAB_140b8a488:
    iVar1 = FUN_140b981e0(param_1);
    if (iVar1 << 3 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\e_aes.c",0xe60,"aes_wrap_init_key");
      FUN_140b91cc0(6,0x82,0);
      return 0;
    }
    iVar2 = FUN_140b76080(param_1);
    if (iVar2 == 0) {
      FUN_14076e450(param_2,iVar1 << 3,lVar3);
    }
    else {
      FUN_14076e170();
    }
    if (param_3 == (void *)0x0) {
      _Dst = (void *)0x0;
      goto LAB_140b8a513;
    }
  }
  else if (param_2 != 0) goto LAB_140b8a488;
  iVar1 = FUN_140b98300(param_1);
  if (iVar1 < 0) {
    return 0;
  }
  _Dst = (void *)(param_1 + 0x28);
  memcpy(_Dst,param_3,(longlong)iVar1);
LAB_140b8a513:
  *(void **)(lVar3 + 0xf8) = _Dst;
  return 1;
}

