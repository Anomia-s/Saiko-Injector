/**
 * Function: no_previous_regular_expression
 * Address:  140a569e0
 * Signature: undefined no_previous_regular_expression(void)
 * Body size: 4486 bytes
 */


char * no_previous_regular_expression
                 (ulonglong param_1,byte *param_2,longlong param_3,char param_4,char param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  ulonglong uVar13;
  byte *pbVar14;
  char *pcVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  byte *pbVar20;
  uint uVar21;
  byte *pbVar22;
  int iVar23;
  byte *pbVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_a8 [35];
  char local_85;
  uint local_84;
  ulonglong local_80;
  byte *local_78;
  byte *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  pbVar12 = (byte *)(param_1 + 0x238);
  if (param_2 != (byte *)0x0 && param_3 != 0) {
    *(undefined4 *)(param_1 + 0x1238) = 0;
    if (0 < param_3) {
      local_60 = param_1 | 1;
      local_68 = param_1 + 0x10;
      local_80 = 1;
      iVar23 = 0;
      lVar29 = 0x238;
      local_84 = 0;
      pbVar24 = pbVar12;
      pbVar22 = pbVar12;
      local_85 = param_4;
      local_70 = param_2;
      local_58 = param_3;
LAB_140a56aba:
      if (0x120e < lVar29) {
        *pbVar24 = 0;
        pcVar15 = "Pattern too long";
        goto LAB_140a57a5e;
      }
      bVar9 = *param_2;
      switch(bVar9) {
      case 0x24:
        if (param_2[1] == 0) {
          lVar29 = lVar29 + 1;
          *pbVar22 = 5;
          pbVar12 = pbVar22;
        }
        else {
LAB_140a56ebf:
          *pbVar22 = 1;
          bVar9 = *param_2;
LAB_140a56ec8:
          lVar29 = lVar29 + 2;
          pbVar22[1] = bVar9;
          pbVar12 = pbVar22;
        }
        break;
      default:
        if ((param_5 == '\0') || (bVar9 != 0x28)) {
          if ((param_5 != '\0') && (bVar9 == 0x29)) {
            if (*pbVar12 == 6) {
              *pbVar24 = 0;
              pcVar15 = "Null pattern inside ()";
            }
            else {
              if (0 < (int)local_84) {
                *pbVar22 = 7;
                uVar13 = (ulonglong)local_84;
                local_84 = local_84 - 1;
                bVar9 = *(byte *)(param_1 + 0x1e8 + uVar13 * 8);
                goto LAB_140a56ec8;
              }
              *pbVar24 = 0;
              pcVar15 = "Unmatched )";
            }
            goto LAB_140a57a5e;
          }
          if (bVar9 == 0) {
            bVar9 = 0x5c;
          }
          if ((param_4 != '\0') ||
             (*(char *)(*(longlong *)(param_1 + 0x1260) + (ulonglong)bVar9) != '\x02')) {
            *pbVar22 = 1;
            lVar29 = lVar29 + 2;
            pbVar22[1] = bVar9;
            pbVar12 = pbVar22;
            break;
          }
          *pbVar22 = 3;
          pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(bVar9 >> 3));
          *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[bVar9 & 7];
          if ((byte)(bVar9 + 0x9f) < 0x1a) {
            bVar9 = bVar9 - 0x20;
LAB_140a57523:
            pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(bVar9 >> 3));
            *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[bVar9 & 7];
          }
          else if ((byte)(bVar9 + 0xbf) < 0x1a) {
            bVar9 = bVar9 | 0x20;
            goto LAB_140a57523;
          }
          *(undefined1 *)(param_1 + 1 + lVar29) = *(undefined1 *)(param_1 + 0x123c);
          *(undefined1 *)(param_1 + 0x123c) = 0;
          *(undefined1 *)(param_1 + 2 + lVar29) = *(undefined1 *)(param_1 + 0x123d);
          *(undefined1 *)(param_1 + 0x123d) = 0;
          *(undefined1 *)(param_1 + 3 + lVar29) = *(undefined1 *)(param_1 + 0x123e);
          *(undefined1 *)(param_1 + 0x123e) = 0;
          *(undefined1 *)(param_1 + 4 + lVar29) = *(undefined1 *)(param_1 + 0x123f);
          *(undefined1 *)(param_1 + 0x123f) = 0;
          *(undefined1 *)(param_1 + 5 + lVar29) = *(undefined1 *)(param_1 + 0x1240);
          *(undefined1 *)(param_1 + 0x1240) = 0;
          *(undefined1 *)(param_1 + 6 + lVar29) = *(undefined1 *)(param_1 + 0x1241);
          *(undefined1 *)(param_1 + 0x1241) = 0;
          *(undefined1 *)(param_1 + 7 + lVar29) = *(undefined1 *)(param_1 + 0x1242);
          *(undefined1 *)(param_1 + 0x1242) = 0;
          *(undefined1 *)(param_1 + 8 + lVar29) = *(undefined1 *)(param_1 + 0x1243);
          *(undefined1 *)(param_1 + 0x1243) = 0;
          *(undefined1 *)(param_1 + 9 + lVar29) = *(undefined1 *)(param_1 + 0x1244);
          *(undefined1 *)(param_1 + 0x1244) = 0;
          *(undefined1 *)(param_1 + 10 + lVar29) = *(undefined1 *)(param_1 + 0x1245);
          *(undefined1 *)(param_1 + 0x1245) = 0;
          *(undefined1 *)(param_1 + 0xb + lVar29) = *(undefined1 *)(param_1 + 0x1246);
          *(undefined1 *)(param_1 + 0x1246) = 0;
          *(undefined1 *)(param_1 + 0xc + lVar29) = *(undefined1 *)(param_1 + 0x1247);
          *(undefined1 *)(param_1 + 0x1247) = 0;
          *(undefined1 *)(param_1 + 0xd + lVar29) = *(undefined1 *)(param_1 + 0x1248);
          *(undefined1 *)(param_1 + 0x1248) = 0;
          *(undefined1 *)(param_1 + 0xe + lVar29) = *(undefined1 *)(param_1 + 0x1249);
          *(undefined1 *)(param_1 + 0x1249) = 0;
          *(undefined1 *)(param_1 + 0xf + lVar29) = *(undefined1 *)(param_1 + 0x124a);
          *(undefined1 *)(param_1 + 0x124a) = 0;
          *(undefined1 *)(param_1 + 0x10 + lVar29) = *(undefined1 *)(param_1 + 0x124b);
          *(undefined1 *)(param_1 + 0x124b) = 0;
          *(undefined1 *)(param_1 + 0x11 + lVar29) = *(undefined1 *)(param_1 + 0x124c);
          *(undefined1 *)(param_1 + 0x124c) = 0;
          *(undefined1 *)(param_1 + 0x12 + lVar29) = *(undefined1 *)(param_1 + 0x124d);
          *(undefined1 *)(param_1 + 0x124d) = 0;
          *(undefined1 *)(param_1 + 0x13 + lVar29) = *(undefined1 *)(param_1 + 0x124e);
          *(undefined1 *)(param_1 + 0x124e) = 0;
          *(undefined1 *)(param_1 + 0x14 + lVar29) = *(undefined1 *)(param_1 + 0x124f);
          *(undefined1 *)(param_1 + 0x124f) = 0;
          *(undefined1 *)(param_1 + 0x15 + lVar29) = *(undefined1 *)(param_1 + 0x1250);
          *(undefined1 *)(param_1 + 0x1250) = 0;
          *(undefined1 *)(param_1 + 0x16 + lVar29) = *(undefined1 *)(param_1 + 0x1251);
          *(undefined1 *)(param_1 + 0x1251) = 0;
          *(undefined1 *)(param_1 + 0x17 + lVar29) = *(undefined1 *)(param_1 + 0x1252);
          *(undefined1 *)(param_1 + 0x1252) = 0;
          *(undefined1 *)(param_1 + 0x18 + lVar29) = *(undefined1 *)(param_1 + 0x1253);
          *(undefined1 *)(param_1 + 0x1253) = 0;
          *(undefined1 *)(param_1 + 0x19 + lVar29) = *(undefined1 *)(param_1 + 0x1254);
          *(undefined1 *)(param_1 + 0x1254) = 0;
          *(undefined1 *)(param_1 + 0x1a + lVar29) = *(undefined1 *)(param_1 + 0x1255);
          *(undefined1 *)(param_1 + 0x1255) = 0;
          *(undefined1 *)(param_1 + 0x1b + lVar29) = *(undefined1 *)(param_1 + 0x1256);
          *(undefined1 *)(param_1 + 0x1256) = 0;
          *(undefined1 *)(param_1 + 0x1c + lVar29) = *(undefined1 *)(param_1 + 0x1257);
          *(undefined1 *)(param_1 + 0x1257) = 0;
          *(undefined1 *)(param_1 + 0x1d + lVar29) = *(undefined1 *)(param_1 + 0x1258);
          *(undefined1 *)(param_1 + 0x1258) = 0;
          *(undefined1 *)(param_1 + 0x1e + lVar29) = *(undefined1 *)(param_1 + 0x1259);
          *(undefined1 *)(param_1 + 0x1259) = 0;
          *(undefined1 *)(param_1 + 0x1f + lVar29) = *(undefined1 *)(param_1 + 0x125a);
          *(undefined1 *)(param_1 + 0x125a) = 0;
          *(undefined1 *)(param_1 + 0x20 + lVar29) = *(undefined1 *)(param_1 + 0x125b);
          *(undefined1 *)(param_1 + 0x125b) = 0;
          lVar29 = lVar29 + 0x21;
          pbVar12 = pbVar22;
        }
        else {
          if (9 < (int)local_80) {
            *pbVar24 = 0;
            pcVar15 = "Too many () pairs";
            goto LAB_140a57a5e;
          }
LAB_140a56efa:
          lVar19 = (longlong)(int)local_84;
          local_84 = local_84 + 1;
          *(longlong *)(param_1 + 0x1f0 + lVar19 * 8) = (longlong)(int)local_80;
          *pbVar22 = 6;
          pbVar22[1] = (byte)local_80;
          local_80 = (ulonglong)((int)local_80 + 1);
          lVar29 = lVar29 + 2;
          pbVar12 = pbVar22;
        }
        break;
      case 0x2a:
      case 0x2b:
      case 0x3f:
        if (param_2 == local_70) {
          *pbVar24 = 0;
          pcVar15 = "Empty closure";
          goto LAB_140a57a5e;
        }
        bVar16 = *pbVar12;
        if (bVar16 < 0xe) {
          if ((0x2800U >> (bVar16 & 0x1f) & 1) != 0) break;
          if ((2000U >> (bVar16 & 0x1f) & 1) != 0) {
            *pbVar24 = 0;
            pcVar15 = "Illegal closure";
            goto LAB_140a57a5e;
          }
        }
        if ((bVar9 == 0x2b) && (pbVar12 < pbVar22)) {
          uVar13 = (longlong)pbVar22 - (longlong)pbVar12;
          pbVar20 = pbVar12;
          if ((0x1f < uVar13) && (0x1f < (lVar29 + param_1) - (longlong)pbVar12)) {
            uVar26 = uVar13 & 0xffffffffffffffe0;
            pbVar20 = pbVar12 + uVar26;
            lVar19 = local_68 + lVar29;
            lVar29 = lVar29 + uVar26;
            uVar27 = 0;
            do {
              pbVar14 = pbVar12 + uVar27;
              uVar4 = *(undefined4 *)(pbVar14 + 4);
              uVar5 = *(undefined4 *)(pbVar14 + 8);
              uVar6 = *(undefined4 *)(pbVar14 + 0xc);
              uVar7 = *(undefined8 *)(pbVar12 + uVar27 + 0x10);
              uVar8 = *(undefined8 *)(pbVar12 + uVar27 + 0x10 + 8);
              puVar2 = (undefined4 *)(lVar19 + -0x10 + uVar27);
              *puVar2 = *(undefined4 *)pbVar14;
              puVar2[1] = uVar4;
              puVar2[2] = uVar5;
              puVar2[3] = uVar6;
              puVar1 = (undefined8 *)(lVar19 + uVar27);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
              uVar27 = uVar27 + 0x20;
            } while (uVar26 != uVar27);
            pbVar12 = pbVar22;
            if (uVar13 == uVar26) goto LAB_140a5701b;
          }
          uVar18 = (int)pbVar22 - (int)pbVar20 & 3;
          uVar13 = (ulonglong)uVar18;
          pbVar14 = pbVar20;
          if (uVar18 != 0) {
            do {
              *(byte *)(param_1 + lVar29) = *pbVar14;
              lVar29 = lVar29 + 1;
              pbVar14 = pbVar14 + 1;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          pbVar12 = pbVar22;
          if ((ulonglong)((longlong)pbVar20 - (longlong)pbVar22) < 0xfffffffffffffffd) {
            do {
              *(byte *)(param_1 + lVar29) = *pbVar14;
              *(byte *)(param_1 + 1 + lVar29) = pbVar14[1];
              *(byte *)(param_1 + 2 + lVar29) = pbVar14[2];
              *(byte *)(param_1 + 3 + lVar29) = pbVar14[3];
              lVar29 = lVar29 + 4;
              pbVar14 = pbVar14 + 4;
            } while (pbVar14 != pbVar22);
          }
        }
LAB_140a5701b:
        *(undefined2 *)(param_1 + lVar29) = 0;
        lVar19 = param_1 + lVar29;
        pbVar22 = (byte *)(lVar19 + 1);
        if (pbVar12 < pbVar22) {
          pbVar20 = (byte *)(param_1 + lVar29 + 2);
          uVar13 = (local_60 + lVar29) - (longlong)pbVar12;
          if (0xf < uVar13) {
            uVar26 = uVar13 & 0xfffffffffffffff0;
            pbVar22 = pbVar22 + -uVar26;
            pbVar20 = pbVar20 + -uVar26;
            lVar28 = 0;
            do {
              puVar2 = (undefined4 *)(lVar19 + -0xf + lVar28);
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              puVar3 = (undefined4 *)(lVar19 + -0xe + lVar28);
              *puVar3 = *puVar2;
              puVar3[1] = uVar4;
              puVar3[2] = uVar5;
              puVar3[3] = uVar6;
              lVar28 = lVar28 + -0x10;
            } while (-lVar28 != uVar26);
            param_4 = local_85;
            if (uVar13 == uVar26) goto LAB_140a57401;
          }
          do {
            pbVar14 = pbVar22;
            *pbVar14 = pbVar20[-2];
            pbVar22 = pbVar14 + -1;
            pbVar20 = pbVar14;
          } while (pbVar12 < pbVar22);
        }
LAB_140a57401:
        lVar29 = lVar29 + 2;
        if (*param_2 == 0x3f) {
          *pbVar22 = 0xc;
        }
        else if (param_2[1] == 0x3f) {
          *pbVar22 = 0xd;
        }
        else {
          *pbVar22 = 0xb;
        }
        break;
      case 0x2e:
        lVar29 = lVar29 + 1;
        *pbVar22 = 2;
        pbVar12 = pbVar22;
        break;
      case 0x5b:
        *pbVar22 = 3;
        bVar30 = param_2[1] == 0x5e;
        pbVar12 = param_2 + 1;
        if (bVar30) {
          pbVar12 = param_2 + 2;
        }
        iVar11 = iVar23 + (uint)bVar30;
        iVar23 = iVar11 + 1;
        bVar9 = param_2[(ulonglong)bVar30 + 1];
        uVar18 = 0;
        if (bVar9 == 0x2d) {
          *(byte *)(param_1 + 0x1241) = *(byte *)(param_1 + 0x1241) | 0x20;
          iVar23 = iVar11 + 2;
          bVar9 = pbVar12[1];
          pbVar12 = pbVar12 + 1;
          uVar18 = 0x2d;
        }
        if (bVar9 == 0x5d) {
          iVar23 = iVar23 + 1;
          pbVar12 = pbVar12 + 1;
          *(byte *)(param_1 + 0x1247) = *(byte *)(param_1 + 0x1247) | 0x20;
          uVar18 = 0x5d;
        }
        bVar9 = -bVar30;
        param_2 = pbVar12;
        local_78 = pbVar24;
        do {
          bVar16 = *param_2;
          uVar10 = (uint)bVar16;
          if (uVar10 < 0x5c) {
            if (bVar16 != 0x2d) {
              if (bVar16 == 0) goto LAB_140a57a87;
              goto LAB_140a56ca6;
            }
            if ((int)uVar18 < 0) {
LAB_140a56b80:
              *(byte *)(param_1 + 0x1241) = *(byte *)(param_1 + 0x1241) | 0x20;
              uVar10 = 0x2d;
            }
            else {
              bVar16 = param_2[1];
              if (bVar16 == 0x5d) goto LAB_140a56b80;
              uVar21 = (uint)bVar16;
              if (bVar16 == 0) {
LAB_140a57a87:
                *local_78 = 0;
                pcVar15 = "Missing ]";
                goto LAB_140a57a5e;
              }
              if (uVar21 == 0x5c) {
                if (param_2[2] == 0) goto LAB_140a57a87;
                uVar13 = FUN_140a56710(param_1,param_2 + 2,&local_4c);
                iVar23 = iVar23 + local_4c + 2;
                param_2 = param_2 + 2 + local_4c;
                uVar10 = (uint)uVar13;
                param_4 = local_85;
                if ((int)uVar10 < 0) {
                  *(byte *)(param_1 + 0x1241) = *(byte *)(param_1 + 0x1241) | 0x20;
                  uVar10 = 0x2d;
                }
                else {
                  pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)((uint)(uVar13 >> 3) & 0x1f));
                  *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[uVar10 & 7];
                  uVar25 = uVar10 - uVar18;
                  uVar17 = uVar10;
                  if (uVar18 <= uVar10 && uVar25 != 0) goto LAB_140a56d12;
                }
              }
              else {
                param_2 = param_2 + 1;
                iVar23 = iVar23 + 1;
                uVar25 = uVar21 - uVar18;
                uVar10 = uVar18;
                uVar17 = (uint)bVar16;
                if (uVar18 <= uVar21 && uVar25 != 0) {
LAB_140a56d12:
                  if (param_4 == '\0') {
                    uVar18 = uVar18 + 0xe1;
                    do {
                      uVar21 = uVar18 - 0xe0;
                      pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(uVar21 >> 3 & 0x1f));
                      *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[uVar21 & 7];
                      uVar25 = uVar18;
                      if ((byte)((char)uVar18 + 0xbfU) < 0x1a) {
LAB_140a56dc0:
                        pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(uVar25 >> 3 & 0x1f));
                        *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[uVar25 & 7];
                      }
                      else if ((byte)((char)uVar18 - 0x21U) < 0x1a) {
                        uVar25 = uVar21 | 0x20;
                        goto LAB_140a56dc0;
                      }
                      iVar11 = uVar18 - uVar17;
                      uVar18 = uVar18 + 1;
                    } while (iVar11 != 0xe0);
                  }
                  else {
                    uVar21 = uVar18 + 1;
                    if ((uVar25 & 1) != 0) {
                      pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(uVar21 >> 3 & 0x1f));
                      *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[uVar21 & 7];
                      uVar18 = uVar21;
                    }
                    if (uVar17 != uVar21) {
                      uVar18 = uVar18 + 1;
                      do {
                        pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(uVar18 >> 3 & 0x1f));
                        *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[uVar18 & 7];
                        pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(uVar18 + 1 >> 3 & 0x1f));
                        *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[uVar18 + 1 & 7];
                        iVar11 = uVar18 - uVar17;
                        uVar18 = uVar18 + 2;
                      } while (iVar11 != -1);
                    }
                  }
                }
              }
            }
          }
          else {
            if (uVar10 == 0x5c) {
              if (param_2[1] != 0) {
                uVar13 = FUN_140a56710(param_1,param_2 + 1,&local_4c);
                uVar10 = (uint)uVar13;
                if (-1 < (int)uVar10) {
                  pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)((uint)(uVar13 >> 3) & 0x1f));
                  *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[uVar10 & 7];
                }
                iVar23 = iVar23 + local_4c + 1;
                param_2 = param_2 + 1 + local_4c;
                param_4 = local_85;
                goto LAB_140a56b8c;
              }
            }
            else if (bVar16 == 0x5d) goto LAB_140a5705c;
