/**
 * Function: blit_combination_not_supported
 * Address:  14045b110
 * Signature: undefined blit_combination_not_supported(void)
 * Body size: 936 bytes
 */


undefined8 blit_combination_not_supported(byte *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  
  if ((*(uint *)(param_2 + 4) & 0xf0000000) == 0x10000000 && (*(uint *)(param_2 + 4) & 0xf800) != 0)
  {
    iVar1 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(param_2 + 0x40);
    if ((*param_1 & 4) != 0) {
      FUN_14040f1e0(param_1,1);
    }
    *(code **)(param_1 + 0x80) = FUN_14045b4c0;
    *(byte **)(param_1 + 0x90) = param_1;
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x48);
    *(longlong *)(param_1 + 0xb0) = param_2;
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0x48);
    if (((param_1[0x101] & 0x10) == 0) || (cVar3 = FUN_14040f020(param_1), cVar3 == '\0')) {
      pcVar6 = FUN_140656a70;
      if (iVar1 == iVar2) {
        uVar7 = *(uint *)(param_1 + 4);
        if (((uVar7 & 0xf0000000) != 0x10000000 || (uVar7 & 0xff) < 5) &&
           (uVar4 = *(uint *)(param_2 + 4), (uVar4 & 0xf0000000) != 0x10000000 || (uVar4 & 0xff) < 5
           )) {
          if ((*(int *)(param_1 + 0x78) == 0) || ((*(uint *)(param_1 + 0x100) & 0xffffefff) != 0)) {
            if ((uVar4 & 0xff0f0000) != 0x16070000 && (uVar7 & 0xff0f0000) != 0x16070000) {
              if (uVar7 == 0 || (uVar7 & 0xf0000000) == 0x10000000) {
                if ((((uVar7 & 0xf800) == 0) && (uVar4 = uVar7 >> 0x18 & 0xf, uVar4 < 0xd)) &&
                   ((0x100eU >> uVar4 & 1) != 0)) {
                  pcVar6 = (code *)FUN_140667d00(param_1);
                }
                else {
                  if ((((uVar7 & 0xff) != 1) || (uVar7 = uVar7 >> 0x18 & 0xf, 0xc < uVar7)) ||
                     ((0x100eU >> uVar7 & 1) == 0)) goto LAB_14045b2c7;
                  pcVar6 = (code *)FUN_140658b30(param_1);
                }
              }
              else {
LAB_14045b2c7:
                if ((param_1[0x100] & 0x10) == 0) {
                  pcVar6 = (code *)FUN_14065b2f0(param_1);
                }
                else {
                  pcVar6 = (code *)FUN_140660900(param_1);
                }
              }
              if (pcVar6 != (code *)0x0) goto LAB_14045b313;
              iVar1 = *(int *)(param_1 + 4);
              iVar2 = *(int *)(param_2 + 4);
              uVar7 = *(uint *)(param_1 + 0x100);
              if (DAT_141503e08 == 0x7fffffff) {
                DAT_141503e08 = 0;
                cVar3 = FUN_14015ce00();
                if (cVar3 == '\0') {
                  cVar3 = FUN_14015ce20();
                  if (cVar3 == '\0') goto LAB_14045b36d;
LAB_14045b48b:
                  DAT_141503e08 = DAT_141503e08 | 2;
                  cVar3 = FUN_14015ce40();
                  if (cVar3 != '\0') goto LAB_14045b49f;
LAB_14045b37a:
                  cVar3 = FUN_14015c5b0();
                }
                else {
                  DAT_141503e08 = DAT_141503e08 | 1;
                  cVar3 = FUN_14015ce20();
                  if (cVar3 != '\0') goto LAB_14045b48b;
LAB_14045b36d:
                  cVar3 = FUN_14015ce40();
                  if (cVar3 == '\0') goto LAB_14045b37a;
LAB_14045b49f:
                  DAT_141503e08 = DAT_141503e08 | 4;
                  cVar3 = FUN_14015c5b0();
                }
                if (cVar3 != '\0') {
                  DAT_141503e08 = DAT_141503e08 | 8;
                }
              }
              if (PTR_FUN_14150d4f0 != (undefined *)0x0) {
                piVar8 = &DAT_14150d4e0;
                pcVar6 = (code *)PTR_FUN_14150d4f0;
                do {
                  if (((iVar1 == *piVar8) && (iVar2 == piVar8[1])) &&
                     (((uVar7 & 0xff3 & ~piVar8[2]) == 0 && ((piVar8[3] & ~DAT_141503e08) == 0))))
                  goto LAB_14045b313;
                  pcVar6 = *(code **)(piVar8 + 10);
                  piVar8 = piVar8 + 6;
                } while (pcVar6 != (code *)0x0);
              }
              uVar7 = *(uint *)(param_1 + 4);
              if (uVar7 == 0 || (uVar7 & 0xf0000000) == 0x10000000) {
                uVar4 = *(uint *)(param_2 + 4);
                uVar9 = uVar7 >> 0x18 & 0xf;
                if ((((0xc < uVar9) || ((0x100eU >> uVar9 & 1) == 0)) ||
                    ((uVar7 == 0x13000801 && (*(longlong *)(param_1 + 0x48) != 0)))) &&
                   ((uVar4 == 0 || (uVar4 & 0xf0000000) == 0x10000000 &&
                    (((uVar7 = uVar4 >> 0x18 & 0xf, 0xc < uVar7 || ((0x100eU >> uVar7 & 1) == 0)) ||
                     ((uVar4 == 0x13000801 && (*(longlong *)(param_2 + 0x48) != 0))))))))
                goto LAB_14045b27a;
              }
              param_1[0x88] = 0;
              param_1[0x89] = 0;
              param_1[0x8a] = 0;
              param_1[0x8b] = 0;
              param_1[0x8c] = 0;
              param_1[0x8d] = 0;
              param_1[0x8e] = 0;
              param_1[0x8f] = 0;
              goto LAB_14045b143;
            }
LAB_14045b27a:
            pcVar6 = FUN_140655510;
          }
          else {
            pcVar6 = FUN_1406602b0;
          }
        }
      }
LAB_14045b313:
      *(code **)(param_1 + 0x88) = pcVar6;
    }
    uVar5 = 1;
  }
  else {
LAB_14045b143:
    FUN_1401579d0(param_1 + 0x78);
    uVar5 = FUN_1400fbed0("Blit combination not supported");
  }
  return uVar5;
}

