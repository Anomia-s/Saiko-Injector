/**
 * Function: cant_merge_dc_and_ac
 * Address:  140498b40
 * Signature: undefined cant_merge_dc_and_ac(void)
 * Body size: 885 bytes
 */


undefined8 cant_merge_dc_and_ac(longlong param_1,short *param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  char *pcVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  if (*(int *)(param_1 + 0x4838) == 0) {
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_140498930(param_1);
    }
    if (*(int *)(param_1 + 0x483c) != 0) {
      iVar12 = *(int *)(param_1 + 0x4824);
      if (iVar12 < 1) {
        FUN_140498930(param_1);
        iVar12 = *(int *)(param_1 + 0x4824);
        if (iVar12 < 1) {
          return 1;
        }
      }
      iVar1 = *(int *)(param_1 + 0x4820);
      *(int *)(param_1 + 0x4820) = iVar1 * 2;
      *(int *)(param_1 + 0x4824) = iVar12 + -1;
      if (-1 < iVar1) {
        return 1;
      }
      *param_2 = *param_2 + (short)(1 << (*(byte *)(param_1 + 0x4840) & 0x1f));
      return 1;
    }
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    param_2[0x3c] = 0;
    param_2[0x3d] = 0;
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x34] = 0;
    param_2[0x35] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    param_2[0x2d] = 0;
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    if (*(int *)(param_1 + 0x4824) < 0x10) {
      FUN_140498930(param_1);
    }
    uVar5 = *(uint *)(param_1 + 0x4820);
    uVar7 = (ulonglong)*(byte *)(param_3 + (ulonglong)(uVar5 >> 0x17));
    if (uVar7 == 0xff) {
      lVar6 = 0;
      do {
        lVar11 = lVar6;
        lVar6 = lVar11 + 1;
      } while (*(uint *)(param_3 + 0x62c + lVar11 * 4) <= uVar5 >> 0x10);
      iVar12 = *(int *)(param_1 + 0x4824);
      if (lVar6 == 8) {
        *(int *)(param_1 + 0x4824) = iVar12 + -0x10;
      }
      else if (((int)(lVar11 + 10) <= iVar12) &&
              (uVar10 = (uVar5 >> (0x17U - (char)lVar6 & 0x1f) &
                        *(uint *)(&UNK_140e1a854 + lVar6 * 4)) +
                        *(int *)(param_3 + 0x670 + lVar6 * 4), uVar10 < 0x100)) {
        iVar12 = (iVar12 - (int)lVar6) + -9;
        *(int *)(param_1 + 0x4824) = iVar12;
        *(uint *)(param_1 + 0x4820) = uVar5 << ((byte)(lVar11 + 10) & 0x1f);
        uVar5 = (uint)*(byte *)((ulonglong)uVar10 + param_3 + 0x400);
        if (uVar5 < 0x10) goto LAB_140498cb7;
      }
    }
    else {
      bVar8 = *(byte *)(param_3 + 0x500 + uVar7);
      iVar12 = *(int *)(param_1 + 0x4824) - (uint)bVar8;
      if ((int)(uint)bVar8 <= *(int *)(param_1 + 0x4824)) {
        *(uint *)(param_1 + 0x4820) = uVar5 << (bVar8 & 0x1f);
        *(int *)(param_1 + 0x4824) = iVar12;
        bVar8 = *(byte *)(uVar7 + param_3 + 0x400);
        uVar5 = (uint)bVar8;
        if (bVar8 < 0x10) {
LAB_140498cb7:
          uVar10 = 0;
          if (uVar5 != 0) {
            if (iVar12 < (int)uVar5) {
              FUN_140498930(param_1);
              iVar12 = *(int *)(param_1 + 0x4824);
            }
            uVar10 = 0;
            if ((int)uVar5 <= iVar12) {
              uVar10 = *(uint *)(param_1 + 0x4820);
              bVar8 = (byte)uVar5 & 0x1f;
              uVar4 = uVar10 << bVar8 | uVar10 >> 0x20 - bVar8;
              uVar2 = *(uint *)(&DAT_140e1a830 + (uVar5 << 2));
              *(uint *)(param_1 + 0x4820) = ~uVar2 & uVar4;
              *(uint *)(param_1 + 0x4824) = iVar12 - uVar5;
              iVar12 = 0;
              if (-1 < (int)uVar10) {
                iVar12 = *(int *)(&DAT_140e1a880 + (uVar5 << 2));
              }
              uVar10 = iVar12 + (uVar4 & uVar2);
            }
          }
          uVar5 = *(uint *)(param_1 + 0x46b8 + (longlong)param_4 * 0x60);
          if (-1 < (int)(uVar5 ^ uVar10)) {
            bVar3 = (int)(uVar10 ^ 0x7fffffff) < (int)uVar5;
            if ((int)(uVar5 & uVar10) < 0) {
              bVar3 = (int)uVar5 < (int)(-0x80000000 - uVar10);
            }
            if (bVar3) {
              lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              pcVar9 = "bad delta";
              goto LAB_140498b6d;
            }
          }
          uVar5 = uVar5 + uVar10;
          *(uint *)(param_1 + 0x46b8 + (longlong)param_4 * 0x60) = uVar5;
          bVar8 = (byte)*(int *)(param_1 + 0x4840);
          if ((int)(1 << (bVar8 & 0x1f) ^ uVar5) < 0) {
            if (*(int *)(param_1 + 0x4840) == 0x1f) {
              if ((int)uVar5 < 1) {
LAB_140498ea6:
                *param_2 = (short)(uVar5 << (bVar8 & 0x1f));
                return 1;
              }
            }
            else if ((int)-(0x8000U >> (bVar8 & 0x1f)) <= (int)uVar5) goto LAB_140498ea6;
          }
          else if ((int)uVar5 <= (int)(0x7fffU >> (bVar8 & 0x1f))) goto LAB_140498ea6;
        }
      }
    }
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar9 = "can\'t merge dc and ac";
LAB_140498b6d:
  *(char **)(lVar6 + 0x220) = pcVar9;
  return 0;
}

