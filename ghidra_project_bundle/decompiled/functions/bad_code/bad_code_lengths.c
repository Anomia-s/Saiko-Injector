/**
 * Function: bad_code_lengths
 * Address:  140497c80
 * Signature: undefined bad_code_lengths(void)
 * Body size: 446 bytes
 */


undefined8 bad_code_lengths(void *param_1,longlong param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  
  lVar4 = 0;
  pcVar8 = "bad size list";
  iVar9 = 0;
  do {
    if (0 < *(int *)(param_2 + lVar4 * 4)) {
      iVar12 = 0x100;
      if (0x100 < iVar9) {
        iVar12 = iVar9;
      }
      lVar6 = 0;
      do {
        *(char *)((longlong)param_1 + lVar6 + (longlong)iVar9 + 0x500) = (char)lVar4 + '\x01';
        if ((iVar9 - iVar12) + (int)lVar6 == 0) goto LAB_140497da6;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(param_2 + lVar4 * 4));
      iVar9 = iVar9 + (int)lVar6;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
  *(undefined1 *)((longlong)param_1 + (longlong)iVar9 + 0x500) = 0;
  uVar10 = 0;
  uVar2 = 1;
  pcVar8 = "bad code lengths";
  uVar7 = 0;
  do {
    *(uint *)((longlong)param_1 + uVar2 * 4 + 0x64c) = uVar7 - uVar10;
    lVar4 = (longlong)(int)uVar7;
    if (uVar2 == *(byte *)((longlong)param_1 + lVar4 + 0x500)) {
      puVar13 = (undefined2 *)((longlong)param_1 + 0x200 + lVar4 * 2);
      pbVar5 = (byte *)((longlong)param_1 + lVar4 + 0x501);
      do {
        uVar11 = uVar10;
        *puVar13 = (short)uVar11;
        uVar10 = uVar11 + 1;
        bVar3 = *pbVar5;
        puVar13 = puVar13 + 1;
        uVar7 = uVar7 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 == bVar3);
      if (uVar11 >> ((byte)uVar2 & 0x1f) != 0) {
LAB_140497da6:
        *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x220) = pcVar8;
        return 0;
      }
    }
    *(uint *)((longlong)param_1 + uVar2 * 4 + 0x604) = uVar10 << (0x10 - (byte)uVar2 & 0x1f);
    uVar10 = uVar10 * 2;
    uVar2 = uVar2 + 1;
    if (uVar2 == 0x11) {
      *(undefined4 *)((longlong)param_1 + 0x648) = 0xffffffff;
      memset(param_1,(int)CONCAT71((int7)((ulonglong)((longlong)param_1 + 0x200) >> 8),0xff),0x200);
      if (0 < (int)uVar7) {
        uVar2 = 0;
        do {
          bVar3 = *(byte *)((longlong)param_1 + uVar2 + 0x500);
          if (bVar3 < 10) {
            uVar1 = *(ushort *)((longlong)param_1 + uVar2 * 2 + 0x200);
            bVar3 = 9 - bVar3;
            lVar4 = 0;
            do {
              *(char *)((longlong)param_1 + lVar4 + ((ulonglong)uVar1 << (bVar3 & 0x3f))) =
                   (char)uVar2;
              lVar4 = lVar4 + 1;
            } while ((uint)lVar4 >> (bVar3 & 0x1f) == 0);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar7);
      }
      return 1;
    }
  } while( true );
}

