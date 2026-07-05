/**
 * Function: function_id3d11device1_createtexture2d
 * Address:  140418460
 * Signature: undefined function_id3d11device1_createtexture2d(void)
 * Body size: 1890 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong function_id3d11device1_createtexture2d(longlong param_1,int *param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  uVar13 = param_3 & 0xffffffff;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  iVar8 = *param_2;
  if (iVar8 < 0x30313050) {
    if (0x16572003 < iVar8) {
      if (iVar8 == 0x16572004) {
        iVar17 = 0x18;
        lVar12 = *(longlong *)(lVar3 + 0x28);
      }
      else {
        iVar17 = 10;
        if (iVar8 != 0x1a204008) goto LAB_14041894a;
        lVar12 = *(longlong *)(lVar3 + 0x28);
      }
      goto joined_r0x00014041892f;
    }
    if (iVar8 == 0x16161804) {
      iVar17 = (uint)(*(int *)(param_1 + 0x1f0) == 0x12000500) * 5 + 0x58;
      lVar12 = *(longlong *)(lVar3 + 0x28);
      goto joined_r0x00014041892f;
    }
    if (iVar8 == 0x16362004) {
      iVar17 = (uint)(*(int *)(param_1 + 0x1f0) == 0x12000500) * 4 + 0x57;
      lVar12 = *(longlong *)(lVar3 + 0x28);
      goto joined_r0x00014041892f;
    }
LAB_14041894a:
    if (*(longlong *)(lVar3 + 0x28) == 0) goto LAB_140418967;
    uVar13 = FUN_1400fbed0("%s, An unsupported SDL pixel format (0x%x) was specified",
                           "D3D11_CreateTexture");
  }
  else {
    if (iVar8 < 0x3231564e) {
      if (iVar8 != 0x30313050) {
        if (iVar8 != 0x3132564e) goto LAB_14041894a;
        goto LAB_140418647;
      }
      iVar17 = 0x68;
      lVar12 = *(longlong *)(lVar3 + 0x28);
    }
    else if (iVar8 == 0x3231564e) {
LAB_140418647:
      iVar17 = 0x67;
      lVar12 = *(longlong *)(lVar3 + 0x28);
    }
    else {
      if ((iVar8 != 0x32315659) && (iVar8 != 0x56555949)) goto LAB_14041894a;
      iVar17 = 0x3d;
      lVar12 = *(longlong *)(lVar3 + 0x28);
    }
joined_r0x00014041892f:
    if (lVar12 != 0) {
      puVar10 = (uint *)FUN_140160c70(1,0x98);
      if (puVar10 == (uint *)0x0) {
LAB_1404188ff:
        uVar13 = 0;
      }
      else {
        uVar6 = 0x15;
        if (param_2[9] == 0) {
          uVar6 = 0;
        }
        puVar10[0xc] = uVar6;
        *(uint **)(param_2 + 0x3c) = puVar10;
        uVar6 = (uint)*(ulonglong *)(param_2 + 1);
        uVar15 = param_2[2];
        local_78 = *(ulonglong *)(param_2 + 1);
        local_70 = 0x100000001;
        local_64 = 1;
        local_50 = 0;
        iVar8 = *param_2;
        if (((iVar8 == 0x30313050) || (iVar8 == 0x3231564e)) || (iVar8 == 0x3132564e)) {
          uVar5 = uVar6 + 1;
          uVar6 = uVar5 & 0xfffffffe;
          uVar14 = uVar15 + 1;
          uVar15 = uVar14 & 0xfffffffe;
          local_78 = CONCAT44(uVar14,uVar5) & 0xfffffffefffffffe;
        }
        *puVar10 = uVar6;
        puVar10[1] = uVar15;
        puVar10[0xd] = (param_2[4] & 0x3e0U) == 0x1a0 ^ 3;
        if (param_2[7] == 1) {
          local_54 = 0x10000;
          uVar9 = 2;
LAB_140418677:
          local_5c = uVar9;
          uVar7 = 8;
        }
        else {
          local_5c = 0;
          local_54 = 0;
          uVar7 = 0x28;
          uVar9 = 0;
          if (param_2[7] != 2) goto LAB_140418677;
        }
        _local_5c = CONCAT44(uVar7,local_5c);
        puVar1 = puVar10 + 2;
        local_68 = iVar17;
        puVar11 = (undefined8 *)FUN_14014ff10(uVar13,"SDL.texture.create.d3d11.texture",0);
        if (((puVar11 != (undefined8 *)0x0) &&
            (iVar8 = (**(code **)*puVar11)(puVar11,&DAT_140e15370,puVar1), iVar8 < 0)) &&
           (cVar4 = FUN_1403d7600("SDL.texture.create.d3d11.texture",iVar8), cVar4 == '\0'))
        goto LAB_1404188ff;
        lVar12 = *(longlong *)puVar1;
        if (lVar12 == 0) {
          iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x28))
                            (*(longlong **)(lVar3 + 0x28),&local_78,0,puVar1);
          if (-1 < iVar8) {
            lVar12 = *(longlong *)puVar1;
            goto LAB_1404186f0;
          }
LAB_140418993:
          pcVar16 = "__FUNCTION__, ID3D11Device1::CreateTexture2D";
          goto LAB_140418b4b;
        }
LAB_1404186f0:
        uVar9 = parameter_s_is_invalid(param_2);
        FUN_14014faf0(uVar9,"SDL.texture.d3d11.texture",lVar12);
        iVar8 = *param_2;
        if ((iVar8 == 0x56555949) || (iVar8 == 0x32315659)) {
          *(undefined1 *)(puVar10 + 0x10) = 1;
          local_78 = CONCAT44((int)(local_78 >> 0x20) + 1U >> 1,(int)local_78 + 1U >> 1);
          puVar1 = puVar10 + 0x12;
          puVar11 = (undefined8 *)
                    FUN_14014ff10(param_3 & 0xffffffff,"SDL.texture.create.d3d11.texture_u",0);
          if ((puVar11 == (undefined8 *)0x0) ||
             ((iVar8 = (**(code **)*puVar11)(puVar11,&DAT_140e15370,puVar1), -1 < iVar8 ||
              (cVar4 = FUN_1403d7600("SDL.texture.create.d3d11.texture_u",iVar8), cVar4 != '\0'))))
          {
            lVar12 = *(longlong *)puVar1;
            if (lVar12 == 0) {
              iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x28))
                                (*(longlong **)(lVar3 + 0x28),&local_78,0,puVar1);
              if (iVar8 < 0) goto LAB_140418993;
              lVar12 = *(longlong *)puVar1;
            }
            uVar9 = parameter_s_is_invalid(param_2);
            FUN_14014faf0(uVar9,"SDL.texture.d3d11.texture_u",lVar12);
            puVar2 = (ulonglong *)(puVar10 + 0x16);
            puVar11 = (undefined8 *)FUN_14014ff10(uVar13,"SDL.texture.create.d3d11.texture_v",0);
            if (((puVar11 == (undefined8 *)0x0) ||
                (iVar8 = (**(code **)*puVar11)(puVar11,&DAT_140e15370,puVar2), -1 < iVar8)) ||
               (cVar4 = FUN_1403d7600("SDL.texture.create.d3d11.texture_v",iVar8), cVar4 != '\0')) {
              uVar13 = *puVar2;
              if (uVar13 == 0) {
                iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x28))
                                  (*(longlong **)(lVar3 + 0x28),&local_78,0,puVar2);
                if (iVar8 < 0) goto LAB_140418993;
                uVar13 = *puVar2;
              }
              uVar9 = parameter_s_is_invalid(param_2);
              FUN_14014faf0(uVar9,"SDL.texture.d3d11.texture_v",uVar13);
              lVar12 = FUN_140156650(param_2[4],param_2[1],param_2[2],8);
              *(longlong *)(puVar10 + 0xe) = lVar12;
              if (lVar12 != 0) {
                iVar8 = *param_2;
                goto LAB_140418870;
              }
              goto LAB_14041899f;
            }
          }
          goto LAB_1404188ff;
        }
LAB_140418870:
        if (((iVar8 == 0x30313050) || (iVar8 == 0x3231564e)) || (iVar8 == 0x3132564e)) {
          *(undefined1 *)(puVar10 + 0x1a) = 1;
          lVar12 = FUN_140156650(param_2[4],param_2[1],param_2[2],
                                 (*param_2 == 0x30313050) * '\x02' + '\b');
          *(longlong *)(puVar10 + 0xe) = lVar12;
          if (lVar12 != 0) {
            iVar8 = *param_2;
            goto LAB_1404188ba;
          }
LAB_14041899f:
          uVar6 = FUN_1400fbed0("Unsupported YUV colorspace");
LAB_140418b52:
          uVar13 = (ulonglong)uVar6;
        }
        else {
LAB_1404188ba:
          local_80 = 0;
          if (iVar8 < 0x30313050) {
            if (iVar8 < 0x16572004) {
              if (iVar8 == 0x16161804) {
                local_90 = (uint)(*(int *)(param_1 + 0x1f0) == 0x12000500) * 5 + 0x58;
              }
              else {
                if (iVar8 != 0x16362004) goto LAB_140418bab;
                local_90 = (uint)(*(int *)(param_1 + 0x1f0) == 0x12000500) * 4 + 0x57;
              }
            }
            else if (iVar8 == 0x16572004) {
              local_90 = 0x18;
            }
            else {
              local_90 = 10;
              if (iVar8 != 0x1a204008) goto LAB_140418bab;
            }
          }
          else if (iVar8 < 0x3231564e) {
            if (iVar8 != 0x30313050) {
              if (iVar8 == 0x3132564e) goto LAB_140418a1a;
              goto LAB_140418bab;
            }
            local_90 = 0x38;
          }
          else if (((iVar8 == 0x3231564e) || (iVar8 == 0x32315659)) || (iVar8 == 0x56555949)) {
LAB_140418a1a:
            local_90 = 0x3d;
          }
          else {
LAB_140418bab:
            local_90 = 0;
          }
          uStack_8c = 4;
          uStack_88 = 0;
          uStack_84 = (undefined4)local_70;
          iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x38))
                            (*(longlong **)(lVar3 + 0x28),*(undefined8 *)(puVar10 + 2),&local_90,
                             puVar10 + 4);
          if ((iVar8 < 0) ||
             (((char)puVar10[0x10] == '\x01' &&
              ((iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x38))
                                  (*(longlong **)(lVar3 + 0x28),*(undefined8 *)(puVar10 + 0x12),
                                   &local_90,puVar10 + 0x14), iVar8 < 0 ||
               (iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x38))
                                  (*(longlong **)(lVar3 + 0x28),*(undefined8 *)(puVar10 + 0x16),
                                   &local_90,puVar10 + 0x18), iVar8 < 0)))))) {
LAB_140418b44:
            pcVar16 = "__FUNCTION__, ID3D11Device1::CreateShaderResourceView";
LAB_140418b4b:
            uVar6 = FUN_1403d7600(pcVar16,iVar8);
            goto LAB_140418b52;
          }
          if ((char)puVar10[0x1a] == '\x01') {
            uStack_98 = (undefined4)local_80;
            uStack_94 = (undefined4)((ulonglong)local_80 >> 0x20);
            local_a8 = local_90;
            uStack_a4 = uStack_8c;
            uStack_a0 = uStack_88;
            uStack_9c = uStack_84;
            iVar8 = *param_2;
            iVar17 = 0x31;
            if (((iVar8 != 0x3231564e) && (iVar8 != 0x3132564e)) &&
               (iVar17 = local_a8, iVar8 == 0x30313050)) {
              iVar17 = 0x23;
            }
            local_a8 = iVar17;
            iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x38))
                              (*(longlong **)(lVar3 + 0x28),*(undefined8 *)(puVar10 + 2),&local_a8,
                               puVar10 + 0x1c);
            if (iVar8 < 0) goto LAB_140418b44;
          }
          uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
          if ((*(byte *)(param_2 + 7) & 2) != 0) {
            uStack_9c = 0;
            uStack_98 = 0;
            local_a8 = local_68;
            uStack_a4 = 4;
            uStack_a0 = 0;
            iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x48))
                              (*(longlong **)(lVar3 + 0x28),*(undefined8 *)(puVar10 + 2),&local_a8,
                               puVar10 + 6);
            if (iVar8 < 0) {
              pcVar16 = "__FUNCTION__, ID3D11Device1::CreateRenderTargetView";
              goto LAB_140418b4b;
            }
          }
        }
      }
      if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
        return uVar13 & 0xffffffff;
      }
      goto LAB_140418bb2;
    }
LAB_140418967:
    uVar13 = FUN_1400fbed0("Device lost and couldn\'t be recovered");
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return uVar13;
  }
LAB_140418bb2:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

