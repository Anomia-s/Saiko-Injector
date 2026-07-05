/**
 * Function: uopenssl_ia32cap
 * Address:  140b8b420
 * Signature: undefined uopenssl_ia32cap(void)
 * Body size: 532 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void uopenssl_ia32cap(void)

{
  short sVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  uint *puVar10;
  short *psVar11;
  
  if (DAT_1416fe190 == 0) {
    psVar9 = &DAT_1416fdf90;
    DAT_1416fe190 = 1;
    DVar2 = GetEnvironmentVariableW(L"OPENSSL_ia32cap",&DAT_1416fdf90,0x100);
    sVar1 = DAT_1416fdf90;
    if (DVar2 - 1 < 0xff) {
      psVar11 = (short *)0x0;
      psVar8 = psVar11;
      if (DAT_1416fdf90 == 0x7e) {
        psVar8 = (short *)0x2;
      }
      uVar3 = FUN_140b8b640(psVar8 + 0xa0b7efc8);
      if (sVar1 == 0x7e) {
        uVar4 = FUN_14046e730(&DAT_1416f2380);
        sVar1 = DAT_1416fdf90;
        uVar5 = uVar4 & ~uVar3 & 0xedfff7fdffffffff;
        if ((uVar3 & 0x1000000) == 0) {
          uVar5 = uVar4 & ~uVar3;
        }
      }
      else {
        sVar1 = DAT_1416fdf90;
        uVar5 = uVar3;
        if (DAT_1416fdf90 == 0x3a) {
          uVar5 = FUN_14046e730(&DAT_1416f2380);
          sVar1 = DAT_1416fdf90;
        }
      }
      while ((psVar8 = psVar11, sVar1 != 0 && (psVar8 = psVar9, sVar1 != 0x3a))) {
        psVar9 = psVar9 + 1;
        sVar1 = *psVar9;
      }
      psVar9 = psVar8 + 1;
      if (psVar8 == (short *)0x0) {
        psVar9 = (short *)0x0;
      }
      puVar10 = &DAT_1416f2388;
      do {
        if ((psVar9 == (short *)0x0) || (sVar1 = *psVar9, sVar1 == 0)) {
          puVar10[0] = 0;
          puVar10[1] = 0;
        }
        else {
          if (sVar1 != 0x3a) {
            psVar8 = psVar11;
            if (sVar1 == 0x7e) {
              psVar8 = (short *)0x2;
            }
            uVar6 = FUN_140b8b640((longlong)psVar8 + (longlong)psVar9);
            uVar7 = (uint)((ulonglong)uVar6 >> 0x20);
            if (sVar1 == 0x7e) {
              *puVar10 = *puVar10 & ~(uint)uVar6;
              puVar10[1] = puVar10[1] & ~uVar7;
            }
            else {
              *puVar10 = (uint)uVar6;
              puVar10[1] = uVar7;
            }
          }
          sVar1 = *psVar9;
          psVar8 = psVar9;
          while (sVar1 != 0) {
            if (sVar1 == 0x3a) {
              psVar9 = psVar8 + 1;
              if (psVar8 == (short *)0x0) {
                psVar9 = (short *)0x0;
              }
              goto LAB_140b8b5c5;
            }
            psVar8 = psVar8 + 1;
            sVar1 = *psVar8;
          }
          psVar9 = (short *)0x0;
        }
LAB_140b8b5c5:
        puVar10 = puVar10 + 2;
      } while ((longlong)puVar10 < 0x1416f23a8);
      if ((DAT_1416f2398 & 0x80000) == 0) {
        DAT_1416f23a4 = 0;
      }
    }
    else {
      uVar5 = FUN_14046e730(&DAT_1416f2380);
    }
    DAT_1416f2380 = (uint)uVar5 | 0x400;
    DAT_1416f2384 = (undefined4)(uVar5 >> 0x20);
  }
  return;
}

