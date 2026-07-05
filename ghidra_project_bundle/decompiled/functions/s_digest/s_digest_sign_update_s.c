/**
 * Function: s_digest_sign_update_s
 * Address:  140bd0730
 * Signature: undefined s_digest_sign_update_s(void)
 * Body size: 444 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong s_digest_sign_update_s(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x18) & 0x800) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\m_sigver.c",0x19b,"EVP_DigestSignUpdate");
    FUN_140b91cc0(6,0xbd,0);
    return 0;
  }
  if (piVar1 == (int *)0x0) {
LAB_140bd08c3:
    uVar5 = evp_digestupdate(param_1,param_2,param_3);
  }
  else {
    if (((*piVar1 == 0x80) && (*(longlong *)(piVar1 + 0xc) != 0)) &&
       (lVar2 = *(longlong *)(piVar1 + 10), lVar2 != 0)) {
      puVar6 = &DAT_1413a2ad6;
      if (*(undefined1 **)(lVar2 + 0x10) != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(lVar2 + 0x10);
      }
      if (*(longlong *)(lVar2 + 0x98) != 0) {
        FUN_140b932f0();
        uVar3 = (**(code **)(lVar2 + 0x98))(*(undefined8 *)(piVar1 + 0xc),param_2,param_3);
        if (((int)uVar3 < 1) && (iVar4 = FUN_140b934e0(), iVar4 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\m_sigver.c",0x1b0,"EVP_DigestSignUpdate");
          FUN_140b91cc0(6,0xea,"%s digest_sign_update:%s",*(undefined8 *)(lVar2 + 8),puVar6);
        }
        FUN_140b93470();
        return (ulonglong)uVar3;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\m_sigver.c",0x1a8,"EVP_DigestSignUpdate");
      FUN_140b91cc0(6,0xed,"%s digest_sign_update:%s",*(undefined8 *)(lVar2 + 8),puVar6);
    }
    else if (((*(byte *)(piVar1 + 0x28) & 1) == 0) ||
            (iVar4 = (**(code **)(*(longlong *)(piVar1 + 0x1e) + 0xf8))(piVar1,param_1), iVar4 != 0)
            ) {
      piVar1[0x28] = piVar1[0x28] & 0xfffffffe;
      goto LAB_140bd08c3;
    }
    uVar5 = 0;
  }
  return uVar5;
}

