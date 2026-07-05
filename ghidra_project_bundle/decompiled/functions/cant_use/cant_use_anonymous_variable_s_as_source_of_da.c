/**
 * Function: cant_use_anonymous_variable_s_as_source_of_da
 * Address:  140399dc0
 * Signature: undefined cant_use_anonymous_variable_s_as_source_of_da(void)
 * Body size: 5464 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
cant_use_anonymous_variable_s_as_source_of_da(undefined8 param_1,longlong param_2,longlong param_3)

{
  Decoration<__int64> *this;
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int *piVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  short *psVar20;
  void *pvVar21;
  int *piVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  int iVar26;
  undefined1 *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong *puVar31;
  longlong lVar32;
  int *piVar33;
  longlong lVar34;
  undefined1 *puVar35;
  longlong lVar36;
  bool bVar37;
  ulonglong uVar38;
  ulonglong *puVar39;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  uint local_25c;
  longlong local_258;
  int *local_250;
  ulonglong local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  int local_224;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  longlong local_200;
  longlong local_1f8;
  ulonglong *local_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  Decoration<__int64> *local_1b8;
  byte local_1b0;
  undefined7 uStack_1af;
  undefined1 local_1a0 [2];
  undefined2 local_19e;
  undefined1 *local_60;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_288;
  uVar11 = *(uint *)(param_3 + 0x30);
  local_238 = param_1;
  if (*(longlong *)(param_3 + 0x138) == 0) {
    if ((uVar11 & 0x806000) == 0x802000) goto LAB_140399e0e;
LAB_140399e5b:
    local_240 = *(longlong *)(param_3 + 0x10);
    memset(&local_1b0,0,0x168);
    FUN_1403b27c0(0,(Decoration<__int64> *)(param_2 + 0x230),0x30);
    local_60 = local_1a0;
    local_19e = 0xffff;
    local_1b8 = (Decoration<__int64> *)(param_2 + 0x230);
    FUN_1403b27e0();
    this = (Decoration<__int64> *)(param_2 + 0x220);
    FUN_1403b27c0(0,this,0x18);
    lVar16 = *(longlong *)(param_3 + 0x10);
    lVar28 = (longlong)*(char *)(param_3 + 0x35);
    *(byte *)(param_3 + 0x33) = *(byte *)(param_3 + 0x33) | 4;
    local_258 = param_3;
    local_210 = param_2;
    if (lVar28 < 1) {
      local_250 = (int *)0x0;
      local_248 = CONCAT71(local_248._1_7_,1);
      local_230 = CONCAT44(local_230._4_4_,0x4000000);
    }
    else {
      local_200 = param_2 + 0x1c0;
      lVar34 = 0;
      local_250 = (int *)0x0;
      local_224 = 0;
      iVar26 = 0;
      uVar11 = 0;
      local_208 = 0;
      local_230 = 0;
      local_218 = lVar16;
      local_1f8 = lVar28;
      do {
        uVar14 = *(ulonglong *)(lVar16 + 0x18 + lVar34 * 0x48) & 0xffffffffffffff;
        if (uVar14 == 0x140) {
          if (iVar26 == 0) {
            uVar11 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
          }
          iVar26 = iVar26 + 1;
        }
        else if (uVar14 == 0x141) {
          iVar26 = iVar26 + -1;
          if (iVar26 == 0) {
            local_25c = uVar11;
            iVar10 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
            iVar26 = 0;
            uVar11 = local_25c;
            uVar30 = local_25c;
            if ((int)local_25c < iVar10) {
              do {
                lVar15 = FUN_1403b30a0(this,0x18);
                *(undefined1 *)(lVar15 + 1) = 1;
                uVar30 = uVar30 + 1;
                iVar10 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
                uVar11 = local_25c;
              } while ((int)uVar30 < iVar10);
            }
          }
        }
        else {
          local_248 = lVar34 * 0x48 + lVar16;
          puVar39 = (ulonglong *)(lVar34 * 0x48 + 0x18 + lVar16);
          local_25c = uVar11;
          lVar28 = FUN_14039b8c0(puVar39);
          local_1f0 = puVar39;
          if ((lVar28 == 0) || (bVar9 = FUN_140399c10(param_3,lVar28,this,0), bVar9 == 0xff)) {
            uVar1 = *(ushort *)(local_248 + 0x46);
            bVar9 = FUN_14039b8f0(puVar39);
            local_250 = (int *)(ulonglong)((int)local_250 + (uint)bVar9 + (uVar1 >> 3 & 2));
            bVar9 = 0xff;
          }
          uVar14 = local_248;
          param_3 = local_258;
          puVar39 = (ulonglong *)(lVar34 * 0x48 + 8 + lVar16);
          if ((*puVar39 & 0x400000000000000) != 0) {
            if ((*puVar39 & 0xffffffffffffff) == 0x110) {
              cVar6 = FUN_14039b880(local_248);
              lVar16 = local_218;
              if ((cVar6 != '\0') && (*(short *)(uVar14 + 0x42) == 1)) {
                FUN_140399c10(param_3,&DAT_141334ef1,this,0);
                lVar16 = local_218;
              }
            }
            else {
              lVar28 = FUN_14039b8c0(puVar39);
              if (lVar28 == 0) {
                bVar9 = FUN_14039b8f0(puVar39);
                local_250 = (int *)(ulonglong)((int)local_250 + (uint)bVar9);
              }
              else {
                local_220 = lVar28;
                bVar5 = FUN_14038dff0(param_3,lVar28,0);
                if ((bVar5 != 0xff && bVar5 != bVar9) ||
                   (bVar5 = FUN_140399c10(param_3,local_220,this,0), bVar5 != 0xff)) {
                  local_220 = CONCAT71(local_220._1_7_,bVar5);
                  puVar35 = (undefined1 *)FUN_1403b30a0(this,0x18,bVar5 - 1);
                  if (*(longlong *)(puVar35 + 0x10) == 0) {
                    *puVar35 = 2;
                    local_224 = local_224 + 1;
                  }
                  bVar9 = *(byte *)(local_248 + 0x44);
                  if (((*(uint *)(param_3 + 0x44) & (uint)(1L << (bVar9 & 0x3f))) != 0) &&
                     (puVar35[1] != '\0')) {
                    local_268 = *(undefined8 *)(puVar35 + 8);
                    FUN_140399630(0xfffffffd,
                                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/query/compiler/compiler.c"
                                  ,0xdb,
                                  "can\'t use anonymous variable \'%s\' as source of data term");
LAB_14039b346:
                    uVar19 = 0xffffffff;
                    goto LAB_14039b34b;
                  }
                  lVar28 = *(longlong *)(param_3 + 0x110);
                  if (lVar28 == 0) {
                    uVar19 = FUN_140391250(local_200,(int)*(char *)(param_3 + 0x36));
                    lVar28 = FUN_140391620(uVar19,"ecs_var_id_t");
                    *(longlong *)(param_3 + 0x110) = lVar28;
                    bVar9 = *(byte *)(local_248 + 0x44);
                  }
                  *(undefined1 *)(lVar28 + (char)bVar9) = (undefined1)local_220;
                }
              }
            }
          }
          puVar31 = (ulonglong *)(lVar34 * 0x48 + 0x28 + lVar16);
          lVar28 = FUN_14039b8c0(puVar31);
          if ((lVar28 == 0) || (cVar6 = FUN_140399c10(param_3,lVar28,this,0), cVar6 == -1)) {
            bVar9 = FUN_14039b8f0(puVar31);
            local_250 = (int *)(ulonglong)((int)local_250 + (uint)bVar9);
            uVar14 = *puVar39;
          }
          else {
            uVar14 = *puVar39;
          }
          if (((uVar14 & 0x400000000000000) != 0) && ((*puVar31 & 0x400000000000000) != 0)) {
            local_250 = (int *)(ulonglong)
                               ((int)local_250 +
                               (uint)((*(ushort *)(local_248 + 0x46) >> 2 & 1) != 0));
          }
          if (((*(byte *)(local_248 + 0x47) & 1) != 0) &&
             (lVar28 = FUN_14039b8c0(puVar39), lVar28 != 0)) {
            FUN_140399c10(param_3,lVar28,this,0);
          }
          bVar9 = (byte)local_208 | (*puVar39 & 0xffffffffffffff) == 0x110;
          local_208 = CONCAT71((int7)((ulonglong)local_208 >> 8),bVar9);
          local_230 = CONCAT71((int7)((ulonglong)local_230 >> 8),
                               (byte)local_230 |
                               ((((*puVar31 & 0x400000000000000) == 0 ||
                                 (*puVar31 & 0xffffffffffffff) != 0x110) &&
                                ((*local_1f0 & 0x400000000000000) == 0 ||
                                (*local_1f0 & 0xffffffffffffff) != 0x110)) | bVar9) ^ 1);
          lVar28 = local_1f8;
          uVar11 = local_25c;
        }
        lVar34 = lVar34 + 1;
      } while (lVar34 != lVar28);
      local_248 = CONCAT71(local_248._1_7_,local_224 == 0);
      local_230 = CONCAT44(local_230._4_4_,((byte)~(byte)local_230 & 1) << 0x1a);
    }
    iVar26 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
    iVar10 = 0;
    if (iVar26 < 1) {
      local_25c = 0;
    }
    else {
      local_25c = 0;
      do {
        lVar16 = FUN_1403b30a0(this,0x18,iVar10);
        if (*(longlong *)(lVar16 + 0x10) != 0) {
          pcVar17 = (char *)(*DAT_1415033b8)(*(undefined8 *)(lVar16 + 8));
          pcVar17[*(longlong *)(lVar16 + 0x10) + ~*(ulonglong *)(lVar16 + 8)] = '\0';
          uVar11 = FUN_14038dff0(param_3,pcVar17,1);
          cVar6 = (char)uVar11;
          if (cVar6 == -1) {
            uVar11 = 0xff;
            if ((char)local_248 == '\0') {
              iVar13 = 0;
              do {
                pcVar18 = (char *)FUN_1403b30a0(this,0x18,iVar13);
                if ((*pcVar18 == '\x02') &&
                   (iVar12 = strcmp(*(char **)(pcVar18 + 8),pcVar17), iVar12 == 0)) {
                  if ((char)iVar13 != -2) {
                    uVar11 = iVar13 + 1;
                    local_25c = 1;
                    cVar6 = -2;
                    goto LAB_14039a41e;
                  }
                  break;
                }
                iVar13 = iVar13 + 1;
              } while (iVar26 != iVar13);
            }
          }
          else {
LAB_14039a41e:
            *(char *)(lVar16 + 3) = cVar6;
          }
          cVar6 = FUN_14038dff0(param_3,pcVar17,0);
          if (cVar6 == -1) {
            puVar23 = &DAT_141334ef1;
            if ((byte)((char)uVar11 - 1U) < 0xfe) {
              lVar16 = FUN_1403b30a0(this,0x18,(uVar11 & 0xff) - 1);
              puVar23 = *(undefined **)(lVar16 + 8);
            }
            cVar6 = FUN_140399c10(param_3,puVar23,this,0);
            lVar16 = FUN_1403b30a0(this,0x18,iVar10);
          }
          *(char *)(lVar16 + 4) = cVar6;
          (*DAT_1415033b0)(pcVar17);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar26);
    }
    uVar11 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
    lVar16 = local_240;
    if ((char)local_248 == '\0') {
      uVar30 = 0;
      if ((int)uVar11 < 1) {
        cVar6 = '\0';
      }
      else {
        cVar6 = '\0';
        do {
          pcVar17 = (char *)FUN_1403b30a0(this,0x18,uVar30);
          if (*pcVar17 == '\x02') {
            *pcVar17 = '\0';
            uVar7 = FUN_140399c10(param_3,*(undefined8 *)(pcVar17 + 8),this,1);
            lVar28 = FUN_1403b30a0(this,0x18,uVar30);
            *(undefined1 *)(lVar28 + 3) = uVar7;
            cVar6 = cVar6 + '\x01';
          }
          uVar30 = uVar30 + 1;
        } while (uVar11 != uVar30);
      }
      uVar11 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
    }
    else {
      cVar6 = '\0';
    }
    if (((byte)local_25c & 0 < (int)uVar11) == 1) {
      uVar30 = 0;
      do {
        lVar28 = FUN_1403b30a0(this,0x18,uVar30);
        if (*(char *)(lVar28 + 3) == -2) {
          lVar34 = (*DAT_1415033b8)(*(undefined8 *)(lVar28 + 8));
          *(undefined1 *)(*(longlong *)(lVar28 + 0x10) + ~*(ulonglong *)(lVar28 + 8) + lVar34) = 0;
          uVar7 = FUN_14038dff0(local_258,lVar34,1);
          *(undefined1 *)(lVar28 + 3) = uVar7;
          (*DAT_1415033b0)(lVar34);
        }
        uVar30 = uVar30 + 1;
      } while (uVar11 != uVar30);
    }
    iVar26 = uVar11 + (int)local_250 + 1;
    puVar35 = &DAT_1414f64a0;
    if (1 < iVar26) {
      uVar19 = FUN_140391250(local_210 + 0x1c0,iVar26 * 0x20);
      puVar35 = (undefined1 *)FUN_140391500(uVar19);
    }
    lVar28 = local_258;
    *(undefined1 **)(local_258 + 0xa0) = puVar35;
    *(uint *)(local_258 + 0xa8) = uVar11 + 1;
    *(char *)(local_258 + 0x34) = (char)(uVar11 + 1);
    *(uint *)(local_258 + 0x30) = *(uint *)(local_258 + 0x30) & 0xfbffffff | (uint)local_230;
    *(int *)(local_258 + 0xac) = iVar26;
    if (puVar35 == &DAT_1414f64a0) {
      puVar27 = &DAT_14151f5c0;
      *(undefined **)(local_258 + 0x60) = &DAT_14151f5c0;
    }
    else {
      *puVar35 = 1;
      *(undefined8 *)(puVar35 + 8) = 0;
      *(undefined8 *)(puVar35 + 0x10) = 0;
      *(undefined2 *)(puVar35 + 2) = 0xff00;
      puVar27 = puVar35 + (longlong)iVar26 * 0x18;
      *(undefined8 *)(puVar35 + (longlong)iVar26 * 0x18) = 0;
      *(undefined1 **)(local_258 + 0x60) = puVar27;
    }
    if (uVar11 != 0) {
      pvVar21 = (void *)FUN_140106180(this);
      memcpy(puVar35 + 0x18,pvVar21,(longlong)(int)uVar11 * 0x18);
      if (0 < (int)uVar11) {
        if (uVar11 < 4) {
          uVar14 = 0;
        }
        else {
          puVar24 = (undefined8 *)(puVar35 + 0x20);
          uVar14 = 0;
          do {
            *(undefined8 *)(puVar27 + uVar14 * 8 + 8) = *puVar24;
            *(undefined8 *)(puVar27 + uVar14 * 8 + 0x10) = puVar24[3];
            *(undefined8 *)(puVar27 + uVar14 * 8 + 0x18) = puVar24[6];
            *(undefined8 *)(puVar27 + uVar14 * 8 + 0x20) = puVar24[9];
            uVar14 = uVar14 + 4;
            puVar24 = puVar24 + 0xc;
          } while ((uVar11 & 0x7ffffffc) != uVar14);
        }
        if ((ulonglong)(uVar11 & 3) != 0) {
          puVar24 = (undefined8 *)(puVar35 + uVar14 * 0x18 + 0x20);
          uVar38 = 0;
          do {
            *(undefined8 *)(puVar27 + uVar38 * 8 + uVar14 * 8 + 8) = *puVar24;
            uVar38 = uVar38 + 1;
            puVar24 = puVar24 + 3;
          } while ((uVar11 & 3) != uVar38);
        }
      }
    }
    *(char *)(lVar28 + 0x34) = *(char *)(lVar28 + 0x34) - cVar6;
    local_25c = (uint)*(char *)(lVar28 + 0x35);
    local_248 = (ulonglong)local_25c;
    if (*(char *)(lVar28 + 0x35) < '\x01') {
      lVar34 = *(longlong *)(lVar28 + 0x138);
      piVar33 = (int *)0x0;
      piVar22 = (int *)(lVar28 + 0x5c);
      piVar4 = local_250;
      uVar19 = local_238;
    }
    else {
      lVar34 = 0;
      do {
        if ((*(ulonglong *)(lVar16 + 8 + lVar34) & 0x200000000000000) != 0) {
          uStack_1e0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_1e8 = 0x3a;
          FUN_14038e0b0(&local_1e8,&local_1b8);
          iVar26 = *(int *)(lVar28 + 0x5c);
          uVar14 = local_248;
          goto joined_r0x00014039a806;
        }
        lVar34 = lVar34 + 0x48;
      } while (local_248 * 0x48 != lVar34);
      iVar26 = *(int *)(lVar28 + 0x5c);
      uVar14 = local_248;
joined_r0x00014039a806:
      lVar28 = lVar16;
      local_248 = uVar14;
      if (iVar26 != 2) {
        do {
          cVar6 = FUN_14039b920(local_258,lVar28);
          if ((cVar6 != '\0') ||
             ((*(ulonglong *)(lVar28 + 8) & 0x2ffffffffffffff) == 0x200000000000000)) {
            uStack_1e0 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1e8 = 0x3b;
            FUN_14038e0b0(&local_1e8,&local_1b8);
            break;
          }
          uVar14 = uVar14 - 1;
          lVar28 = lVar28 + 0x48;
        } while (uVar14 != 0);
      }
      uVar19 = local_238;
      lVar28 = local_258;
      cVar6 = *(char *)(local_258 + 0x35);
      if ((longlong)cVar6 < 1) {
        lVar34 = *(longlong *)(local_258 + 0x138);
        piVar33 = (int *)0x0;
        piVar22 = (int *)(local_258 + 0x5c);
        piVar4 = local_250;
      }
      else {
        lVar16 = *(longlong *)(local_258 + 0x10);
        piVar33 = (int *)0x0;
        uVar14 = 0;
        local_250 = (int *)(local_258 + 0x5c);
        do {
          if ((((*(short *)(lVar16 + 0x42) != 2) ||
               (((*(ulonglong *)(lVar16 + 0x18) & 0x400000000000000) == 0 ||
                 (*(ulonglong *)(lVar16 + 0x18) & 0xffffffffffffff) == 0x10f &&
                ((*(ulonglong *)(lVar16 + 0x28) & 0x400000000000000) == 0 ||
                 (*(ulonglong *)(lVar16 + 0x28) & 0xffffffffffffff) == 0x10f)))) &&
              ((*(byte *)(lVar16 + 0x46) & 0x80) == 0)) &&
             ((*(ulonglong *)(lVar16 + 8) & 0xffffffffffffff) != 0 &&
              (*(ulonglong *)(lVar16 + 8) & 0x200000000000000) != 0)) {
            iVar26 = member_without_parent_in_query(uVar19,lVar28,lVar16,&local_1b8);
            if (iVar26 != 0) {
              lVar34 = *(longlong *)(lVar28 + 0x138);
              piVar22 = local_250;
              piVar4 = local_250;
              lVar16 = local_240;
              goto joined_r0x00014039a982;
            }
            piVar33 = (int *)((ulonglong)piVar33 | 1L << (uVar14 & 0x3f));
          }
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 0x48;
        } while ((longlong)cVar6 != uVar14);
        lVar34 = *(longlong *)(lVar28 + 0x138);
        piVar22 = local_250;
        piVar4 = local_250;
        lVar16 = local_240;
      }
    }
joined_r0x00014039a982:
    local_250 = piVar33;
    piVar33 = local_250;
    uVar11 = local_25c;
    if (lVar34 != 0) {
      uVar14 = 0xffffffff;
      iVar26 = -1;
      if (*piVar22 == 1) {
        pcVar17 = (char *)(lVar28 + 0x35);
        if ((longlong)*pcVar17 < 1) goto LAB_14039aa55;
        plVar25 = (longlong *)(*(longlong *)(lVar28 + 0x10) + 0x38);
        uVar38 = 0;
        bVar37 = false;
        do {
          if ((((ulonglong)local_250 >> (uVar38 & 0x3f) & 1) == 0) &&
             ((*(ushort *)((longlong)plVar25 + 0xe) & 0x40) != 0)) {
            uVar29 = uVar14;
            if (*plVar25 == 0) {
              uVar29 = uVar38 & 0xffffffff;
            }
            if ((*(ushort *)((longlong)plVar25 + 0xe) & 0x2000) != 0) {
              uVar14 = uVar29;
            }
            bVar37 = (bool)(bVar37 | *plVar25 == 0x126);
            local_250 = (int *)((ulonglong)local_250 | 1L << ((byte)uVar38 & 0x3f));
            lVar28 = local_258;
          }
          iVar26 = (int)uVar14;
          uVar38 = uVar38 + 1;
          plVar25 = plVar25 + 9;
        } while ((longlong)*pcVar17 != uVar38);
      }
      else {
        if (*piVar22 == 2) {
          local_250 = (int *)0xffffffffffffffff;
        }
LAB_14039aa55:
        bVar37 = false;
      }
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1e0 = 0;
      local_1e8 = (ulonglong)(byte)(6 - ((*(uint *)(lVar28 + 0x30) & 0x2000000) == 0));
      FUN_14039b9d0(0,&uStack_1c0);
      FUN_14039b9e0(0,&local_1b8,0);
      FUN_14038e0b0(&local_1e8,&local_1b8);
      if (iVar26 != -1) {
        member_without_parent_in_query
                  (*(undefined8 *)(lVar28 + 0x88),lVar28,
                   (longlong)iVar26 * 0x48 + *(longlong *)(lVar28 + 0x10),&local_1b8);
      }
      uVar19 = local_238;
      lVar28 = local_258;
      piVar33 = local_250;
      lVar16 = local_240;
      uVar11 = local_25c;
      piVar4 = local_250;
      if ((bVar37) && (cVar6 = *(char *)(local_258 + 0x35), 0 < (longlong)cVar6)) {
        lVar34 = *(longlong *)(local_258 + 0x10);
        lVar15 = 0;
        uVar14 = 0;
        do {
          lVar16 = local_258;
          if ((((((ulonglong)piVar33 >> (uVar14 & 0x3f) & 1) != 0) &&
               ((*(byte *)(lVar34 + 0x46 + lVar15) & 0x40) != 0)) &&
              (*(longlong *)(lVar34 + 0x38 + lVar15) == 0x126)) &&
             ((sVar3 = *(short *)(lVar34 + 0x42 + lVar15), sVar3 == 3 || (sVar3 == 0)))) {
            uVar2 = *(undefined2 *)(*(longlong *)(local_258 + 0x10) + 0x42 + lVar15);
            *(undefined2 *)(*(longlong *)(local_258 + 0x10) + 0x42 + lVar15) = 0;
            member_without_parent_in_query
                      (*(undefined8 *)(local_258 + 0x88),local_258,
                       *(longlong *)(local_258 + 0x10) + lVar15,&local_1b8);
            *(undefined2 *)(*(longlong *)(lVar16 + 0x10) + 0x42 + lVar15) = uVar2;
            piVar33 = local_250;
            uVar11 = local_25c;
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0x48;
          uVar19 = local_238;
          lVar28 = local_258;
          lVar16 = local_240;
          piVar4 = local_250;
        } while ((longlong)cVar6 * 0x48 != lVar15);
      }
    }
    local_250 = piVar4;
    cVar6 = *(char *)(lVar28 + 0x35);
    if (cVar6 < '\x01' || (*(byte *)(lVar28 + 0x30) & 6) != 0) {
LAB_14039acea:
      if ('\0' < (char)uVar11) goto LAB_14039acf4;
LAB_14039ad2b:
      uVar14 = 0;
    }
    else {
      puVar24 = *(undefined8 **)(lVar28 + 0x10);
      uVar14 = 0;
      iVar26 = 0;
      uVar38 = 0;
      do {
        if (((((ulonglong)piVar33 >> (uVar14 & 0x3f) & 1) == 0) &&
            ((*(byte *)((longlong)puVar24 + 0x46) & 0x20) != 0)) &&
           (((longlong)puVar24[1] < -0x7800000000000000 &&
            (cVar8 = FUN_1403b31e0(*puVar24), cVar8 == '\0')))) {
          uVar38 = uVar38 | 1L << ((byte)uVar14 & 0x3f);
          iVar26 = iVar26 + 1;
        }
        uVar19 = local_238;
        lVar16 = local_240;
        lVar28 = local_258;
        uVar11 = local_25c;
        uVar14 = uVar14 + 1;
        puVar24 = puVar24 + 9;
      } while ((longlong)cVar6 != uVar14);
      if (1 < iVar26) {
        if ('\0' < (char)*(byte *)(local_258 + 0x35)) {
          uVar14 = 0;
          do {
            uVar29 = 0;
            if ((uVar38 >> (uVar14 & 0x3f) & 1) != 0) {
              uVar29 = 1L << ((byte)uVar14 & 0x3f);
            }
            piVar33 = (int *)((ulonglong)piVar33 | uVar29);
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(byte *)(local_258 + 0x35));
        }
        uStack_1e0 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1e8 = 4;
        local_1d8 = uVar38;
        FUN_14038e0b0(&local_1e8,&local_1b8);
        local_1b0 = local_1b0 | 1;
        goto LAB_14039acea;
      }
      if ((char)local_25c < '\x01') goto LAB_14039ad2b;
LAB_14039acf4:
      psVar20 = (short *)(lVar16 + 0x42);
      uVar14 = 0;
      do {
        if (*psVar20 != 3) goto LAB_14039ad3f;
        uVar14 = uVar14 + 1;
        psVar20 = psVar20 + 0x24;
      } while (local_248 != uVar14);
      uVar14 = (ulonglong)uVar11;
    }
LAB_14039ad3f:
    do {
      iVar26 = (int)uVar14;
      if (iVar26 < (int)uVar11) {
        uVar14 = uVar14 & 0xffffffff;
        do {
          while (iVar10 = (int)uVar14, ((ulonglong)piVar33 >> (uVar14 & 0x3f) & 1) == 0) {
            lVar34 = (longlong)iVar10 * 0x48 + lVar16;
            if ((iVar26 != 0) && (*(short *)(lVar34 + 0x42) == 3)) goto LAB_14039ad30;
            local_250 = piVar33;
            if ((*(short *)(lVar34 + 0x42) == 0) &&
               (((cVar6 = FUN_14039b980(lVar28,lVar34), cVar6 == '\0' &&
                 (CONCAT71(uStack_1af,local_1b0) != 0)) &&
                (cVar6 = FUN_14039b390(lVar28,lVar34,&local_1b8), cVar6 != '\0')))) {
              uVar30 = iVar10 + 1;
              uVar38 = (ulonglong)uVar30;
              cVar6 = *(char *)(lVar28 + 0x35);
              if ((int)uVar30 < (int)cVar6) {
                local_230 = (longlong)(int)uVar30;
                lVar36 = local_230 << 0x20;
                lVar15 = *(longlong *)(lVar28 + 0x10) + local_230 * 0x48;
                lVar32 = 0;
                piVar22 = local_250;
                local_248 = uVar38;
                do {
                  if (((((ulonglong)piVar22 >> ((ulonglong)(uint)((int)uVar38 + (int)lVar32) & 0x3f)
                        & 1) == 0) && (*(short *)(lVar15 + 0x42) == 0)) &&
                     ((cVar8 = FUN_14039b980(local_258,lVar15), piVar22 = local_250,
                      uVar38 = local_248, cVar8 == '\0' &&
                      (((*(byte *)(lVar15 + 0x46) & 0x80) == 0 &&
                       (cVar8 = FUN_14039b390(local_258,lVar15,&local_1b8), piVar22 = local_250,
                       uVar38 = local_248, cVar8 == '\0')))))) {
                    uVar19 = local_238;
                    lVar28 = local_258;
                    lVar16 = local_240;
                    uVar11 = local_25c;
                    if (local_230 + lVar32 != -1) {
                      iVar13 = iVar10 + (int)lVar32;
                      lVar34 = (lVar36 >> 0x20) * 0x48 + *(longlong *)(local_258 + 0x10);
                      iVar10 = iVar10 + -1;
                      uVar14 = (ulonglong)(iVar13 + 1);
                    }
                    break;
                  }
                  lVar36 = lVar36 + 0x100000000;
                  lVar32 = lVar32 + 1;
                  lVar15 = lVar15 + 0x48;
                  uVar19 = local_238;
                  lVar28 = local_258;
                  lVar16 = local_240;
                  uVar11 = local_25c;
                } while ((iVar10 - cVar6) + 1 + (int)lVar32 != 0);
              }
            }
            iVar13 = member_without_parent_in_query(uVar19,lVar28,lVar34,&local_1b8);
            if (iVar13 != 0) goto LAB_14039b346;
            piVar33 = (int *)((ulonglong)local_250 | 1L << (uVar14 & 0x3f));
            uVar14 = (ulonglong)(iVar10 + 1U);
            if ((int)uVar11 <= (int)(iVar10 + 1U)) goto LAB_14039ad30;
          }
          uVar14 = (ulonglong)(iVar10 + 1U);
        } while ((int)(iVar10 + 1U) < (int)uVar11);
      }
LAB_14039ad30:
      uVar14 = 0;
    } while (iVar26 != 0);
    if (((char)uVar11 == '\x01') &&
       (iVar26 = _anon_C953E3F2::Decoration<__int64>::vfunction3(local_1b8), iVar26 != 0)) {
      pcVar17 = (char *)FUN_1403b30b0(local_1b8,0x30);
      if (*pcVar17 == '*') {
        cVar6 = '5';
      }
      else {
        if (*pcVar17 != '+') goto LAB_14039af74;
        cVar6 = '6';
      }
      *pcVar17 = cVar6;
    }
LAB_14039af74:
    bVar9 = FUN_14038dff0(lVar28,&DAT_141334ef1,0);
    if ((bVar9 != 0xff) && ((CONCAT71(uStack_1af,local_1b0) >> ((ulonglong)bVar9 & 0x3f) & 1) != 0))
    {
      uStack_1e0 = 0;
      local_1d8 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1e8 = 0x839;
      uStack_1d0 = (ulonglong)bVar9;
      FUN_14038e0b0(&local_1e8,&local_1b8);
    }
    if ((*(longlong *)(lVar28 + 0xa0) != 0) && (0 < *(int *)(lVar28 + 0xa8))) {
      lVar16 = 0;
      lVar34 = 0;
      do {
        lVar28 = *(longlong *)(lVar28 + 0xa0);
        if (((*(char *)(lVar28 + 2 + lVar16) != '\0') && (*(char *)(lVar28 + lVar16) == '\x01')) &&
           (lVar15 = *(longlong *)(lVar28 + 8 + lVar16), lVar15 != 0)) {
          uVar11 = FUN_14038dff0(local_258,lVar15,0);
          cVar6 = FUN_14039b9b0(uVar11,CONCAT71(uStack_1af,local_1b0));
          if ((cVar6 == '\0') &&
             (*(char *)(*(longlong *)(local_258 + 0xa0) + 1 + ((ulonglong)uVar11 & 0xff) * 0x18) ==
              '\0')) {
            FUN_14038e2e0(*(undefined1 *)(lVar28 + 2 + lVar16),(ulonglong)uVar11,&local_1b8,0);
          }
        }
        lVar34 = lVar34 + 1;
        lVar16 = lVar16 + 0x18;
        lVar28 = local_258;
      } while (lVar34 < *(int *)(local_258 + 0xa8));
    }
    lVar34 = local_210;
    lVar16 = local_258;
    if ((*(longlong *)(lVar28 + 0x110) != 0) && (cVar6 = *(char *)(local_258 + 0x36), '\0' < cVar6))
    {
      lVar28 = 0;
      do {
        uVar14 = (ulonglong)*(byte *)(*(longlong *)(local_258 + 0x110) + lVar28);
        if (uVar14 != 0) {
          if (*(char *)(*(longlong *)(local_258 + 0xa0) + 1 + uVar14 * 0x18) != '\x01') {
            uStack_1e0 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1e8 = 0x38;
            FUN_14038e0b0(&local_1e8,&local_1b8);
            cVar6 = *(char *)(lVar16 + 0x36);
            break;
          }
          cVar8 = *(char *)(local_258 + 0x35);
          if ('\0' < cVar8) {
            lVar15 = 0x44;
            lVar32 = 0;
            do {
              if (lVar28 == *(char *)(*(longlong *)(local_258 + 0x10) + lVar15)) {
                *(undefined2 *)(*(longlong *)(local_258 + 0x10) + -4 + lVar15) = 1;
                cVar8 = *(char *)(local_258 + 0x35);
              }
              lVar32 = lVar32 + 1;
              lVar15 = lVar15 + 0x48;
            } while (lVar32 < cVar8);
            cVar6 = *(char *)(local_258 + 0x36);
          }
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 < cVar6);
      lVar16 = local_258;
      if ('\0' < cVar6) {
        lVar28 = 0;
        do {
          lVar15 = *(longlong *)(lVar16 + 0x110);
          bVar9 = *(byte *)(lVar15 + lVar28);
          uVar14 = (ulonglong)bVar9;
          if (uVar14 != 0) {
            if (*(char *)(*(longlong *)(lVar16 + 0xa0) + uVar14 * 0x18) == '\x01') {
              bVar9 = FUN_14038dff0(lVar16,*(undefined8 *)
                                            (*(longlong *)(lVar16 + 0xa0) + uVar14 * 0x18 + 8),0);
              lVar15 = *(longlong *)(lVar16 + 0x110);
            }
            *(byte *)(lVar15 + lVar28) = bVar9;
            cVar6 = *(char *)(lVar16 + 0x36);
          }
          lVar28 = lVar28 + 1;
        } while (lVar28 < cVar6);
      }
    }
    lVar16 = local_258;
    if (local_4c == local_25c) {
      FUN_1403b27e0(local_1b8);
      uStack_1e0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0x40;
      FUN_14038e0b0(&local_1e8,&local_1b8);
      lVar16 = local_258;
    }
    else {
      if ((*(byte *)(local_258 + 0x30) & 0x80) == 0) {
        FUN_14039b510(local_258,&local_1b8);
      }
      uStack_1e0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1e8 = 0x3f;
      FUN_14038e0b0(&local_1e8,&local_1b8);
    }
    iVar26 = _anon_C953E3F2::Decoration<__int64>::vfunction3(local_1b8);
    uVar19 = 0;
    if (iVar26 == 0) goto LAB_14039b34b;
    *(int *)(lVar16 + 0x120) = iVar26;
    uVar19 = FUN_140391250(lVar34 + 0x1c0,iVar26 * 0x30);
    uVar19 = FUN_140391500(uVar19,"ecs_query_op_t");
    *(undefined8 *)(lVar16 + 0x118) = uVar19;
    pvVar21 = (void *)FUN_140106180(local_1b8);
    memcpy(*(void **)(lVar16 + 0x118),pvVar21,(longlong)iVar26 * 0x30);
  }
  else {
    if ((uVar11 & 0x42000000) != 0x2000000) goto LAB_140399e5b;
LAB_140399e0e:
    *(undefined1 *)(param_3 + 0x34) = 1;
    *(undefined8 *)(param_3 + 0xa8) = 0x100000001;
    *(undefined1 **)(param_3 + 0xa0) = &DAT_1414f64a0;
    *(undefined **)(param_3 + 0x60) = &DAT_14151f5c0;
    *(uint *)(param_3 + 0x30) = uVar11 | 0x4000000;
  }
  uVar19 = 0;
LAB_14039b34b:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_288)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_288);
  }
  return uVar19;
}