LAB_140a56ca6:
            pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(bVar16 >> 3));
            *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[bVar16 & 7];
            if (param_4 == '\0') {
              if ((byte)(bVar16 + 0x9f) < 0x1a) {
                bVar16 = bVar16 - 0x20;
              }
              else {
                if (0x19 < (byte)(bVar16 + 0xbf)) goto LAB_140a56b8c;
                bVar16 = bVar16 | 0x20;
              }
              pbVar12 = (byte *)(param_1 + 0x123c + (ulonglong)(bVar16 >> 3));
              *pbVar12 = *pbVar12 | (&DAT_1412b08a8)[bVar16 & 7];
            }
          }
LAB_140a56b8c:
          iVar23 = iVar23 + 1;
          param_2 = param_2 + 1;
          uVar18 = uVar10;
        } while( true );
      case 0x5c:
        iVar23 = iVar23 + 1;
        bVar9 = param_2[1];
        param_2 = param_2 + 1;
        if (bVar9 - 0x31 < 9) {
          uVar18 = bVar9 - 0x30;
          if ((0 < (int)local_84) &&
             (*(ulonglong *)(param_1 + 0x1e8 + (ulonglong)local_84 * 8) == (ulonglong)uVar18)) {
            *pbVar24 = 0;
            pcVar15 = "Cyclical reference";
            goto LAB_140a57a5e;
          }
          if ((int)local_80 <= (int)uVar18) {
            *pbVar24 = 0;
            pcVar15 = "Undetermined reference";
            goto LAB_140a57a5e;
          }
          *pbVar22 = 10;
          lVar29 = lVar29 + 2;
          pbVar22[1] = (byte)uVar18;
          pbVar12 = pbVar22;
        }
        else if (bVar9 == 0x3e) {
          if (*pbVar12 == 8) {
            *pbVar24 = 0;
            pcVar15 = "Null pattern inside \\<\\>";
            goto LAB_140a57a5e;
          }
          lVar29 = lVar29 + 1;
          *pbVar22 = 9;
          pbVar12 = pbVar22;
        }
        else if (bVar9 == 0x3c) {
          lVar29 = lVar29 + 1;
          *pbVar22 = 8;
          pbVar12 = pbVar22;
        }
        else {
          if ((param_5 == '\0') && (bVar9 == 0x28)) {
            if ((int)local_80 < 10) goto LAB_140a56efa;
            *pbVar24 = 0;
            pcVar15 = "Too many \\(\\) pairs";
            goto LAB_140a57a5e;
          }
          if ((param_5 == '\0') && (bVar9 == 0x29)) {
            if (*pbVar12 == 6) {
              *pbVar24 = 0;
              pcVar15 = "Null pattern inside \\(\\)";
              goto LAB_140a57a5e;
            }
            if ((int)local_84 < 1) {
              *pbVar24 = 0;
              pcVar15 = "Unmatched \\)";
              goto LAB_140a57a5e;
            }
            *pbVar22 = 7;
            uVar13 = (ulonglong)local_84;
            local_84 = local_84 - 1;
            lVar29 = lVar29 + 2;
            pbVar22[1] = *(byte *)(param_1 + 0x1e8 + uVar13 * 8);
            pbVar12 = pbVar22;
            param_4 = local_85;
          }
          else {
            iVar11 = FUN_140a56710(param_1,param_2,&local_4c);
            iVar23 = iVar23 + local_4c;
            param_2 = param_2 + local_4c;
            param_4 = local_85;
            if (iVar11 < 0) {
              *pbVar22 = 3;
              *(undefined1 *)(param_1 + 1 + lVar29) = *(undefined1 *)(param_1 + 0x123c);
              *(undefined1 *)(param_1 + 0x123c) = 0;
              *(undefined1 *)(param_1 + 2 + lVar29) = *(undefined1 *)(param_1 + 0x123d);
              *(undefined1 *)(param_1 + 0x123d) = 0;
              *(undefined1 *)(param_1 + 3 + lVar29) = *(undefined1 *)(param_1 + 0x123e);
              *(undefined1 *)(param_1 + 0x123e) = 0;
              *(undefined1 *)(param_1 + 4 + lVar29) = *(undefined1 *)(param_1 + 0x123f);
              *(undefined1 *)(param_1 + 0x123f) = 0;
              *(undefined1 *)(param_1 + 5 + lVar29) = *(undefined1 *)(param_1 + 0x1240);
              *(undefined1 *)(param_1 + 0x1240) = 0;
              *(undefined1 *)(param_1 + 6 + lVar29) = *(undefined1 *)(param_1 + 0x1241);
              *(undefined1 *)(param_1 + 0x1241) = 0;
              *(undefined1 *)(param_1 + 7 + lVar29) = *(undefined1 *)(param_1 + 0x1242);
              *(undefined1 *)(param_1 + 0x1242) = 0;
              *(undefined1 *)(param_1 + 8 + lVar29) = *(undefined1 *)(param_1 + 0x1243);
              *(undefined1 *)(param_1 + 0x1243) = 0;
              *(undefined1 *)(param_1 + 9 + lVar29) = *(undefined1 *)(param_1 + 0x1244);
              *(undefined1 *)(param_1 + 0x1244) = 0;
              *(undefined1 *)(param_1 + 10 + lVar29) = *(undefined1 *)(param_1 + 0x1245);
              *(undefined1 *)(param_1 + 0x1245) = 0;
              *(undefined1 *)(param_1 + 0xb + lVar29) = *(undefined1 *)(param_1 + 0x1246);
              *(undefined1 *)(param_1 + 0x1246) = 0;
              *(undefined1 *)(param_1 + 0xc + lVar29) = *(undefined1 *)(param_1 + 0x1247);
              *(undefined1 *)(param_1 + 0x1247) = 0;
              *(undefined1 *)(param_1 + 0xd + lVar29) = *(undefined1 *)(param_1 + 0x1248);
              *(undefined1 *)(param_1 + 0x1248) = 0;
              *(undefined1 *)(param_1 + 0xe + lVar29) = *(undefined1 *)(param_1 + 0x1249);
              *(undefined1 *)(param_1 + 0x1249) = 0;
              *(undefined1 *)(param_1 + 0xf + lVar29) = *(undefined1 *)(param_1 + 0x124a);
              *(undefined1 *)(param_1 + 0x124a) = 0;
              *(undefined1 *)(param_1 + 0x10 + lVar29) = *(undefined1 *)(param_1 + 0x124b);
              *(undefined1 *)(param_1 + 0x124b) = 0;
              *(undefined1 *)(param_1 + 0x11 + lVar29) = *(undefined1 *)(param_1 + 0x124c);
              *(undefined1 *)(param_1 + 0x124c) = 0;
              *(undefined1 *)(param_1 + 0x12 + lVar29) = *(undefined1 *)(param_1 + 0x124d);
              *(undefined1 *)(param_1 + 0x124d) = 0;
              *(undefined1 *)(param_1 + 0x13 + lVar29) = *(undefined1 *)(param_1 + 0x124e);
              *(undefined1 *)(param_1 + 0x124e) = 0;
              *(undefined1 *)(param_1 + 0x14 + lVar29) = *(undefined1 *)(param_1 + 0x124f);
              *(undefined1 *)(param_1 + 0x124f) = 0;
              *(undefined1 *)(param_1 + 0x15 + lVar29) = *(undefined1 *)(param_1 + 0x1250);
              *(undefined1 *)(param_1 + 0x1250) = 0;
              *(undefined1 *)(param_1 + 0x16 + lVar29) = *(undefined1 *)(param_1 + 0x1251);
              *(undefined1 *)(param_1 + 0x1251) = 0;
              *(undefined1 *)(param_1 + 0x17 + lVar29) = *(undefined1 *)(param_1 + 0x1252);
              *(undefined1 *)(param_1 + 0x1252) = 0;
              *(undefined1 *)(param_1 + 0x18 + lVar29) = *(undefined1 *)(param_1 + 0x1253);
              *(undefined1 *)(param_1 + 0x1253) = 0;
              *(undefined1 *)(param_1 + 0x19 + lVar29) = *(undefined1 *)(param_1 + 0x1254);
              *(undefined1 *)(param_1 + 0x1254) = 0;
              *(undefined1 *)(param_1 + 0x1a + lVar29) = *(undefined1 *)(param_1 + 0x1255);
              *(undefined1 *)(param_1 + 0x1255) = 0;
              *(undefined1 *)(param_1 + 0x1b + lVar29) = *(undefined1 *)(param_1 + 0x1256);
              *(undefined1 *)(param_1 + 0x1256) = 0;
              *(undefined1 *)(param_1 + 0x1c + lVar29) = *(undefined1 *)(param_1 + 0x1257);
              *(undefined1 *)(param_1 + 0x1257) = 0;
              *(undefined1 *)(param_1 + 0x1d + lVar29) = *(undefined1 *)(param_1 + 0x1258);
              *(undefined1 *)(param_1 + 0x1258) = 0;
              *(undefined1 *)(param_1 + 0x1e + lVar29) = *(undefined1 *)(param_1 + 0x1259);
              *(undefined1 *)(param_1 + 0x1259) = 0;
              *(undefined1 *)(param_1 + 0x1f + lVar29) = *(undefined1 *)(param_1 + 0x125a);
              *(undefined1 *)(param_1 + 0x125a) = 0;
              *(undefined1 *)(param_1 + 0x20 + lVar29) = *(undefined1 *)(param_1 + 0x125b);
              *(undefined1 *)(param_1 + 0x125b) = 0;
              lVar29 = lVar29 + 0x21;
              pbVar12 = pbVar22;
            }
            else {
              *pbVar22 = 1;
              lVar29 = lVar29 + 2;
              pbVar22[1] = (byte)iVar11;
              pbVar12 = pbVar22;
            }
          }
        }
        break;
      case 0x5e:
        if (param_2 != local_70) goto LAB_140a56ebf;
        lVar29 = lVar29 + 1;
        *pbVar22 = 4;
        pbVar12 = pbVar22;
      }
      goto LAB_140a56aa0;
    }
    goto LAB_140a57a4e;
  }
  if (*(int *)(param_1 + 0x1238) == 0) {
    *pbVar12 = 0;
    pcVar15 = "No previous regular expression";
    goto LAB_140a57a5e;
  }
  goto LAB_140a57a5c;
