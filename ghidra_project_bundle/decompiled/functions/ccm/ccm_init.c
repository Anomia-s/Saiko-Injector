/**
 * Function: ccm_init
 * Address:  140d99db0
 * Signature: undefined ccm_init(void)
 * Body size: 265 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ccm_init(uint *param_1,longlong param_2,longlong param_3,void *param_4,size_t param_5,
        undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *param_1 ^ (*param_1 ^ param_7) & 1;
  if (param_4 != (void *)0x0) {
    if (param_5 != 0xfU - *(longlong *)(param_1 + 2)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xee,"ccm_init");
      uVar2 = 0x6d;
      goto LAB_140d99e2e;
    }
    memcpy(param_1 + 0xc,param_4,param_5);
    *param_1 = *param_1 | 4;
  }
  if (param_2 != 0) {
    if (param_3 != *(longlong *)(param_1 + 6)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\ciphers\\ciphercommon_ccm.c",0xf6,"ccm_init");
      uVar2 = 0x69;
LAB_140d99e2e:
      FUN_140b91cc0(0x39,uVar2,0);
      return 0;
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x24))(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_140d99520(param_1,param_6);
  return uVar2;
}

