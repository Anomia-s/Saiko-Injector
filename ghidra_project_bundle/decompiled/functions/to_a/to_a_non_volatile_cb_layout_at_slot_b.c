/**
 * Function: to_a_non_volatile_cb_layout_at_slot_b
 * Address:  140743620
 * Signature: undefined __thiscall to_a_non_volatile_cb_layout_at_slot_b(void * this)
 * Body size: 4577 bytes
 */


void __thiscall to_a_non_volatile_cb_layout_at_slot_b(void *this)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  bool bVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined4 extraout_var;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  ulonglong uVar17;
  ulonglong uVar18;
  char cVar19;
  void *pvVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  void *pvVar23;
  undefined2 uVar24;
  longlong lVar25;
  int *piVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined2 *puVar29;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  longlong *local_1c8 [3];
  basic_streambuf<char,std::char_traits<char>_> bStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 *local_190;
  longlong *local_178;
  ulonglong *local_170;
  int *local_160;
  ulonglong local_148;
  uint local_140;
  ios_base local_130 [6];
  longlong local_c8;
  int *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_90;
  void *local_88;
  longlong *local_80;
  undefined2 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  lVar14 = *(longlong *)((longlong)this + 0x10);
  lVar25 = *(longlong *)(lVar14 + 0x108);
  if (lVar25 != 0) {
    puVar28 = (undefined4 *)(lVar14 + 0xa8);
    local_90 = (longlong)this + 0xb8;
    do {
      uVar2 = *puVar28;
      for (plVar12 = *(longlong **)((longlong)this + 0x18);
          plVar12 != *(longlong **)((longlong)this + 0x20); plVar12 = plVar12 + 5) {
        if (((char)plVar12[2] == '\n') && ((int)plVar12[1] == puVar28[1])) {
          plVar12 = (longlong *)*plVar12;
          local_1c8[0] = plVar12;
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
          pplVar5 = *(longlong ***)((longlong)this + 0xc0);
          if (pplVar5 == *(longlong ***)((longlong)this + 200)) {
            FUN_1406f5260(local_90,pplVar5,local_1c8);
          }
          else {
            *pplVar5 = (longlong *)0x0;
            if (pplVar5 != local_1c8) {
              *pplVar5 = local_1c8[0];
              local_1c8[0] = (longlong *)0x0;
            }
            *(longlong *)((longlong)this + 0xc0) = *(longlong *)((longlong)this + 0xc0) + 8;
          }
          plVar6 = local_1c8[0];
          if (local_1c8[0] != (longlong *)0x0) {
            local_1c8[0] = (longlong *)0x0;
            (**(code **)(*plVar6 + 0x10))();
          }
          goto LAB_1407436a3;
        }
      }
      plVar12 = (longlong *)0x0;
LAB_1407436a3:
      lVar11 = *(longlong *)((longlong)this + 0xb0) * 0x10;
      *(undefined4 *)((longlong)this + lVar11 + 0x50) = uVar2;
      *(longlong **)((longlong)this + lVar11 + 0x58) = plVar12;
      *(longlong *)((longlong)this + 0xb0) = *(longlong *)((longlong)this + 0xb0) + 1;
      puVar28 = puVar28 + 4;
    } while (puVar28 != (undefined4 *)(lVar14 + lVar25 * 0x10 + 0xa8));
    lVar14 = *(longlong *)((longlong)this + 0x10);
  }
  if (0 < (int)*(uint *)(lVar14 + 0x5c)) {
    uVar10 = failed_to_grow_a_descriptor_heap
                       ((void *)(*(longlong *)((longlong)this + 0xf0) + 0x240),
                        *(uint *)(lVar14 + 0x5c));
    *(uint *)((longlong)this + 0x3c) = uVar10;
    lVar14 = *(longlong *)((longlong)this + 0x10);
    *(undefined4 *)((longlong)this + 0x44) = *(undefined4 *)(lVar14 + 0x54);
    *(undefined1 *)((longlong)this + 0x49) = 1;
    plVar12 = *(longlong **)(lVar14 + 0x78);
    local_80 = *(longlong **)(lVar14 + 0x80);
    if (plVar12 != local_80) {
      local_90 = (longlong)this + 0xb8;
      do {
        if (*(int *)((longlong)plVar12 + 4) != 0) {
          uVar27 = 0;
LAB_140743839:
          do {
            lVar14 = plVar12[1];
            nvrhi::d3d12::StaticDescriptorHeap::vfunction6
                      ((StaticDescriptorHeap *)(*(longlong *)((longlong)this + 0xf0) + 0x240),
                       &local_b8,uVar27 + uVar10 + *(int *)((longlong)plVar12 + 0x14));
            for (puVar13 = *(undefined8 **)((longlong)this + 0x18);
                puVar13 != *(undefined8 **)((longlong)this + 0x20); puVar13 = puVar13 + 5) {
              if ((*(char *)(puVar13 + 2) == '\v') &&
                 (*(int *)((longlong)puVar13 + 0xc) + *(int *)(puVar13 + 1) == (int)lVar14 + uVar27)
                 ) {
                plVar6 = (longlong *)*puVar13;
                local_1c8[0] = plVar6;
                if (plVar6 != (longlong *)0x0) {
                  (**(code **)(*plVar6 + 8))(plVar6);
                }
                pplVar5 = *(longlong ***)((longlong)this + 0xc0);
                if (pplVar5 == *(longlong ***)((longlong)this + 200)) {
                  FUN_1406f5260(local_90,pplVar5,local_1c8);
                }
                else {
                  *pplVar5 = (longlong *)0x0;
                  if (pplVar5 != local_1c8) {
                    *pplVar5 = local_1c8[0];
                    local_1c8[0] = (longlong *)0x0;
                  }
                  *(longlong *)((longlong)this + 0xc0) = *(longlong *)((longlong)this + 0xc0) + 8;
                }
                plVar9 = local_1c8[0];
                if (local_1c8[0] != (longlong *)0x0) {
                  local_1c8[0] = (longlong *)0x0;
                  (**(code **)(*plVar9 + 0x10))();
                }
                FUN_14053ff60(plVar6,local_b8);
                uVar27 = uVar27 + 1;
                if (uVar27 < *(uint *)((longlong)plVar12 + 4)) goto LAB_140743839;
                goto LAB_1407437e0;
              }
            }
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_1c8[2] = (longlong *)0x0;
            bStack_1b0 = (basic_streambuf<char,std::char_traits<char>_>)0x0;
            local_1c8[0] = (longlong *)0x0;
            local_1c8[1] = (longlong *)0x0;
            local_198 = 0;
            (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0xe8) + 0xb0))
                      ((longlong *)**(undefined8 **)((longlong)this + 0xe8),local_1c8,local_b8);
            uVar27 = uVar27 + 1;
          } while (uVar27 < *(uint *)((longlong)plVar12 + 4));
        }
LAB_1407437e0:
        plVar12 = plVar12 + 3;
      } while (plVar12 != local_80);
      lVar14 = *(longlong *)((longlong)this + 0x10);
    }
    FUN_14071d570(*(longlong *)((longlong)this + 0xf0) + 0x240,uVar10,*(undefined4 *)(lVar14 + 0x5c)
                 );
    lVar14 = *(longlong *)((longlong)this + 0x10);
  }
  if (0 < (int)*(uint *)(lVar14 + 0x58)) {
    uVar10 = failed_to_grow_a_descriptor_heap
                       ((void *)(*(longlong *)((longlong)this + 0xf0) + 0x180),
                        *(uint *)(lVar14 + 0x58));
    local_90 = CONCAT44(extraout_var,uVar10);
    *(uint *)((longlong)this + 0x38) = uVar10;
    lVar14 = *(longlong *)((longlong)this + 0x10);
    *(undefined4 *)((longlong)this + 0x40) = *(undefined4 *)(lVar14 + 0x50);
    *(undefined1 *)((longlong)this + 0x48) = 1;
    local_c0 = *(int **)(lVar14 + 0x68);
    local_68 = (longlong *)((longlong)this + 0xd0);
    local_c8 = (longlong)this + 0xb8;
    for (piVar26 = *(int **)(lVar14 + 0x60); piVar26 != local_c0; piVar26 = piVar26 + 6) {
      uVar10 = 0;
LAB_1407439cc:
      if (uVar10 < (uint)piVar26[1]) {
        iVar3 = piVar26[2];
        nvrhi::d3d12::StaticDescriptorHeap::vfunction6
                  ((StaticDescriptorHeap *)(*(longlong *)((longlong)this + 0xf0) + 0x180),&local_70,
                   uVar10 + (int)local_90 + piVar26[5]);
        lVar14 = *(longlong *)((longlong)this + 0x20) - *(longlong *)((longlong)this + 0x18);
        if (lVar14 != 0) {
          puVar28 = (undefined4 *)(*(longlong *)((longlong)this + 0x18) + 0x18);
          lVar25 = 0;
          do {
            if (puVar28[-3] + puVar28[-4] == iVar3 + uVar10) {
              uVar1 = *(undefined1 *)(puVar28 + -2);
              uVar24 = (undefined2)lVar25;
              switch(uVar1) {
              default:
                cVar19 = '\x03';
                iVar4 = *piVar26;
                if (iVar4 != 0) goto joined_r0x000140743a9e;
                plVar12 = *(longlong **)(puVar28 + -6);
                if (plVar12 == (longlong *)0x0) {
                  FUN_14072b800(local_70,*(undefined1 *)((longlong)puVar28 + -6),
                                *(undefined8 *)((longlong)this + 0xe8));
                  uVar10 = uVar10 + 1;
                  goto LAB_1407439cc;
                }
                local_218 = *puVar28;
                uStack_214 = puVar28[1];
                uStack_210 = puVar28[2];
                uStack_20c = puVar28[3];
                FUN_14072b890(plVar12,local_70,*(undefined1 *)((longlong)puVar28 + -6),&local_218,
                              uVar1);
                iVar3 = (int)plVar12[3];
                if (iVar3 == 0) {
                  puVar22 = *(undefined2 **)((longlong)this + 0xd8);
                  local_80 = plVar12;
                  if (puVar22 != *(undefined2 **)((longlong)this + 0xe0)) {
LAB_14074412a:
                    *puVar22 = uVar24;
                    goto LAB_14074412e;
                  }
                  puVar29 = (undefined2 *)((longlong)puVar22 - *local_68);
                  uVar17 = (longlong)puVar29 >> 1;
                  uVar18 = uVar17 + 1;
                  uVar21 = (uVar17 >> 1) + uVar17;
                  if (uVar21 <= uVar18) {
                    uVar21 = uVar18;
                  }
                  if ((uVar17 >> 1 ^ 0x7fffffffffffffff) < uVar17) {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  if ((longlong)uVar21 < 0) goto LAB_140744822;
                  if (uVar21 == 0) {
                    *puVar29 = uVar24;
                    local_88 = (void *)0x0;
                    if (puVar22 == *(undefined2 **)((longlong)this + 0xd8)) goto LAB_14074467e;
LAB_14074461b:
                    lVar14 = (longlong)puVar29 + (longlong)local_88;
                    memmove(local_88,*(void **)((longlong)this + 0xd0),
                            (longlong)puVar22 - (longlong)*(void **)((longlong)this + 0xd0));
                    memmove((void *)(lVar14 + 2),puVar22,
                            *(longlong *)((longlong)this + 0xd8) - (longlong)puVar22);
                    lVar14 = *local_68;
                  }
                  else {
                    local_78 = puVar22;
                    if (uVar21 < 0x800) {
                      local_88 = (void *)FUN_140b65d30(uVar21 * 2);
                      *(undefined2 *)((longlong)local_88 + (longlong)puVar29) = uVar24;
                      puVar22 = local_78;
                      if (local_78 != *(undefined2 **)((longlong)this + 0xd8)) goto LAB_14074461b;
                    }
                    else {
                      if (0x7fffffffffffffec < uVar21) goto LAB_140744822;
                      lVar14 = FUN_140b65d30(uVar21 * 2 + 0x27);
                      local_88 = (void *)(lVar14 + 0x27U & 0xffffffffffffffe0);
                      *(longlong *)((longlong)local_88 - 8) = lVar14;
                      *(undefined2 *)((longlong)local_88 + (longlong)puVar29) = uVar24;
                      puVar22 = local_78;
                      if (local_78 != *(undefined2 **)((longlong)this + 0xd8)) goto LAB_14074461b;
                    }
LAB_14074467e:
                    plVar12 = local_68;
                    memmove(local_88,(void *)*local_68,(longlong)puVar22 - *local_68);
                    lVar14 = *plVar12;
                  }
                  if (lVar14 != 0) {
                    uVar17 = *(longlong *)((longlong)this + 0xe0) - lVar14;
                    lVar25 = lVar14;
                    if (0xfff < uVar17) {
                      lVar25 = *(longlong *)(lVar14 + -8);
                      if (0x1f < (ulonglong)((lVar14 + -8) - lVar25)) goto LAB_140744827;
                      uVar17 = uVar17 + 0x27;
                    }
                    thunk_FUN_140b68ba8(lVar25,uVar17);
                  }
                  *(void **)((longlong)this + 0xd0) = local_88;
                  *(void **)((longlong)this + 0xd8) = (void *)((longlong)local_88 + uVar18 * 2);
                  pvVar20 = (void *)((longlong)local_88 + uVar21 * 2);
                  goto LAB_1407446e9;
                }
                uVar15 = *(undefined8 *)(*(longlong *)((longlong)this + 0xe8) + 0x58);
                uVar16 = 0x20;
LAB_140743dfb:
                local_80 = plVar12;
                doesnt_have_the_right_state_bits_required_0x(iVar3,uVar16,0,plVar12 + 6,uVar15);
                bVar8 = true;
                break;
              case 6:
              case 8:
                iVar4 = *piVar26;
                cVar19 = '\x04';
joined_r0x000140743a9e:
                if ((iVar4 == 1) && (cVar19 == '\x04')) {
                  plVar12 = *(longlong **)(puVar28 + -6);
                  if (plVar12 == (longlong *)0x0) {
                    FUN_14072ba60(local_70,*(undefined1 *)((longlong)puVar28 + -6),
                                  *(undefined8 *)((longlong)this + 0xe8));
                    *(undefined1 *)((longlong)this + 0x4a) = 1;
                    uVar10 = uVar10 + 1;
                    goto LAB_1407439cc;
                  }
                  local_208 = *puVar28;
                  uStack_204 = puVar28[1];
                  uStack_200 = puVar28[2];
                  uStack_1fc = puVar28[3];
                  FUN_14072ab30(plVar12,local_70,*(undefined1 *)((longlong)puVar28 + -6),&local_208,
                                uVar1);
                  iVar3 = (int)plVar12[3];
                  local_80 = plVar12;
                  if (iVar3 == 0) {
                    puVar22 = *(undefined2 **)((longlong)this + 0xd8);
                    if (puVar22 == *(undefined2 **)((longlong)this + 0xe0)) {
                      puVar29 = (undefined2 *)((longlong)puVar22 - *local_68);
                      uVar17 = (longlong)puVar29 >> 1;
                      uVar18 = uVar17 + 1;
                      uVar21 = (uVar17 >> 1) + uVar17;
                      if (uVar21 <= uVar18) {
                        uVar21 = uVar18;
                      }
                      if ((uVar17 >> 1 ^ 0x7fffffffffffffff) < uVar17) {
                        uVar21 = 0x7fffffffffffffff;
                      }
                      if ((longlong)uVar21 < 0) goto LAB_140744822;
                      if (uVar21 != 0) goto LAB_140743f54;
LAB_140744276:
                      *puVar29 = uVar24;
                      local_88 = (void *)0x0;
                      if (puVar22 != *(undefined2 **)((longlong)this + 0xd8)) goto LAB_140744291;
                      goto LAB_1407443cf;
                    }
LAB_1407440c7:
                    *puVar22 = uVar24;
                    *(longlong *)((longlong)this + 0xd8) = *(longlong *)((longlong)this + 0xd8) + 2;
                  }
                  else {
                    uVar15 = *(undefined8 *)(*(longlong *)((longlong)this + 0xe8) + 0x58);
                    plVar12 = plVar12 + 6;
                    uVar16 = 0;
LAB_140743c45:
                    doesnt_have_the_right_state_bits_required_0x(iVar3,0x40,uVar16,plVar12,uVar15);
                  }
                }
                else {
                  if (cVar19 == '\x01' && iVar4 == 0) {
                    plVar12 = *(longlong **)(puVar28 + -6);
                    local_1f8 = *puVar28;
                    uStack_1f4 = puVar28[1];
                    uStack_1f0 = puVar28[2];
                    uStack_1ec = puVar28[3];
                    FUN_140720ed0(plVar12,local_70,*(undefined1 *)((longlong)puVar28 + -6),
                                  *(undefined1 *)((longlong)puVar28 + -7),&local_1f8);
                    local_80 = plVar12;
                    if ((int)plVar12[3] != 0) {
                      bVar8 = true;
                      doesnt_have_the_right_state_bits_required_0x
                                ((int)plVar12[3],0x20,1,plVar12 + 8,
                                 *(undefined8 *)(*(longlong *)((longlong)this + 0xe8) + 0x58));
                      break;
                    }
                    puVar22 = *(undefined2 **)((longlong)this + 0xd8);
                    if (puVar22 != *(undefined2 **)((longlong)this + 0xe0)) goto LAB_14074412a;
                    puVar29 = (undefined2 *)((longlong)puVar22 - *local_68);
                    uVar17 = (longlong)puVar29 >> 1;
                    uVar18 = uVar17 + 1;
                    uVar21 = (uVar17 >> 1) + uVar17;
                    if (uVar21 <= uVar18) {
                      uVar21 = uVar18;
                    }
                    if ((uVar17 >> 1 ^ 0x7fffffffffffffff) < uVar17) {
                      uVar21 = 0x7fffffffffffffff;
                    }
                    if ((longlong)uVar21 < 0) goto LAB_140744822;
                    if (uVar21 == 0) {
                      *puVar29 = uVar24;
                      local_88 = (void *)0x0;
                      if (puVar22 == *(undefined2 **)((longlong)this + 0xd8)) goto LAB_140744594;
LAB_140744531:
                      lVar14 = (longlong)puVar29 + (longlong)local_88;
                      memmove(local_88,*(void **)((longlong)this + 0xd0),
                              (longlong)puVar22 - (longlong)*(void **)((longlong)this + 0xd0));
                      memmove((void *)(lVar14 + 2),puVar22,
                              *(longlong *)((longlong)this + 0xd8) - (longlong)puVar22);
                      lVar14 = *local_68;
                    }
                    else {
                      local_78 = puVar22;
                      if (uVar21 < 0x800) {
                        local_88 = (void *)FUN_140b65d30(uVar21 * 2);
                        *(undefined2 *)((longlong)local_88 + (longlong)puVar29) = uVar24;
                        puVar22 = local_78;
                        if (local_78 != *(undefined2 **)((longlong)this + 0xd8)) goto LAB_140744531;
                      }
                      else {
                        if (0x7fffffffffffffec < uVar21) goto LAB_140744822;
                        lVar14 = FUN_140b65d30(uVar21 * 2 + 0x27);
                        local_88 = (void *)(lVar14 + 0x27U & 0xffffffffffffffe0);
                        *(longlong *)((longlong)local_88 - 8) = lVar14;
                        *(undefined2 *)((longlong)local_88 + (longlong)puVar29) = uVar24;
                        puVar22 = local_78;
                        if (local_78 != *(undefined2 **)((longlong)this + 0xd8)) goto LAB_140744531;
                      }
LAB_140744594:
                      plVar12 = local_68;
                      memmove(local_88,(void *)*local_68,(longlong)puVar22 - *local_68);
                      lVar14 = *plVar12;
                    }
                    if (lVar14 != 0) {
                      uVar17 = *(longlong *)((longlong)this + 0xe0) - lVar14;
                      lVar25 = lVar14;
                      if (0xfff < uVar17) {
                        lVar25 = *(longlong *)(lVar14 + -8);
                        if (0x1f < (ulonglong)((lVar14 + -8) - lVar25)) goto LAB_140744827;
                        uVar17 = uVar17 + 0x27;
                      }
                      thunk_FUN_140b68ba8(lVar25,uVar17);
                    }
                    *(void **)((longlong)this + 0xd0) = local_88;
                    *(void **)((longlong)this + 0xd8) = (void *)((longlong)local_88 + uVar18 * 2);
                    pvVar20 = (void *)((longlong)local_88 + uVar21 * 2);
LAB_1407446e9:
                    *(void **)((longlong)this + 0xe0) = pvVar20;
                    bVar8 = true;
                    break;
                  }
                  if ((iVar4 != 1) || (cVar19 != '\x02')) {
                    if (iVar4 == 0 && cVar19 == '\f') {
                      local_80 = *(longlong **)(puVar28 + -6);
                      FUN_140735ba0(local_80,local_70);
                      puVar22 = *(undefined2 **)((longlong)this + 0xd8);
                      if (puVar22 != *(undefined2 **)((longlong)this + 0xe0)) {
                        *puVar22 = uVar24;
LAB_14074412e:
                        *(longlong *)((longlong)this + 0xd8) =
                             *(longlong *)((longlong)this + 0xd8) + 2;
                        bVar8 = true;
                        break;
                      }
                      puVar29 = (undefined2 *)((longlong)puVar22 - *local_68);
                      uVar18 = (longlong)puVar29 >> 1;
                      local_88 = (void *)(uVar18 + 1);
                      pvVar23 = (void *)((uVar18 >> 1) + uVar18);
                      if (pvVar23 <= local_88) {
                        pvVar23 = local_88;
                      }
                      if ((uVar18 >> 1 ^ 0x7fffffffffffffff) < uVar18) {
                        pvVar23 = (void *)0x7fffffffffffffff;
                      }
                      if ((longlong)pvVar23 < 0) goto LAB_140744822;
                      if (pvVar23 == (void *)0x0) {
                        pvVar20 = (void *)0x0;
                        *puVar29 = uVar24;
                        if (puVar22 != *(undefined2 **)((longlong)this + 0xd8)) goto LAB_14074414d;
LAB_1407441a5:
                        plVar12 = local_68;
                        memmove(pvVar20,(void *)*local_68,(longlong)puVar22 - *local_68);
                        lVar14 = *plVar12;
                      }
                      else {
                        if (pvVar23 < (void *)0x800) {
                          pvVar20 = (void *)FUN_140b65d30((longlong)pvVar23 * 2);
                          *(undefined2 *)((longlong)pvVar20 + (longlong)puVar29) = uVar24;
                          puVar7 = *(undefined2 **)((longlong)this + 0xd8);
                        }
                        else {
                          if ((void *)0x7fffffffffffffec < pvVar23) goto LAB_140744822;
                          lVar14 = FUN_140b65d30((longlong)pvVar23 * 2 + 0x27);
                          pvVar20 = (void *)(lVar14 + 0x27U & 0xffffffffffffffe0);
                          *(longlong *)((longlong)pvVar20 - 8) = lVar14;
                          *(undefined2 *)((longlong)pvVar20 + (longlong)puVar29) = uVar24;
                          puVar7 = *(undefined2 **)((longlong)this + 0xd8);
                        }
                        if (puVar22 == puVar7) goto LAB_1407441a5;
LAB_14074414d:
                        memmove(pvVar20,*(void **)((longlong)this + 0xd0),
                                (longlong)puVar22 - (longlong)*(void **)((longlong)this + 0xd0));
                        memmove((void *)((longlong)puVar29 + (longlong)pvVar20 + 2),puVar22,
                                *(longlong *)((longlong)this + 0xd8) - (longlong)puVar22);
                        lVar14 = *local_68;
                      }
                      if (lVar14 != 0) {
                        uVar18 = *(longlong *)((longlong)this + 0xe0) - lVar14;
                        lVar25 = lVar14;
                        if (0xfff < uVar18) {
                          lVar25 = *(longlong *)(lVar14 + -8);
                          if (0x1f < (ulonglong)((lVar14 + -8) - lVar25)) goto LAB_140744827;
                          uVar18 = uVar18 + 0x27;
                        }
                        thunk_FUN_140b68ba8(lVar25,uVar18);
                      }
                      *(void **)((longlong)this + 0xd0) = pvVar20;
                      *(void **)((longlong)this + 0xd8) =
                           (void *)((longlong)local_88 * 2 + (longlong)pvVar20);
                      pvVar20 = (void *)((longlong)pvVar23 * 2 + (longlong)pvVar20);
                      goto LAB_1407446e9;
                    }
                    if ((iVar4 == 2) && (cVar19 == '\t')) {
                      plVar12 = *(longlong **)(puVar28 + -6);
                      local_1d8 = *puVar28;
                      uStack_1d4 = puVar28[1];
                      uStack_1d0 = puVar28[2];
                      iStack_1cc = puVar28[3];
                      FUN_14072b760(plVar12,local_70,&local_1d8);
                      local_80 = plVar12;
                      if (*(char *)((longlong)plVar12 + 0x5b) != '\x01') {
                        iVar3 = (int)plVar12[3];
                        if (iVar3 != 0) {
                          uVar15 = *(undefined8 *)(*(longlong *)((longlong)this + 0xe8) + 0x58);
                          uVar16 = 2;
                          goto LAB_140743dfb;
                        }
                        local_1c8[0] = (longlong *)CONCAT62(local_1c8[0]._2_6_,uVar24);
                        puVar22 = *(undefined2 **)((longlong)this + 0xd8);
                        if (puVar22 == *(undefined2 **)((longlong)this + 0xe0)) {
                          FUN_14005f020(local_68,puVar22,local_1c8);
                          bVar8 = true;
                          break;
                        }
                        *puVar22 = uVar24;
                        goto LAB_14074412e;
                      }
                      FUN_1401e87c0(local_1c8,1);
                      uVar15 = FUN_1400e5ec0(local_1c8 + 2,
                                             "Attempted to bind a volatile constant buffer ");
                      uVar16 = FUN_140527b30(local_80 + 6);
                      uVar15 = FUN_1400e5ec0(uVar15,uVar16);
                      this_00 = (basic_ostream<char,std::char_traits<char>_> *)
                                FUN_1400e5ec0(uVar15," to a non-volatile CB layout at slot b");
                      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                (this_00,puVar28[-4]);
                      uVar15 = *(undefined8 *)((longlong)this + 0xe8);
                      local_b8 = 0;
                      uStack_b0 = 0;
                      local_a8 = 0;
                      local_a0 = 0xf;
                      if (((local_140 & 0x22) == 2) || (uVar18 = *local_170, uVar18 == 0)) {
                        if (((local_140 & 4) == 0) && (*local_178 != 0)) {
                          uVar18 = *local_178 + (longlong)*local_160;
                          pvVar20 = *(void **)CONCAT44(uStack_194,local_198);
                          goto joined_r0x00014074408c;
                        }
                      }
                      else {
                        if (uVar18 < local_148) {
                          uVar18 = local_148;
                        }
                        pvVar20 = (void *)*local_190;
joined_r0x00014074408c:
                        if (pvVar20 != (void *)0x0) {
                          uVar18 = uVar18 - (longlong)pvVar20;
                          if (uVar18 < 0x10) {
                            local_a8 = uVar18;
                            memmove(&local_b8,pvVar20,uVar18);
                            *(undefined1 *)((longlong)&local_b8 + uVar18) = 0;
                          }
                          else {
                            FUN_1400069b0(&local_b8,uVar18);
                          }
                        }
                      }
                      FUN_14053e350(uVar15,&local_b8);
                      if (0xf < local_a0) {
                        uVar18 = local_a0 + 1;
                        lVar14 = local_b8;
                        if (0xfff < uVar18) {
                          lVar14 = *(longlong *)(local_b8 + -8);
                          if (0x1f < (ulonglong)((local_b8 + -8) - lVar14)) goto LAB_140744827;
                          uVar18 = local_a0 + 0x28;
                        }
                        thunk_FUN_140b68ba8(lVar14,uVar18);
                      }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
                      *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable
                        **)((longlong)local_1c8 + (longlong)*(int *)((longlong)local_1c8[0] + 4)) =
                           &std::
                            basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                            vftable;
                      *(int *)((longlong)&iStack_1cc +
                              (longlong)*(int *)((longlong)local_1c8[0] + 4)) =
                           *(int *)((longlong)local_1c8[0] + 4) + -0x98;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
                      bStack_1b0 = (basic_streambuf<char,std::char_traits<char>_>)
                                   &std::
                                    basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
                                    ::vftable;
                      FUN_1401da8b0(&bStack_1b0);
                      std::basic_streambuf<char,std::char_traits<char>_>::
                      ~basic_streambuf<char,std::char_traits<char>_>(&bStack_1b0);
                      std::ios_base::~ios_base(local_130);
                      bVar8 = false;
                      break;
                    }
                    if ((iVar4 != 1) || (cVar19 != '\x0e')) goto LAB_140743a30;
                    plVar12 = *(longlong **)(puVar28 + -6);
                    if (plVar12 != (longlong *)0x0) {
                      local_80 = plVar12;
                      FUN_140725a80(plVar12,local_70);
                      goto LAB_140744447;
                    }
                    goto LAB_140744777;
                  }
                  plVar12 = *(longlong **)(puVar28 + -6);
                  local_1e8 = *puVar28;
                  uStack_1e4 = puVar28[1];
                  uStack_1e0 = puVar28[2];
                  uStack_1dc = puVar28[3];
                  has_unsupported_dimension_for_uav
                            (plVar12,local_70,*(undefined1 *)((longlong)puVar28 + -6),
                             *(undefined1 *)((longlong)puVar28 + -7),&local_1e8);
                  iVar3 = (int)plVar12[3];
                  local_80 = plVar12;
                  if (iVar3 != 0) {
                    uVar15 = *(undefined8 *)(*(longlong *)((longlong)this + 0xe8) + 0x58);
                    plVar12 = plVar12 + 8;
                    uVar16 = 1;
                    goto LAB_140743c45;
                  }
                  puVar22 = *(undefined2 **)((longlong)this + 0xd8);
                  if (puVar22 != *(undefined2 **)((longlong)this + 0xe0)) goto LAB_1407440c7;
                  puVar29 = (undefined2 *)((longlong)puVar22 - *local_68);
                  uVar17 = (longlong)puVar29 >> 1;
                  uVar18 = uVar17 + 1;
                  uVar21 = (uVar17 >> 1) + uVar17;
                  if (uVar21 <= uVar18) {
                    uVar21 = uVar18;
                  }
                  if ((uVar17 >> 1 ^ 0x7fffffffffffffff) < uVar17) {
                    uVar21 = 0x7fffffffffffffff;
                  }
                  if ((longlong)uVar21 < 0) goto LAB_140744822;
                  if (uVar21 == 0) goto LAB_140744276;
LAB_140743f54:
                  local_78 = puVar22;
                  if (uVar21 < 0x800) {
                    local_88 = (void *)FUN_140b65d30(uVar21 * 2);
                    *(undefined2 *)((longlong)local_88 + (longlong)puVar29) = uVar24;
                    puVar22 = local_78;
                    if (local_78 == *(undefined2 **)((longlong)this + 0xd8)) goto LAB_1407443cf;
LAB_140744291:
                    lVar14 = (longlong)puVar29 + (longlong)local_88;
                    memmove(local_88,*(void **)((longlong)this + 0xd0),
                            (longlong)puVar22 - (longlong)*(void **)((longlong)this + 0xd0));
                    memmove((void *)(lVar14 + 2),puVar22,
                            *(longlong *)((longlong)this + 0xd8) - (longlong)puVar22);
                    lVar14 = *local_68;
                  }
                  else {
                    if (0x7fffffffffffffec < uVar21) {
LAB_140744822:
                    /* WARNING: Subroutine does not return */
                      std::bad_array_new_length::bad_array_new_length();
                    }
                    lVar14 = FUN_140b65d30(uVar21 * 2 + 0x27);
                    local_88 = (void *)(lVar14 + 0x27U & 0xffffffffffffffe0);
                    *(longlong *)((longlong)local_88 - 8) = lVar14;
                    *(undefined2 *)((longlong)local_88 + (longlong)puVar29) = uVar24;
                    puVar22 = local_78;
                    if (local_78 != *(undefined2 **)((longlong)this + 0xd8)) goto LAB_140744291;
LAB_1407443cf:
                    plVar12 = local_68;
                    memmove(local_88,(void *)*local_68,(longlong)puVar22 - *local_68);
                    lVar14 = *plVar12;
                  }
                  if (lVar14 != 0) {
                    uVar17 = *(longlong *)((longlong)this + 0xe0) - lVar14;
                    lVar25 = lVar14;
                    if (0xfff < uVar17) {
                      lVar25 = *(longlong *)(lVar14 + -8);
                      if (0x1f < (ulonglong)((lVar14 + -8) - lVar25)) {
LAB_140744827:
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                      uVar17 = uVar17 + 0x27;
                    }
                    thunk_FUN_140b68ba8(lVar25,uVar17);
                  }
                  *(void **)((longlong)this + 0xd0) = local_88;
                  *(void **)((longlong)this + 0xd8) = (void *)((longlong)local_88 + uVar18 * 2);
                  *(void **)((longlong)this + 0xe0) = (void *)((longlong)local_88 + uVar21 * 2);
                }
LAB_140744447:
                *(undefined1 *)((longlong)this + 0x4a) = 1;
                bVar8 = true;
              }
              local_1c8[0] = local_80;
              (**(code **)(*local_80 + 8))();
              pplVar5 = *(longlong ***)((longlong)this + 0xc0);
              if (pplVar5 == *(longlong ***)((longlong)this + 200)) {
                FUN_1406f5260(local_c8,pplVar5,local_1c8);
              }
              else {
                *pplVar5 = (longlong *)0x0;
                if (pplVar5 != local_1c8) {
                  *pplVar5 = local_1c8[0];
                  local_1c8[0] = (longlong *)0x0;
                }
                *(longlong *)((longlong)this + 0xc0) = *(longlong *)((longlong)this + 0xc0) + 8;
              }
              plVar12 = local_1c8[0];
              if (local_1c8[0] != (longlong *)0x0) {
                local_1c8[0] = (longlong *)0x0;
                (**(code **)(*plVar12 + 0x10))();
              }
              if (bVar8) goto LAB_1407439ca;
              break;
            }
LAB_140743a30:
            lVar25 = lVar25 + 1;
            puVar28 = puVar28 + 10;
          } while ((lVar14 >> 3) * -0x3333333333333333 - lVar25 != 0);
        }
LAB_140744777:
        iVar3 = *piVar26;
        if (iVar3 == 2) {
          (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0xe8) + 0x88))
                    ((longlong *)**(undefined8 **)((longlong)this + 0xe8),0,local_70);
          uVar10 = uVar10 + 1;
        }
        else if (iVar3 == 1) {
          FUN_14072ba60(local_70,0,*(undefined8 *)((longlong)this + 0xe8));
          uVar10 = uVar10 + 1;
        }
        else if (iVar3 == 0) {
          FUN_14072b800(local_70,0,*(undefined8 *)((longlong)this + 0xe8));
          uVar10 = uVar10 + 1;
        }
        else {
          httplib::ClientImpl::vfunction4();
LAB_1407439ca:
          uVar10 = uVar10 + 1;
        }
        goto LAB_1407439cc;
      }
    }
    FUN_14071d570(*(longlong *)((longlong)this + 0xf0) + 0x180,local_90,
                  *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x58));
  }
  return;
}

