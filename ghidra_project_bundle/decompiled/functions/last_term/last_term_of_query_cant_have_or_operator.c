/**
 * Function: last_term_of_query_cant_have_or_operator
 * Address:  140393dc0
 * Signature: undefined last_term_of_query_cant_have_or_operator(void)
 * Body size: 5179 bytes
 */


undefined8
last_term_of_query_cant_have_or_operator(longlong param_1,longlong param_2,longlong param_3)

{
  short *psVar1;
  ulonglong *puVar2;
  short sVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  size_t sVar12;
  undefined8 uVar13;
  longlong lVar14;
  ushort *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  void *_Dst;
  char cVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  char *pcVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  uint uVar27;
  undefined4 uVar28;
  longlong lVar29;
  byte bVar30;
  byte bVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  ushort *puVar35;
  bool bVar36;
  undefined1 auStack_bb8 [32];
  longlong local_b98;
  longlong *local_b90;
  byte local_b81;
  undefined8 local_b80;
  longlong local_b78;
  ulonglong local_b70;
  undefined8 *local_b68;
  undefined8 *local_b60;
  longlong local_b58;
  ulonglong local_b50;
  longlong local_b48;
  undefined4 local_b3c;
  longlong local_b38;
  undefined8 *local_b30;
  undefined8 local_b28;
  longlong local_b20;
  undefined8 local_b18;
  longlong local_b10;
  ulonglong local_b08;
  ulonglong local_b00;
  longlong local_af8;
  longlong local_af0;
  longlong local_ae8;
  longlong local_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined1 local_948 [2304];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_bb8;
  local_af8 = param_1;
  lVar9 = FUN_1400bd860(&local_af8);
  lVar29 = local_af8;
  *(uint *)(param_2 + 0x30) =
       *(uint *)(param_2 + 0x30) | *(uint *)(local_af8 + 0xbbc) | *(uint *)(param_3 + 0x914);
  memset(local_948,0,0x900);
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_9b8 = 0;
  uStack_9b0 = 0;
  local_9a8 = 0;
  uStack_9a0 = 0;
  local_998 = 0;
  uStack_990 = 0;
  local_988 = 0;
  uStack_980 = 0;
  local_978 = 0;
  uStack_970 = 0;
  local_968 = 0;
  uStack_960 = 0;
  local_958 = 0;
  uStack_950 = 0;
  local_ac8 = 0;
  uStack_ac0 = 0;
  local_ab8 = 0;
  uStack_ab0 = 0;
  local_aa8 = 0;
  uStack_aa0 = 0;
  local_a98 = 0;
  uStack_a90 = 0;
  local_a88 = 0;
  uStack_a80 = 0;
  local_a78 = 0;
  uStack_a70 = 0;
  local_a68 = 0;
  uStack_a60 = 0;
  local_a58 = 0;
  uStack_a50 = 0;
  local_a48 = 0;
  uStack_a40 = 0;
  local_a38 = 0;
  uStack_a30 = 0;
  local_a28 = 0;
  uStack_a20 = 0;
  local_a18 = 0;
  uStack_a10 = 0;
  local_a08 = 0;
  uStack_a00 = 0;
  local_9f8 = 0;
  uStack_9f0 = 0;
  local_9e8 = 0;
  uStack_9e0 = 0;
  local_9d8 = 0;
  uStack_9d0 = 0;
  *(undefined1 **)(param_2 + 0x10) = local_948;
  *(undefined8 **)(param_2 + 0x18) = &local_9c8;
  *(undefined8 **)(param_2 + 0x20) = &local_ac8;
  cVar5 = FUN_140393700(lVar29,param_2,param_3);
  lVar29 = local_af8;
  if (cVar5 == '\0') {
    plVar10 = (longlong *)(param_3 + 0x28);
    lVar14 = 0;
    do {
      if ((((plVar10[-4] == 0) && ((plVar10[-1] & 0xffffffffffffffU) == 0)) &&
          ((plVar10[-1] & 0x200000000000000U) == 0)) && (*plVar10 == 0)) {
        local_af0 = CONCAT44(local_af0._4_4_,(int)lVar14);
        if ((int)lVar14 != 0) goto LAB_140393fbb;
        uVar8 = 0;
        goto LAB_140393fd9;
      }
      lVar14 = lVar14 + 1;
      plVar10 = plVar10 + 9;
    } while (lVar14 != 0x20);
    local_af0 = CONCAT44(local_af0._4_4_,0x20);
    lVar14 = 0x20;
LAB_140393fbb:
    uVar8 = (uint)lVar14;
    memcpy(*(void **)(param_2 + 0x10),(void *)(param_3 + 8),(longlong)(int)uVar8 * 0x48);
LAB_140393fd9:
    pcVar23 = *(char **)(param_3 + 0x908);
    lVar14 = 0;
    local_b38 = param_3;
    if ((pcVar23 != (char *)0x0) && (*pcVar23 != '\0')) {
      if (*(longlong *)(param_3 + 0x980) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_1403af230(lVar29);
      }
      sVar12 = strlen(pcVar23);
      iVar25 = (int)sVar12 * 2 + 1;
      uVar13 = FUN_140391250(*(longlong *)(param_2 + 0x98) + 0x1c0,iVar25);
      lVar14 = FUN_140391500(uVar13);
      local_b98 = (longlong)(int)uVar8 * 0x48 + *(longlong *)(param_2 + 0x10);
      local_b90 = &local_af0;
      iVar7 = max_number_of_terms_d_reached_increase_flecs(lVar29,uVar11,pcVar23,lVar14);
      if (iVar7 == 0) {
        *(longlong *)(param_2 + 0x128) = lVar14;
        *(short *)(param_2 + 0x124) = (short)iVar25;
        lVar14 = lVar9;
        uVar8 = (uint)local_af0;
        goto LAB_1403940c7;
      }
      if (lVar14 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_140391250(lVar9 + 0x1c0,iVar25);
      }
      FUN_140391740(uVar11,lVar14);
LAB_140395223:
      FUN_1400b2ab0(param_2);
      uVar11 = 0xffffffff;
      goto LAB_140395230;
    }
LAB_1403940c7:
    cVar5 = (char)uVar8;
    *(char *)(param_2 + 0x35) = cVar5;
    puVar32 = *(undefined8 **)(param_2 + 0x10);
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_af0 = local_af8;
    *(byte *)(param_2 + 0x31) = *(byte *)(param_2 + 0x31) | 0x10;
    local_ae8 = local_b38;
    local_ae0 = param_2;
    if (cVar5 < '\x01') {
      uVar28 = 0x8000;
      bVar31 = 1;
      bVar30 = 1;
      puVar34 = (undefined8 *)0x0;
      local_b80 = (ulonglong)local_b80._4_4_ << 0x20;
      uVar22 = 0;
      local_b28 = 0;
      lVar29 = local_af8;
      if (cVar5 == '\0') goto LAB_140394d80;
LAB_140394abd:
      if (*(short *)((longlong)puVar32 + (longlong)cVar5 * 0x48 + -6) == 1) {
        pcVar23 = "last term of query can\'t have OR operator";
        goto LAB_140395216;
      }
      local_b58 = CONCAT44(local_b58._4_4_,uVar28);
      *(char *)(param_2 + 0x36) = (char)puVar34;
      local_b81 = bVar30;
      local_b70 = uVar22;
      if (('\0' < cVar5) && ((char)puVar34 != '\0')) {
        local_b50 = (ulonglong)(uVar8 & 0x7f);
        lVar9 = -0x48;
        lVar14 = 1;
        uVar22 = 0;
        local_b78 = lVar29;
        do {
          local_b68 = puVar32 + uVar22 * 9;
          puVar34 = (undefined8 *)(longlong)*(char *)((longlong)puVar32 + uVar22 * 0x48 + 0x44);
          uVar11 = puVar32[uVar22 * 9];
          *(undefined8 *)(*(longlong *)(param_2 + 0x20) + (longlong)puVar34 * 8) = uVar11;
          if (((*(byte *)((longlong)puVar32 + uVar22 * 0x48 + 0x47) & 8) == 0) || (uVar22 == 0)) {
LAB_140394c60:
            local_b60 = puVar34;
            lVar17 = FUN_1403a6e90(lVar29,uVar11);
            puVar34 = local_b68;
            if (lVar17 == 0) {
              puVar18 = (undefined4 *)FUN_1403a5610(lVar29,*local_b68);
              if (puVar18 != (undefined4 *)0x0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)local_b60 * 4) = *puVar18;
                uVar11 = *puVar34;
                puVar34 = local_b60;
                goto LAB_140394bb0;
              }
            }
            else {
              uVar33 = *(ulonglong *)(lVar17 + 0x30) & 0xf000000000000000;
              if ((((uVar33 != 0x8000000000000000) && (uVar33 != 0x9000000000000000)) ||
                  (((uint)(*(ulonglong *)(lVar17 + 0x30) >> 0x20) & 0xfffffff) != 0x10e)) &&
                 (*(undefined4 **)(lVar17 + 0x40) != (undefined4 *)0x0)) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)local_b60 * 4) =
                     **(undefined4 **)(lVar17 + 0x40);
                uVar11 = *(undefined8 *)(lVar17 + 0x30);
                puVar34 = local_b60;
                goto LAB_140394bb0;
              }
            }
          }
          else {
            local_b60 = *(undefined8 **)(param_2 + 0x10);
            lVar17 = uVar22 - 1;
            if (*(short *)((longlong)local_b60 + lVar17 * 0x48 + 0x42) != 1) goto LAB_140394c60;
            puVar24 = local_b60;
            if (lVar17 != 0) {
              if (*(short *)((longlong)local_b60 + uVar22 * 0x48 + -0x4e) == 1) {
                lVar29 = lVar14;
                puVar26 = (undefined8 *)((longlong)local_b60 + lVar9);
                do {
                  lVar29 = lVar29 + 1;
                  puVar24 = local_b60;
                  if (lVar29 == 0) break;
                  puVar24 = puVar26 + -9;
                  psVar1 = (short *)((longlong)puVar26 + -0x4e);
                  puVar26 = puVar24;
                } while (*psVar1 == 1);
              }
              else {
                puVar24 = local_b60 + lVar17 * 9;
              }
            }
            local_b60 = local_b60 + uVar22 * 9;
            uVar11 = *(undefined8 *)(param_2 + 0x88);
            local_b48 = FUN_1403a5610(uVar11,*puVar24);
            lVar17 = FUN_1403a5610(uVar11,*local_b60);
            lVar29 = local_b78;
            if (local_b48 == lVar17) {
              uVar11 = *local_b68;
              goto LAB_140394c60;
            }
            *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)puVar34 * 4) = 0;
            uVar11 = 0;
