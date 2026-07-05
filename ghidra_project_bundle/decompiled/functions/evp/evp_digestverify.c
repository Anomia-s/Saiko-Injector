/**
 * Function: evp_digestverify
 * Address:  140bd0370
 * Signature: undefined evp_digestverify(void)
 * Body size: 783 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong evp_digestverify(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                          ,undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\m_sigver.c",0x2f8,"EVP_DigestVerify");
    FUN_140b91cc0(6,0x86,0);
    return 0xffffffff;
  }
  if ((*(uint *)(param_1 + 0x18) >> 0xb & 1) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\m_sigver.c",0x2fd,"EVP_DigestVerify");
    FUN_140b91cc0(6,0xbc,0);
    return 0;
  }
  if (((*piVar1 == 0x100) && (*(longlong *)(piVar1 + 0xc) != 0)) &&
     (lVar2 = *(longlong *)(piVar1 + 10), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 200) != 0) {
      puVar8 = &DAT_1413a2ad6;
      if (*(undefined1 **)(lVar2 + 0x10) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(lVar2 + 0x10);
      }
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x800;
      FUN_140b932f0();
      uVar4 = (**(code **)(lVar2 + 200))
                        (*(undefined8 *)(piVar1 + 0xc),param_2,param_3,param_4,param_5);
      if (((int)uVar4 < 1) && (iVar5 = FUN_140b934e0(), iVar5 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\m_sigver.c",0x30d,"EVP_DigestVerify");
        FUN_140b91cc0(6,0xea,"%s digest_verify:%s",*(undefined8 *)(lVar2 + 8),puVar8);
      }
      FUN_140b93470();
      return (ulonglong)uVar4;
    }
LAB_140bd0527:
    if ((*(longlong *)(piVar1 + 0xc) != 0) && (lVar2 = *(longlong *)(piVar1 + 10), lVar2 != 0)) {
      puVar8 = &DAT_1413a2ad6;
      if (*(undefined1 **)(lVar2 + 0x10) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(lVar2 + 0x10);
      }
      if (*(longlong *)(lVar2 + 0xb8) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\m_sigver.c",0x1d6,"EVP_DigestVerifyUpdate");
        FUN_140b91cc0(6,0xed,"%s digest_verify_update:%s",*(undefined8 *)(lVar2 + 8),puVar8);
        return 0xffffffff;
      }
      FUN_140b932f0();
      iVar5 = (**(code **)(lVar2 + 0xb8))(*(undefined8 *)(piVar1 + 0xc),param_4,param_5);
      if ((iVar5 < 1) && (iVar6 = FUN_140b934e0(), iVar6 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\m_sigver.c",0x1de,"EVP_DigestVerifyUpdate");
        FUN_140b91cc0(6,0xea,"%s digest_verify_update:%s",*(undefined8 *)(lVar2 + 8),puVar8);
      }
      FUN_140b93470();
      goto LAB_140bd0647;
    }
  }
  else {
    if ((*(longlong *)(piVar1 + 0x1e) != 0) &&
       (pcVar3 = *(code **)(*(longlong *)(piVar1 + 0x1e) + 0xd8), pcVar3 != (code *)0x0)) {
      uVar7 = (*pcVar3)(param_1,param_2,param_3,param_4,param_5,0x140bd038a);
      return uVar7;
    }
    if (*piVar1 == 0x100) goto LAB_140bd0527;
  }
  if (((*(byte *)(piVar1 + 0x28) & 1) != 0) &&
     (iVar5 = (**(code **)(*(longlong *)(piVar1 + 0x1e) + 0xf8))(piVar1,param_1), iVar5 == 0)) {
    return 0xffffffff;
  }
  piVar1[0x28] = piVar1[0x28] & 0xfffffffe;
  iVar5 = evp_digestupdate(param_1,param_4,param_5);
LAB_140bd0647:
  if (iVar5 < 1) {
    return 0xffffffff;
  }
  uVar7 = s_digest_verify_final_s(param_1,param_2,param_3);
  return uVar7;
}

