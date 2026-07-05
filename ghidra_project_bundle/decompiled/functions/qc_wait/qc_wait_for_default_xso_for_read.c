/**
 * Function: qc_wait_for_default_xso_for_read
 * Address:  140bcaea0
 * Signature: undefined qc_wait_for_default_xso_for_read(void)
 * Body size: 730 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void qc_wait_for_default_xso_for_read(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  undefined8 local_40 [4];
  ulonglong local_20;
  ulonglong uVar7;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  lVar1 = param_1[3];
  if (((*(uint *)(lVar1 + 0x100) & 0x10) != 0) || (*(int *)(lVar1 + 0x104) == 0)) {
    local_70 = 0;
    local_78 = 0x163;
    FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",0x855,"qc_wait_for_default_xso_for_read");
    goto LAB_140bcafc9;
  }
  uVar6 = ~*(uint *)(lVar1 + 0x100) >> 1 & 1;
  uVar7 = (ulonglong)uVar6;
  uVar3 = FUN_140c50430(*(undefined8 *)(lVar1 + 0xa0));
  lVar4 = FUN_140c57f30(uVar3,uVar7);
  if (lVar4 == 0) {
    uVar3 = FUN_140c50430(*(undefined8 *)(lVar1 + 0xa0));
    lVar4 = FUN_140c57f30(uVar3,uVar6 | 2);
    if (lVar4 != 0) goto LAB_140bcb0b9;
    FUN_140bcba00(param_1);
    uVar3 = FUN_140c50430(*(undefined8 *)(lVar1 + 0xa0));
    lVar4 = FUN_140c57f30(uVar3,uVar7);
    if (lVar4 != 0) goto LAB_140bcb0b9;
    if (param_2 != 0) goto LAB_140bcafc9;
    iVar2 = FUN_140c504f0(*(undefined8 *)(lVar1 + 0xa0));
    if (iVar2 == 0) {
      iVar2 = FUN_140bc8b80(*param_1);
      if (iVar2 == 0) {
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          if ((int)param_1[5] == 0) {
            if (param_1[3] != 0) {
              *(undefined4 *)(param_1[3] + 0x128) = 2;
            }
          }
          else if (param_1[4] != 0) {
            *(undefined4 *)(param_1[4] + 0xb8) = 2;
          }
        }
        goto LAB_140bcafc9;
      }
      local_58 = 0;
      uVar3 = *(undefined8 *)(*param_1 + 0x58);
      local_60 = lVar1;
      local_50 = param_1;
      local_48 = uVar7;
      FUN_140c4e130(uVar3,0);
      uVar3 = FUN_140c4e150(uVar3);
      iVar2 = FUN_140c4da80(uVar3,FUN_140bcc340,&local_60,0);
      if (iVar2 != 0) {
        if ((iVar2 < 0) || (lVar4 = local_58, local_58 == 0)) goto LAB_140bcafc9;
        goto LAB_140bcb0b9;
      }
      local_78 = 0xc0103;
      uVar3 = 0x881;
    }
    else {
      local_78 = 0xcf;
      uVar3 = 0x873;
    }
  }
  else {
LAB_140bcb0b9:
    uVar3 = FUN_140c50440(*(undefined8 *)(lVar1 + 0xa0));
    FUN_140c4eb50(uVar3,local_40);
    uVar3 = FUN_140c50430(*(undefined8 *)(lVar1 + 0xa0));
    FUN_140c58740(uVar3,lVar4,local_40[0]);
    lVar5 = create_xso_from_stream(lVar1,lVar4);
    lVar4 = *(longlong *)(lVar1 + 0xb0);
    if (lVar4 != lVar5) {
      *(longlong *)(lVar1 + 0xb0) = lVar5;
      if (lVar5 == 0) {
        FUN_140b6afe0(lVar1);
      }
      else {
        LOCK();
        *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + -1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        FUN_140b6b000(lVar4);
      }
    }
    if (*(longlong *)(lVar1 + 0xb0) != 0) {
      FUN_140bcb640(lVar1);
      goto LAB_140bcafc9;
    }
    local_78 = 0xc0103;
    uVar3 = 0x896;
  }
  local_70 = 0;
  FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",uVar3,"qc_wait_for_default_xso_for_read");
LAB_140bcafc9:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_98);
}

