/**
 * Function: gcm_init
 * Address:  140d98740
 * Signature: undefined gcm_init(void)
 * Body size: 283 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
gcm_init(longlong param_1,longlong param_2,longlong param_3,void *param_4,size_t param_5,
        undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) ^ (*(uint *)(param_1 + 0x54) ^ param_7) & 1;
  if (param_4 != (void *)0x0) {
    if (0x7f < param_5 - 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x3e,"gcm_init");
      uVar2 = 0x6d;
      goto LAB_140d987e5;
    }
    *(size_t *)(param_1 + 0x10) = param_5;
    memcpy((void *)(param_1 + 0x58),param_4,param_5);
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  if (param_2 != 0) {
    if (param_3 != *(longlong *)(param_1 + 8)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_gcm.c",0x48,"gcm_init");
      uVar2 = 0x69;
LAB_140d987e5:
      FUN_140b91cc0(0x39,uVar2,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xf0))(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar2 = FUN_140d97d60(param_1,param_6);
  return uVar2;
}