LAB_140394bb0:
            *(undefined8 *)(*(longlong *)(param_2 + 0x20) + (longlong)puVar34 * 8) = uVar11;
          }
          uVar22 = uVar22 + 1;
          lVar9 = lVar9 + 0x48;
          lVar14 = lVar14 + -1;
        } while (uVar22 != local_b50);
      }
    }
    else {
      local_b00 = (ulonglong)(uVar8 & 0x7f);
      lVar29 = (longlong)puVar32 + 0x8e;
      uVar22 = 0;
      do {
        if ((*(short *)(lVar29 + -0x4c) == 1) &&
           (*(byte *)(lVar29 + -0x47) = *(byte *)(lVar29 + -0x47) | 8, cVar5 + -1 != (int)uVar22)) {
          *(byte *)(lVar29 + 1) = *(byte *)(lVar29 + 1) | 8;
        }
        uVar22 = uVar22 + 1;
        lVar29 = lVar29 + 0x48;
      } while (local_b00 != uVar22);
      local_b78 = local_af8;
      local_b08 = 0x8000010e0000010e;
      puVar35 = (ushort *)((longlong)puVar32 + -2);
      local_b81 = 1;
      local_b58 = -0x48;
      local_b20 = 1;
      lVar29 = 1;
      uVar33 = 0;
      local_b60 = (undefined8 *)0x0;
      iVar7 = 0;
      local_b80 = (ulonglong)local_b80._4_4_ << 0x20;
      local_b28 = 0;
      local_b50 = CONCAT44(local_b50._4_4_,(int)CONCAT71((int7)(uVar22 >> 8),1));
      local_b70 = 0;
      do {
        local_b30 = (undefined8 *)(uVar33 * 9);
        puVar2 = puVar32 + uVar33 * 9;
        if (uVar33 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = CONCAT71((int7)((ulonglong)lVar14 >> 8),*(short *)((longlong)puVar2 + -6) == 1);
        }
        local_b68 = (undefined8 *)CONCAT44(local_b68._4_4_,iVar7);
        if (puVar2[1] == 0) {
          local_b3c = (undefined4)CONCAT71((int7)((ulonglong)local_b28 >> 8),puVar2[2] == 0);
        }
        else {
          local_b3c = 0;
        }
        uStack_ad0 = CONCAT44(uStack_ad0._4_4_,(int)uVar33);
        iVar7 = cascade_modifier_invalid_for_termfirst(local_b78,puVar2,&local_af0);
        if (iVar7 != 0) goto LAB_140395223;
        uVar6 = *(ushort *)((longlong)puVar2 + 0x46);
        if ((uVar6 & 0x2000) == 0) {
          uVar22 = puVar2[7];
        }
        else {
          if (uVar33 == 0) {
            uVar6 = uVar6 & 0xffbf;
            *(ushort *)((longlong)puVar2 + 0x46) = uVar6;
          }
          local_b70 = CONCAT71((int7)(local_b70 >> 8),(byte)local_b70 | (int)*puVar2 != 0x10f);
          uVar22 = puVar2[7];
        }
        if ((uVar22 == 0x126) &&
           ((*(short *)((longlong)puVar2 + 0x42) == 3 || (*(short *)((longlong)puVar2 + 0x42) == 0))
           )) {
          local_b70 = CONCAT71((int7)(local_b70 >> 8),(byte)local_b70 | (uVar6 & 0x800) == 0);
        }
        uVar22 = local_b80 & 0xffffffff;
        uVar20 = (uint)local_b50 & 0xff;
        if (puVar2[1] != 0x200000000000000) {
          uVar20 = 0;
        }
        if ((int)local_b68 != 0) {
          uVar6 = uVar6 & 0xffbf;
          *(ushort *)((longlong)puVar2 + 0x46) = uVar6;
        }
        local_b50 = CONCAT44(local_b50._4_4_,uVar20);
        bVar30 = (byte)uVar11;
        if ((uVar6 & 0x40) == 0) {
          puVar15 = puVar35;
          lVar9 = lVar29;
          if (bVar30 == 1 && uVar33 != 0) {
            do {
              iVar7 = (int)uVar22;
              if (puVar15[-2] != 1) break;
              if ((*puVar15 & 0x40) != 0) {
                uVar22 = (ulonglong)(iVar7 - 1);
                *puVar15 = *puVar15 & 0xffbf;
              }
              iVar7 = (int)uVar22;
              lVar9 = lVar9 + -1;
              puVar15 = puVar15 + -0x24;
            } while (1 < lVar9);
            local_b80 = CONCAT44(local_b80._4_4_,iVar7);
          }
        }
        else {
          if ((bVar30 == 0) || ((*(byte *)((longlong)puVar2 + -2) & 0x40) != 0)) {
            local_b80 = CONCAT44(local_b80._4_4_,(int)local_b80 + 1);
          }
          else {
            uVar6 = uVar6 & 0xffbf;
            *(ushort *)((longlong)puVar2 + 0x46) = uVar6;
          }
          local_b81 = local_b81 & (uVar6 & 0x200) == 0;
        }
        local_b48 = CONCAT44(local_b48._4_4_,(int)uVar11);
        cVar19 = (char)local_b60 + (bVar30 ^ 1);
        local_b60 = (undefined8 *)CONCAT71((int7)((ulonglong)local_b60 >> 8),cVar19);
        *(char *)((longlong)puVar2 + 0x44) = cVar19 + -1;
        cVar19 = FUN_1403b31e0(*puVar2);
        if (cVar19 == '\0') {
          if ((*(byte *)((longlong)puVar2 + 0x47) & 8) == 0) {
            *(uint *)(param_2 + 0x40) =
                 *(uint *)(param_2 + 0x40) | 1 << (*(byte *)((longlong)puVar2 + 0x44) & 0x1f);
          }
        }
        else if ((*(short *)((longlong)puVar2 + 0x42) != 2) ||
                (cVar19 = FUN_1403b3280(*puVar2), cVar19 != '\0')) {
          *(byte *)(param_2 + 0x31) = *(byte *)(param_2 + 0x31) | 0x40;
        }
        uVar22 = *puVar2 & 0xffffffffffffff;
        if (uVar22 == 0x109) {
          *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 2;
          uVar22 = *puVar2 & 0xffffffffffffff;
        }
        if ((uVar22 == 0x10a) && ((longlong)puVar2[1] < 0)) {
          *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 4;
          sVar3 = *(short *)((longlong)puVar2 + 0x42);
        }
        else {
          sVar3 = *(short *)((longlong)puVar2 + 0x42);
        }
        if ((sVar3 == 2) && ((short)puVar2[8] == 0)) {
          *(undefined2 *)(puVar2 + 8) = 1;
        }
        if (((*puVar2 == 0x10e) || (*puVar2 == local_b08)) && ((short)puVar2[8] == 0)) {
          *(undefined2 *)(puVar2 + 8) = 1;
        }
        lVar14 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        bVar36 = true;
        if ((puVar2[1] == 0x200000000000000) || (bVar36 = true, (short)puVar2[8] == 1)) {
LAB_1403946d0:
          if (((*(byte *)((longlong)puVar2 + 0x47) & 1) != 0) || (!bVar36)) goto LAB_1403946db;
        }
        else {
          lVar9 = FUN_1403a5610(local_b78);
          bVar36 = true;
          if (lVar9 == 0) goto LAB_1403946d0;
          bVar36 = true;
          if (((int)local_b68 != 0) ||
             (bVar36 = true, (*(ushort *)((longlong)puVar2 + 0x46) & 0x100) != 0))
          goto LAB_1403946d0;
          cVar19 = FUN_1403b3760(local_b78,*puVar2);
          bVar36 = true;
          if (cVar19 != '\0') goto LAB_1403946d0;
          uVar22 = *puVar2 & 0xffffffff;
          if (uVar22 == 0x10f || uVar22 == 0x10e) {
            uVar11 = FUN_1400b7610(local_b78,(uint)(*puVar2 >> 0x20) & 0xfffffff);
            lVar9 = FUN_1403a5610(local_b78,uVar11);
            bVar36 = true;
            if (lVar9 == 0) goto LAB_1403946d0;
          }
          sVar3 = (short)puVar2[8];
          if ((sVar3 != 1) && (sVar3 != 4)) {
            uVar22 = puVar2[1];
            uVar21 = uVar22 & 0xffffffffffffff;
            if ((sVar3 != 0) || ((uVar22 & 0x400000000000000) != 0 && uVar21 == 0x110)) {
              *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 0x10;
              uVar22 = puVar2[1];
              uVar21 = uVar22 & 0xffffffffffffff;
            }
            if (((uVar22 & 0x4400000000000000) != 0x400000000000000 || uVar21 != 0x110) &&
               ((short)puVar2[8] != 0)) {
              *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 0x20;
            }
          }
          if ((*(byte *)((longlong)puVar2 + 0x47) & 8) != 0) {
            if (uVar33 == 0) {
LAB_140394657:
              bVar36 = false;
            }
            else {
              puVar34 = *(undefined8 **)(param_2 + 0x10);
              lVar9 = uVar33 - 1;
              if (*(short *)((longlong)puVar34 + lVar9 * 0x48 + 0x42) != 1) goto LAB_140394657;
              puVar24 = puVar34;
              if (lVar9 != 0) {
                if (*(short *)((longlong)puVar34 + (longlong)local_b30 * 8 + -0x4e) == 1) {
                  lVar9 = local_b20;
                  puVar26 = (undefined8 *)((longlong)puVar34 + local_b58);
                  do {
                    lVar9 = lVar9 + 1;
                    puVar24 = puVar34;
                    if (lVar9 == 0) break;
                    puVar24 = puVar26 + -9;
                    psVar1 = (short *)((longlong)puVar26 + -0x4e);
                    puVar26 = puVar24;
                  } while (*psVar1 == 1);
                }
                else {
                  puVar24 = puVar34 + lVar9 * 9;
                }
              }
              local_b30 = puVar34 + (longlong)local_b30;
              local_b18 = *(undefined8 *)(param_2 + 0x88);
              local_b10 = FUN_1403a5610(local_b18,*puVar24);
              lVar9 = FUN_1403a5610(local_b18,*local_b30);
              bVar36 = local_b10 != lVar9;
            }
            *(uint *)(param_2 + 0x44) =
                 *(uint *)(param_2 + 0x44) &
                 ~(uint)(1L << (*(byte *)((longlong)puVar2 + 0x44) & 0x3f));
            goto LAB_1403946d0;
          }
LAB_1403946db:
          if ((*(short *)((longlong)puVar2 + 0x42) != 2) &&
             (((*(uint *)(param_2 + 0x44) =
                     *(uint *)(param_2 + 0x44) | 1 << (*(byte *)((longlong)puVar2 + 0x44) & 0x1f),
               (short)puVar2[8] == 4 ||
               (*(uint *)(param_2 + 0x48) =
                     *(uint *)(param_2 + 0x48) | 1 << (*(byte *)((longlong)puVar2 + 0x44) & 0x1f),
               (short)puVar2[8] != 5)) &&
              (*(uint *)(param_2 + 0x4c) =
                    *(uint *)(param_2 + 0x4c) | 1 << (*(byte *)((longlong)puVar2 + 0x44) & 0x1f),
              (short)puVar2[8] == 0)))) {
            *(uint *)(param_2 + 0x54) =
                 *(uint *)(param_2 + 0x54) | 1 << (*(byte *)((longlong)puVar2 + 0x44) & 0x1f);
          }
          lVar14 = 0;
        }
        lVar9 = FUN_1403a6e90(local_b78,*puVar2);
        if (lVar9 == 0) {
          if (*puVar2 != 0) {
            uVar22 = FUN_1403a6c60(local_b78);
            goto LAB_140394767;
          }
          bVar36 = true;
          uVar21 = puVar2[1];
          bVar30 = local_b81;
          uVar22 = local_b70;
          puVar34 = local_b60;
          lVar9 = local_b58;
          uVar11 = local_b28;
        }
        else {
          uVar22 = (ulonglong)*(uint *)(lVar9 + 0x38);
LAB_140394767:
          bVar36 = (uVar22 & 0x200000) == 0;
          if (((byte)(uVar22 >> 0x18) >> 1 & 1 & (byte)local_b3c) == 1) {
            puVar2[1] = puVar2[3] | 0x8200000000000000;
            uVar6 = *(ushort *)((longlong)puVar2 + 0x46);
            *(ushort *)((longlong)puVar2 + 0x46) = uVar6 & 0xffdf;
            if ((uVar6 & 0x40) != 0) {
              local_b80 = CONCAT44(local_b80._4_4_,(int)local_b80 + -1);
              *(ushort *)((longlong)puVar2 + 0x46) = uVar6 & 0xff9f;
            }
          }
          uVar21 = puVar2[1];
          bVar30 = local_b81;
          uVar22 = local_b70;
          puVar34 = local_b60;
          lVar9 = local_b58;
          uVar11 = local_b28;
        }
        if (((uVar21 & 0x200000000000000) != 0) && (*puVar2 < 0x100)) {
          *(undefined1 *)(local_b78 + 0x6cc + *puVar2) = 1;
          uVar21 = puVar2[1];
        }
        uVar27 = *(uint *)(param_2 + 0x30) & 0xffffefff;
        uVar20 = *(uint *)(param_2 + 0x30) | 0x800;
        if ((uVar21 & 0xffffffffffffff) != 0x110) {
          uVar20 = uVar27;
        }
        if ((uVar21 & 0x400000000000000) == 0) {
          uVar20 = uVar27;
        }
        *(uint *)(param_2 + 0x30) = uVar20;
        uVar21 = puVar2[1];
        uVar16 = uVar21 & 0xffffffffffffff;
        if ((uVar21 & 0x200000000000000) != 0 && uVar16 != 0) {
          *(uint *)(param_2 + 0x38) =
               *(uint *)(param_2 + 0x38) | 1 << (*(byte *)((longlong)puVar2 + 0x44) & 0x1f);
          uVar21 = puVar2[1];
          uVar16 = uVar21 & 0xffffffffffffff;
        }
        if (uVar16 != 0x110 && (uVar21 & 0x400000000000000) != 0) {
          *(uint *)(param_2 + 0x3c) =
               *(uint *)(param_2 + 0x3c) | 1 << (*(byte *)((longlong)puVar2 + 0x44) & 0x1f);
        }
        local_b81 = bVar30;
        local_b70 = uVar22;
        local_b60 = puVar34;
        local_b58 = lVar9;
        local_b28 = uVar11;
        if ((char)local_b48 != '\0') {
          if (((puVar2[1] ^ puVar2[-8]) & 0xffffffffffffff) != 0) {
            pcVar23 = 
            "mismatching sources in OR expression (all terms in OR expression must have the same source)"
            ;
            goto LAB_140395216;
          }
          if (1 < *(ushort *)((longlong)puVar2 + 0x42)) {
            pcVar23 = "term after OR expression cannot use operators";
            goto LAB_140395216;
          }
        }
        if (!bVar36) {
          uVar6 = *(ushort *)((longlong)puVar2 + 0x46);
          uVar4 = 0xfb9f;
          if ((uVar6 & 0x40) == 0) {
            uVar4 = 0xfbdf;
          }
          local_b80._4_4_ = (uint)(local_b80 >> 0x20);
          local_b80 = CONCAT44(local_b80._4_4_,(int)local_b80 - ((uVar6 & 0x40) >> 6));
          *(ushort *)((longlong)puVar2 + 0x46) = uVar6 & uVar4 | 0x400;
          if ((char)lVar14 == '\0') {
            *(uint *)(param_2 + 0x50) =
                 *(uint *)(param_2 + 0x50) | (uint)(1L << ((byte)uVar33 & 0x3f));
          }
        }
        uVar6 = *(ushort *)((longlong)puVar2 + 0x42);
        uVar21 = puVar2[3] & 0xffffffffffffff;
        if (((uVar21 == 0x13d) || (uVar21 == 0x13e)) || (uVar21 == 0x13f)) {
          *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 2;
          puVar2[1] = puVar2[1] & 0x7ffffffffffffff | 0x8000000000000000;
          *(undefined2 *)(puVar2 + 8) = 1;
        }
        else if (((puVar2[1] & 0x2ffffffffffffff) != 0x200000000000000) && ((uVar6 | 4) != 6)) {
          *(uint *)(param_2 + 0x58) =
               *(uint *)(param_2 + 0x58) | 1 << (*(byte *)((longlong)puVar2 + 0x44) & 0x1f);
        }
        iVar7 = (int)local_b68;
        if (uVar21 == 0x140) {
          *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 4;
          iVar7 = (int)local_b68 + 1;
        }
        if (iVar7 != 0) {
          *(ushort *)((longlong)puVar2 + 0x46) =
               *(ushort *)((longlong)puVar2 + 0x46) & 0xff1f | 0x80;
          local_b80 = CONCAT44(local_b80._4_4_,(int)local_b80 + -1);
        }
        if (uVar21 == 0x141) {
          if ((uVar33 != 0) && ((puVar2[-6] & 0xffffffffffffff) == 0x140)) {
            pcVar23 = "invalid empty scope";
            goto LAB_140395216;
          }
          *(byte *)(param_2 + 0x32) = *(byte *)(param_2 + 0x32) | 4;
          iVar7 = iVar7 + -1;
        }
        if (iVar7 < 0) {
          pcVar23 = "\'}\' without matching \'{\'";
          goto LAB_140395216;
        }
        local_b28 = CONCAT71((int7)((ulonglong)uVar11 >> 8),(byte)uVar11 | (uVar6 & 0xfffe) == 2);
        uVar33 = uVar33 + 1;
        lVar29 = lVar29 + 1;
        puVar35 = puVar35 + 0x24;
        local_b58 = lVar9 + 0x48;
        local_b20 = local_b20 + -1;
      } while (uVar33 != local_b00);
      if (iVar7 != 0) {
        pcVar23 = "missing \'}\'";
        local_b58 = lVar9;
        local_b28 = uVar11;
LAB_140395216:
        FUN_140392c00(&local_af0,pcVar23);
        goto LAB_140395223;
      }
      uVar28 = (undefined4)((local_b50 & 0xff) << 0xf);
      lVar29 = local_b78;
      bVar31 = bVar30;
      local_b58 = lVar9;
      if (cVar5 != '\0') goto LAB_140394abd;
LAB_140394d80:
      local_b58 = CONCAT44(local_b58._4_4_,uVar28);
      *(char *)(param_2 + 0x36) = (char)puVar34;
      local_b81 = bVar31;
      local_b70 = uVar22;
    }
    uVar20 = ((byte)local_b28 & 1) << 0x10 | *(uint *)(param_2 + 0x30) & 0xfffeffff;
    if ((*(uint *)(param_2 + 0x30) & 0x21006) == 0x1000) {
      uVar20 = uVar20 | 0x2000;
      *(uint *)(param_2 + 0x30) = uVar20;
      if (cVar5 < '\x01') {
        bVar36 = true;
      }
      else {
        uVar22 = (ulonglong)(uVar8 & 0x7f);
        bVar36 = true;
        do {
          if ((*(byte *)((longlong)puVar32 + 0xf) & 0x40) != 0) {
            *(byte *)(param_2 + 0x31) = *(byte *)(param_2 + 0x31) & 0xdf;
          }
          if ((((puVar32[3] & 0xffffffffffffff) == 0x126) && ((puVar32[5] & 0xffffffffffffff) != 0))
             || ((*(byte *)((longlong)puVar32 + 0x46) & 0x20) == 0)) {
            bVar36 = false;
          }
          else if (((longlong)puVar32[1] < -0x7800000000000000) &&
                  (cVar19 = FUN_1403b31e0(*puVar32), cVar19 == '\0')) {
            uVar11 = FUN_14039f690(*(undefined8 *)(param_2 + 0x28),*puVar32);
            *(undefined8 *)(param_2 + 0x28) = uVar11;
          }
          puVar32 = puVar32 + 9;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
        uVar20 = *(uint *)(param_2 + 0x30);
      }
      uVar8 = uVar20 | 0x800000;
      if (!bVar36) {
        uVar8 = uVar20;
      }
      if (cVar5 != '\0') {
        uVar20 = uVar8;
      }
    }
    uVar27 = (uint)((int)local_b80 != 0) << 0x18;
    uVar8 = uVar27 | uVar20 & 0xfeffffff;
    *(uint *)(param_2 + 0x30) = uVar8;
    if (((local_b81 & (int)local_b80 == cVar5) == 1) &&
       (*(longlong *)(local_b38 + 0x918) == 0 && (local_b70 & 1) == 0)) {
      uVar27 = uVar8 | 0x2000000;
LAB_140394edc:
      uVar27 = uVar27 & 0xbfffffff;
    }
    else {
      uVar27 = uVar27 | uVar20 & 0xfcffffff;
      if ((local_b70 & 1) == 0) goto LAB_140394edc;
      uVar27 = uVar27 | 0x40000000;
    }
    *(uint *)(param_2 + 0x30) = (uVar27 & 0xffff7fff) + (int)local_b58;
    if (*(char *)(param_2 + 0x35) < '\x01') {
      uVar22 = *(ulonglong *)(param_2 + 0x128);
      sVar3 = *(short *)(param_2 + 0x124);
      *(undefined8 *)(param_2 + 0x128) = 0;
      *(undefined2 *)(param_2 + 0x124) = 0;
    }
    else {
      lVar29 = 0x30;
      lVar9 = 0;
      do {
        lVar14 = *(longlong *)(param_2 + 0x10);
        pcVar23 = *(char **)(lVar14 + -0x10 + lVar29);
        if (((pcVar23 != (char *)0x0) && (*pcVar23 == '$')) && (pcVar23[1] != '\0')) {
          *(char **)(lVar14 + -0x10 + lVar29) = pcVar23 + 1;
          iVar7 = strcmp(pcVar23 + 1,"this");
          if (iVar7 == 0) {
            *(undefined8 *)(lVar14 + -0x10 + lVar29) = 0;
            puVar2 = (ulonglong *)(lVar14 + -0x18 + lVar29);
            *puVar2 = *puVar2 | 0x110;
          }
        }
        pcVar23 = *(char **)(lVar14 + lVar29);
        if (((pcVar23 != (char *)0x0) && (*pcVar23 == '$')) && (pcVar23[1] != '\0')) {
          *(char **)(lVar14 + lVar29) = pcVar23 + 1;
          iVar7 = strcmp(pcVar23 + 1,"this");
          if (iVar7 == 0) {
            *(undefined8 *)(lVar14 + lVar29) = 0;
            puVar2 = (ulonglong *)(lVar14 + -8 + lVar29);
            *puVar2 = *puVar2 | 0x110;
          }
        }
        pcVar23 = *(char **)(lVar14 + -0x20 + lVar29);
        if (((pcVar23 != (char *)0x0) && (*pcVar23 == '$')) && (pcVar23[1] != '\0')) {
          *(char **)(lVar14 + -0x20 + lVar29) = pcVar23 + 1;
          iVar7 = strcmp(pcVar23 + 1,"this");
          if (iVar7 == 0) {
            *(undefined8 *)(lVar14 + -0x20 + lVar29) = 0;
            puVar2 = (ulonglong *)(lVar14 + -0x28 + lVar29);
            *puVar2 = *puVar2 | 0x110;
          }
        }
        lVar9 = lVar9 + 1;
        cVar5 = *(char *)(param_2 + 0x35);
        lVar29 = lVar29 + 0x48;
      } while (lVar9 < cVar5);
      uVar22 = *(ulonglong *)(param_2 + 0x128);
      sVar3 = *(short *)(param_2 + 0x124);
      *(undefined8 *)(param_2 + 0x128) = 0;
      *(undefined2 *)(param_2 + 0x124) = 0;
      if ('\0' < cVar5) {
        lVar29 = *(longlong *)(param_2 + 0x10);
        lVar9 = (longlong)cVar5 * 0x48;
        lVar14 = 0;
        iVar7 = 0;
        do {
          pcVar23 = *(char **)(lVar29 + 0x20 + lVar14);
          if (pcVar23 != (char *)0x0) {
            sVar12 = strlen(pcVar23);
            iVar7 = iVar7 + (int)sVar12 + 1;
          }
          pcVar23 = *(char **)(lVar29 + 0x30 + lVar14);
          if (pcVar23 != (char *)0x0) {
            sVar12 = strlen(pcVar23);
            iVar7 = iVar7 + (int)sVar12 + 1;
          }
          pcVar23 = *(char **)(lVar29 + 0x10 + lVar14);
          if (pcVar23 != (char *)0x0) {
            sVar12 = strlen(pcVar23);
            iVar7 = iVar7 + (int)sVar12 + 1;
          }
          lVar14 = lVar14 + 0x48;
        } while (lVar9 != lVar14);
        if (iVar7 != 0) {
          local_b68 = (undefined8 *)CONCAT62(local_b68._2_6_,sVar3);
          local_b80 = uVar22;
          uVar11 = FUN_140391250(*(longlong *)(param_2 + 0x98) + 0x1c0,iVar7);
          _Dst = (void *)FUN_140391500(uVar11);
          *(void **)(param_2 + 0x128) = _Dst;
          *(short *)(param_2 + 0x124) = (short)iVar7;
          lVar29 = 0;
          do {
            lVar14 = *(longlong *)(param_2 + 0x10);
            pcVar23 = *(char **)(lVar14 + 0x20 + lVar29);
            if (pcVar23 != (char *)0x0) {
              sVar12 = strlen(pcVar23);
              memcpy(_Dst,pcVar23,(longlong)((sVar12 << 0x20) + 0x100000000) >> 0x20);
              *(void **)(lVar14 + 0x20 + lVar29) = _Dst;
              _Dst = (void *)((longlong)_Dst + (longlong)(int)sVar12 + 1);
            }
            pcVar23 = *(char **)(lVar14 + 0x30 + lVar29);
            if (pcVar23 != (char *)0x0) {
              sVar12 = strlen(pcVar23);
              memcpy(_Dst,pcVar23,(longlong)((sVar12 << 0x20) + 0x100000000) >> 0x20);
              *(void **)(lVar14 + 0x30 + lVar29) = _Dst;
              _Dst = (void *)((longlong)_Dst + (longlong)(int)sVar12 + 1);
            }
            pcVar23 = *(char **)(lVar14 + 0x10 + lVar29);
            if (pcVar23 != (char *)0x0) {
              sVar12 = strlen(pcVar23);
              memcpy(_Dst,pcVar23,(longlong)((sVar12 << 0x20) + 0x100000000) >> 0x20);
              *(void **)(lVar14 + 0x10 + lVar29) = _Dst;
              _Dst = (void *)((longlong)_Dst + (longlong)(int)sVar12 + 1);
            }
            lVar29 = lVar29 + 0x48;
          } while (lVar9 != lVar29);
          uVar22 = local_b80;
          sVar3 = (short)local_b68;
        }
      }
    }
    if (uVar22 != 0) {
      uVar11 = FUN_140391250(*(longlong *)(param_2 + 0x98) + 0x1c0,(int)sVar3);
      FUN_140391740(uVar11,uVar22);
    }
  }
  uVar11 = 0;
  FUN_1400b2ab0(param_2);
  *(byte *)(param_2 + 0x33) = *(byte *)(param_2 + 0x33) | 0x80;
LAB_140395230:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_bb8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_bb8);
  }
  return uVar11;
}

