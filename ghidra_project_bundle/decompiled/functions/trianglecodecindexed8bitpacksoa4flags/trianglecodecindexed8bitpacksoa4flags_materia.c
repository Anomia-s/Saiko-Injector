/**
 * Function: trianglecodecindexed8bitpacksoa4flags_materia
 * Address:  14030a450
 * Signature: undefined trianglecodecindexed8bitpacksoa4flags_materia(void)
 * Body size: 1921 bytes
 */


ulonglong trianglecodecindexed8bitpacksoa4flags_materia
                    (longlong param_1,longlong param_2,uint param_3,char param_4,ulonglong *param_5,
                    undefined8 *param_6)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  uint uVar17;
  char *pcVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  
  uVar2 = *param_5;
  uVar11 = uVar2 + 4;
  if (param_5[1] < uVar11) {
    pvVar10 = (void *)(*DAT_14151f540)(uVar11,0x40);
    if ((void *)param_5[2] != (void *)0x0) {
      memmove(pvVar10,(void *)param_5[2],*param_5);
      (*DAT_14151f548)(param_5[2]);
    }
    param_5[2] = (ulonglong)pvVar10;
    param_5[1] = uVar11;
  }
  else {
    pvVar10 = (void *)param_5[2];
  }
  *param_5 = uVar11;
  uVar24 = *(uint *)(param_1 + 0x10);
  uVar8 = (param_3 * 3 + uVar24) - 0x100;
  uVar8 = ~((int)uVar8 >> 0x1f) & uVar8;
  if ((int)uVar8 < (int)uVar24) {
    uVar24 = uVar8;
  }
  uVar11 = *(longlong *)(param_1 + 8) - uVar2;
  if ((uVar11 & 3) == 0) {
    uVar11 = uVar11 + (ulonglong)uVar24 * 8;
    if (uVar11 < 0x7ffffffd) {
      uVar8 = 0;
      if (param_4 != '\0') {
        uVar8 = (param_3 + 3 & 0xfffffffc) << 0x1b;
      }
      uVar27 = (ulonglong)param_3;
      *(uint *)((longlong)pvVar10 + uVar2) = uVar8 | (uint)(uVar11 >> 2);
      uVar8 = param_3 + 3 & 0xfffffffc;
      if (uVar8 != 0) {
        puVar1 = (uint *)(param_2 + (ulonglong)(param_3 - 1) * 0x14);
        uVar11 = 0;
        lVar25 = param_2;
        do {
          uVar3 = *param_5;
          uVar12 = uVar3 + 0x10;
          if (param_5[1] < uVar12) {
            pvVar10 = (void *)(*DAT_14151f540)(uVar12,0x40);
            if ((void *)param_5[2] != (void *)0x0) {
              memmove(pvVar10,(void *)param_5[2],*param_5);
              (*DAT_14151f548)();
            }
            param_5[2] = (ulonglong)pvVar10;
            param_5[1] = uVar12;
          }
          else {
            pvVar10 = (void *)param_5[2];
          }
          *param_5 = uVar12;
          uVar12 = uVar11 | 1;
          uVar13 = uVar11 | 2;
          uVar14 = uVar11 | 3;
          lVar22 = 0;
          do {
            puVar16 = (uint *)(lVar25 + lVar22);
            if (uVar27 <= uVar11) {
              puVar16 = puVar1;
            }
            uVar17 = *puVar16;
            uVar21 = (ulonglong)uVar17;
            lVar4 = *(longlong *)(param_1 + 0x38);
            uVar9 = *(uint *)(lVar4 + uVar21 * 4);
            if ((uVar9 == 0xffffffff) || (uVar9 < uVar24)) {
              *(undefined4 *)(lVar4 + uVar21 * 4) = *(undefined4 *)(param_1 + 0x10);
              lVar23 = *(longlong *)(param_1 + 0x10);
              uVar5 = *(ulonglong *)(param_1 + 0x18);
              uVar19 = lVar23 + 1;
              if (uVar5 < uVar19) {
                uVar26 = uVar5 * 2;
                if (uVar5 * 2 < uVar19) {
                  uVar26 = uVar19;
                }
                lVar15 = (*DAT_14151f530)(*(undefined8 *)(param_1 + 0x20),uVar5 << 2,uVar26 * 4);
                *(longlong *)(param_1 + 0x20) = lVar15;
                *(ulonglong *)(param_1 + 0x18) = uVar26;
                lVar23 = *(longlong *)(param_1 + 0x10);
                uVar19 = lVar23 + 1;
              }
              else {
                lVar15 = *(longlong *)(param_1 + 0x20);
              }
              *(ulonglong *)(param_1 + 0x10) = uVar19;
              *(uint *)(lVar15 + lVar23 * 4) = uVar17;
              uVar9 = *(uint *)(lVar4 + uVar21 * 4);
            }
            if (0xff < uVar9 - uVar24) {
LAB_14030aa4d:
              pcVar18 = "TriangleCodecIndexed8BitPackSOA4Flags: Offset doesn\'t fit in 8 bit";
              goto LAB_14030aa5d;
            }
            uVar17 = 0;
            *(char *)((longlong)pvVar10 + lVar22 + uVar3) = (char)(uVar9 - uVar24);
            if ((uVar11 < uVar27) &&
               (uVar17 = *(uint *)(param_2 + uVar11 * 0x14 + 0xc), 0xff < uVar17)) {
LAB_14030aa56:
              pcVar18 = 
              "TriangleCodecIndexed8BitPackSOA4Flags: Material index doesn\'t fit in 8 bit";
              goto LAB_14030aa5d;
            }
            *(char *)((longlong)pvVar10 + uVar3 + 0xc) = (char)uVar17;
            puVar16 = (uint *)(lVar25 + 0x14 + lVar22);
            if (uVar27 <= uVar12) {
              puVar16 = puVar1;
            }
            uVar17 = *puVar16;
            uVar21 = (ulonglong)uVar17;
            lVar4 = *(longlong *)(param_1 + 0x38);
            uVar9 = *(uint *)(lVar4 + uVar21 * 4);
            if ((uVar9 == 0xffffffff) || (uVar9 < uVar24)) {
              *(undefined4 *)(lVar4 + uVar21 * 4) = *(undefined4 *)(param_1 + 0x10);
              lVar23 = *(longlong *)(param_1 + 0x10);
              uVar5 = *(ulonglong *)(param_1 + 0x18);
              uVar19 = lVar23 + 1;
              if (uVar5 < uVar19) {
                uVar26 = uVar5 * 2;
                if (uVar5 * 2 < uVar19) {
                  uVar26 = uVar19;
                }
                lVar15 = (*DAT_14151f530)(*(undefined8 *)(param_1 + 0x20),uVar5 << 2,uVar26 * 4);
                *(longlong *)(param_1 + 0x20) = lVar15;
                *(ulonglong *)(param_1 + 0x18) = uVar26;
                lVar23 = *(longlong *)(param_1 + 0x10);
                uVar19 = lVar23 + 1;
              }
              else {
                lVar15 = *(longlong *)(param_1 + 0x20);
              }
              *(ulonglong *)(param_1 + 0x10) = uVar19;
              *(uint *)(lVar15 + lVar23 * 4) = uVar17;
              uVar9 = *(uint *)(lVar4 + uVar21 * 4);
            }
            if (0xff < uVar9 - uVar24) goto LAB_14030aa4d;
            uVar17 = 0;
            *(char *)((longlong)pvVar10 + lVar22 + uVar3 + 1) = (char)(uVar9 - uVar24);
            if ((uVar12 < uVar27) &&
               (uVar17 = *(uint *)(param_2 + uVar12 * 0x14 + 0xc), 0xff < uVar17))
            goto LAB_14030aa56;
            *(char *)((longlong)pvVar10 + uVar3 + 0xd) = (char)uVar17;
            puVar16 = (uint *)(lVar25 + 0x28 + lVar22);
            if (uVar27 <= uVar13) {
              puVar16 = puVar1;
            }
            uVar17 = *puVar16;
            uVar21 = (ulonglong)uVar17;
            lVar4 = *(longlong *)(param_1 + 0x38);
            uVar9 = *(uint *)(lVar4 + uVar21 * 4);
            if ((uVar9 == 0xffffffff) || (uVar9 < uVar24)) {
              *(undefined4 *)(lVar4 + uVar21 * 4) = *(undefined4 *)(param_1 + 0x10);
              lVar23 = *(longlong *)(param_1 + 0x10);
              uVar5 = *(ulonglong *)(param_1 + 0x18);
              uVar19 = lVar23 + 1;
              if (uVar5 < uVar19) {
                uVar26 = uVar5 * 2;
                if (uVar5 * 2 < uVar19) {
                  uVar26 = uVar19;
                }
                lVar15 = (*DAT_14151f530)(*(undefined8 *)(param_1 + 0x20),uVar5 << 2,uVar26 * 4);
                *(longlong *)(param_1 + 0x20) = lVar15;
                *(ulonglong *)(param_1 + 0x18) = uVar26;
                lVar23 = *(longlong *)(param_1 + 0x10);
                uVar19 = lVar23 + 1;
              }
              else {
                lVar15 = *(longlong *)(param_1 + 0x20);
              }
              *(ulonglong *)(param_1 + 0x10) = uVar19;
              *(uint *)(lVar15 + lVar23 * 4) = uVar17;
              uVar9 = *(uint *)(lVar4 + uVar21 * 4);
            }
            if (0xff < uVar9 - uVar24) goto LAB_14030aa4d;
            uVar17 = 0;
            *(char *)((longlong)pvVar10 + lVar22 + uVar3 + 2) = (char)(uVar9 - uVar24);
            if ((uVar13 < uVar27) &&
               (uVar17 = *(uint *)(param_2 + uVar13 * 0x14 + 0xc), 0xff < uVar17))
            goto LAB_14030aa56;
            *(char *)((longlong)pvVar10 + uVar3 + 0xe) = (char)uVar17;
            puVar16 = (uint *)(lVar25 + 0x3c + lVar22);
            if (uVar27 <= uVar14) {
              puVar16 = puVar1;
            }
            uVar17 = *puVar16;
            uVar21 = (ulonglong)uVar17;
            lVar4 = *(longlong *)(param_1 + 0x38);
            uVar9 = *(uint *)(lVar4 + uVar21 * 4);
            if ((uVar9 == 0xffffffff) || (uVar9 < uVar24)) {
              *(undefined4 *)(lVar4 + uVar21 * 4) = *(undefined4 *)(param_1 + 0x10);
              lVar23 = *(longlong *)(param_1 + 0x10);
              uVar5 = *(ulonglong *)(param_1 + 0x18);
              uVar19 = lVar23 + 1;
              if (uVar5 < uVar19) {
                uVar26 = uVar5 * 2;
                if (uVar5 * 2 < uVar19) {
                  uVar26 = uVar19;
                }
                lVar15 = (*DAT_14151f530)(*(undefined8 *)(param_1 + 0x20),uVar5 << 2,uVar26 * 4);
                *(longlong *)(param_1 + 0x20) = lVar15;
                *(ulonglong *)(param_1 + 0x18) = uVar26;
                lVar23 = *(longlong *)(param_1 + 0x10);
                uVar19 = lVar23 + 1;
              }
              else {
                lVar15 = *(longlong *)(param_1 + 0x20);
              }
              *(ulonglong *)(param_1 + 0x10) = uVar19;
              *(uint *)(lVar15 + lVar23 * 4) = uVar17;
              uVar9 = *(uint *)(lVar4 + uVar21 * 4);
            }
            if (0xff < uVar9 - uVar24) goto LAB_14030aa4d;
            uVar17 = 0;
            *(char *)((longlong)pvVar10 + lVar22 + uVar3 + 3) = (char)(uVar9 - uVar24);
            if ((uVar14 < uVar27) &&
               (uVar17 = *(uint *)(param_2 + uVar14 * 0x14 + 0xc), 0xff < uVar17))
            goto LAB_14030aa56;
            *(char *)((longlong)pvVar10 + uVar3 + 0xf) = (char)uVar17;
            lVar22 = lVar22 + 4;
          } while (lVar22 != 0xc);
          uVar11 = uVar11 + 4;
          lVar25 = lVar25 + 0x50;
        } while (uVar11 < uVar8);
      }
      if (param_4 == '\0') {
        return uVar2;
      }
      uVar12 = *param_5;
      uVar11 = uVar12 + uVar27 * 4;
      if (param_5[1] < uVar11) {
        pvVar10 = (void *)(*DAT_14151f540)(uVar11,0x40);
        if ((void *)param_5[2] != (void *)0x0) {
          memmove(pvVar10,(void *)param_5[2],*param_5);
          (*DAT_14151f548)();
        }
        param_5[2] = (ulonglong)pvVar10;
        param_5[1] = uVar11;
      }
      else {
        pvVar10 = (void *)param_5[2];
      }
      *param_5 = uVar11;
      if (param_3 == 0) {
        return uVar2;
      }
      uVar3 = (longlong)pvVar10 + uVar12;
      if ((param_3 < 0x11) ||
         (uVar3 < param_2 + uVar27 * 0x14 && param_2 + 0x10U < uVar11 + (longlong)pvVar10)) {
        uVar11 = 0;
      }
      else {
        uVar11 = 8;
        if ((param_3 & 7) != 0) {
          uVar11 = (ulonglong)(param_3 & 7);
        }
        uVar11 = uVar27 - uVar11;
        puVar20 = (undefined4 *)(param_2 + 0x9c);
        uVar13 = 0;
        do {
          auVar6 = vpinsrd_avx(ZEXT416((uint)puVar20[-0x23]),puVar20[-0x1e],1);
          auVar6 = vpinsrd_avx(auVar6,puVar20[-0x19],2);
          auVar6 = vpinsrd_avx(auVar6,puVar20[-0x14],3);
          auVar7 = vpinsrd_avx(ZEXT416((uint)puVar20[-0xf]),puVar20[-10],1);
          auVar7 = vpinsrd_avx(auVar7,puVar20[-5],2);
          auVar7 = vpinsrd_avx(auVar7,*puVar20,3);
          *(undefined1 (*) [16])(uVar3 + 0x10 + uVar13 * 4) = auVar7;
          *(undefined1 (*) [16])(uVar3 + uVar13 * 4) = auVar6;
          uVar13 = uVar13 + 8;
          puVar20 = puVar20 + 0x28;
        } while (uVar11 != uVar13);
      }
      uVar24 = param_3 - (int)uVar11 & 3;
      uVar13 = uVar11;
      if (uVar24 != 0) {
        lVar25 = 0;
        do {
          *(undefined4 *)(uVar3 + uVar13 * 4) =
               *(undefined4 *)(param_2 + uVar11 * 0x14 + 0x10 + lVar25 * 4);
          uVar13 = uVar13 + 1;
          lVar25 = lVar25 + 5;
        } while ((ulonglong)uVar24 * 5 != lVar25);
      }
      if (0xfffffffffffffffc < uVar11 - uVar27) {
        return uVar2;
      }
      puVar20 = (undefined4 *)(param_2 + uVar13 * 0x14 + 0x4c);
      do {
        *(undefined4 *)((longlong)pvVar10 + uVar13 * 4 + uVar12) = puVar20[-0xf];
        *(undefined4 *)((longlong)pvVar10 + uVar13 * 4 + uVar12 + 4) = puVar20[-10];
        *(undefined4 *)((longlong)pvVar10 + uVar13 * 4 + uVar12 + 8) = puVar20[-5];
        *(undefined4 *)((longlong)pvVar10 + uVar13 * 4 + uVar12 + 0xc) = *puVar20;
        uVar13 = uVar13 + 4;
        puVar20 = puVar20 + 0x14;
      } while (uVar27 != uVar13);
      return uVar2;
    }
    pcVar18 = 
    "TriangleCodecIndexed8BitPackSOA4Flags: Offset to vertices doesn\'t fit. Too much data.";
  }
  else {
    pcVar18 = 
    "TriangleCodecIndexed8BitPackSOA4Flags: Internal Error: Offset has non-significant bits set";
  }
LAB_14030aa5d:
  *param_6 = pcVar18;
  return 0xffffffffffffffff;
}

