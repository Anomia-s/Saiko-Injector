/**
 * Function: s_digest_verify_final_s
 * Address:  140bd0f90
 * Signature: undefined s_digest_verify_final_s(void)
 * Body size: 802 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void s_digest_verify_final_s(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  uint local_98 [4];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  piVar5 = *(int **)(param_1 + 0x28);
  piVar3 = (int *)0x0;
  local_98[0] = 0;
  if ((*(uint *)(param_1 + 0x18) >> 0xb & 1) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\m_sigver.c",0x2a3,"EVP_DigestVerifyFinal");
    FUN_140b91cc0(6,0xbc,0);
    goto LAB_140bd12a2;
  }
  if (piVar5 != (int *)0x0) {
    if (((*piVar5 == 0x100) && (*(longlong *)(piVar5 + 0xc) != 0)) &&
       (lVar4 = *(longlong *)(piVar5 + 10), lVar4 != 0)) {
      puVar6 = &DAT_1413a2ad6;
      if (*(undefined1 **)(lVar4 + 0x10) != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(lVar4 + 0x10);
      }
      if (*(longlong *)(lVar4 + 0xc0) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\m_sigver.c",0x2b0,"EVP_DigestVerifyFinal");
        local_a8 = puVar6;
        FUN_140b91cc0(6,0xed,"%s digest_verify_final:%s",*(undefined8 *)(lVar4 + 8));
      }
      else {
        if (((*(uint *)(param_1 + 0x18) >> 9 & 1) == 0) &&
           (piVar3 = (int *)FUN_140b7b310(piVar5), piVar3 != (int *)0x0)) {
          piVar5 = piVar3;
        }
        FUN_140b932f0();
        iVar2 = (**(code **)(lVar4 + 0xc0))(*(undefined8 *)(piVar5 + 0xc),param_2,param_3);
        if ((iVar2 == 0) && (iVar2 = FUN_140b934e0(), iVar2 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\m_sigver.c",0x2bf,"EVP_DigestVerifyFinal");
          local_a8 = puVar6;
          FUN_140b91cc0(6,0xea,"%s digest_verify_final:%s",*(undefined8 *)(lVar4 + 8));
        }
        FUN_140b93470();
        if (piVar3 == (int *)0x0) {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x800;
        }
        else {
          FUN_140b7b6a0(piVar3);
        }
      }
      goto LAB_140bd12a2;
    }
    if (*(longlong *)(piVar5 + 0x1e) != 0) {
      if (((*(byte *)(piVar5 + 0x28) & 1) != 0) &&
         (iVar2 = (**(code **)(*(longlong *)(piVar5 + 0x1e) + 0xf8))(piVar5,param_1), iVar2 == 0))
      goto LAB_140bd12a2;
      piVar5[0x28] = piVar5[0x28] & 0xfffffffe;
      pcVar1 = *(code **)(*(longlong *)(piVar5 + 0x1e) + 0x88);
      if ((*(uint *)(param_1 + 0x18) & 0x200) == 0) {
        lVar4 = FUN_140b70980();
        if (lVar4 == 0) goto LAB_140bd12a2;
        iVar2 = FUN_140b70a90(lVar4,param_1);
        if (iVar2 == 0) {
          FUN_140b709d0(lVar4);
          goto LAB_140bd12a2;
        }
        if (pcVar1 == (code *)0x0) {
          iVar2 = assertion_failed_mdsize_evp_max_md_size(lVar4,local_88,local_98);
        }
        else {
          iVar2 = (**(code **)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x78) + 0x88))
                            (*(longlong *)(lVar4 + 0x28),param_2,param_3 & 0xffffffff,lVar4);
        }
        FUN_140b709d0(lVar4);
        if (pcVar1 != (code *)0x0) goto LAB_140bd12a2;
      }
      else {
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(piVar5,param_2,param_3 & 0xffffffff,param_1);
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x800;
          goto LAB_140bd12a2;
        }
        iVar2 = assertion_failed_mdsize_evp_max_md_size(param_1,local_88,local_98);
      }
      if (iVar2 != 0) {
        local_a8 = (undefined1 *)(ulonglong)local_98[0];
        evp_pkey_verify(piVar5,param_2,param_3,local_88);
      }
      goto LAB_140bd12a2;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\evp\\m_sigver.c",0x2ca,"EVP_DigestVerifyFinal");
  FUN_140b91cc0(6,0x86,0);
LAB_140bd12a2:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

