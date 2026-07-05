/**
 * Function: sdltexturecreated3d12texture_v
 * Address:  14041d1b0
 * Signature: undefined sdltexturecreated3d12texture_v(void)
 * Body size: 2614 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong sdltexturecreated3d12texture_v(longlong param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined7 uVar13;
  int iVar14;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_100;
  undefined *local_f8;
  longlong *local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)(param_1 + 0x2c0);
  iVar6 = *param_2;
  if (iVar6 < 0x30313050) {
    if (0x16572003 < iVar6) {
      if (iVar6 == 0x16572004) {
        iVar14 = 0x18;
        lVar10 = *(longlong *)(lVar2 + 0x30);
      }
      else {
        iVar14 = 10;
        if (iVar6 != 0x1a204008) goto LAB_14041d78c;
        lVar10 = *(longlong *)(lVar2 + 0x30);
      }
      goto joined_r0x00014041d770;
    }
    if (iVar6 == 0x16161804) {
      iVar14 = (uint)(*(int *)(param_1 + 0x1f0) == 0x12000500) * 5 + 0x58;
      lVar10 = *(longlong *)(lVar2 + 0x30);
      goto joined_r0x00014041d770;
    }
    if (iVar6 == 0x16362004) {
      iVar14 = (uint)(*(int *)(param_1 + 0x1f0) == 0x12000500) * 4 + 0x57;
      lVar10 = *(longlong *)(lVar2 + 0x30);
      goto joined_r0x00014041d770;
    }
LAB_14041d78c:
    if (*(longlong *)(lVar2 + 0x30) == 0) goto LAB_14041d7a9;
    uVar11 = FUN_1400fbed0("%s, An unsupported SDL pixel format (0x%x) was specified",
                           "D3D12_CreateTexture");
  }
  else {
    if (iVar6 < 0x3231564e) {
      if (iVar6 != 0x30313050) {
        if (iVar6 != 0x3132564e) goto LAB_14041d78c;
        goto LAB_14041d730;
      }
      iVar14 = 0x68;
      lVar10 = *(longlong *)(lVar2 + 0x30);
    }
    else if (iVar6 == 0x3231564e) {
LAB_14041d730:
      iVar14 = 0x67;
      lVar10 = *(longlong *)(lVar2 + 0x30);
    }
    else {
      if ((iVar6 != 0x32315659) && (iVar6 != 0x56555949)) goto LAB_14041d78c;
      iVar14 = 0x3d;
      lVar10 = *(longlong *)(lVar2 + 0x30);
    }
joined_r0x00014041d770:
    if (lVar10 != 0) {
      piVar8 = (int *)FUN_140160c70(1,0xd8);
      if (piVar8 == (int *)0x0) {
LAB_14041d717:
        uVar11 = 0;
      }
      else {
        iVar6 = 0x15;
        if (param_2[9] == 0) {
          iVar6 = 0;
        }
        piVar8[0x11] = iVar6;
        *(int **)(param_2 + 0x3c) = piVar8;
        piVar8[0xc] = iVar14;
        uStack_50 = 0;
        uStack_70 = 0;
        iVar6 = param_2[1];
        local_68 = (ulonglong)iVar6;
        uVar5 = param_2[2];
        local_58 = CONCAT44(1,iVar14);
        local_78 = 3;
        iVar14 = *param_2;
        if (((iVar14 == 0x30313050) || (iVar14 == 0x3231564e)) || (iVar14 == 0x3132564e)) {
          local_68 = local_68 + 1 & 0xfffffffffffffffe;
          uVar5 = uVar5 + 1 & 0xfffffffe;
          iVar6 = (int)local_68;
        }
        uStack_60 = CONCAT44(0x10001,uVar5);
        *piVar8 = iVar6;
        piVar8[1] = uVar5;
        piVar8[0x12] = ((param_2[4] & 0x3e0U) != 0x1a0) + 1;
        local_48 = (ulonglong)(param_2[7] == 2);
        local_88 = 0;
        local_8c = 1;
        local_80 = 0x100000001;
        plVar3 = (longlong *)(piVar8 + 2);
        puVar9 = (undefined8 *)FUN_14014ff10(param_3,"SDL.texture.create.d3d12.texture",0);
        if (((puVar9 != (undefined8 *)0x0) &&
            (iVar6 = (**(code **)*puVar9)(puVar9,&DAT_140e15530,plVar3), iVar6 < 0)) &&
           (cVar4 = FUN_1403d7600("SDL.texture.create.d3d12.texture",iVar6), cVar4 == '\0'))
        goto LAB_14041d717;
        lVar10 = *plVar3;
        if (lVar10 == 0) {
          local_f8 = &DAT_140e15530;
          local_100 = 0;
          local_108 = 0x400;
          local_f0 = plVar3;
          iVar6 = (**(code **)(**(longlong **)(lVar2 + 0x30) + 0xd8))
                            (*(longlong **)(lVar2 + 0x30),&local_8c,0,&local_78);
          if (-1 < iVar6) {
            lVar10 = *plVar3;
            goto LAB_14041d472;
          }
LAB_14041d7d5:
          uVar5 = FUN_1403d7600("__FUNCTION__, ID3D12Device::CreateCommittedResource [texture]",
                                iVar6);
          uVar11 = (ulonglong)uVar5;
        }
        else {
LAB_14041d472:
          piVar8[6] = 0x400;
          uVar7 = parameter_s_is_invalid(param_2);
          FUN_14014faf0(uVar7,"SDL.texture.d3d12.texture",lVar10);
          iVar6 = *param_2;
          if ((iVar6 == 0x56555949) || (iVar6 == 0x32315659)) {
            *(undefined1 *)(piVar8 + 0x16) = 1;
            local_68 = local_68 + 1 >> 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_60 + 1U >> 1);
            plVar3 = (longlong *)(piVar8 + 0x18);
            puVar9 = (undefined8 *)FUN_14014ff10(param_3,"SDL.texture.create.d3d12.texture_u",0);
            if ((puVar9 == (undefined8 *)0x0) ||
               ((iVar6 = (**(code **)*puVar9)(puVar9,&DAT_140e15530,plVar3), -1 < iVar6 ||
                (cVar4 = FUN_1403d7600("SDL.texture.create.d3d12.texture_u",iVar6), cVar4 != '\0')))
               ) {
              lVar10 = *plVar3;
              if (lVar10 == 0) {
                local_f8 = &DAT_140e15530;
                local_100 = 0;
                local_108 = 0x400;
                local_f0 = plVar3;
                iVar6 = (**(code **)(**(longlong **)(lVar2 + 0x30) + 0xd8))
                                  (*(longlong **)(lVar2 + 0x30),&local_8c,0,&local_78);
                if (iVar6 < 0) goto LAB_14041d7d5;
                lVar10 = *plVar3;
              }
              piVar8[0x1c] = 0x400;
              uVar7 = parameter_s_is_invalid(param_2);
              FUN_14014faf0(uVar7,"SDL.texture.d3d12.texture_u",lVar10);
              plVar3 = (longlong *)(piVar8 + 0x20);
              puVar9 = (undefined8 *)FUN_14014ff10(param_3,"SDL.texture.create.d3d12.texture_v",0);
              if (((puVar9 == (undefined8 *)0x0) ||
                  (iVar6 = (**(code **)*puVar9)(puVar9,&DAT_140e15530,plVar3), -1 < iVar6)) ||
                 (cVar4 = FUN_1403d7600("SDL.texture.create.d3d12.texture_v",iVar6), cVar4 != '\0'))
              {
                lVar10 = *plVar3;
                if (lVar10 == 0) {
                  local_f8 = &DAT_140e15530;
                  local_100 = 0;
                  local_108 = 0x400;
                  local_f0 = plVar3;
                  iVar6 = (**(code **)(**(longlong **)(lVar2 + 0x30) + 0xd8))
                                    (*(longlong **)(lVar2 + 0x30),&local_8c,0,&local_78);
                  if (iVar6 < 0) goto LAB_14041d7d5;
                  lVar10 = *plVar3;
                }
                piVar8[0x24] = 0x400;
                uVar7 = parameter_s_is_invalid(param_2);
                FUN_14014faf0(uVar7,"SDL.texture.d3d12.texture_v",lVar10);
                lVar10 = FUN_140156650(param_2[4],param_2[1],param_2[2],8);
                *(longlong *)(piVar8 + 0x14) = lVar10;
                if (lVar10 != 0) {
                  iVar6 = *param_2;
                  goto LAB_14041d676;
                }
                goto LAB_14041d7ea;
              }
            }
            goto LAB_14041d717;
          }
LAB_14041d676:
          if (((iVar6 == 0x30313050) || (iVar6 == 0x3231564e)) || (iVar6 == 0x3132564e)) {
            *(undefined1 *)(piVar8 + 0x28) = 1;
            lVar10 = FUN_140156650(param_2[4],param_2[1],param_2[2],
                                   (*param_2 == 0x30313050) * '\x02' + '\b');
            *(longlong *)(piVar8 + 0x14) = lVar10;
            if (lVar10 == 0) {
LAB_14041d7ea:
              uVar5 = FUN_1400fbed0("Unsupported YUV colorspace");
              uVar11 = (ulonglong)uVar5;
              goto LAB_14041db7a;
            }
            iVar6 = *param_2;
          }
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_b0 = 0x1688;
          if (iVar6 < 0x30313050) {
            if (iVar6 < 0x16572004) {
              if (iVar6 == 0x16161804) {
                local_b8 = (uint)(*(int *)(param_1 + 0x1f0) == 0x12000500) * 5 + 0x58;
              }
              else {
                if (iVar6 != 0x16362004) goto LAB_14041dbcf;
                local_b8 = (uint)(*(int *)(param_1 + 0x1f0) == 0x12000500) * 4 + 0x57;
              }
            }
            else if (iVar6 == 0x16572004) {
              local_b8 = 0x18;
            }
            else {
              local_b8 = 10;
              if (iVar6 != 0x1a204008) goto LAB_14041dbcf;
            }
          }
          else if (iVar6 < 0x3231564e) {
            if (iVar6 != 0x30313050) {
              if (iVar6 == 0x3132564e) goto LAB_14041d866;
              goto LAB_14041dbcf;
            }
            local_b8 = 0x38;
          }
          else if (((iVar6 == 0x3231564e) || (iVar6 == 0x32315659)) || (iVar6 == 0x56555949)) {
LAB_14041d866:
            local_b8 = 0x3d;
          }
          else {
LAB_14041dbcf:
            local_b8 = 0;
          }
          uStack_b4 = 4;
          lStack_a8 = (uStack_60 >> 0x30) << 0x20;
          puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0x2c0) + 0x2238);
          if (puVar9 == (undefined8 *)0x0) {
            FUN_1400fbed0("[d3d12] Cannot allocate more than %d textures!",0x4000);
            uVar12 = 0x4001;
          }
          else {
            uVar12 = *puVar9;
            *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x2238) = puVar9[1];
          }
          *(undefined8 *)(piVar8 + 8) = uVar12;
          (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x48))
                    (*(longlong **)(lVar2 + 0x80),piVar8 + 4);
          *(ulonglong *)(piVar8 + 4) =
               (ulonglong)*(uint *)(lVar2 + 0x88) * *(longlong *)(piVar8 + 8) +
               *(longlong *)(piVar8 + 4);
          (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x90))
                    (*(longlong **)(lVar2 + 0x30),*(undefined8 *)(piVar8 + 2),&local_b8);
          uVar13 = (undefined7)((ulonglong)param_1 >> 8);
          if ((char)piVar8[0x16] == '\x01') {
            (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x48))
                      (*(longlong **)(lVar2 + 0x80),piVar8 + 0x1a);
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2c0) + 0x2238);
            if (plVar3 == (longlong *)0x0) {
              FUN_1400fbed0("[d3d12] Cannot allocate more than %d textures!",0x4000);
              lVar10 = 0x4001;
            }
            else {
              lVar10 = *plVar3;
              *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x2238) = plVar3[1];
            }
            *(longlong *)(piVar8 + 0x1e) = lVar10;
            *(ulonglong *)(piVar8 + 0x1a) =
                 (ulonglong)*(uint *)(lVar2 + 0x88) * lVar10 + *(longlong *)(piVar8 + 0x1a);
            (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x90))
                      (*(longlong **)(lVar2 + 0x30),*(undefined8 *)(piVar8 + 0x18),&local_b8);
            (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x48))
                      (*(longlong **)(lVar2 + 0x80),piVar8 + 0x22);
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2c0) + 0x2238);
            if (plVar3 == (longlong *)0x0) {
              FUN_1400fbed0("[d3d12] Cannot allocate more than %d textures!",0x4000);
              lVar10 = 0x4001;
            }
            else {
              lVar10 = *plVar3;
              *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x2238) = plVar3[1];
            }
            *(longlong *)(piVar8 + 0x26) = lVar10;
            *(ulonglong *)(piVar8 + 0x22) =
                 (ulonglong)*(uint *)(lVar2 + 0x88) * lVar10 + *(longlong *)(piVar8 + 0x22);
            (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x90))
                      (*(longlong **)(lVar2 + 0x30),*(undefined8 *)(piVar8 + 0x20),&local_b8);
            if ((char)piVar8[0x28] != '\x01') goto LAB_14041db1b;
LAB_14041d950:
            local_c8 = uStack_98;
            local_d8 = lStack_a8;
            uStack_cc = uStack_a0._4_4_;
            local_e8 = local_b8;
            uStack_e4 = uStack_b4;
            uStack_e0 = uStack_b0;
            iVar6 = *param_2;
            iVar14 = 0x31;
            if (((iVar6 != 0x3231564e) && (iVar6 != 0x3132564e)) &&
               (iVar14 = local_e8, iVar6 == 0x30313050)) {
              iVar14 = 0x23;
            }
            local_e8 = iVar14;
            uStack_d0 = 1;
            (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x48))
                      (*(longlong **)(lVar2 + 0x80),piVar8 + 0x2a);
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2c0) + 0x2238);
            if (plVar3 == (longlong *)0x0) {
              FUN_1400fbed0("[d3d12] Cannot allocate more than %d textures!",0x4000);
              lVar10 = 0x4001;
            }
            else {
              lVar10 = *plVar3;
              *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x2238) = plVar3[1];
            }
            *(longlong *)(piVar8 + 0x2c) = lVar10;
            *(ulonglong *)(piVar8 + 0x2a) =
                 (ulonglong)*(uint *)(lVar2 + 0x88) * lVar10 + *(longlong *)(piVar8 + 0x2a);
            (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x90))
                      (*(longlong **)(lVar2 + 0x30),*(undefined8 *)(piVar8 + 2),&local_e8);
            bVar1 = *(byte *)(param_2 + 7);
          }
          else {
            if ((char)piVar8[0x28] == '\x01') goto LAB_14041d950;
LAB_14041db1b:
            bVar1 = *(byte *)(param_2 + 7);
          }
          uVar11 = CONCAT71(uVar13,1);
          if ((bVar1 & 2) != 0) {
            uVar11 = CONCAT71(uVar13,1);
            uStack_e0 = 0;
            local_d8 = 0;
            local_e8 = (int)local_58;
            uStack_e4 = 4;
            (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x48))
                      (*(longlong **)(lVar2 + 0x78),piVar8 + 10);
            *(ulonglong *)(piVar8 + 10) =
                 (ulonglong)*(uint *)(lVar2 + 0x70) * *(longlong *)(piVar8 + 8) +
                 *(longlong *)(piVar8 + 10);
            (**(code **)(**(longlong **)(lVar2 + 0x30) + 0xa0))
                      (*(longlong **)(lVar2 + 0x30),*(undefined8 *)(piVar8 + 2),&local_e8);
          }
        }
      }
LAB_14041db7a:
      if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_128)) {
        return uVar11 & 0xffffffff;
      }
      goto LAB_14041dbd6;
    }
LAB_14041d7a9:
    uVar11 = FUN_1400fbed0("Device lost and couldn\'t be recovered");
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_128)) {
    return uVar11;
  }
LAB_14041dbd6:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_128);
}

