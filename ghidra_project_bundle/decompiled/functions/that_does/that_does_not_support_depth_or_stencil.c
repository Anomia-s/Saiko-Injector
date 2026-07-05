/**
 * Function: that_does_not_support_depth_or_stencil
 * Address:  140518430
 * Signature: undefined8 * __thiscall that_does_not_support_depth_or_stencil(void * this, undefined8 * param_1, longlong param_2)
 * Body size: 4559 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall
that_does_not_support_depth_or_stencil(void *this,undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  undefined8 *******pppppppuVar12;
  uint uVar13;
  __uint64 _Var14;
  void *pvVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte local_190 [12];
  uint local_184;
  longlong local_180 [2];
  undefined1 local_170 [8];
  basic_streambuf<char,std::char_traits<char>_> local_168 [3];
  longlong *local_150;
  longlong *local_148 [3];
  longlong *local_130;
  ulonglong *local_128;
  int *local_118;
  ulonglong local_100;
  uint local_f8;
  ios_base local_e8 [6];
  uint local_84;
  void *local_80;
  uint local_74;
  undefined8 *local_70;
  undefined8 *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  pplVar10 = local_148;
  local_48 = 0xfffffffffffffffe;
  local_80 = this;
  local_70 = param_1;
  if (*(longlong **)(param_2 + 0x108) == (longlong *)0x0) {
    local_74 = 0;
    local_84 = 0;
    uVar13 = 0;
    uVar17 = 0;
LAB_1405185c4:
    if (*(longlong *)(param_2 + 0x100) != 0) {
      lVar4 = param_2 + 8;
      _Var14 = 0;
      do {
        if (*(longlong **)(lVar4 + -8) == (longlong *)0x0) {
          FUN_1401e87c0(local_180,1);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_170,"Color attachment ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,_Var14);
          FUN_1400e5ec0(pbVar9," is NULL");
          local_68 = (undefined8 *******)0x0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
            if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
              pplVar10 = &local_150;
              uVar11 = *local_130 + (longlong)*local_118;
              goto LAB_140518d2f;
            }
          }
          else {
            if (uVar11 < local_100) {
              uVar11 = local_100;
            }
LAB_140518d2f:
            pvVar15 = (void *)**pplVar10;
            if (pvVar15 != (void *)0x0) {
              uVar11 = uVar11 - (longlong)pvVar15;
              if (uVar11 < 0x10) {
                local_58 = uVar11;
                memmove(&local_68,pvVar15,uVar11);
                *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
              }
              else {
                FUN_1400069b0(&local_68,uVar11);
              }
            }
          }
          pppppppuVar12 = local_68;
          if (local_50 < 0x10) {
            pppppppuVar12 = &local_68;
          }
          (**(code **)(**(longlong **)((longlong)local_80 + 0x18) + 8))
                    (*(longlong **)((longlong)local_80 + 0x18),2,pppppppuVar12);
          goto LAB_14051952a;
        }
        puVar3 = (uint *)(**(code **)(**(longlong **)(lVar4 + -8) + 0x28))();
        if (*(char *)((longlong)puVar3 + 0x41) == '\0') {
          FUN_1401e87c0(local_180,1);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_170,"Color attachment  ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,_Var14);
          uVar5 = FUN_1400e5ec0(pbVar9," texture ");
          uVar6 = FUN_140527b30(puVar3 + 8);
          uVar5 = FUN_1400e5ec0(uVar5,uVar6);
          FUN_1400e5ec0(uVar5," must be created with isRenderTarget = true");
          local_68 = (undefined8 *******)0x0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
            if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
              pplVar10 = &local_150;
              uVar11 = *local_130 + (longlong)*local_118;
              goto LAB_140518d85;
            }
          }
          else {
            if (uVar11 < local_100) {
              uVar11 = local_100;
            }
LAB_140518d85:
            pvVar15 = (void *)**pplVar10;
            if (pvVar15 != (void *)0x0) {
              uVar11 = uVar11 - (longlong)pvVar15;
              if (uVar11 < 0x10) {
                local_58 = uVar11;
                memmove(&local_68,pvVar15,uVar11);
                *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
              }
              else {
                FUN_1400069b0(&local_68,uVar11);
              }
            }
          }
          pppppppuVar12 = local_68;
          if (local_50 < 0x10) {
            pppppppuVar12 = &local_68;
          }
          (**(code **)(**(longlong **)((longlong)local_80 + 0x18) + 8))
                    (*(longlong **)((longlong)local_80 + 0x18),2,pppppppuVar12);
          goto LAB_14051952a;
        }
        FUN_1406dfba0(lVar4,local_190,puVar3);
        uVar16 = *puVar3 >> (local_190[0] & 0x1f);
        uVar16 = uVar16 + (uVar16 == 0);
        uVar18 = puVar3[1] >> (local_190[0] & 0x1f);
        uVar18 = uVar18 + (uVar18 == 0);
        if ((((uVar17 == 0) || (uVar13 == 0)) || (local_84 == 0)) || (local_74 == 0)) {
          local_84 = local_184;
          local_74 = puVar3[5];
          uVar17 = uVar16;
          uVar13 = uVar18;
        }
        else if (((uVar17 != uVar16) || (uVar13 != uVar18)) ||
                ((local_84 != local_184 || (uVar16 = uVar17, uVar18 = uVar13, local_74 != puVar3[5])
                 ))) {
          FUN_1401e87c0(local_180,1);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_170,"Color attachment ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,_Var14);
          uVar5 = FUN_1400e5ec0(pbVar9," texture ");
          uVar6 = FUN_140527b30(puVar3 + 8);
          uVar5 = FUN_1400e5ec0(uVar5,uVar6);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(uVar5," has dimensions ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar16);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,"x");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar18);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9," with ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,local_184);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(pbVar9," array slice(s) and ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,local_74);
          uVar5 = FUN_1400e5ec0(pbVar9," sample(s), which do not match the dimensions of depth");
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(uVar5," or previous color attachments ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar17);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9,"x");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar13);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar9," with ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,local_84);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(pbVar9," array slice(s) and ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,local_74);
          FUN_1400e5ec0(pbVar9," sample(s)");
          local_68 = (undefined8 *******)0x0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
            if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
              pplVar10 = &local_150;
              uVar11 = *local_130 + (longlong)*local_118;
              goto LAB_1405190df;
            }
          }
          else {
            if (uVar11 < local_100) {
              uVar11 = local_100;
            }
LAB_1405190df:
            pvVar15 = (void *)**pplVar10;
            if (pvVar15 != (void *)0x0) {
              uVar11 = uVar11 - (longlong)pvVar15;
              if (uVar11 < 0x10) {
                local_58 = uVar11;
                memmove(&local_68,pvVar15,uVar11);
                *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
              }
              else {
                FUN_1400069b0(&local_68,uVar11);
              }
            }
          }
          pppppppuVar12 = local_68;
          if (local_50 < 0x10) {
            pppppppuVar12 = &local_68;
          }
          (**(code **)(**(longlong **)((longlong)local_80 + 0x18) + 8))
                    (*(longlong **)((longlong)local_80 + 0x18),2,pppppppuVar12);
          goto LAB_14051952a;
        }
        lVar7 = FUN_1406e0030((char)puVar3[7]);
        if ((*(byte *)(lVar7 + 0x13) & 1) == 0) {
          FUN_1401e87c0(local_180,1);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_170,"Color attachment ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,_Var14);
          uVar5 = FUN_1400e5ec0(pbVar9," texture ");
          uVar6 = FUN_140527b30(puVar3 + 8);
          uVar5 = FUN_1400e5ec0(uVar5,uVar6);
          uVar5 = FUN_1400e5ec0(uVar5," has a format ");
          uVar5 = FUN_1400e5ec0(uVar5,*(undefined8 *)(lVar7 + 8));
          FUN_1400e5ec0(uVar5," that does not have color or alpha channels");
          local_68 = (undefined8 *******)0x0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
            if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
              pplVar10 = &local_150;
              uVar11 = *local_130 + (longlong)*local_118;
              goto LAB_140518e92;
            }
          }
          else {
            if (uVar11 < local_100) {
              uVar11 = local_100;
            }
LAB_140518e92:
            pvVar15 = (void *)**pplVar10;
            if (pvVar15 != (void *)0x0) {
              uVar11 = uVar11 - (longlong)pvVar15;
              if (uVar11 < 0x10) {
                local_58 = uVar11;
                memmove(&local_68,pvVar15,uVar11);
                *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
              }
              else {
                FUN_1400069b0(&local_68,uVar11);
              }
            }
          }
          pppppppuVar12 = local_68;
          if (local_50 < 0x10) {
            pppppppuVar12 = &local_68;
          }
          (**(code **)(**(longlong **)((longlong)local_80 + 0x18) + 8))
                    (*(longlong **)((longlong)local_80 + 0x18),2,pppppppuVar12);
          goto LAB_14051952a;
        }
        if (1 < *(byte *)(lVar7 + 0x11)) {
          FUN_1401e87c0(local_180,1);
          pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(local_170,"Color attachment ");
          pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,_Var14);
          uVar5 = FUN_1400e5ec0(pbVar9," texture ");
          uVar6 = FUN_140527b30(puVar3 + 8);
          uVar5 = FUN_1400e5ec0(uVar5,uVar6);
          uVar5 = FUN_1400e5ec0(uVar5," has a format ");
          uVar5 = FUN_1400e5ec0(uVar5,*(undefined8 *)(lVar7 + 8));
          FUN_1400e5ec0(uVar5,
                        " that is block-compressed. Block-compressed formats are not supported for render targets."
                       );
          local_68 = (undefined8 *******)0x0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0xf;
          if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
            if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
              pplVar10 = &local_150;
              uVar11 = *local_130 + (longlong)*local_118;
              goto LAB_140518ee8;
            }
          }
          else {
            if (uVar11 < local_100) {
              uVar11 = local_100;
            }
LAB_140518ee8:
            pvVar15 = (void *)**pplVar10;
            if (pvVar15 != (void *)0x0) {
              uVar11 = uVar11 - (longlong)pvVar15;
              if (uVar11 < 0x10) {
                local_58 = uVar11;
                memmove(&local_68,pvVar15,uVar11);
                *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
              }
              else {
                FUN_1400069b0(&local_68,uVar11);
              }
            }
          }
          pppppppuVar12 = local_68;
          if (local_50 < 0x10) {
            pppppppuVar12 = &local_68;
          }
          (**(code **)(**(longlong **)((longlong)local_80 + 0x18) + 8))
                    (*(longlong **)((longlong)local_80 + 0x18),2,pppppppuVar12);
          goto LAB_14051952a;
        }
        _Var14 = _Var14 + 1;
        lVar4 = lVar4 + 0x20;
      } while (_Var14 < *(ulonglong *)(param_2 + 0x100));
    }
    if (*(longlong **)(param_2 + 0x128) == (longlong *)0x0) {
LAB_140518718:
      puVar2 = local_70;
      (**(code **)(**(longlong **)((longlong)local_80 + 0x10) + 0x130))
                (*(longlong **)((longlong)local_80 + 0x10),local_70,param_2);
      return puVar2;
    }
    lVar4 = (**(code **)(**(longlong **)(param_2 + 0x128) + 0x28))();
    if (*(char *)(lVar4 + 0x1c) == '\x01') {
      if (*(int *)(lVar4 + 0x14) == 1) {
        if (*(char *)(lVar4 + 0x44) != '\0') goto LAB_140518718;
        FUN_1401e87c0(local_180,1);
        uVar5 = FUN_1400e5ec0(local_170,"Shading rate attachment texture ");
        uVar6 = FUN_140527b30(lVar4 + 0x20);
        uVar5 = FUN_1400e5ec0(uVar5,uVar6);
        FUN_1400e5ec0(uVar5," must be created with isShadingRateSurface = true");
        local_68 = (undefined8 *******)0x0;
        uStack_60 = 0;
        local_58 = 0;
        local_50 = 0xf;
        if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
          if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
            pplVar10 = &local_150;
            uVar11 = *local_130 + (longlong)*local_118;
            goto LAB_14051926a;
          }
        }
        else {
          if (uVar11 < local_100) {
            uVar11 = local_100;
          }
LAB_14051926a:
          pvVar15 = (void *)**pplVar10;
          if (pvVar15 != (void *)0x0) {
            uVar11 = uVar11 - (longlong)pvVar15;
            if (uVar11 < 0x10) {
              local_58 = uVar11;
              memmove(&local_68,pvVar15,uVar11);
              *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
            }
            else {
              FUN_1400069b0(&local_68,uVar11);
            }
          }
        }
        pppppppuVar12 = local_68;
        if (local_50 < 0x10) {
          pppppppuVar12 = &local_68;
        }
        (**(code **)(**(longlong **)((longlong)local_80 + 0x18) + 8))
                  (*(longlong **)((longlong)local_80 + 0x18),2,pppppppuVar12);
        goto LAB_14051952a;
      }
      FUN_1401e87c0(local_180,1);
      uVar5 = FUN_1400e5ec0(local_170,"Shading rate attachment texture ");
      uVar6 = FUN_140527b30(lVar4 + 0x20);
      uVar5 = FUN_1400e5ec0(uVar5,uVar6);
      pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(uVar5," has a sample count ");
      pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar8,*(uint *)(lVar4 + 0x14));
      FUN_1400e5ec0(pbVar9," that is not 1");
      local_68 = (undefined8 *******)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
        if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
          pplVar10 = &local_150;
          uVar11 = *local_130 + (longlong)*local_118;
          goto LAB_140519135;
        }
      }
      else {
        if (uVar11 < local_100) {
          uVar11 = local_100;
        }
LAB_140519135:
        pvVar15 = (void *)**pplVar10;
        if (pvVar15 != (void *)0x0) {
          uVar11 = uVar11 - (longlong)pvVar15;
          if (uVar11 < 0x10) {
            local_58 = uVar11;
            memmove(&local_68,pvVar15,uVar11);
            *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
          }
          else {
            FUN_1400069b0(&local_68,uVar11);
          }
        }
      }
      pppppppuVar12 = local_68;
      if (local_50 < 0x10) {
        pppppppuVar12 = &local_68;
      }
      (**(code **)(**(longlong **)((longlong)local_80 + 0x18) + 8))
                (*(longlong **)((longlong)local_80 + 0x18),2,pppppppuVar12);
      goto LAB_14051952a;
    }
    lVar7 = FUN_1406e0030();
    FUN_1401e87c0(local_180,1);
    uVar5 = FUN_1400e5ec0(local_170,"Shading rate attachment texture ");
    uVar6 = FUN_140527b30(lVar4 + 0x20);
    uVar5 = FUN_1400e5ec0(uVar5,uVar6);
    uVar5 = FUN_1400e5ec0(uVar5," has a format ");
    uVar5 = FUN_1400e5ec0(uVar5,*(undefined8 *)(lVar7 + 8));
    FUN_1400e5ec0(uVar5," that is not R8_UINT");
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
      if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
        uVar11 = *local_130 + (longlong)*local_118;
        pvVar15 = (void *)*local_150;
        goto joined_r0x000140518bc2;
      }
    }
    else {
      if (uVar11 < local_100) {
        uVar11 = local_100;
      }
      pvVar15 = (void *)*local_148[0];
joined_r0x000140518bc2:
      if (pvVar15 != (void *)0x0) {
        uVar11 = uVar11 - (longlong)pvVar15;
        if (uVar11 < 0x10) {
          local_58 = uVar11;
          memmove(&local_68,pvVar15,uVar11);
          *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
        }
        else {
          FUN_1400069b0(&local_68,uVar11);
        }
      }
    }
    pppppppuVar12 = local_68;
    if (local_50 < 0x10) {
      pppppppuVar12 = &local_68;
    }
    (**(code **)(**(longlong **)((longlong)local_80 + 0x18) + 8))
              (*(longlong **)((longlong)local_80 + 0x18),2,pppppppuVar12);
    goto LAB_14051952a;
  }
  puVar3 = (uint *)(**(code **)(**(longlong **)(param_2 + 0x108) + 0x28))();
  FUN_1406dfba0(param_2 + 0x110,local_190,puVar3);
  uVar17 = *puVar3 >> (local_190[0] & 0x1f);
  uVar17 = uVar17 + (uVar17 == 0);
  uVar13 = puVar3[1] >> (local_190[0] & 0x1f);
  uVar13 = uVar13 + (uVar13 == 0);
  if (*(char *)((longlong)puVar3 + 0x41) != '\0') {
    local_84 = local_184;
    local_74 = puVar3[5];
    lVar4 = FUN_1406e0030((char)puVar3[7]);
    if (*(char *)(lVar4 + 0x12) == '\x03') goto LAB_1405185c4;
    FUN_1401e87c0(local_180,1);
    uVar5 = FUN_1400e5ec0(local_170,"Depth attachment texture ");
    uVar6 = FUN_140527b30(puVar3 + 8);
    uVar5 = FUN_1400e5ec0(uVar5,uVar6);
    uVar5 = FUN_1400e5ec0(uVar5," has a format ");
    uVar5 = FUN_1400e5ec0(uVar5,*(undefined8 *)(lVar4 + 8));
    FUN_1400e5ec0(uVar5," that does not support depth or stencil");
    local_68 = (undefined8 *******)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0xf;
    if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
      if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
        uVar11 = *local_130 + (longlong)*local_118;
        pvVar15 = (void *)*local_150;
        if (pvVar15 != (void *)0x0) goto LAB_14051886d;
      }
LAB_140518889:
      plVar1 = *(longlong **)((longlong)local_80 + 0x18);
    }
    else {
      if (uVar11 < local_100) {
        uVar11 = local_100;
      }
      pvVar15 = (void *)*local_148[0];
      if (pvVar15 == (void *)0x0) goto LAB_140518889;
LAB_14051886d:
      uVar11 = uVar11 - (longlong)pvVar15;
      if (0xf < uVar11) {
        FUN_1400069b0(&local_68,uVar11);
        goto LAB_140518889;
      }
      local_58 = uVar11;
      memmove(&local_68,pvVar15,uVar11);
      *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
      plVar1 = *(longlong **)((longlong)local_80 + 0x18);
    }
    pppppppuVar12 = local_68;
    if (local_50 < 0x10) {
      pppppppuVar12 = &local_68;
    }
    (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar12);
    goto LAB_14051952a;
  }
  FUN_1401e87c0(local_180,1);
  uVar5 = FUN_1400e5ec0(local_170,"Depth attachment texture ");
  uVar6 = FUN_140527b30(puVar3 + 8);
  uVar5 = FUN_1400e5ec0(uVar5,uVar6);
  FUN_1400e5ec0(uVar5," must be created with isRenderTarget = true");
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  if (((local_f8 & 0x22) == 2) || (uVar11 = *local_128, uVar11 == 0)) {
    if (((local_f8 & 4) == 0) && (*local_130 != 0)) {
      uVar11 = *local_130 + (longlong)*local_118;
      pvVar15 = (void *)*local_150;
      if (pvVar15 != (void *)0x0) goto LAB_140518803;
    }
LAB_14051881f:
    plVar1 = *(longlong **)((longlong)local_80 + 0x18);
  }
  else {
    if (uVar11 < local_100) {
      uVar11 = local_100;
    }
    pvVar15 = (void *)*local_148[0];
    if (pvVar15 == (void *)0x0) goto LAB_14051881f;
LAB_140518803:
    uVar11 = uVar11 - (longlong)pvVar15;
    if (0xf < uVar11) {
      FUN_1400069b0(&local_68,uVar11);
      goto LAB_14051881f;
    }
    local_58 = uVar11;
    memmove(&local_68,pvVar15,uVar11);
    *(undefined1 *)((longlong)&local_68 + uVar11) = 0;
    plVar1 = *(longlong **)((longlong)local_80 + 0x18);
  }
  pppppppuVar12 = local_68;
  if (local_50 < 0x10) {
    pppppppuVar12 = &local_68;
  }
  (**(code **)(*plVar1 + 8))(plVar1,2,pppppppuVar12);
LAB_14051952a:
  if (0xf < local_50) {
    uVar11 = local_50 + 1;
    pppppppuVar12 = local_68;
    if (0xfff < uVar11) {
      pppppppuVar12 = (undefined8 *******)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar12))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = local_50 + 0x28;
    }
    thunk_FUN_140b68ba8(pppppppuVar12,uVar11);
  }
  puVar2 = local_70;
  *local_70 = 0;
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((longlong)local_180 + (longlong)*(int *)(local_180[0] + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_180 + (longlong)*(int *)(local_180[0] + 4) + -4) =
       *(int *)(local_180[0] + 4) + -0x98;
  local_168[0] = (basic_streambuf<char,std::char_traits<char>_>)
                 &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_1401da8b0(local_168);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_168);
  std::ios_base::~ios_base(local_e8);
  return puVar2;
}

