/**
 * Function: shared_secret_buffer_too_small
 * Address:  140d52a00
 * Signature: undefined shared_secret_buffer_too_small(void)
 * Body size: 882 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
shared_secret_buffer_too_small
          (longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4,ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 local_res8;
  undefined8 uVar8;
  undefined4 uVar9;
  ulonglong local_48;
  undefined8 local_40;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  lVar6 = 0;
  local_res8 = 0;
  local_48 = *(longlong *)(puVar7[3] + 0x20) + 0x20;
  iVar4 = *(int *)(puVar7[3] + 0x28);
  lVar1 = *(longlong *)(puVar7[2] + 0x28);
  lVar2 = *(longlong *)(puVar7[3] + 0x10);
  if (*(uint *)(puVar7 + 6) < 2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\mlx_kem.c",0x101,"mlx_kem_decapsulate");
    FUN_140b91cc0(0x39,0x80,0);
  }
  else {
    if (param_2 != 0) {
      if (param_3 != (ulonglong *)0x0) {
        if (*param_3 < local_48) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\kem\\mlx_kem.c",0x110,"mlx_kem_decapsulate");
          FUN_140b91cc0(0x39,0x6a,"shared-secret buffer too small");
          return 0;
        }
        *param_3 = local_48;
      }
      if (param_5 != lVar1 + lVar2) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\kem\\mlx_kem.c",0x117,"mlx_kem_decapsulate");
        FUN_140b91cc0(0x39,0xfb,"wrong decapsulation input ciphertext size: %lu",
                      param_5 & 0xffffffff);
        return 0;
      }
      local_40 = *(undefined8 *)(puVar7[2] + 0x28);
      local_48 = 0x20;
      lVar1 = *(longlong *)(puVar7[3] + 0x10);
      lVar2 = *(longlong *)(puVar7[3] + 0x20);
      lVar5 = FUN_140b7b2e0(*puVar7,puVar7[4],puVar7[1]);
      if (lVar5 != 0) {
        iVar3 = FUN_140c015b0(lVar5,0);
        if (0 < iVar3) {
          uVar8 = local_40;
          iVar3 = FUN_140c015e0(lVar5,iVar4 * lVar2 + param_2,&local_48,iVar4 * lVar1 + param_4,
                                local_40);
          uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (0 < iVar3) {
            if (local_48 == 0x20) {
              FUN_140b7b6a0(lVar5);
              uVar8 = *(undefined8 *)(puVar7[3] + 0x10);
              local_48 = *(ulonglong *)(puVar7[3] + 0x20);
              lVar1 = *(longlong *)(puVar7[2] + 0x28);
              lVar5 = FUN_140b7b2e0(*puVar7,puVar7[5],puVar7[1]);
              lVar6 = 0;
              if (lVar5 == 0) goto LAB_140d52d39;
              lVar6 = FUN_140b7ed00();
              if (lVar6 == 0) goto LAB_140d52d39;
              iVar3 = FUN_140b7f050(lVar6,puVar7[5]);
              if (iVar3 < 1) goto LAB_140d52d39;
              iVar3 = FUN_140b7f620(lVar6,(1 - iVar4) * lVar1 + param_4,uVar8);
              if (iVar3 < 1) goto LAB_140d52d39;
              iVar3 = FUN_140b81cf0(lVar5);
              if (iVar3 < 1) goto LAB_140d52d39;
              iVar3 = FUN_140b82510(lVar5,lVar6);
              if (iVar3 < 1) goto LAB_140d52d39;
              iVar4 = FUN_140b82530(lVar5,(iVar4 * -0x20 + 0x20) + param_2,&local_48);
              if (iVar4 < 1) goto LAB_140d52d39;
              if (local_48 == *(ulonglong *)(puVar7[3] + 0x20)) {
                local_res8 = 1;
                goto LAB_140d52d39;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\kem\\mlx_kem.c",0x13e,"mlx_kem_decapsulate");
              puVar7 = (undefined8 *)puVar7[3];
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\kem\\mlx_kem.c",0x128,"mlx_kem_decapsulate");
              puVar7 = (undefined8 *)puVar7[2];
            }
            FUN_140b91cc0(0x39,0xc0103,"unexpected %s shared secret output size: %lu",*puVar7,
                          CONCAT44(uVar9,(undefined4)local_48));
          }
        }
      }
LAB_140d52d39:
      FUN_140b7b6a0(lVar5);
      FUN_140b7efe0(lVar6);
      return local_res8;
    }
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = local_48;
      return 1;
    }
  }
  return 0;
}

