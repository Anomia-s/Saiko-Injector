/**
 * Function: cant_change_yuv_plane_types_in_place
 * Address:  14040ada0
 * Signature: undefined cant_change_yuv_plane_types_in_place(void)
 * Body size: 11305 bytes
 */


ulonglong cant_change_yuv_plane_types_in_place
                    (uint param_1,uint param_2,ulonglong param_3,int param_4,undefined8 param_5,
                    undefined1 (*param_6) [16],int param_7,int param_8,int param_9,
                    undefined8 param_10,undefined1 (*param_11) [16],int param_12)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  ulonglong uVar40;
  char cVar41;
  uint uVar42;
  undefined8 uVar43;
  ulonglong uVar44;
  undefined8 uVar45;
  char *pcVar46;
  undefined1 *puVar47;
  int iVar48;
  uint uVar49;
  int iVar50;
  undefined1 (*unaff_RBP) [16];
  undefined7 uVar53;
  ulonglong uVar51;
  byte *pbVar52;
  int iVar54;
  ulonglong uVar55;
  longlong lVar56;
  void *pvVar57;
  int iVar58;
  undefined1 *puVar59;
  byte *pbVar60;
  longlong lVar61;
  undefined1 *puVar62;
  void *pvVar63;
  undefined1 (*pauVar64) [16];
  byte *pbVar65;
  size_t sVar66;
  undefined1 (*pauVar67) [16];
  uint uVar68;
  longlong lVar69;
  byte *pbVar70;
  uint uVar71;
  longlong lVar72;
  bool bVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auStack_118 [32];
  undefined1 (*local_f8) [16];
  undefined1 **local_f0;
  byte **local_e8;
  byte **local_e0;
  uint *local_d8;
  uint *local_d0;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  uint local_94;
  ulonglong local_90;
  uint local_88;
  uint local_84;
  byte *local_80;
  byte *local_78;
  undefined1 *local_70;
  uint local_68;
  uint local_64;
  byte *local_60;
  byte *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  if (param_4 == param_9) {
    uVar44 = (ulonglong)param_2;
    uVar55 = (ulonglong)param_1;
    iVar48 = (int)param_3;
    uVar53 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if (iVar48 == param_8) {
      uVar51 = CONCAT71(uVar53,1);
      uVar40 = local_c0;
      if (param_6 == param_11) goto LAB_14040c235;
      if (iVar48 < 0x32595559) {
        if (iVar48 < 0x3231564e) {
          if ((iVar48 == 0x30313050) || (iVar48 == 0x3132564e)) {
LAB_14040b169:
            local_b8 = CONCAT44(local_b8._4_4_,iVar48);
            local_c0 = uVar55;
            if (param_2 != 0) {
              sVar66 = (size_t)(int)param_1;
              lVar69 = (longlong)param_7;
              lVar72 = (longlong)param_12;
              uVar42 = param_2 - 1;
              uVar49 = param_2;
              if ((param_2 & 3) != 0) {
                local_b0 = CONCAT44(local_b0._4_4_,uVar42);
                uVar49 = 0;
                do {
                  memcpy(param_11,param_6,sVar66);
                  param_6 = (undefined1 (*) [16])(*param_6 + lVar69);
                  param_11 = (undefined1 (*) [16])(*param_11 + lVar72);
                  uVar49 = uVar49 + 1;
                } while ((param_2 & 3) != uVar49);
                uVar51 = CONCAT71((uint7)(uint3)(uVar49 >> 8),1);
                uVar49 = param_2 - uVar49;
                uVar42 = (uint)local_b0;
              }
              if (2 < uVar42) {
                do {
                  memcpy(param_11,param_6,sVar66);
                  memcpy(*param_11 + lVar72,*param_6 + lVar69,sVar66);
                  pvVar63 = (void *)((longlong)(*param_6 + lVar69) + lVar69);
                  pvVar57 = (void *)((longlong)(*param_11 + lVar72) + lVar72);
                  memcpy(pvVar57,pvVar63,sVar66);
                  pvVar63 = (void *)((longlong)pvVar63 + lVar69);
                  pvVar57 = (void *)((longlong)pvVar57 + lVar72);
                  memcpy(pvVar57,pvVar63,sVar66);
                  param_6 = (undefined1 (*) [16])((longlong)pvVar63 + lVar69);
                  param_11 = (undefined1 (*) [16])((longlong)pvVar57 + lVar72);
                  uVar49 = uVar49 - 4;
                } while (uVar49 != 0);
              }
            }
            iVar48 = (int)local_c0;
            uVar40 = local_c0;
            if ((int)local_b8 < 0x3231564e) {
              if ((int)local_b8 == 0x30313050) {
                if (2 < param_2 + 2) {
                  uVar42 = (int)((param_2 - ((int)(param_2 + 1) >> 0x1f)) + 1) >> 1;
                  sVar66 = (longlong)(int)((iVar48 - (iVar48 + 1 >> 0x1f)) + 1U & 0xfffffffe) * 2;
                  lVar72 = (longlong)(int)((param_7 - (param_7 + 1 >> 0x1f)) + 1U & 0xfffffffe);
                  lVar69 = (longlong)(int)((param_12 - (param_12 + 1 >> 0x1f)) + 1U & 0xfffffffe);
                  uVar49 = uVar42 - 1;
                  if ((uVar42 & 3) != 0) {
                    local_c0 = CONCAT44(local_c0._4_4_,uVar42 - 1);
                    uVar49 = 0;
                    do {
                      memcpy(param_11,param_6,sVar66);
                      param_6 = (undefined1 (*) [16])(*param_6 + lVar72);
                      param_11 = (undefined1 (*) [16])(*param_11 + lVar69);
                      uVar49 = uVar49 + 1;
                    } while ((uVar42 & 3) != uVar49);
                    uVar42 = uVar42 - uVar49;
                    uVar49 = (uint)local_c0;
                  }
                  uVar51 = 1;
                  uVar40 = local_c0;
                  if (2 < uVar49) {
                    do {
                      memcpy(param_11,param_6,sVar66);
                      memcpy(*param_11 + lVar69,*param_6 + lVar72,sVar66);
                      pvVar63 = (void *)((longlong)(*param_6 + lVar72) + lVar72);
                      pvVar57 = (void *)((longlong)(*param_11 + lVar69) + lVar69);
                      memcpy(pvVar57,pvVar63,sVar66);
                      pvVar63 = (void *)((longlong)pvVar63 + lVar72);
                      pvVar57 = (void *)((longlong)pvVar57 + lVar69);
                      memcpy(pvVar57,pvVar63,sVar66);
                      param_6 = (undefined1 (*) [16])((longlong)pvVar63 + lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)pvVar57 + lVar69);
                      uVar42 = uVar42 - 4;
                      uVar40 = local_c0;
                    } while (uVar42 != 0);
                  }
                }
              }
              else if ((int)local_b8 == 0x3132564e) goto LAB_14040b46c;
            }
            else if ((int)local_b8 == 0x3231564e) {
LAB_14040b46c:
              if (2 < param_2 + 2) {
                uVar42 = (int)((param_2 - ((int)(param_2 + 1) >> 0x1f)) + 1) >> 1;
                sVar66 = (size_t)(int)((iVar48 - (iVar48 + 1 >> 0x1f)) + 1U & 0xfffffffe);
                lVar72 = (longlong)(int)((param_7 - (param_7 + 1 >> 0x1f)) + 1U & 0xfffffffe);
                lVar69 = (longlong)(int)((param_12 - (param_12 + 1 >> 0x1f)) + 1U & 0xfffffffe);
                uVar49 = uVar42 - 1;
                if ((uVar42 & 3) != 0) {
                  local_c0 = CONCAT44(local_c0._4_4_,uVar42 - 1);
                  uVar49 = 0;
                  do {
                    memcpy(param_11,param_6,sVar66);
                    param_6 = (undefined1 (*) [16])(*param_6 + lVar72);
                    param_11 = (undefined1 (*) [16])(*param_11 + lVar69);
                    uVar49 = uVar49 + 1;
                  } while ((uVar42 & 3) != uVar49);
                  uVar42 = uVar42 - uVar49;
                  uVar49 = (uint)local_c0;
                }
                uVar51 = 1;
                uVar40 = local_c0;
                if (2 < uVar49) {
                  do {
                    memcpy(param_11,param_6,sVar66);
                    memcpy(*param_11 + lVar69,*param_6 + lVar72,sVar66);
                    pvVar63 = (void *)((longlong)(*param_6 + lVar72) + lVar72);
                    pvVar57 = (void *)((longlong)(*param_11 + lVar69) + lVar69);
                    memcpy(pvVar57,pvVar63,sVar66);
                    pvVar63 = (void *)((longlong)pvVar63 + lVar72);
                    pvVar57 = (void *)((longlong)pvVar57 + lVar69);
                    memcpy(pvVar57,pvVar63,sVar66);
                    param_6 = (undefined1 (*) [16])((longlong)pvVar63 + lVar72);
                    param_11 = (undefined1 (*) [16])((longlong)pvVar57 + lVar69);
                    uVar42 = uVar42 - 4;
                    uVar40 = local_c0;
                  } while (uVar42 != 0);
                }
              }
            }
            else if ((((int)local_b8 == 0x56555949) || ((int)local_b8 == 0x32315659)) &&
                    (2 < param_2 + 2)) {
              uVar42 = (param_2 - ((int)(param_2 + 1) >> 0x1f)) + 1;
              uVar68 = uVar42 & 0xfffffffe;
              sVar66 = (size_t)((iVar48 - (iVar48 + 1 >> 0x1f)) + 1 >> 1);
              lVar72 = (longlong)((param_7 - (param_7 + 1 >> 0x1f)) + 1 >> 1);
              lVar69 = (longlong)((param_12 - (param_12 + 1 >> 0x1f)) + 1 >> 1);
              uVar42 = uVar42 & 2;
              uVar49 = uVar68 - 1;
              if (uVar42 != 0) {
                local_c0 = CONCAT44(local_c0._4_4_,uVar68 - 1);
                uVar49 = 0;
                do {
                  memcpy(param_11,param_6,sVar66);
                  param_6 = (undefined1 (*) [16])(*param_6 + lVar72);
                  param_11 = (undefined1 (*) [16])(*param_11 + lVar69);
                  uVar49 = uVar49 + 1;
                } while (uVar42 != uVar49);
                uVar68 = uVar68 - uVar49;
                uVar49 = (uint)local_c0;
              }
              uVar51 = 1;
              uVar40 = local_c0;
              if (2 < uVar49) {
                do {
                  memcpy(param_11,param_6,sVar66);
                  memcpy(*param_11 + lVar69,*param_6 + lVar72,sVar66);
                  pvVar63 = (void *)((longlong)(*param_6 + lVar72) + lVar72);
                  pvVar57 = (void *)((longlong)(*param_11 + lVar69) + lVar69);
                  memcpy(pvVar57,pvVar63,sVar66);
                  pvVar63 = (void *)((longlong)pvVar63 + lVar72);
                  pvVar57 = (void *)((longlong)pvVar57 + lVar69);
                  memcpy(pvVar57,pvVar63,sVar66);
                  param_6 = (undefined1 (*) [16])((longlong)pvVar63 + lVar72);
                  param_11 = (undefined1 (*) [16])((longlong)pvVar57 + lVar69);
                  uVar68 = uVar68 - 4;
                  uVar40 = local_c0;
                } while (uVar68 != 0);
              }
            }
            goto LAB_14040c235;
          }
        }
        else if ((iVar48 == 0x3231564e) || (iVar48 == 0x32315659)) goto LAB_14040b169;
      }
      else if (iVar48 < 0x56555949) {
        if ((iVar48 == 0x32595559) || (iVar48 == 0x55595659)) {
LAB_14040b36b:
          if (param_2 != 0) {
            sVar66 = (size_t)(int)(((param_1 - ((int)(param_1 + 1) >> 0x1f)) + 1) * 2 & 0xfffffffc);
            lVar69 = (longlong)param_7;
            lVar72 = (longlong)param_12;
            uVar49 = param_2 - 1;
            if ((param_2 & 3) != 0) {
              local_c0 = CONCAT44(local_c0._4_4_,param_2 - 1);
              uVar49 = 0;
              do {
                memcpy(param_11,param_6,sVar66);
                param_6 = (undefined1 (*) [16])(*param_6 + lVar69);
                param_11 = (undefined1 (*) [16])(*param_11 + lVar72);
                uVar49 = uVar49 + 1;
              } while ((param_2 & 3) != uVar49);
              uVar44 = (ulonglong)(param_2 - uVar49);
              uVar49 = (uint)local_c0;
            }
            uVar51 = 1;
            uVar40 = local_c0;
            if (2 < uVar49) {
              do {
                memcpy(param_11,param_6,sVar66);
                memcpy(*param_11 + lVar72,*param_6 + lVar69,sVar66);
                pvVar57 = (void *)((longlong)(*param_6 + lVar69) + lVar69);
                pvVar63 = (void *)((longlong)(*param_11 + lVar72) + lVar72);
                memcpy(pvVar63,pvVar57,sVar66);
                pvVar57 = (void *)((longlong)pvVar57 + lVar69);
                pvVar63 = (void *)((longlong)pvVar63 + lVar72);
                memcpy(pvVar63,pvVar57,sVar66);
                param_6 = (undefined1 (*) [16])((longlong)pvVar57 + lVar69);
                param_11 = (undefined1 (*) [16])((longlong)pvVar63 + lVar72);
                uVar49 = (int)uVar44 - 4;
                uVar44 = (ulonglong)uVar49;
                uVar40 = local_c0;
              } while (uVar49 != 0);
            }
          }
          goto LAB_14040c235;
        }
      }
      else {
        if (iVar48 == 0x59565955) goto LAB_14040b36b;
        if (iVar48 == 0x56555949) goto LAB_14040b169;
      }
      uVar43 = FUN_140155460(param_3 & 0xffffffff);
      uVar44 = FUN_1400fbed0("SDL_ConvertPixels_YUV_to_YUV_Copy: Unsupported YUV format: %s",uVar43)
      ;
    }
    else {
      if (iVar48 < 0x32595559) {
        if (0x3231564d < iVar48) {
          if ((iVar48 == 0x3231564e) || (iVar48 == 0x32315659)) goto LAB_14040af26;
          goto LAB_14040c1fa;
        }
        if ((iVar48 != 0x30313050) && (iVar48 != 0x3132564e)) goto LAB_14040c1fa;
LAB_14040af26:
        if (param_8 < 0x3231564e) {
          if ((param_8 != 0x30313050) && (param_8 != 0x3132564e)) goto LAB_14040b626;
        }
        else if ((param_8 != 0x3231564e) && ((param_8 != 0x56555949 && (param_8 != 0x32315659)))) {
LAB_14040b626:
          if (iVar48 < 0x32315659) {
            local_c0 = uVar55;
            if (((iVar48 != 0x30313050) && (iVar48 != 0x3132564e)) && (iVar48 != 0x3231564e))
            goto LAB_14040c1fa;
          }
          else if (iVar48 < 0x55595659) {
            local_c0 = uVar55;
            if (iVar48 != 0x32315659) {
              if (iVar48 == 0x32595559) goto LAB_14040b667;
              goto LAB_14040c1fa;
            }
          }
          else {
            local_c0 = uVar55;
            if (iVar48 != 0x56555949) goto LAB_14040aeb7;
          }
LAB_14040bc71:
          if ((param_8 != 0x32595559) && ((param_8 != 0x59565955 && (param_8 != 0x55595659)))) {
            if ((iVar48 == 0x55595659) || (iVar48 == 0x32595559)) goto LAB_14040c09d;
            goto LAB_14040c1fa;
          }
          if (param_6 == param_11) {
LAB_14040c227:
            uVar49 = FUN_1400fbed0("Can\'t change YUV plane types in-place");
            uVar51 = (ulonglong)uVar49;
            uVar40 = local_c0;
          }
          else {
            local_d0 = &local_68;
            local_d8 = &local_64;
            local_e0 = &local_60;
            local_e8 = &local_58;
            local_f0 = &local_50;
            local_f8 = (undefined1 (*) [16])CONCAT44(local_f8._4_4_,param_7);
            local_c0 = uVar55;
            cVar41 = getyuvplanes2_unsupported_yuv_format_s(uVar55,uVar44,param_3,param_6);
            puVar47 = local_50;
            uVar49 = local_64;
            if (cVar41 == '\0') goto LAB_14040c223;
            iVar50 = (int)local_c0;
            if ((iVar48 == 0x3231564e) || (iVar48 == 0x3132564e)) {
              uVar42 = (iVar50 - (iVar50 + 1 >> 0x1f)) + 1U & 0xfffffffe;
              lVar69 = 2;
            }
            else {
              uVar42 = (iVar50 - (iVar50 + 1 >> 0x1f)) + 1 >> 1;
              lVar69 = 1;
            }
            uVar55 = (ulonglong)local_64;
            local_d0 = &local_88;
            local_d8 = &local_84;
            local_e0 = &local_80;
            local_e8 = &local_78;
            local_f0 = &local_70;
            local_f8 = (undefined1 (*) [16])CONCAT44(local_f8._4_4_,param_12);
            cVar41 = getyuvplanes2_unsupported_yuv_format_s(local_c0,uVar44,param_8,param_11);
            uVar51 = 0;
            uVar40 = local_c0;
            if (cVar41 != '\0') {
              iVar48 = param_2 - 1;
              local_b8 = CONCAT44(local_b8._4_4_,iVar48);
              uVar68 = (uint)local_c0;
              if (1 < (int)param_2) {
                puVar59 = puVar47 + uVar55;
                local_a8 = (ulonglong)(uVar49 - uVar68);
                iVar58 = local_84 - (((uVar68 - ((int)(uVar68 + 1) >> 0x1f)) + 1) * 2 & 0xfffffffc);
                pbVar65 = local_80 + local_88;
                pbVar70 = local_78 + local_88;
                puVar62 = local_70 + local_84;
                local_a0 = CONCAT44(local_a0._4_4_,uVar68) & 0xfffffffffffffffe;
                iVar50 = 0;
                do {
                  if ((int)uVar68 < 2) {
                    iVar54 = 0;
                  }
                  else {
                    lVar72 = 0;
                    do {
                      *local_70 = *local_50;
                      puVar47 = local_50 + 2;
                      local_70[2] = local_50[1];
                      local_70 = local_70 + 4;
                      *local_78 = *local_58;
                      *local_80 = *local_60;
                      *puVar62 = puVar59[lVar72];
                      puVar62[2] = puVar59[lVar72 + 1];
                      puVar62 = puVar62 + 4;
                      *pbVar70 = *local_58;
                      *pbVar65 = *local_60;
                      local_60 = local_60 + lVar69;
                      local_58 = local_58 + lVar69;
                      local_78 = local_78 + 4;
                      pbVar70 = pbVar70 + 4;
                      local_80 = local_80 + 4;
                      pbVar65 = pbVar65 + 4;
                      lVar72 = lVar72 + 2;
                      local_50 = puVar47;
                    } while ((int)lVar72 < (int)(uVar68 - 1));
                    puVar59 = puVar59 + lVar72;
                    iVar54 = (int)local_a0;
                  }
                  if (iVar54 == uVar68 - 1) {
                    uVar2 = *puVar47;
                    *local_70 = uVar2;
                    puVar47 = puVar47 + 1;
                    local_70[2] = uVar2;
                    local_70 = local_70 + 4;
                    *local_78 = *local_58;
                    *local_80 = *local_60;
                    uVar2 = *puVar59;
                    *puVar62 = uVar2;
                    puVar59 = puVar59 + 1;
                    puVar62[2] = uVar2;
                    puVar62 = puVar62 + 4;
                    *pbVar70 = *local_58;
                    *pbVar65 = *local_60;
                    local_58 = local_58 + lVar69;
                    local_60 = local_60 + lVar69;
                    local_78 = local_78 + 4;
                    pbVar70 = pbVar70 + 4;
                    local_80 = local_80 + 4;
                    pbVar65 = pbVar65 + 4;
                  }
                  uVar71 = local_64 + (uVar49 - uVar68);
                  puVar47 = puVar47 + uVar71;
                  puVar59 = puVar59 + uVar71;
                  local_58 = local_58 + (local_68 - uVar42);
                  local_60 = local_60 + (local_68 - uVar42);
                  uVar71 = local_84 + iVar58;
                  local_70 = local_70 + uVar71;
                  puVar62 = puVar62 + uVar71;
                  uVar71 = local_88 + iVar58;
                  local_78 = local_78 + uVar71;
                  pbVar70 = pbVar70 + uVar71;
                  local_80 = local_80 + uVar71;
                  pbVar65 = pbVar65 + uVar71;
                  iVar50 = iVar50 + 2;
                  local_50 = puVar47;
                } while (iVar50 < iVar48);
                uVar51 = (ulonglong)(param_2 & 0x7ffffffe);
                local_b0 = uVar44;
              }
              iVar50 = (int)uVar51;
              uVar51 = CONCAT71((int7)(uVar51 >> 8),1);
              if (iVar50 == iVar48) {
                uVar49 = 0;
                if (1 < (int)uVar68) {
                  uVar49 = uVar68 - 2;
                  if (1 < uVar49) {
                    uVar42 = (uVar49 >> 1) + 1 & 0xfffffffe;
                    lVar72 = 0;
                    do {
                      local_70[lVar72] = *puVar47;
                      local_70[lVar72 + 2] = puVar47[1];
                      local_78[lVar72] = *local_58;
                      local_80[lVar72] = *local_60;
                      local_70[lVar72 + 4] = puVar47[2];
                      puVar59 = puVar47 + 3;
                      puVar47 = puVar47 + 4;
                      local_70[lVar72 + 6] = *puVar59;
                      pbVar65 = local_58 + lVar69;
                      local_58 = local_58 + lVar69 * 2;
                      local_78[lVar72 + 4] = *pbVar65;
                      pbVar65 = local_60 + lVar69;
                      local_60 = local_60 + lVar69 * 2;
                      local_80[lVar72 + 4] = *pbVar65;
                      lVar72 = lVar72 + 8;
                      uVar42 = uVar42 - 2;
                    } while (uVar42 != 0);
                    local_70 = local_70 + lVar72;
                    local_78 = local_78 + lVar72;
                    local_80 = local_80 + lVar72;
                  }
                  if ((uVar49 & 2) == 0) {
                    *local_70 = *puVar47;
                    puVar59 = puVar47 + 1;
                    puVar47 = puVar47 + 2;
                    local_70[2] = *puVar59;
                    local_70 = local_70 + 4;
                    *local_78 = *local_58;
                    *local_80 = *local_60;
                    local_58 = local_58 + lVar69;
                    local_60 = local_60 + lVar69;
                    local_78 = local_78 + 4;
                    local_80 = local_80 + 4;
                  }
                  uVar49 = uVar68 & 0x7ffffffe;
                }
                local_50 = puVar47;
                if (uVar49 == uVar68 - 1) {
                  *local_70 = *puVar47;
                  local_50 = puVar47 + 1;
                  local_70[2] = *puVar47;
                  local_70 = local_70 + 2;
LAB_14040d98a:
                  *local_78 = *local_58;
                  *local_80 = *local_60;
                  uVar40 = local_c0;
                }
              }
            }
          }
          goto LAB_14040c235;
        }
        local_b8 = CONCAT44(local_b8._4_4_,iVar48);
        local_c0 = uVar55;
        if (param_2 != 0 && param_6 != param_11) {
          sVar66 = (size_t)(int)param_1;
          lVar72 = (longlong)param_7;
          lVar69 = (longlong)param_12;
          unaff_RBP = param_11;
          pauVar67 = param_6;
          uVar49 = param_2 - 1;
          if ((param_2 & 3) != 0) {
            local_a8 = CONCAT44(local_a8._4_4_,param_2 - 1);
            uVar49 = 0;
            local_b0 = uVar44;
            do {
              memcpy(unaff_RBP,pauVar67,sVar66);
              pauVar67 = (undefined1 (*) [16])(*pauVar67 + lVar72);
              unaff_RBP = (undefined1 (*) [16])(*unaff_RBP + lVar69);
              uVar49 = uVar49 + 1;
            } while ((param_2 & 3) != uVar49);
            param_2 = (int)local_b0 - uVar49;
            uVar44 = local_b0;
            uVar49 = (uint)local_a8;
          }
          if (2 < uVar49) {
            do {
              memcpy(unaff_RBP,pauVar67,sVar66);
              memcpy(*unaff_RBP + lVar69,*pauVar67 + lVar72,sVar66);
              pvVar63 = (void *)((longlong)(*pauVar67 + lVar72) + lVar72);
              pvVar57 = (void *)((longlong)(*unaff_RBP + lVar69) + lVar69);
              memcpy(pvVar57,pvVar63,sVar66);
              pvVar63 = (void *)((longlong)pvVar63 + lVar72);
              pvVar57 = (void *)((longlong)pvVar57 + lVar69);
              memcpy(pvVar57,pvVar63,sVar66);
              pauVar67 = (undefined1 (*) [16])((longlong)pvVar63 + lVar72);
              unaff_RBP = (undefined1 (*) [16])((longlong)pvVar57 + lVar69);
              param_2 = param_2 - 4;
            } while (param_2 != 0);
          }
        }
        uVar55 = local_b8;
        if ((int)local_b8 < 0x32315659) {
          if ((int)local_b8 == 0x3132564e) {
            if (param_8 == 0x3231564e) {
LAB_14040bbef:
              local_f0 = (undefined1 **)CONCAT44(local_f0._4_4_,param_12);
              local_f8 = param_11;
              FUN_14040e9c0(local_c0,uVar44 & 0xffffffff,param_6,param_7);
LAB_14040bc07:
              uVar51 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
              uVar40 = local_c0;
              goto LAB_14040c235;
            }
            if (param_8 == 0x56555949) {
LAB_14040bbcd:
              local_e8 = (byte **)CONCAT71(local_e8._1_7_,1);
LAB_14040bbdb:
              local_f0 = (undefined1 **)CONCAT44(local_f0._4_4_,param_12);
              local_f8 = param_11;
              uVar44 = FUN_14040e560(local_c0,uVar44 & 0xffffffff,param_6);
              goto LAB_14040ae50;
            }
            if (param_8 == 0x32315659) goto LAB_14040b5ab;
          }
          else if ((int)local_b8 == 0x3231564e) {
            if (param_8 == 0x3132564e) goto LAB_14040bbef;
            if (param_8 == 0x56555949) {
LAB_14040b5ab:
              local_e8 = (byte **)((ulonglong)local_e8._1_7_ << 8);
              goto LAB_14040bbdb;
            }
            if (param_8 == 0x32315659) goto LAB_14040bbcd;
          }
        }
        else if ((int)local_b8 == 0x56555949) {
          if (param_8 == 0x3132564e) {
LAB_14040bb9b:
            local_e8 = (byte **)CONCAT71(local_e8._1_7_,1);
LAB_14040bbb9:
            local_f0 = (undefined1 **)CONCAT44(local_f0._4_4_,param_12);
            local_f8 = param_11;
            uVar44 = FUN_14040dd10(local_c0,uVar44 & 0xffffffff,param_6,param_7);
            goto LAB_14040ae50;
          }
          if (param_8 == 0x3231564e) goto LAB_14040bbab;
          if (param_8 == 0x32315659) {
LAB_14040b5ee:
            local_f0 = (undefined1 **)CONCAT44(local_f0._4_4_,param_12);
            local_f8 = param_11;
            uVar44 = FUN_14040d9d0(local_c0,uVar44 & 0xffffffff,param_6);
            goto LAB_14040ae50;
          }
        }
        else if ((int)local_b8 == 0x32315659) {
          if (param_8 == 0x3132564e) {
LAB_14040bbab:
            local_e8 = (byte **)((ulonglong)local_e8._1_7_ << 8);
            goto LAB_14040bbb9;
          }
          if (param_8 == 0x3231564e) goto LAB_14040bb9b;
          if (param_8 == 0x56555949) goto LAB_14040b5ee;
        }
        uVar43 = FUN_140155460();
        uVar45 = FUN_140155460(uVar55 & 0xffffffff);
        pcVar46 = "SDL_ConvertPixels_Planar2x2_to_Planar2x2: Unsupported YUV conversion: %s -> %s";
      }
      else {
        if (iVar48 < 0x56555949) {
          if (iVar48 != 0x32595559) {
LAB_14040aeb7:
            if (iVar48 != 0x55595659) goto LAB_14040c1fa;
          }
        }
        else if (iVar48 != 0x59565955) {
          if (iVar48 == 0x56555949) goto LAB_14040af26;
          goto LAB_14040c1fa;
        }
LAB_14040b667:
        if (((param_8 == 0x32595559) || (param_8 == 0x59565955)) || (param_8 == 0x55595659)) {
          if (iVar48 == 0x59565955) {
            if (param_8 == 0x55595659) {
              cVar41 = FUN_14015ce40();
              uVar49 = (int)((param_1 - ((int)(param_1 + 1) >> 0x1f)) + 1) >> 1;
              uVar51 = CONCAT71(uVar53,1);
              uVar40 = local_c0;
              if (cVar41 == '\0') {
                if ((param_2 != 0) && (2 < param_1 + 2)) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        *(uint *)(*param_11 + lVar69 * 4) =
                             *(uint *)(*param_6 + lVar69 * 4) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4) >> 8;
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        *(uint *)(*param_11 + lVar69 * 4) =
                             *(uint *)(*param_6 + lVar69 * 4) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4) >> 8;
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             *(uint *)(*param_6 + lVar69 * 4 + 4) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4 + 4) >> 8;
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             *(uint *)(*param_6 + lVar69 * 4 + 8) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4 + 8) >> 8;
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             *(uint *)(*param_6 + lVar69 * 4 + 0xc) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4 + 0xc) >> 8;
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_11 = (undefined1 (*) [16])(*param_11 + (int)(param_12 + uVar49 * -4));
                    param_6 = (undefined1 (*) [16])(*param_6 + (int)(param_7 + uVar49 * -4));
                    uVar42 = (int)uVar44 - 1;
                    uVar44 = (ulonglong)uVar42;
                  } while (uVar42 != 0);
                }
              }
              else if (param_2 != 0) {
                iVar48 = param_2 - 1;
                param_12 = param_12 + uVar49 * -4;
                param_7 = param_7 + uVar49 * -4;
                if (6 < (int)param_1) {
                  do {
                    unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar49;
                    lVar69 = -0x10;
                    lVar72 = 4;
                    pauVar67 = param_11;
                    pauVar64 = param_6;
                    do {
                      lVar56 = lVar72;
                      lVar61 = lVar69;
                      iVar50 = (int)unaff_RBP;
                      auVar76 = *pauVar64;
                      auVar75[1] = 0;
                      auVar75[0] = auVar76[8];
                      auVar75[2] = auVar76[9];
                      auVar75[3] = 0;
                      auVar75[4] = auVar76[10];
                      auVar75[5] = 0;
                      auVar75[6] = auVar76[0xb];
                      auVar75[7] = 0;
                      auVar75[8] = auVar76[0xc];
                      auVar75[9] = 0;
                      auVar75[10] = auVar76[0xd];
                      auVar75[0xb] = 0;
                      auVar75[0xc] = auVar76[0xe];
                      auVar75[0xd] = 0;
                      auVar75[0xe] = auVar76[0xf];
                      auVar75[0xf] = 0;
                      auVar75 = pshuflw(auVar75,auVar75,0x39);
                      auVar75 = pshufhw(auVar75,auVar75,0x39);
                      sVar4 = auVar75._0_2_;
                      sVar5 = auVar75._2_2_;
                      sVar6 = auVar75._4_2_;
                      sVar7 = auVar75._6_2_;
                      sVar8 = auVar75._8_2_;
                      sVar9 = auVar75._10_2_;
                      sVar10 = auVar75._12_2_;
                      sVar11 = auVar75._14_2_;
                      *(ulonglong *)*pauVar67 =
                           CONCAT44(auVar76._4_4_ << 0x18,auVar76._0_4_ << 0x18) |
                           CONCAT44(auVar76._4_4_ >> 8,auVar76._0_4_ >> 8);
                      *(ulonglong *)(*pauVar67 + 8) =
                           CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar75[0xe] - (0xff < sVar11)
                                    ,CONCAT16((0 < sVar10) * (sVar10 < 0x100) * auVar75[0xc] -
                                              (0xff < sVar10),
                                              CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar75[10] -
                                                       (0xff < sVar9),
                                                       CONCAT14((0 < sVar8) * (sVar8 < 0x100) *
                                                                auVar75[8] - (0xff < sVar8),
                                                                CONCAT13((0 < sVar7) *
                                                                         (sVar7 < 0x100) *
                                                                         auVar75[6] - (0xff < sVar7)
                                                                         ,CONCAT12((0 < sVar6) *
                                                                                   (sVar6 < 0x100) *
                                                                                   auVar75[4] -
                                                                                   (0xff < sVar6),
                                                                                   CONCAT11((0 < 
                                                  sVar5) * (sVar5 < 0x100) * auVar75[2] -
                                                  (0xff < sVar5),
                                                  (0 < sVar4) * (sVar4 < 0x100) * auVar75[0] -
                                                  (0xff < sVar4))))))));
                      pauVar64 = pauVar64 + 1;
                      pauVar67 = pauVar67 + 1;
                      uVar42 = iVar50 - 4;
                      unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar42;
                      lVar69 = lVar61 + -0x10;
                      lVar72 = lVar56 + 4;
                    } while (7 < iVar50);
                    if (uVar42 != 0) {
                      do {
                        *(uint *)(*param_11 + lVar56 * 4) =
                             *(uint *)(*param_6 + lVar56 * 4) << 0x18 |
                             *(uint *)(*param_6 + lVar56 * 4) >> 8;
                        lVar56 = lVar56 + 1;
                        lVar61 = lVar61 + -4;
                      } while (uVar49 != (uint)lVar56);
                      pauVar64 = (undefined1 (*) [16])((longlong)param_6 - lVar61);
                      pauVar67 = (undefined1 (*) [16])((longlong)param_11 - lVar61);
                    }
                    param_6 = (undefined1 (*) [16])(*pauVar64 + param_7);
                    param_11 = (undefined1 (*) [16])(*pauVar67 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                  goto LAB_14040bc07;
                }
                if (2 < param_1 + 2) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        *(uint *)(*param_11 + lVar69 * 4) =
                             *(uint *)(*param_6 + lVar69 * 4) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4) >> 8;
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        *(uint *)(*param_11 + lVar69 * 4) =
                             *(uint *)(*param_6 + lVar69 * 4) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4) >> 8;
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             *(uint *)(*param_6 + lVar69 * 4 + 4) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4 + 4) >> 8;
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             *(uint *)(*param_6 + lVar69 * 4 + 8) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4 + 8) >> 8;
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             *(uint *)(*param_6 + lVar69 * 4 + 0xc) << 0x18 |
                             *(uint *)(*param_6 + lVar69 * 4 + 0xc) >> 8;
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_6 = (undefined1 (*) [16])(*param_6 + param_7);
                    param_11 = (undefined1 (*) [16])(*param_11 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                }
              }
            }
            else {
              if (param_8 != 0x32595559) goto LAB_14040b9ac;
              cVar41 = FUN_14015ce40();
              uVar49 = (int)((param_1 - ((int)(param_1 + 1) >> 0x1f)) + 1) >> 1;
              uVar51 = CONCAT71(uVar53,1);
              uVar40 = local_c0;
              if (cVar41 == '\0') {
                if ((param_2 != 0) && (2 < param_1 + 2)) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar42 = *(uint *)(*param_6 + lVar69 * 4);
                        auVar76 = psllw(ZEXT416(uVar42),8);
                        *(uint *)(*param_11 + lVar69 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar42 >> 0x18),(ushort)uVar42 >> 8);
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 4);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 8);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 0xc);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_11 = (undefined1 (*) [16])(*param_11 + (int)(param_12 + uVar49 * -4));
                    param_6 = (undefined1 (*) [16])(*param_6 + (int)(param_7 + uVar49 * -4));
                    uVar42 = (int)uVar44 - 1;
                    uVar44 = (ulonglong)uVar42;
                  } while (uVar42 != 0);
                }
              }
              else if (param_2 != 0) {
                iVar48 = param_2 - 1;
                param_12 = param_12 + uVar49 * -4;
                param_7 = param_7 + uVar49 * -4;
                if (6 < (int)param_1) {
                  do {
                    unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar49;
                    lVar69 = -0x10;
                    lVar72 = 4;
                    pauVar67 = param_11;
                    pauVar64 = param_6;
                    do {
                      lVar56 = lVar72;
                      lVar61 = lVar69;
                      iVar50 = (int)unaff_RBP;
                      auVar76 = *pauVar64;
                      auVar83 = psllw(auVar76,8);
                      auVar82[1] = 0;
                      auVar82[0] = auVar76[8];
                      auVar82[2] = auVar76[9];
                      auVar82[3] = 0;
                      auVar82[4] = auVar76[10];
                      auVar82[5] = 0;
                      auVar82[6] = auVar76[0xb];
                      auVar82[7] = 0;
                      auVar82[8] = auVar76[0xc];
                      auVar82[9] = 0;
                      auVar82[10] = auVar76[0xd];
                      auVar82[0xb] = 0;
                      auVar82[0xc] = auVar76[0xe];
                      auVar82[0xd] = 0;
                      auVar82[0xe] = auVar76[0xf];
                      auVar82[0xf] = 0;
                      auVar75 = pshuflw(auVar82,auVar82,0xb1);
                      auVar75 = pshufhw(auVar75,auVar75,0xb1);
                      sVar4 = auVar75._0_2_;
                      sVar5 = auVar75._2_2_;
                      sVar6 = auVar75._4_2_;
                      sVar7 = auVar75._6_2_;
                      sVar8 = auVar75._8_2_;
                      sVar9 = auVar75._10_2_;
                      sVar10 = auVar75._12_2_;
                      sVar11 = auVar75._14_2_;
                      *(ulonglong *)*pauVar67 =
                           auVar83._0_8_ |
                           CONCAT26(auVar76._6_2_ >> 8,
                                    CONCAT24(auVar76._4_2_ >> 8,
                                             CONCAT22(auVar76._2_2_ >> 8,auVar76._0_2_ >> 8)));
                      *(ulonglong *)(*pauVar67 + 8) =
                           CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar75[0xe] - (0xff < sVar11)
                                    ,CONCAT16((0 < sVar10) * (sVar10 < 0x100) * auVar75[0xc] -
                                              (0xff < sVar10),
                                              CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar75[10] -
                                                       (0xff < sVar9),
                                                       CONCAT14((0 < sVar8) * (sVar8 < 0x100) *
                                                                auVar75[8] - (0xff < sVar8),
                                                                CONCAT13((0 < sVar7) *
                                                                         (sVar7 < 0x100) *
                                                                         auVar75[6] - (0xff < sVar7)
                                                                         ,CONCAT12((0 < sVar6) *
                                                                                   (sVar6 < 0x100) *
                                                                                   auVar75[4] -
                                                                                   (0xff < sVar6),
                                                                                   CONCAT11((0 < 
                                                  sVar5) * (sVar5 < 0x100) * auVar75[2] -
                                                  (0xff < sVar5),
                                                  (0 < sVar4) * (sVar4 < 0x100) * auVar75[0] -
                                                  (0xff < sVar4))))))));
                      pauVar64 = pauVar64 + 1;
                      pauVar67 = pauVar67 + 1;
                      uVar42 = iVar50 - 4;
                      unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar42;
                      lVar69 = lVar61 + -0x10;
                      lVar72 = lVar56 + 4;
                    } while (7 < iVar50);
                    if (uVar42 != 0) {
                      do {
                        uVar42 = *(uint *)(*param_6 + lVar56 * 4);
                        auVar76 = psllw(ZEXT416(uVar42),8);
                        *(uint *)(*param_11 + lVar56 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar42 >> 0x18),(ushort)uVar42 >> 8);
                        lVar56 = lVar56 + 1;
                        lVar61 = lVar61 + -4;
                      } while (uVar49 != (uint)lVar56);
                      pauVar64 = (undefined1 (*) [16])((longlong)param_6 - lVar61);
                      pauVar67 = (undefined1 (*) [16])((longlong)param_11 - lVar61);
                    }
                    param_6 = (undefined1 (*) [16])(*pauVar64 + param_7);
                    param_11 = (undefined1 (*) [16])(*pauVar67 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                  goto LAB_14040bc07;
                }
                if (2 < param_1 + 2) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar42 = *(uint *)(*param_6 + lVar69 * 4);
                        auVar76 = psllw(ZEXT416(uVar42),8);
                        *(uint *)(*param_11 + lVar69 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar42 >> 0x18),(ushort)uVar42 >> 8);
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 4);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 8);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 0xc);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_6 = (undefined1 (*) [16])(*param_6 + param_7);
                    param_11 = (undefined1 (*) [16])(*param_11 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                }
              }
            }
          }
          else if (iVar48 == 0x55595659) {
            if (param_8 == 0x59565955) {
              cVar41 = FUN_14015ce40();
              uVar49 = (int)((param_1 - ((int)(param_1 + 1) >> 0x1f)) + 1) >> 1;
              uVar51 = CONCAT71(uVar53,1);
              uVar40 = local_c0;
              if (cVar41 == '\0') {
                if ((param_2 != 0) && (2 < param_1 + 2)) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        *(uint *)(*param_11 + lVar69 * 4) =
                             *(uint *)(*param_6 + lVar69 * 4) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4) >> 0x18;
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        *(uint *)(*param_11 + lVar69 * 4) =
                             *(uint *)(*param_6 + lVar69 * 4) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4) >> 0x18;
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             *(uint *)(*param_6 + lVar69 * 4 + 4) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4 + 4) >> 0x18;
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             *(uint *)(*param_6 + lVar69 * 4 + 8) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4 + 8) >> 0x18;
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             *(uint *)(*param_6 + lVar69 * 4 + 0xc) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4 + 0xc) >> 0x18;
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_11 = (undefined1 (*) [16])(*param_11 + (int)(param_12 + uVar49 * -4));
                    param_6 = (undefined1 (*) [16])(*param_6 + (int)(param_7 + uVar49 * -4));
                    uVar42 = (int)uVar44 - 1;
                    uVar44 = (ulonglong)uVar42;
                  } while (uVar42 != 0);
                }
              }
              else if (param_2 != 0) {
                iVar48 = param_2 - 1;
                param_12 = param_12 + uVar49 * -4;
                param_7 = param_7 + uVar49 * -4;
                if (6 < (int)param_1) {
                  do {
                    unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar49;
                    lVar69 = -0x10;
                    lVar72 = 4;
                    pauVar67 = param_11;
                    pauVar64 = param_6;
                    do {
                      lVar56 = lVar72;
                      lVar61 = lVar69;
                      iVar50 = (int)unaff_RBP;
                      auVar76 = *pauVar64;
                      auVar83[1] = 0;
                      auVar83[0] = auVar76[8];
                      auVar83[2] = auVar76[9];
                      auVar83[3] = 0;
                      auVar83[4] = auVar76[10];
                      auVar83[5] = 0;
                      auVar83[6] = auVar76[0xb];
                      auVar83[7] = 0;
                      auVar83[8] = auVar76[0xc];
                      auVar83[9] = 0;
                      auVar83[10] = auVar76[0xd];
                      auVar83[0xb] = 0;
                      auVar83[0xc] = auVar76[0xe];
                      auVar83[0xd] = 0;
                      auVar83[0xe] = auVar76[0xf];
                      auVar83[0xf] = 0;
                      auVar75 = pshuflw(auVar83,auVar83,0x93);
                      auVar75 = pshufhw(auVar75,auVar75,0x93);
                      sVar4 = auVar75._0_2_;
                      sVar5 = auVar75._2_2_;
                      sVar6 = auVar75._4_2_;
                      sVar7 = auVar75._6_2_;
                      sVar8 = auVar75._8_2_;
                      sVar9 = auVar75._10_2_;
                      sVar10 = auVar75._12_2_;
                      sVar11 = auVar75._14_2_;
                      *(ulonglong *)*pauVar67 =
                           CONCAT44(auVar76._4_4_ << 8,auVar76._0_4_ << 8) |
                           CONCAT44(auVar76._4_4_ >> 0x18,auVar76._0_4_ >> 0x18);
                      *(ulonglong *)(*pauVar67 + 8) =
                           CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar75[0xe] - (0xff < sVar11)
                                    ,CONCAT16((0 < sVar10) * (sVar10 < 0x100) * auVar75[0xc] -
                                              (0xff < sVar10),
                                              CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar75[10] -
                                                       (0xff < sVar9),
                                                       CONCAT14((0 < sVar8) * (sVar8 < 0x100) *
                                                                auVar75[8] - (0xff < sVar8),
                                                                CONCAT13((0 < sVar7) *
                                                                         (sVar7 < 0x100) *
                                                                         auVar75[6] - (0xff < sVar7)
                                                                         ,CONCAT12((0 < sVar6) *
                                                                                   (sVar6 < 0x100) *
                                                                                   auVar75[4] -
                                                                                   (0xff < sVar6),
                                                                                   CONCAT11((0 < 
                                                  sVar5) * (sVar5 < 0x100) * auVar75[2] -
                                                  (0xff < sVar5),
                                                  (0 < sVar4) * (sVar4 < 0x100) * auVar75[0] -
                                                  (0xff < sVar4))))))));
                      pauVar64 = pauVar64 + 1;
                      pauVar67 = pauVar67 + 1;
                      uVar42 = iVar50 - 4;
                      unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar42;
                      lVar69 = lVar61 + -0x10;
                      lVar72 = lVar56 + 4;
                    } while (7 < iVar50);
                    if (uVar42 != 0) {
                      do {
                        *(uint *)(*param_11 + lVar56 * 4) =
                             *(uint *)(*param_6 + lVar56 * 4) << 8 |
                             *(uint *)(*param_6 + lVar56 * 4) >> 0x18;
                        lVar56 = lVar56 + 1;
                        lVar61 = lVar61 + -4;
                      } while (uVar49 != (uint)lVar56);
                      pauVar64 = (undefined1 (*) [16])((longlong)param_6 - lVar61);
                      pauVar67 = (undefined1 (*) [16])((longlong)param_11 - lVar61);
                    }
                    param_6 = (undefined1 (*) [16])(*pauVar64 + param_7);
                    param_11 = (undefined1 (*) [16])(*pauVar67 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                  goto LAB_14040bc07;
                }
                if (2 < param_1 + 2) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        *(uint *)(*param_11 + lVar69 * 4) =
                             *(uint *)(*param_6 + lVar69 * 4) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4) >> 0x18;
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        *(uint *)(*param_11 + lVar69 * 4) =
                             *(uint *)(*param_6 + lVar69 * 4) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4) >> 0x18;
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             *(uint *)(*param_6 + lVar69 * 4 + 4) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4 + 4) >> 0x18;
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             *(uint *)(*param_6 + lVar69 * 4 + 8) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4 + 8) >> 0x18;
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             *(uint *)(*param_6 + lVar69 * 4 + 0xc) << 8 |
                             *(uint *)(*param_6 + lVar69 * 4 + 0xc) >> 0x18;
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_6 = (undefined1 (*) [16])(*param_6 + param_7);
                    param_11 = (undefined1 (*) [16])(*param_11 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                }
              }
            }
            else {
              if (param_8 != 0x32595559) goto LAB_14040b9ac;
              cVar41 = FUN_14015ce40();
              uVar49 = (int)((param_1 - ((int)(param_1 + 1) >> 0x1f)) + 1) >> 1;
              uVar51 = CONCAT71(uVar53,1);
              uVar40 = local_c0;
              if (cVar41 == '\0') {
                if ((param_2 != 0) && (2 < param_1 + 2)) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4);
                        auVar76 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)((
                                                  (uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                                  >> 0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8))
                                                  ,(ushort)(byte)uVar3) & 0xffffff00ffffff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4);
                        auVar76 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)((
                                                  (uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                                  >> 0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8))
                                                  ,(ushort)(byte)uVar3) & 0xffffff00ffffff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 4);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 8);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 0xc);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_11 = (undefined1 (*) [16])(*param_11 + (int)(param_12 + uVar49 * -4));
                    param_6 = (undefined1 (*) [16])(*param_6 + (int)(param_7 + uVar49 * -4));
                    uVar42 = (int)uVar44 - 1;
                    uVar44 = (ulonglong)uVar42;
                  } while (uVar42 != 0);
                }
              }
              else if (param_2 != 0) {
                iVar48 = param_2 - 1;
                param_12 = param_12 + uVar49 * -4;
                param_7 = param_7 + uVar49 * -4;
                if (6 < (int)param_1) {
                  do {
                    unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar49;
                    lVar69 = -0x10;
                    lVar72 = 4;
                    pauVar67 = param_11;
                    pauVar64 = param_6;
                    do {
                      lVar56 = lVar72;
                      lVar61 = lVar69;
                      iVar50 = (int)unaff_RBP;
                      auVar76 = *pauVar64;
                      auVar20[0xd] = 0;
                      auVar20._0_13_ = auVar76._0_13_;
                      auVar20[0xe] = auVar76[7];
                      auVar22[0xc] = auVar76[6];
                      auVar22._0_12_ = auVar76._0_12_;
                      auVar22._13_2_ = auVar20._13_2_;
                      auVar24[0xb] = 0;
                      auVar24._0_11_ = auVar76._0_11_;
                      auVar24._12_3_ = auVar22._12_3_;
                      auVar26[10] = auVar76[5];
                      auVar26._0_10_ = auVar76._0_10_;
                      auVar26._11_4_ = auVar24._11_4_;
                      auVar28[9] = 0;
                      auVar28._0_9_ = auVar76._0_9_;
                      auVar28._10_5_ = auVar26._10_5_;
                      auVar30[8] = auVar76[4];
                      auVar30._0_8_ = auVar76._0_8_;
                      auVar30._9_6_ = auVar28._9_6_;
                      auVar34._7_8_ = 0;
                      auVar34._0_7_ = auVar30._8_7_;
                      auVar36._1_8_ = SUB158(auVar34 << 0x40,7);
                      auVar36[0] = auVar76[3];
                      auVar36._9_6_ = 0;
                      auVar37._1_10_ = SUB1510(auVar36 << 0x30,5);
                      auVar37[0] = auVar76[2];
                      auVar37._11_4_ = 0;
                      auVar32[2] = auVar76[1];
                      auVar32._0_2_ = auVar76._0_2_;
                      auVar32._3_12_ = SUB1512(auVar37 << 0x20,3);
                      auVar80._0_2_ = auVar76._0_2_ & 0xff;
                      auVar80._2_13_ = auVar32._2_13_;
                      auVar80[0xf] = 0;
                      auVar75 = pshuflw(auVar80,auVar80,0x6c);
                      auVar75 = pshufhw(auVar75,auVar75,0x6c);
                      auVar77[1] = 0;
                      auVar77[0] = auVar76[8];
                      auVar77[2] = auVar76[9];
                      auVar77[3] = 0;
                      auVar77[4] = auVar76[10];
                      auVar77[5] = 0;
                      auVar77[6] = auVar76[0xb];
                      auVar77[7] = 0;
                      auVar77[8] = auVar76[0xc];
                      auVar77[9] = 0;
                      auVar77[10] = auVar76[0xd];
                      auVar77[0xb] = 0;
                      auVar77[0xc] = auVar76[0xe];
                      auVar77[0xd] = 0;
                      auVar77[0xe] = auVar76[0xf];
                      auVar77[0xf] = 0;
                      auVar76 = pshuflw(auVar77,auVar77,0x6c);
                      auVar76 = pshufhw(auVar76,auVar76,0x6c);
                      sVar4 = auVar75._0_2_;
                      sVar5 = auVar75._2_2_;
                      sVar6 = auVar75._4_2_;
                      sVar7 = auVar75._6_2_;
                      sVar8 = auVar75._8_2_;
                      sVar9 = auVar75._10_2_;
                      sVar10 = auVar75._12_2_;
                      sVar11 = auVar75._14_2_;
                      sVar12 = auVar76._0_2_;
                      sVar13 = auVar76._2_2_;
                      sVar14 = auVar76._4_2_;
                      sVar15 = auVar76._6_2_;
                      sVar16 = auVar76._8_2_;
                      sVar17 = auVar76._10_2_;
                      sVar18 = auVar76._12_2_;
                      sVar19 = auVar76._14_2_;
                      (*pauVar67)[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar75[0] - (0xff < sVar4);
                      (*pauVar67)[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar75[2] - (0xff < sVar5);
                      (*pauVar67)[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar75[4] - (0xff < sVar6);
                      (*pauVar67)[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar75[6] - (0xff < sVar7);
                      (*pauVar67)[4] = (0 < sVar8) * (sVar8 < 0x100) * auVar75[8] - (0xff < sVar8);
                      (*pauVar67)[5] = (0 < sVar9) * (sVar9 < 0x100) * auVar75[10] - (0xff < sVar9);
                      (*pauVar67)[6] =
                           (0 < sVar10) * (sVar10 < 0x100) * auVar75[0xc] - (0xff < sVar10);
                      (*pauVar67)[7] =
                           (0 < sVar11) * (sVar11 < 0x100) * auVar75[0xe] - (0xff < sVar11);
                      (*pauVar67)[8] =
                           (0 < sVar12) * (sVar12 < 0x100) * auVar76[0] - (0xff < sVar12);
                      (*pauVar67)[9] =
                           (0 < sVar13) * (sVar13 < 0x100) * auVar76[2] - (0xff < sVar13);
                      (*pauVar67)[10] =
                           (0 < sVar14) * (sVar14 < 0x100) * auVar76[4] - (0xff < sVar14);
                      (*pauVar67)[0xb] =
                           (0 < sVar15) * (sVar15 < 0x100) * auVar76[6] - (0xff < sVar15);
                      (*pauVar67)[0xc] =
                           (0 < sVar16) * (sVar16 < 0x100) * auVar76[8] - (0xff < sVar16);
                      (*pauVar67)[0xd] =
                           (0 < sVar17) * (sVar17 < 0x100) * auVar76[10] - (0xff < sVar17);
                      (*pauVar67)[0xe] =
                           (0 < sVar18) * (sVar18 < 0x100) * auVar76[0xc] - (0xff < sVar18);
                      (*pauVar67)[0xf] =
                           (0 < sVar19) * (sVar19 < 0x100) * auVar76[0xe] - (0xff < sVar19);
                      pauVar64 = pauVar64 + 1;
                      pauVar67 = pauVar67 + 1;
                      uVar42 = iVar50 - 4;
                      unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar42;
                      lVar69 = lVar61 + -0x10;
                      lVar72 = lVar56 + 4;
                    } while (7 < iVar50);
                    if (uVar42 != 0) {
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar56 * 4);
                        auVar76._8_8_ = 0;
                        auVar76._0_8_ =
                             (ulonglong)
                             CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7
                                                  )(byte)((uint)uVar3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                            >> 0x10),(short)uVar3) & 0xffffffff00ff00ff;
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar56 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar56 = lVar56 + 1;
                        lVar61 = lVar61 + -4;
                      } while (uVar49 != (uint)lVar56);
                      pauVar64 = (undefined1 (*) [16])((longlong)param_6 - lVar61);
                      pauVar67 = (undefined1 (*) [16])((longlong)param_11 - lVar61);
                    }
                    param_6 = (undefined1 (*) [16])(*pauVar64 + param_7);
                    param_11 = (undefined1 (*) [16])(*pauVar67 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                  goto LAB_14040bc07;
                }
                if (2 < param_1 + 2) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4);
                        auVar76 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)((
                                                  (uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                                  >> 0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8))
                                                  ,(ushort)(byte)uVar3) & 0xffffff00ffffff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4);
                        auVar76 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)((
                                                  (uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                                  >> 0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8))
                                                  ,(ushort)(byte)uVar3) & 0xffffff00ffffff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 4);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 8);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 0xc);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_6 = (undefined1 (*) [16])(*param_6 + param_7);
                    param_11 = (undefined1 (*) [16])(*param_11 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                }
              }
            }
          }
          else {
            if (iVar48 != 0x32595559) {
LAB_14040b9ac:
              uVar43 = FUN_140155460();
              uVar45 = FUN_140155460(param_3 & 0xffffffff);
              pcVar46 = "SDL_ConvertPixels_Packed4_to_Packed4: Unsupported YUV conversion: %s -> %s"
              ;
              goto LAB_14040c213;
            }
            if (param_8 == 0x55595659) {
              cVar41 = FUN_14015ce40();
              uVar49 = (int)((param_1 - ((int)(param_1 + 1) >> 0x1f)) + 1) >> 1;
              uVar51 = CONCAT71(uVar53,1);
              uVar40 = local_c0;
              if (cVar41 == '\0') {
                if ((param_2 != 0) && (2 < param_1 + 2)) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4);
                        auVar76 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)((
                                                  (uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                                  >> 0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8))
                                                  ,(ushort)(byte)uVar3) & 0xffffff00ffffff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4);
                        auVar76 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)((
                                                  (uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                                  >> 0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8))
                                                  ,(ushort)(byte)uVar3) & 0xffffff00ffffff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 4);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 8);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 0xc);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_11 = (undefined1 (*) [16])(*param_11 + (int)(param_12 + uVar49 * -4));
                    param_6 = (undefined1 (*) [16])(*param_6 + (int)(param_7 + uVar49 * -4));
                    uVar42 = (int)uVar44 - 1;
                    uVar44 = (ulonglong)uVar42;
                  } while (uVar42 != 0);
                }
              }
              else if (param_2 != 0) {
                iVar48 = param_2 - 1;
                param_12 = param_12 + uVar49 * -4;
                param_7 = param_7 + uVar49 * -4;
                if (6 < (int)param_1) {
                  do {
                    unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar49;
                    lVar69 = -0x10;
                    lVar72 = 4;
                    pauVar67 = param_11;
                    pauVar64 = param_6;
                    do {
                      lVar56 = lVar72;
                      lVar61 = lVar69;
                      iVar50 = (int)unaff_RBP;
                      auVar76 = *pauVar64;
                      auVar21[0xd] = 0;
                      auVar21._0_13_ = auVar76._0_13_;
                      auVar21[0xe] = auVar76[7];
                      auVar23[0xc] = auVar76[6];
                      auVar23._0_12_ = auVar76._0_12_;
                      auVar23._13_2_ = auVar21._13_2_;
                      auVar25[0xb] = 0;
                      auVar25._0_11_ = auVar76._0_11_;
                      auVar25._12_3_ = auVar23._12_3_;
                      auVar27[10] = auVar76[5];
                      auVar27._0_10_ = auVar76._0_10_;
                      auVar27._11_4_ = auVar25._11_4_;
                      auVar29[9] = 0;
                      auVar29._0_9_ = auVar76._0_9_;
                      auVar29._10_5_ = auVar27._10_5_;
                      auVar31[8] = auVar76[4];
                      auVar31._0_8_ = auVar76._0_8_;
                      auVar31._9_6_ = auVar29._9_6_;
                      auVar35._7_8_ = 0;
                      auVar35._0_7_ = auVar31._8_7_;
                      auVar38._1_8_ = SUB158(auVar35 << 0x40,7);
                      auVar38[0] = auVar76[3];
                      auVar38._9_6_ = 0;
                      auVar39._1_10_ = SUB1510(auVar38 << 0x30,5);
                      auVar39[0] = auVar76[2];
                      auVar39._11_4_ = 0;
                      auVar33[2] = auVar76[1];
                      auVar33._0_2_ = auVar76._0_2_;
                      auVar33._3_12_ = SUB1512(auVar39 << 0x20,3);
                      auVar81._0_2_ = auVar76._0_2_ & 0xff;
                      auVar81._2_13_ = auVar33._2_13_;
                      auVar81[0xf] = 0;
                      auVar75 = pshuflw(auVar81,auVar81,0x6c);
                      auVar75 = pshufhw(auVar75,auVar75,0x6c);
                      auVar78[1] = 0;
                      auVar78[0] = auVar76[8];
                      auVar78[2] = auVar76[9];
                      auVar78[3] = 0;
                      auVar78[4] = auVar76[10];
                      auVar78[5] = 0;
                      auVar78[6] = auVar76[0xb];
                      auVar78[7] = 0;
                      auVar78[8] = auVar76[0xc];
                      auVar78[9] = 0;
                      auVar78[10] = auVar76[0xd];
                      auVar78[0xb] = 0;
                      auVar78[0xc] = auVar76[0xe];
                      auVar78[0xd] = 0;
                      auVar78[0xe] = auVar76[0xf];
                      auVar78[0xf] = 0;
                      auVar76 = pshuflw(auVar78,auVar78,0x6c);
                      auVar76 = pshufhw(auVar76,auVar76,0x6c);
                      sVar4 = auVar75._0_2_;
                      sVar5 = auVar75._2_2_;
                      sVar6 = auVar75._4_2_;
                      sVar7 = auVar75._6_2_;
                      sVar8 = auVar75._8_2_;
                      sVar9 = auVar75._10_2_;
                      sVar10 = auVar75._12_2_;
                      sVar11 = auVar75._14_2_;
                      sVar12 = auVar76._0_2_;
                      sVar13 = auVar76._2_2_;
                      sVar14 = auVar76._4_2_;
                      sVar15 = auVar76._6_2_;
                      sVar16 = auVar76._8_2_;
                      sVar17 = auVar76._10_2_;
                      sVar18 = auVar76._12_2_;
                      sVar19 = auVar76._14_2_;
                      (*pauVar67)[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar75[0] - (0xff < sVar4);
                      (*pauVar67)[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar75[2] - (0xff < sVar5);
                      (*pauVar67)[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar75[4] - (0xff < sVar6);
                      (*pauVar67)[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar75[6] - (0xff < sVar7);
                      (*pauVar67)[4] = (0 < sVar8) * (sVar8 < 0x100) * auVar75[8] - (0xff < sVar8);
                      (*pauVar67)[5] = (0 < sVar9) * (sVar9 < 0x100) * auVar75[10] - (0xff < sVar9);
                      (*pauVar67)[6] =
                           (0 < sVar10) * (sVar10 < 0x100) * auVar75[0xc] - (0xff < sVar10);
                      (*pauVar67)[7] =
                           (0 < sVar11) * (sVar11 < 0x100) * auVar75[0xe] - (0xff < sVar11);
                      (*pauVar67)[8] =
                           (0 < sVar12) * (sVar12 < 0x100) * auVar76[0] - (0xff < sVar12);
                      (*pauVar67)[9] =
                           (0 < sVar13) * (sVar13 < 0x100) * auVar76[2] - (0xff < sVar13);
                      (*pauVar67)[10] =
                           (0 < sVar14) * (sVar14 < 0x100) * auVar76[4] - (0xff < sVar14);
                      (*pauVar67)[0xb] =
                           (0 < sVar15) * (sVar15 < 0x100) * auVar76[6] - (0xff < sVar15);
                      (*pauVar67)[0xc] =
                           (0 < sVar16) * (sVar16 < 0x100) * auVar76[8] - (0xff < sVar16);
                      (*pauVar67)[0xd] =
                           (0 < sVar17) * (sVar17 < 0x100) * auVar76[10] - (0xff < sVar17);
                      (*pauVar67)[0xe] =
                           (0 < sVar18) * (sVar18 < 0x100) * auVar76[0xc] - (0xff < sVar18);
                      (*pauVar67)[0xf] =
                           (0 < sVar19) * (sVar19 < 0x100) * auVar76[0xe] - (0xff < sVar19);
                      pauVar64 = pauVar64 + 1;
                      pauVar67 = pauVar67 + 1;
                      uVar42 = iVar50 - 4;
                      unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar42;
                      lVar69 = lVar61 + -0x10;
                      lVar72 = lVar56 + 4;
                    } while (7 < iVar50);
                    if (uVar42 != 0) {
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar56 * 4);
                        auVar79._8_8_ = 0;
                        auVar79._0_8_ =
                             (ulonglong)
                             CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7
                                                  )(byte)((uint)uVar3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                            >> 0x10),(short)uVar3) & 0xffffffff00ff00ff;
                        auVar76 = pshuflw(auVar79,auVar79,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar56 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar56 = lVar56 + 1;
                        lVar61 = lVar61 + -4;
                      } while (uVar49 != (uint)lVar56);
                      pauVar64 = (undefined1 (*) [16])((longlong)param_6 - lVar61);
                      pauVar67 = (undefined1 (*) [16])((longlong)param_11 - lVar61);
                    }
                    param_6 = (undefined1 (*) [16])(*pauVar64 + param_7);
                    param_11 = (undefined1 (*) [16])(*pauVar67 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                  goto LAB_14040bc07;
                }
                if (2 < param_1 + 2) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4);
                        auVar76 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)((
                                                  (uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                                  >> 0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8))
                                                  ,(ushort)(byte)uVar3) & 0xffffff00ffffff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4);
                        auVar76 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)((
                                                  (uint7)(byte)((uint)uVar3 >> 0x18) << 0x30) >>
                                                  0x28),CONCAT14((char)((uint)uVar3 >> 0x10),uVar3))
                                                  >> 0x20),uVar3) >> 0x18),(char)((uint)uVar3 >> 8))
                                                  ,(ushort)(byte)uVar3) & 0xffffff00ffffff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 4);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 8);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        uVar3 = *(undefined4 *)(*param_6 + lVar69 * 4 + 0xc);
                        auVar76 = ZEXT716(CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((
                                                  short)(((uint7)(byte)((uint)uVar3 >> 0x18) << 0x30
                                                         ) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                                  CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3))
                                                  >> 0x10),(short)uVar3) & 0xffffff00ff00ff);
                        auVar76 = pshuflw(auVar76,auVar76,0x6c);
                        sVar4 = auVar76._0_2_;
                        sVar5 = auVar76._2_2_;
                        sVar6 = auVar76._4_2_;
                        sVar7 = auVar76._6_2_;
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar76[6] - (0xff < sVar7),
                                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar76[4] -
                                               (0xff < sVar6),
                                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar76[2] -
                                                        (0xff < sVar5),
                                                        (0 < sVar4) * (sVar4 < 0x100) * auVar76[0] -
                                                        (0xff < sVar4))));
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_6 = (undefined1 (*) [16])(*param_6 + param_7);
                    param_11 = (undefined1 (*) [16])(*param_11 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                }
              }
            }
            else {
              if (param_8 != 0x59565955) goto LAB_14040b9ac;
              cVar41 = FUN_14015ce40();
              uVar49 = (int)((param_1 - ((int)(param_1 + 1) >> 0x1f)) + 1) >> 1;
              uVar51 = CONCAT71(uVar53,1);
              uVar40 = local_c0;
              if (cVar41 == '\0') {
                if ((param_2 != 0) && (2 < param_1 + 2)) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar42 = *(uint *)(*param_6 + lVar69 * 4);
                        auVar76 = psllw(ZEXT416(uVar42),8);
                        *(uint *)(*param_11 + lVar69 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar42 >> 0x18),(ushort)uVar42 >> 8);
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 4);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 8);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 0xc);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_11 = (undefined1 (*) [16])(*param_11 + (int)(param_12 + uVar49 * -4));
                    param_6 = (undefined1 (*) [16])(*param_6 + (int)(param_7 + uVar49 * -4));
                    uVar42 = (int)uVar44 - 1;
                    uVar44 = (ulonglong)uVar42;
                  } while (uVar42 != 0);
                }
              }
              else if (param_2 != 0) {
                iVar48 = param_2 - 1;
                param_12 = param_12 + uVar49 * -4;
                param_7 = param_7 + uVar49 * -4;
                if (6 < (int)param_1) {
                  do {
                    unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar49;
                    lVar69 = -0x10;
                    lVar72 = 4;
                    pauVar67 = param_11;
                    pauVar64 = param_6;
                    do {
                      lVar56 = lVar72;
                      lVar61 = lVar69;
                      iVar50 = (int)unaff_RBP;
                      auVar76 = *pauVar64;
                      auVar82 = psllw(auVar76,8);
                      auVar74[1] = 0;
                      auVar74[0] = auVar76[8];
                      auVar74[2] = auVar76[9];
                      auVar74[3] = 0;
                      auVar74[4] = auVar76[10];
                      auVar74[5] = 0;
                      auVar74[6] = auVar76[0xb];
                      auVar74[7] = 0;
                      auVar74[8] = auVar76[0xc];
                      auVar74[9] = 0;
                      auVar74[10] = auVar76[0xd];
                      auVar74[0xb] = 0;
                      auVar74[0xc] = auVar76[0xe];
                      auVar74[0xd] = 0;
                      auVar74[0xe] = auVar76[0xf];
                      auVar74[0xf] = 0;
                      auVar75 = pshuflw(auVar74,auVar74,0xb1);
                      auVar75 = pshufhw(auVar75,auVar75,0xb1);
                      sVar4 = auVar75._0_2_;
                      sVar5 = auVar75._2_2_;
                      sVar6 = auVar75._4_2_;
                      sVar7 = auVar75._6_2_;
                      sVar8 = auVar75._8_2_;
                      sVar9 = auVar75._10_2_;
                      sVar10 = auVar75._12_2_;
                      sVar11 = auVar75._14_2_;
                      *(ulonglong *)*pauVar67 =
                           auVar82._0_8_ |
                           CONCAT26(auVar76._6_2_ >> 8,
                                    CONCAT24(auVar76._4_2_ >> 8,
                                             CONCAT22(auVar76._2_2_ >> 8,auVar76._0_2_ >> 8)));
                      *(ulonglong *)(*pauVar67 + 8) =
                           CONCAT17((0 < sVar11) * (sVar11 < 0x100) * auVar75[0xe] - (0xff < sVar11)
                                    ,CONCAT16((0 < sVar10) * (sVar10 < 0x100) * auVar75[0xc] -
                                              (0xff < sVar10),
                                              CONCAT15((0 < sVar9) * (sVar9 < 0x100) * auVar75[10] -
                                                       (0xff < sVar9),
                                                       CONCAT14((0 < sVar8) * (sVar8 < 0x100) *
                                                                auVar75[8] - (0xff < sVar8),
                                                                CONCAT13((0 < sVar7) *
                                                                         (sVar7 < 0x100) *
                                                                         auVar75[6] - (0xff < sVar7)
                                                                         ,CONCAT12((0 < sVar6) *
                                                                                   (sVar6 < 0x100) *
                                                                                   auVar75[4] -
                                                                                   (0xff < sVar6),
                                                                                   CONCAT11((0 < 
                                                  sVar5) * (sVar5 < 0x100) * auVar75[2] -
                                                  (0xff < sVar5),
                                                  (0 < sVar4) * (sVar4 < 0x100) * auVar75[0] -
                                                  (0xff < sVar4))))))));
                      pauVar64 = pauVar64 + 1;
                      pauVar67 = pauVar67 + 1;
                      uVar42 = iVar50 - 4;
                      unaff_RBP = (undefined1 (*) [16])(ulonglong)uVar42;
                      lVar69 = lVar61 + -0x10;
                      lVar72 = lVar56 + 4;
                    } while (7 < iVar50);
                    if (uVar42 != 0) {
                      do {
                        uVar42 = *(uint *)(*param_6 + lVar56 * 4);
                        auVar76 = psllw(ZEXT416(uVar42),8);
                        *(uint *)(*param_11 + lVar56 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar42 >> 0x18),(ushort)uVar42 >> 8);
                        lVar56 = lVar56 + 1;
                        lVar61 = lVar61 + -4;
                      } while (uVar49 != (uint)lVar56);
                      pauVar64 = (undefined1 (*) [16])((longlong)param_6 - lVar61);
                      pauVar67 = (undefined1 (*) [16])((longlong)param_11 - lVar61);
                    }
                    param_6 = (undefined1 (*) [16])(*pauVar64 + param_7);
                    param_11 = (undefined1 (*) [16])(*pauVar67 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                  goto LAB_14040bc07;
                }
                if (2 < param_1 + 2) {
                  do {
                    uVar42 = uVar49;
                    if ((uVar49 & 3) != 0) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar42 = *(uint *)(*param_6 + lVar69 * 4);
                        auVar76 = psllw(ZEXT416(uVar42),8);
                        *(uint *)(*param_11 + lVar69 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar42 >> 0x18),(ushort)uVar42 >> 8);
                        lVar69 = lVar69 + 1;
                        lVar72 = lVar72 + -4;
                      } while ((uVar49 & 3) != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                      uVar42 = uVar49 - (uint)lVar69;
                    }
                    if (2 < uVar49 - 1) {
                      lVar72 = 0;
                      lVar69 = 0;
                      do {
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 4);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 4) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 8);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 8) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        uVar68 = *(uint *)(*param_6 + lVar69 * 4 + 0xc);
                        auVar76 = psllw(ZEXT416(uVar68),8);
                        *(uint *)(*param_11 + lVar69 * 4 + 0xc) =
                             auVar76._0_4_ | CONCAT22((ushort)(uVar68 >> 0x18),(ushort)uVar68 >> 8);
                        lVar69 = lVar69 + 4;
                        lVar72 = lVar72 + -0x10;
                      } while (uVar42 != (uint)lVar69);
                      param_6 = (undefined1 (*) [16])((longlong)param_6 - lVar72);
                      param_11 = (undefined1 (*) [16])((longlong)param_11 - lVar72);
                    }
                    param_6 = (undefined1 (*) [16])(*param_6 + param_7);
                    param_11 = (undefined1 (*) [16])(*param_11 + param_12);
                    bVar73 = iVar48 != 0;
                    iVar48 = iVar48 + -1;
                  } while (bVar73);
                }
              }
            }
          }
