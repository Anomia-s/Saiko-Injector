/**
 * Function: yellowelemresetd_0xx_0xx
 * Address:  14039ba90
 * Signature: undefined yellowelemresetd_0xx_0xx(void)
 * Body size: 1211 bytes
 */


void yellowelemresetd_0xx_0xx(longlong param_1,Decoration<__int64> *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  byte bVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte *pbVar16;
  bool local_6d;
  int local_6c;
  
  uVar2 = *(uint *)(param_1 + 0x120);
  if ((ulonglong)uVar2 == 0) {
    FUN_1403b79b0(param_2,&DAT_1413a2ad6);
  }
  else if (0 < (int)uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    uVar10 = 0;
    local_6c = 0;
    do {
      lVar15 = uVar10 * 0x30;
      bVar11 = *(byte *)(lVar3 + 1 + lVar15);
      FUN_1403b79b0(param_2,"#[normal]%2d. [#[grey]%2d#[reset], #[green]%2d#[reset]]  ",
                    uVar10 & 0xffffffff,(int)*(short *)(lVar3 + 4 + lVar15),
                    (int)*(short *)(lVar3 + 6 + lVar15));
      iVar6 = _anon_C953E3F2::Decoration<__int64>::vfunction3(param_2);
      local_6c = local_6c - (uint)(*(char *)(lVar3 + lVar15) == '\x1a');
      FUN_1403b79b0(param_2,&DAT_141338b7a,local_6c,&DAT_1413a2ad6);
      uVar9 = FUN_14039b860(*(undefined1 *)(lVar3 + lVar15));
      FUN_1403b8780(param_2,uVar9);
      FUN_1403b8780(param_2,&DAT_1413a21db);
      iVar7 = _anon_C953E3F2::Decoration<__int64>::vfunction3(param_2);
      iVar7 = (iVar6 - iVar7) + 0xc;
      if (0 < iVar7) {
        do {
          FUN_1403b7ad0(param_2,0x20);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      pbVar16 = (byte *)(lVar15 + lVar3);
      puVar1 = (ulonglong *)(pbVar16 + 0x10);
      iVar7 = FUN_14039c870(param_1,puVar1,bVar11 & 3,param_2);
      bVar5 = *pbVar16;
      local_6c = local_6c + (uint)((byte)(bVar5 - 0x15) < 5);
      if (bVar5 == 4) {
        uVar14 = *puVar1;
        FUN_1403b8a80(param_2,"{",&DAT_1413944a3);
        uVar13 = 0;
        do {
          if ((uVar14 >> (uVar13 & 0x3f) & 1) != 0) {
            FUN_1403b9020(param_2,"%d",uVar13 & 0xffffffff);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x40);
        FUN_1403b8c10(param_2,"}");
        bVar5 = *pbVar16;
      }
      bVar12 = bVar11 >> 2 & 3;
      bVar11 = bVar11 >> 4 & 3;
      if (bVar5 - 0x23 < 2) {
        bVar4 = true;
LAB_14039bcae:
        local_6d = bVar11 != 0;
        iVar8 = _anon_C953E3F2::Decoration<__int64>::vfunction3(param_2);
        iVar6 = ((iVar6 + iVar7) - iVar8) + 0x1e;
        if (0 < iVar6) {
          do {
            FUN_1403b7ad0(param_2,0x20);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (bVar4) {
          uVar14 = *(ulonglong *)(pbVar16 + 0x18);
          if (uVar14 != 0) {
            FUN_1403b8a80(param_2,"{",&DAT_1413944a3);
            uVar13 = 0;
            do {
              if ((uVar14 >> (uVar13 & 0x3f) & 1) != 0) {
                FUN_1403b9020(param_2,"%d",uVar13 & 0xffffffff);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x40);
            FUN_1403b8c10(param_2,"}");
          }
          uVar14 = *(ulonglong *)(pbVar16 + 0x20);
          if (uVar14 != 0) {
            if (*(longlong *)(pbVar16 + 0x18) != 0) {
              FUN_1403b7a10(param_2,&DAT_14139ffef,3);
              uVar14 = *(ulonglong *)(pbVar16 + 0x20);
            }
            FUN_1403b8a80(param_2,"{",&DAT_1413944a3);
            uVar13 = 0;
            do {
              if ((uVar14 >> (uVar13 & 0x3f) & 1) != 0) {
                FUN_1403b9020(param_2,"%d",uVar13 & 0xffffffff);
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x40);
            FUN_1403b8c10(param_2,"}");
          }
          FUN_1403b8780(param_2,"\n");
        }
        else {
          FUN_1403b8780(param_2,&DAT_14139c234);
          if ((byte)(*pbVar16 - 0x21) < 2) {
            FUN_1403b79b0(param_2,"#[yellow]elem#[reset]([%d], 0x%x, 0x%x)",(int)(char)pbVar16[2],
                          *(ulonglong *)(pbVar16 + 0x18) >> 0x20,(int)*(ulonglong *)(pbVar16 + 0x18)
                         );
            if (local_6d) goto LAB_14039baea;
LAB_14039beb0:
            if (*pbVar16 - 0x1d < 4) {
              bVar11 = pbVar16[3];
              FUN_1403b8780(param_2,", #[yellow]\"");
              uVar9 = *(undefined8 *)
                       (*(longlong *)(param_1 + 0x10) + 0x30 + (longlong)(char)bVar11 * 0x48);
LAB_14039bf37:
              FUN_1403b8780(param_2,uVar9);
              FUN_1403b8780(param_2,&DAT_141360023);
            }
            else if (*pbVar16 == 0x37) {
              uVar14 = *puVar1;
              FUN_1403b8780(param_2,", #[yellow]\"");
              uVar9 = *(undefined8 *)
                       (*(longlong *)(param_1 + 0xa0) + 0x10 + (ulonglong)(byte)uVar14 * 0x18);
              goto LAB_14039bf37;
            }
          }
          else {
            FUN_14039c870(param_1,pbVar16 + 0x18,bVar12,param_2);
            if (!local_6d) goto LAB_14039beb0;
LAB_14039baea:
            FUN_1403b8780(param_2,&DAT_1413a1e41);
            FUN_14039c870(param_1,pbVar16 + 0x20,bVar11,param_2);
          }
          FUN_1403b7ad0(param_2,0x29);
          FUN_1403b7ad0(param_2,10);
        }
      }
      else if (bVar5 == 0x18) {
        FUN_1403b79b0(param_2,"[%d]\n",(int)*(short *)(pbVar16 + 8));
      }
      else {
        if (bVar12 != 0 || bVar11 != 0) {
          bVar4 = false;
          goto LAB_14039bcae;
        }
        FUN_1403b8780(param_2,"\n");
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  return;
}