LAB_140a5705c:
  *(byte *)(param_1 + 1 + lVar29) = *(byte *)(param_1 + 0x123c) ^ bVar9;
  *(undefined1 *)(param_1 + 0x123c) = 0;
  *(byte *)(param_1 + 2 + lVar29) = *(byte *)(param_1 + 0x123d) ^ bVar9;
  *(undefined1 *)(param_1 + 0x123d) = 0;
  *(byte *)(param_1 + 3 + lVar29) = *(byte *)(param_1 + 0x123e) ^ bVar9;
  *(undefined1 *)(param_1 + 0x123e) = 0;
  *(byte *)(param_1 + 4 + lVar29) = *(byte *)(param_1 + 0x123f) ^ bVar9;
  *(undefined1 *)(param_1 + 0x123f) = 0;
  *(byte *)(param_1 + 5 + lVar29) = *(byte *)(param_1 + 0x1240) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1240) = 0;
  *(byte *)(param_1 + 6 + lVar29) = *(byte *)(param_1 + 0x1241) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1241) = 0;
  *(byte *)(param_1 + 7 + lVar29) = *(byte *)(param_1 + 0x1242) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1242) = 0;
  *(byte *)(param_1 + 8 + lVar29) = *(byte *)(param_1 + 0x1243) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1243) = 0;
  *(byte *)(param_1 + 9 + lVar29) = *(byte *)(param_1 + 0x1244) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1244) = 0;
  *(byte *)(param_1 + 10 + lVar29) = *(byte *)(param_1 + 0x1245) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1245) = 0;
  *(byte *)(param_1 + 0xb + lVar29) = *(byte *)(param_1 + 0x1246) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1246) = 0;
  *(byte *)(param_1 + 0xc + lVar29) = *(byte *)(param_1 + 0x1247) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1247) = 0;
  *(byte *)(param_1 + 0xd + lVar29) = *(byte *)(param_1 + 0x1248) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1248) = 0;
  *(byte *)(param_1 + 0xe + lVar29) = *(byte *)(param_1 + 0x1249) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1249) = 0;
  *(byte *)(param_1 + 0xf + lVar29) = *(byte *)(param_1 + 0x124a) ^ bVar9;
  *(undefined1 *)(param_1 + 0x124a) = 0;
  *(byte *)(param_1 + 0x10 + lVar29) = *(byte *)(param_1 + 0x124b) ^ bVar9;
  *(undefined1 *)(param_1 + 0x124b) = 0;
  *(byte *)(param_1 + 0x11 + lVar29) = *(byte *)(param_1 + 0x124c) ^ bVar9;
  *(undefined1 *)(param_1 + 0x124c) = 0;
  *(byte *)(param_1 + 0x12 + lVar29) = *(byte *)(param_1 + 0x124d) ^ bVar9;
  *(undefined1 *)(param_1 + 0x124d) = 0;
  *(byte *)(param_1 + 0x13 + lVar29) = *(byte *)(param_1 + 0x124e) ^ bVar9;
  *(undefined1 *)(param_1 + 0x124e) = 0;
  *(byte *)(param_1 + 0x14 + lVar29) = *(byte *)(param_1 + 0x124f) ^ bVar9;
  *(undefined1 *)(param_1 + 0x124f) = 0;
  *(byte *)(param_1 + 0x15 + lVar29) = *(byte *)(param_1 + 0x1250) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1250) = 0;
  *(byte *)(param_1 + 0x16 + lVar29) = *(byte *)(param_1 + 0x1251) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1251) = 0;
  *(byte *)(param_1 + 0x17 + lVar29) = *(byte *)(param_1 + 0x1252) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1252) = 0;
  *(byte *)(param_1 + 0x18 + lVar29) = *(byte *)(param_1 + 0x1253) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1253) = 0;
  *(byte *)(param_1 + 0x19 + lVar29) = *(byte *)(param_1 + 0x1254) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1254) = 0;
  *(byte *)(param_1 + 0x1a + lVar29) = *(byte *)(param_1 + 0x1255) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1255) = 0;
  *(byte *)(param_1 + 0x1b + lVar29) = *(byte *)(param_1 + 0x1256) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1256) = 0;
  *(byte *)(param_1 + 0x1c + lVar29) = *(byte *)(param_1 + 0x1257) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1257) = 0;
  *(byte *)(param_1 + 0x1d + lVar29) = *(byte *)(param_1 + 0x1258) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1258) = 0;
  *(byte *)(param_1 + 0x1e + lVar29) = *(byte *)(param_1 + 0x1259) ^ bVar9;
  *(undefined1 *)(param_1 + 0x1259) = 0;
  *(byte *)(param_1 + 0x1f + lVar29) = *(byte *)(param_1 + 0x125a) ^ bVar9;
  *(undefined1 *)(param_1 + 0x125a) = 0;
  *(byte *)(param_1 + 0x20 + lVar29) = bVar9 ^ *(byte *)(param_1 + 0x125b);
  *(undefined1 *)(param_1 + 0x125b) = 0;
  lVar29 = lVar29 + 0x21;
  pbVar24 = local_78;
  pbVar12 = pbVar22;
LAB_140a56aa0:
  iVar23 = iVar23 + 1;
  param_2 = param_2 + 1;
  pbVar22 = (byte *)(param_1 + lVar29);
  if (local_58 <= iVar23) goto LAB_140a57aa4;
  goto LAB_140a56aba;
LAB_140a57aa4:
  pbVar12 = pbVar22;
  if (0 < (int)local_84) {
    *pbVar24 = 0;
    pcVar15 = "Unmatched \\(";
    if (param_5 != '\0') {
      pcVar15 = "Unmatched (";
    }
    goto LAB_140a57a5e;
  }
LAB_140a57a4e:
  *pbVar12 = 0;
  *(undefined4 *)(param_1 + 0x1238) = 1;
LAB_140a57a5c:
  pcVar15 = (char *)0x0;
LAB_140a57a5e:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_a8)) {
    return pcVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
}

