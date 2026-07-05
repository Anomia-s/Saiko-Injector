/**
 * Function: s_key_generation_s
 * Address:  140bfe1e0
 * Signature: undefined s_key_generation_s(void)
 * Body size: 274 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong s_key_generation_s(longlong param_1,undefined8 param_2,undefined8 param_3,
                           undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x140bfe200;
  puVar3 = &DAT_1413a2ad6;
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_1 + 0x18);
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\keymgmt_meth.c",0x1ca,"evp_keymgmt_gen");
    FUN_140b91cc0(6,0xec,"%s key generation:%s",*(undefined8 *)(param_1 + 0x10),puVar3,uVar4);
    lVar2 = 0;
  }
  else {
    FUN_140b932f0();
    lVar2 = (**(code **)(param_1 + 0x90))(param_2,param_3,param_4);
    if (lVar2 == 0) {
      iVar1 = FUN_140b934e0();
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\keymgmt_meth.c",0x1d2,"evp_keymgmt_gen");
        FUN_140b91cc0(6,0xe9,"%s key generation:%s",*(undefined8 *)(param_1 + 0x10),puVar3);
      }
    }
    FUN_140b93470();
  }
  return lVar2;
}