LAB_14040c235:
          local_c0 = uVar40;
          if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_118)) {
            return uVar51 & 0xffffffff;
          }
          goto LAB_14040d9b9;
        }
        if (iVar48 < 0x56555949) {
          if ((iVar48 == 0x32595559) || (iVar48 == 0x55595659)) {
LAB_14040c09d:
            if (param_8 < 0x3231564e) {
              if ((param_8 == 0x30313050) || (param_8 == 0x3132564e)) goto LAB_14040c0d6;
            }
            else if ((param_8 == 0x3231564e) || ((param_8 == 0x56555949 || (param_8 == 0x32315659)))
                    ) {
LAB_14040c0d6:
              if (param_6 == param_11) goto LAB_14040c227;
              local_d0 = &local_68;
              local_d8 = &local_64;
              local_e0 = &local_60;
              local_e8 = &local_58;
              local_f0 = &local_50;
              local_f8 = (undefined1 (*) [16])CONCAT44(local_f8._4_4_,param_7);
              cVar41 = getyuvplanes2_unsupported_yuv_format_s(uVar55,uVar44,param_3,param_6);
              puVar47 = local_50;
              pbVar70 = local_58;
              pbVar65 = local_60;
              if (cVar41 != '\0') {
                local_b8 = (ulonglong)local_64;
                pbVar52 = (byte *)(ulonglong)local_68;
                local_d0 = &local_88;
                local_d8 = &local_84;
                local_e0 = &local_80;
                local_e8 = &local_78;
                local_f0 = &local_70;
                local_f8 = (undefined1 (*) [16])CONCAT44(local_f8._4_4_,param_12);
                cVar41 = getyuvplanes2_unsupported_yuv_format_s(uVar55,uVar44,param_8,param_11);
                if (cVar41 != '\0') {
                  iVar48 = (int)((param_1 - ((int)(param_1 + 1) >> 0x1f)) + 1) >> 1;
                  if ((param_8 == 0x3231564e) || (param_8 == 0x3132564e)) {
                    iVar50 = iVar48 * -2;
                    lVar69 = 2;
                  }
                  else {
                    iVar50 = -iVar48;
                    lVar69 = 1;
                  }
                  uVar42 = param_2 - 1;
                  local_a8 = CONCAT44(local_a8._4_4_,uVar42);
                  uVar49 = 0;
                  if (1 < (int)param_2) {
                    puVar59 = puVar47 + local_b8;
                    pbVar60 = pbVar70 + (longlong)pbVar52;
                    pbVar52 = pbVar52 + (longlong)pbVar65;
                    uVar49 = (int)local_b8 + iVar48 * -4;
                    local_b8 = (ulonglong)uVar49;
                    puVar62 = local_70 + local_84;
                    local_a0 = (ulonglong)(local_84 - param_1);
                    local_90 = (ulonglong)(local_88 + iVar50);
                    local_94 = param_1 & 0xfffffffe;
                    iVar48 = 0;
                    do {
                      if ((int)param_1 < 2) {
                        uVar68 = 0;
                      }
                      else {
                        lVar72 = 0;
                        do {
                          *local_70 = *local_50;
                          puVar1 = local_70 + 2;
                          puVar47 = local_50 + 4;
                          local_70[1] = local_50[2];
                          puVar62[lVar72] = *puVar59;
                          puVar62[lVar72 + 1] = puVar59[2];
                          *local_78 = (byte)((uint)*pbVar60 + (uint)*local_58 >> 1);
                          puVar59 = puVar59 + 4;
                          *local_80 = (byte)((uint)*pbVar52 + (uint)*local_60 >> 1);
                          pbVar70 = local_58 + 4;
                          pbVar60 = pbVar60 + 4;
                          pbVar65 = local_60 + 4;
                          pbVar52 = pbVar52 + 4;
                          local_78 = local_78 + lVar69;
                          local_80 = local_80 + lVar69;
                          lVar72 = lVar72 + 2;
                          local_70 = puVar1;
                          local_60 = pbVar65;
                          local_58 = pbVar70;
                          local_50 = puVar47;
                        } while ((int)lVar72 < (int)(param_1 - 1));
                        puVar62 = puVar62 + lVar72;
                        uVar68 = local_94;
                      }
                      if (uVar68 == param_1 - 1) {
                        *local_70 = *puVar47;
                        *local_70 = puVar47[2];
                        puVar47 = puVar47 + 4;
                        *puVar62 = *puVar59;
                        *puVar62 = puVar59[2];
                        puVar62 = puVar62 + 1;
                        puVar59 = puVar59 + 4;
                        *local_78 = (byte)((uint)*pbVar60 + (uint)*local_58 >> 1);
                        *local_80 = (byte)((uint)*pbVar52 + (uint)*local_60 >> 1);
                        pbVar70 = local_58 + 4;
                        pbVar60 = pbVar60 + 4;
                        pbVar65 = local_60 + 4;
                        pbVar52 = pbVar52 + 4;
                        local_78 = local_78 + lVar69;
                        local_80 = local_80 + lVar69;
                        local_70 = local_70 + 1;
                      }
                      puVar47 = puVar47 + (local_64 + uVar49);
                      puVar59 = puVar59 + (local_64 + uVar49);
                      uVar68 = local_68 + uVar49;
                      pbVar70 = pbVar70 + uVar68;
                      pbVar60 = pbVar60 + uVar68;
                      pbVar65 = pbVar65 + uVar68;
                      pbVar52 = pbVar52 + uVar68;
                      uVar68 = local_84 + (local_84 - param_1);
                      local_70 = local_70 + uVar68;
                      puVar62 = puVar62 + uVar68;
                      local_78 = local_78 + local_90;
                      local_80 = local_80 + local_90;
                      iVar48 = iVar48 + 2;
                      local_60 = pbVar65;
                      local_58 = pbVar70;
                      local_50 = puVar47;
                    } while (iVar48 < (int)uVar42);
                    uVar49 = param_2 & 0x7ffffffe;
                    local_b0 = uVar44;
                  }
                  uVar51 = CONCAT71((int7)((ulonglong)pbVar52 >> 8),1);
                  uVar40 = uVar55;
                  if (uVar49 == uVar42) {
                    uVar49 = 0;
                    if (1 < (int)param_1) {
                      uVar49 = param_1 - 2;
                      if (1 < uVar49) {
                        uVar42 = (uVar49 >> 1) + 1 & 0xfffffffe;
                        lVar72 = 0;
                        do {
                          *local_70 = puVar47[lVar72];
                          local_70[1] = puVar47[lVar72 + 2];
                          *local_78 = pbVar70[lVar72];
                          *local_80 = pbVar65[lVar72];
                          local_70[2] = puVar47[lVar72 + 4];
                          local_70[3] = puVar47[lVar72 + 6];
                          local_70 = local_70 + 4;
                          local_78[lVar69] = pbVar70[lVar72 + 4];
                          local_78 = local_78 + lVar69 * 2;
                          local_80[lVar69] = pbVar65[lVar72 + 4];
                          local_80 = local_80 + lVar69 * 2;
                          lVar72 = lVar72 + 8;
                          uVar42 = uVar42 - 2;
                        } while (uVar42 != 0);
                        puVar47 = puVar47 + lVar72;
                        pbVar70 = pbVar70 + lVar72;
                        pbVar65 = pbVar65 + lVar72;
                      }
                      if ((uVar49 & 2) == 0) {
                        *local_70 = *puVar47;
                        local_70[1] = puVar47[2];
                        local_70 = local_70 + 2;
                        puVar47 = puVar47 + 4;
                        *local_78 = *pbVar70;
                        *local_80 = *pbVar65;
                        pbVar70 = pbVar70 + 4;
                        pbVar65 = pbVar65 + 4;
                        local_78 = local_78 + lVar69;
                        local_80 = local_80 + lVar69;
                      }
                      uVar49 = param_1 & 0x7ffffffe;
                    }
                    local_60 = pbVar65;
                    local_58 = pbVar70;
                    local_50 = puVar47;
                    if (uVar49 == param_1 - 1) {
                      *local_70 = *puVar47;
                      local_c0 = uVar55;
                      goto LAB_14040d98a;
                    }
                  }
                  goto LAB_14040c235;
                }
              }
LAB_14040c223:
              uVar51 = 0;
              uVar40 = local_c0;
              goto LAB_14040c235;
            }
          }
        }
        else {
          if (iVar48 == 0x59565955) goto LAB_14040c09d;
          if (iVar48 == 0x56555949) goto LAB_14040bc71;
        }
LAB_14040c1fa:
        uVar43 = FUN_140155460();
        uVar45 = FUN_140155460(param_3 & 0xffffffff);
        pcVar46 = "SDL_ConvertPixels_YUV_to_YUV: Unsupported YUV conversion: %s -> %s";
      }
LAB_14040c213:
      uVar44 = FUN_1400fbed0(pcVar46,uVar45,uVar43);
    }
  }
  else {
    uVar44 = FUN_1400fbed0("SDL_ConvertPixels_YUV_to_YUV: colorspace conversion not supported");
  }
LAB_14040ae50:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_118)) {
    return uVar44;
  }
LAB_14040d9b9:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_118);
}

