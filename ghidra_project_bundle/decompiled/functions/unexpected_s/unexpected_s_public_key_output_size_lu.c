/**
 * Function: unexpected_s_public_key_output_size_lu
 * Address:  140d524a0
 * Signature: undefined unexpected_s_public_key_output_size_lu(void)
 * Body size: 1243 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
unexpected_s_public_key_output_size_lu
          (longlong param_1,longlong param_2,ulonglong *param_3,longlong param_4,ulonglong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined4 local_res8;
  ulonglong *puVar10;
  undefined4 uVar11;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48 [2];
  
  puVar9 = *(undefined8 **)(param_1 + 8);
  lVar6 = 0;
  local_48[0] = 0;
  local_res8 = 0;
  iVar4 = *(int *)(puVar9[3] + 0x28);
  if (*(int *)(puVar9 + 6) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\mlx_kem.c",0x78,"mlx_kem_encapsulate");
    FUN_140b91cc0(0x39,0x80,0);
    goto LAB_140d5295c;
  }
  local_58 = *(longlong *)(puVar9[3] + 0x10) + *(longlong *)(puVar9[2] + 0x28);
  local_50 = *(longlong *)(puVar9[3] + 0x20) + 0x20;
  if (param_2 == 0) {
    if (param_3 == (ulonglong *)0x0) {
      if (param_5 == (ulonglong *)0x0) {
        return 0;
      }
    }
    else {
      *param_3 = local_58;
      if (param_5 == (ulonglong *)0x0) {
        return 1;
      }
    }
    *param_5 = local_50;
    return 1;
  }
  if (param_4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\mlx_kem.c",0x88,"mlx_kem_encapsulate");
    FUN_140b91cc0(0x39,0xf8,"null shared-secret output buffer");
    return 0;
  }
  if (param_3 == (ulonglong *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\mlx_kem.c",0x8e,"mlx_kem_encapsulate");
    pcVar8 = "null ciphertext input/output length pointer";
  }
  else {
    if (*param_3 < local_58) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\mlx_kem.c",0x92,"mlx_kem_encapsulate");
      FUN_140b91cc0(0x39,0x6a,"ciphertext buffer too small");
      return 0;
    }
    *param_3 = local_58;
    if (param_5 != (ulonglong *)0x0) {
      if (local_50 <= *param_5) {
        *param_5 = local_50;
        local_58 = *(ulonglong *)(puVar9[2] + 0x28);
        local_50 = 0x20;
        lVar1 = *(longlong *)(puVar9[3] + 0x10);
        lVar2 = *(longlong *)(puVar9[3] + 0x20);
        lVar6 = FUN_140b7b2e0(*puVar9,puVar9[4],puVar9[1]);
        if ((lVar6 != 0) && (iVar3 = FUN_140c014c0(lVar6,0), 0 < iVar3)) {
          puVar10 = &local_50;
          iVar3 = FUN_140c014f0(lVar6,iVar4 * lVar1 + param_2,&local_58,iVar4 * lVar2 + param_4,
                                puVar10);
          uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
          if (0 < iVar3) {
            if (local_58 == *(ulonglong *)(puVar9[2] + 0x28)) {
              if (local_50 == 0x20) {
                FUN_140b7b6a0(lVar6);
                lVar1 = *(longlong *)(puVar9[2] + 0x28);
                local_58 = *(ulonglong *)(puVar9[3] + 0x10);
                lVar6 = FUN_140b7b2e0(*puVar9,puVar9[5],puVar9[1]);
                if (((lVar6 == 0) || (iVar3 = gen_init(lVar6), iVar3 < 1)) ||
                   (iVar3 = FUN_140b7d990(lVar6,local_48), iVar3 < 1)) goto LAB_140d5295c;
                puVar10 = &local_58;
                iVar3 = FUN_140b7ffc0(local_48[0],"encoded-pub-key",(1 - iVar4) * lVar1 + param_2,
                                      local_58,puVar10);
                uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
                if (iVar3 < 1) goto LAB_140d5295c;
                if (local_58 != *(ulonglong *)(puVar9[3] + 0x10)) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("providers\\implementations\\kem\\mlx_kem.c",0xd5,"mlx_kem_encapsulate"
                            );
                  FUN_140b91cc0(0x39,0xc0103,"unexpected %s public key output size: %lu",
                                *(undefined8 *)puVar9[3],CONCAT44(uVar11,(undefined4)local_58));
                  goto LAB_140d5295c;
                }
                FUN_140b7b6a0(lVar6);
                local_50 = *(ulonglong *)(puVar9[3] + 0x20);
                lVar6 = FUN_140b7b2e0(*puVar9,local_48[0],puVar9[1]);
                if (((lVar6 == 0) || (iVar3 = FUN_140b81cf0(lVar6), iVar3 < 1)) ||
                   ((iVar3 = FUN_140b82510(lVar6,puVar9[5]), iVar3 < 1 ||
                    (iVar4 = FUN_140b82530(lVar6,(iVar4 * -0x20 + 0x20) + param_4,&local_50),
                    iVar4 < 1)))) goto LAB_140d5295c;
                if (local_50 == *(ulonglong *)(puVar9[3] + 0x20)) {
                  local_res8 = 1;
                  goto LAB_140d5295c;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("providers\\implementations\\kem\\mlx_kem.c",0xe6,"mlx_kem_encapsulate");
                puVar9 = (undefined8 *)puVar9[3];
              }
              else {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("providers\\implementations\\kem\\mlx_kem.c",0xb6,"mlx_kem_encapsulate");
                puVar9 = (undefined8 *)puVar9[2];
              }
              pcVar8 = "unexpected %s shared secret output size: %lu";
              uVar5 = (undefined4)local_50;
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\kem\\mlx_kem.c",0xb0,"mlx_kem_encapsulate");
              puVar9 = (undefined8 *)puVar9[2];
              pcVar8 = "unexpected %s ciphertext output size: %lu";
              uVar5 = (undefined4)local_58;
            }
            FUN_140b91cc0(0x39,0xc0103,pcVar8,*puVar9,CONCAT44(uVar11,uVar5));
          }
        }
LAB_140d5295c:
        FUN_140b7efe0(local_48[0]);
        FUN_140b7b6a0(lVar6);
        return local_res8;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\mlx_kem.c",0x9e,"mlx_kem_encapsulate");
      pcVar8 = "shared-secret buffer too small";
      uVar7 = 0x6a;
      goto LAB_140d525db;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\mlx_kem.c",0x9a,"mlx_kem_encapsulate");
    pcVar8 = "null shared secret input/output length pointer";
  }
  uVar7 = 0xf7;
LAB_140d525db:
  FUN_140b91cc0(0x39,uVar7,pcVar8);
  return 0;
}

