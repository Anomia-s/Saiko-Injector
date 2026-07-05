/**
 * Function: tdes_init
 * Address:  140d9aef0
 * Signature: undefined tdes_init(void)
 * Body size: 285 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tdes_init(void *param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5,
              undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_140b69250();
  if (iVar2 == 0) {
    return false;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(uint *)((longlong)param_1 + 0x6c) = uVar1 & 0xfffffffd;
  if (param_4 == 0) {
    if (((uVar1 & 4) != 0) &&
       ((*(int *)((longlong)param_1 + 0x40) == 2 || (*(int *)((longlong)param_1 + 0x40) - 3U < 2))))
    {
      memcpy((void *)((longlong)param_1 + 0x20),param_1,*(size_t *)((longlong)param_1 + 0x50));
    }
  }
  else {
    iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5);
    if (iVar2 == 0) {
      return false;
    }
  }
  if (param_2 != 0) {
    if (param_3 != *(longlong *)((longlong)param_1 + 0x48)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\cipher_tdes_common.c",0x68,"tdes_init");
      FUN_140b91cc0(0x39,0x69,0);
      return false;
    }
    iVar2 = (*(code *)**(undefined8 **)((longlong)param_1 + 0xa8))(param_1,param_2);
    if (iVar2 == 0) {
      return false;
    }
    *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 8;
  }
  iVar2 = FUN_140d95bc0(param_1,param_6);
  return iVar2 != 0;
}

