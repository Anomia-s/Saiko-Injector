/**
 * Function: public_key_output_buffer_too_short_lu_lu
 * Address:  140d36e40
 * Signature: undefined public_key_output_buffer_too_short_lu_lu(void)
 * Body size: 628 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool public_key_output_buffer_too_short_lu_lu(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined8 local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140d36e64;
  lVar7 = 0;
  uVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) +
           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  uVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8) +
           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  lVar5 = FUN_140b93540(param_2,&DAT_1413a5b88);
  if ((((lVar5 == 0) ||
       (iVar4 = FUN_140b94350(lVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x44)),
       iVar4 != 0)) &&
      ((lVar5 = FUN_140b93540(param_2,"security-bits"), lVar5 == 0 ||
       (iVar4 = FUN_140b94350(lVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54)),
       iVar4 != 0)))) &&
     ((lVar5 = FUN_140b93540(param_2,"max-size"), lVar5 == 0 ||
      (iVar4 = FUN_140b94350(lVar5,*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) +
                                   *(int *)(*(longlong *)(param_1 + 0x10) + 0x28)), iVar4 != 0)))) {
    if (*(int *)(param_1 + 0x30) != 0) {
      local_58 = 0;
      lStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      lVar6 = FUN_140b93540(param_2,"encoded-pub-key");
      lVar5 = lVar6;
      lVar2 = lStack_50;
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 8) != 5) goto LAB_140d36fa5;
        *(ulonglong *)(lVar6 + 0x20) = uVar11;
        lVar5 = lVar7;
        if ((*(longlong *)(lVar6 + 0x10) == 0) ||
           (lVar5 = lVar6, lVar2 = *(longlong *)(lVar6 + 0x10),
           uVar11 <= *(ulonglong *)(lVar6 + 0x18))) goto LAB_140d36fb1;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x213,"mlx_kem_get_params");
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        pcVar8 = "public key output buffer too short: %lu < %lu";
        uVar9 = (undefined4)uVar11;
LAB_140d36f96:
        FUN_140b91cc0(0x39,0x6a,pcVar8,uVar1,uVar9);
        goto LAB_140d36fa5;
      }
LAB_140d36fb1:
      lStack_50 = lVar2;
      lVar2 = local_48;
      if ((1 < *(uint *)(param_1 + 0x30)) &&
         (lVar7 = FUN_140b93540(param_2,&DAT_1413a59dc), lVar2 = local_48, lVar7 != 0)) {
        if (*(int *)(lVar7 + 8) != 5) goto LAB_140d36fa5;
        *(ulonglong *)(lVar7 + 0x20) = uVar10;
        if (*(longlong *)(lVar7 + 0x10) == 0) {
          lVar7 = 0;
        }
        else {
          lVar2 = *(longlong *)(lVar7 + 0x10);
          if (*(ulonglong *)(lVar7 + 0x18) < uVar10) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x225,"mlx_kem_get_params"
                      );
            uVar1 = *(undefined4 *)(lVar7 + 0x18);
            pcVar8 = "private key output buffer too short: %lu < %lu";
            uVar9 = (undefined4)uVar10;
            goto LAB_140d36f96;
          }
        }
      }
      local_48 = lVar2;
      if ((lVar5 != 0) || (lVar7 != 0)) {
        bVar12 = lVar7 != 0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) != 0) {
          bVar12 = (lVar7 != 0) + 4;
        }
        iVar4 = FUN_140d37cd0(&local_58,bVar12 | -(lVar5 != 0) & 2U,param_1);
        if ((iVar4 == 0) || ((lVar5 != 0 && ((int)uStack_40 != 2)))) goto LAB_140d36fa5;
        if (lVar7 != 0) {
          return uStack_40._4_4_ == 2;
        }
      }
    }
    bVar3 = true;
  }
  else {
LAB_140d36fa5:
    bVar3 = false;
  }
  return bVar3;
}

