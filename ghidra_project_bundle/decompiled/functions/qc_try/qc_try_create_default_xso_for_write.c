/**
 * Function: qc_try_create_default_xso_for_write
 * Address:  140bcbbd0
 * Signature: undefined qc_try_create_default_xso_for_write(void)
 * Body size: 1011 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int qc_try_create_default_xso_for_write(int *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  bVar3 = false;
  uVar8 = param_3 | 2;
  if ((param_3 & 8) == 0) {
    uVar8 = param_3;
  }
  *(uint *)((longlong)param_2 + 0x34) = (uint)((uVar8 & 0x40) != 0);
  if (param_1 == (int *)0x0) {
    FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",0x115,"expect_quic_as",0xc0102,0);
    return 0;
  }
  iVar4 = *param_1;
  if (iVar4 == 0x80) {
    *param_2 = (longlong)param_1;
    param_2[1] = *(longlong *)(param_1 + 0x22);
    param_2[2] = *(longlong *)(param_1 + 0x20);
    param_2[3] = (longlong)param_1;
    bVar3 = false;
    if ((uVar8 & 8) == 0) {
LAB_140bcbe08:
      if (((uVar8 & 1) != 0) || ((*(longlong *)(param_1 + 0x2c) != 0 && ((uVar8 & 2) != 0)))) {
        param_2[4] = *(longlong *)(param_1 + 0x2c);
        goto LAB_140bcbf2e;
      }
      FUN_140bcbb40(param_1,uVar8);
LAB_140bcbf89:
      if (!bVar3) {
        return iVar9;
      }
      if ((iVar9 != 0) && ((param_3 & 0x20) != 0)) {
        return iVar9;
      }
    }
    else {
      if ((uVar8 & 0x40) == 0) {
        uVar7 = FUN_140b77290(*(undefined8 *)(param_1 + 0x16));
        FUN_140c20b60(uVar7);
      }
      else {
        uVar7 = FUN_140b77290(*(undefined8 *)(param_1 + 0x16));
        FUN_140c20b60(uVar7);
        *(undefined4 *)((longlong)param_2 + 0x34) = 1;
        if ((int)param_2[5] == 0) {
          if (param_2[3] != 0) {
            *(undefined4 *)(param_2[3] + 0x128) = 0;
          }
        }
        else if (param_2[4] != 0) {
          *(undefined4 *)(param_2[4] + 0xb8) = 0;
        }
      }
      bVar3 = true;
      if (*(longlong *)(param_1 + 0x2c) != 0) goto LAB_140bcbe08;
      if (((*(byte *)(param_1 + 0x40) & 0x20) == 0) &&
         (iVar4 = FUN_140c504f0(*(undefined8 *)(param_1 + 0x28)), iVar4 == 0)) {
        iVar4 = failed_to_start_channel(param_2);
        if (0 < iVar4) {
          if ((uVar8 & 0x10) == 0) {
            lVar1 = param_2[3];
            if (((*(byte *)(lVar1 + 0x100) & 0x10) == 0) && (*(int *)(lVar1 + 0x104) != 0)) {
              lVar6 = FUN_140bcb690(param_2,*(int *)(lVar1 + 0x104) == 2,0);
              lVar2 = *(longlong *)(lVar1 + 0xb0);
              if (lVar2 != lVar6) {
                *(longlong *)(lVar1 + 0xb0) = lVar6;
                if (lVar6 == 0) {
                  FUN_140b6afe0(lVar1);
                }
                else {
                  LOCK();
                  *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
                  UNLOCK();
                }
                if (lVar2 != 0) {
                  FUN_140b6b000(lVar2);
                }
              }
              if (*(longlong *)(lVar1 + 0xb0) != 0) {
                FUN_140bcb640(lVar1);
                goto LAB_140bcbe08;
              }
              uVar7 = 0x820;
              uVar5 = 0xc0103;
            }
            else {
              uVar7 = 0x816;
              uVar5 = 0x163;
            }
            iVar4 = FUN_140bcba90(param_2,"ssl\\quic\\quic_impl.c",uVar7,
                                  "qc_try_create_default_xso_for_write",uVar5,0);
          }
          else {
            iVar4 = qc_wait_for_default_xso_for_read(param_2,0);
          }
          if (iVar4 != 0) goto LAB_140bcbe08;
        }
      }
      else {
        FUN_140bcba90(param_2,"ssl\\quic\\quic_impl.c",0x145,"expect_quic_as",0xcf,0);
      }
    }
    uVar7 = FUN_140b77290(*(undefined8 *)(*param_2 + 0x58));
    FUN_140c20b80(uVar7);
  }
  else {
    if (iVar4 == 0x81) {
      if ((uVar8 & 2) != 0) {
        *param_2 = (longlong)param_1;
        param_2[1] = *(longlong *)(*(longlong *)(param_1 + 0x1e) + 0x88);
        param_2[2] = *(longlong *)(*(longlong *)(param_1 + 0x1e) + 0x80);
        param_2[3] = *(longlong *)(param_1 + 0x1e);
        param_2[4] = (longlong)param_1;
        *(undefined4 *)(param_2 + 5) = 1;
        goto LAB_140bcbf2e;
      }
    }
    else {
      if (iVar4 != 0x82) {
        if (iVar4 != 0x83) {
          FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",0x170,"expect_quic_as",0xc0103,0);
          return 0;
        }
        if (-1 < (char)uVar8) goto LAB_140bcbcb6;
        *param_2 = (longlong)param_1;
        param_2[1] = (longlong)param_1;
        *(undefined4 *)(param_2 + 6) = 1;
        bVar3 = false;
LAB_140bcbf2e:
        if (((param_3 & 0x20) != 0) && (!bVar3)) {
          uVar7 = FUN_140b77290(*(undefined8 *)(*param_2 + 0x58));
          FUN_140c20b60(uVar7);
          if ((uVar8 & 0x40) != 0) {
            *(undefined4 *)((longlong)param_2 + 0x34) = 1;
            if ((int)param_2[5] == 0) {
              if (param_2[3] != 0) {
                *(undefined4 *)(param_2[3] + 0x128) = 0;
              }
            }
            else if (param_2[4] != 0) {
              *(undefined4 *)(param_2[4] + 0xb8) = 0;
            }
          }
          bVar3 = true;
        }
        iVar9 = 1;
        goto LAB_140bcbf89;
      }
      if ((uVar8 & 4) != 0) {
        *param_2 = (longlong)param_1;
        param_2[1] = *(longlong *)(param_1 + 0x1e);
        param_2[2] = (longlong)param_1;
        *(undefined4 *)((longlong)param_2 + 0x2c) = 1;
        goto LAB_140bcbf2e;
      }
    }
LAB_140bcbcb6:
    FUN_140bcbb40(param_1,uVar8);
  }
  return iVar9;
}

