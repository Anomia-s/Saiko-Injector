/**
 * Function: ossl_cipher_generic_initiv
 * Address:  140d963b0
 * Signature: undefined ossl_cipher_generic_initiv(void)
 * Body size: 382 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ossl_cipher_generic_initiv
          (void *param_1,longlong param_2,longlong param_3,void *param_4,size_t param_5,
          undefined8 param_6,int param_7)

{
  int iVar1;
  void *_Dst;
  undefined8 uVar2;
  bool bVar3;
  
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 0xffffffed;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(uint *)((longlong)param_1 + 0x6c) =
       *(uint *)((longlong)param_1 + 0x6c) | -(uint)(param_7 != 0) & 2;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_4 == (void *)0x0) {
    if (((*(byte *)((longlong)param_1 + 0x6c) & 4) != 0) &&
       ((*(int *)((longlong)param_1 + 0x40) == 2 || (*(int *)((longlong)param_1 + 0x40) - 3U < 2))))
    {
      param_5 = *(size_t *)((longlong)param_1 + 0x50);
      _Dst = (void *)((longlong)param_1 + 0x20);
      param_4 = param_1;
LAB_140d964b3:
      memcpy(_Dst,param_4,param_5);
    }
LAB_140d964b8:
    if (param_2 == 0) goto LAB_140d9651c;
    if ((*(byte *)((longlong)param_1 + 0x6c) & 0x20) == 0) {
      bVar3 = param_3 != *(longlong *)((longlong)param_1 + 0x48);
      param_3 = *(longlong *)((longlong)param_1 + 0x48);
      if (bVar3) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\ciphercommon.c",0xda,
                   "cipher_generic_init_internal");
        uVar2 = 0x69;
        goto LAB_140d9646b;
      }
    }
    else {
      *(longlong *)((longlong)param_1 + 0x48) = param_3;
    }
    iVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 0xa8))(param_1,param_2,param_3);
    if (iVar1 != 0) {
      *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 8;
LAB_140d9651c:
      uVar2 = FUN_140d95bc0(param_1,param_6);
      return uVar2;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x40) == 1) goto LAB_140d964b8;
    if ((param_5 == *(ulonglong *)((longlong)param_1 + 0x50)) && (param_5 < 0x11)) {
      *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 4;
      memcpy((void *)((longlong)param_1 + 0x20),param_4,param_5);
      _Dst = param_1;
      goto LAB_140d964b3;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\ciphercommon.c",0x2c3,
               "ossl_cipher_generic_initiv");
    uVar2 = 0x6d;
LAB_140d9646b:
    FUN_140b91cc0(0x39,uVar2,0);
  }
  return 0;
}

