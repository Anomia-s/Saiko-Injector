/**
 * Function: session_id
 * Address:  140d20ea0
 * Signature: undefined session_id(void)
 * Body size: 458 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 session_id(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *local_res8;
  
  uVar2 = FUN_140b76070(*param_1);
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    lVar3 = FUN_140b93540(param_2,"digest");
    if (lVar3 != 0) {
      iVar1 = FUN_140d718b0(param_1 + 1,param_2,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_140b8c100(param_1 + 1);
      iVar1 = FUN_140b97c00(uVar2);
      if (iVar1 != 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\kdfs\\sshkdf.c",0xe9,"kdf_sshkdf_set_ctx_params");
        FUN_140b91cc0(0x39,0xb7,0);
        return 0;
      }
    }
    lVar3 = FUN_140b93540(param_2,&DAT_1413a593c);
    if ((((lVar3 != 0) && (iVar1 = FUN_140d212b0(param_1 + 4,param_1 + 5,lVar3), iVar1 == 0)) ||
        ((lVar3 = FUN_140b93540(param_2,"xcghash"), lVar3 != 0 &&
         (iVar1 = FUN_140d212b0(param_1 + 6,param_1 + 7,lVar3), iVar1 == 0)))) ||
       ((lVar3 = FUN_140b93540(param_2,"session_id"), lVar3 != 0 &&
        (iVar1 = FUN_140d212b0(param_1 + 9,param_1 + 10,lVar3), iVar1 == 0)))) {
      return 0;
    }
    lVar3 = FUN_140b93540(param_2,&DAT_1413a6260);
    if (lVar3 != 0) {
      iVar1 = FUN_140b954c0(lVar3,&local_res8);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_res8 == (char *)0x0) {
        return 0;
      }
      if (*(longlong *)(lVar3 + 0x18) != 1) {
        return 0;
      }
      if (5 < (byte)(*local_res8 + 0xbfU)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\kdfs\\sshkdf.c",0x111,"kdf_sshkdf_set_ctx_params");
        FUN_140b91cc0(0x39,0x8a,0);
        return 0;
      }
      *(char *)(param_1 + 8) = *local_res8;
    }
  }
  return 1;
}

