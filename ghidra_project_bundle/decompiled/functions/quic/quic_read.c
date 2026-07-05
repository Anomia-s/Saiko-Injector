/**
 * Function: quic_read
 * Address:  140bcccb0
 * Signature: undefined quic_read(void)
 * Body size: 807 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong quic_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                   undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  longlong local_58 [3];
  longlong local_40;
  longlong local_38;
  int local_30;
  int local_24;
  undefined8 uStack_20;
  ulonglong uVar7;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uStack_20 = 0x140bcccce;
  uVar7 = 0;
  uVar6 = 0;
  *param_4 = 0;
  uVar4 = qc_try_create_default_xso_for_write(param_1,local_58,3);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar5 = FUN_140b77290(*(undefined8 *)(local_58[0] + 0x58));
  FUN_140c20b60(uVar5);
  local_24 = 1;
  if (local_30 == 0) {
    if (local_40 != 0) {
      *(undefined4 *)(local_40 + 0x128) = 0;
    }
  }
  else if (local_38 != 0) {
    *(undefined4 *)(local_38 + 0xb8) = 0;
  }
  iVar2 = failed_to_start_channel(local_58);
  if (iVar2 < 1) goto LAB_140bccfa7;
  if (local_38 == 0) {
    iVar2 = qc_wait_for_default_xso_for_read(local_58);
    if (iVar2 == 0) goto LAB_140bccfa7;
    local_38 = *(longlong *)(local_40 + 0xb0);
  }
  uVar5 = CONCAT44(uVar10,param_5);
  plVar8 = param_4;
  iVar2 = quic_read_actual(local_58,*(undefined8 *)(local_38 + 0x80),param_2,param_3,param_4,uVar5);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar10 = (undefined4)((ulonglong)plVar8 >> 0x20);
  if (iVar2 == 0) goto LAB_140bccfa7;
  if (*param_4 == 0) {
    if (((*(byte *)(local_40 + 0x100) & 0x20) == 0) &&
       (iVar2 = FUN_140c504f0(*(undefined8 *)(local_40 + 0xa0)), iVar2 == 0)) {
      iVar2 = FUN_140bc8b80(local_58[0]);
      if (iVar2 == 0) {
        uVar3 = *(uint *)(local_58[0] + 0x70);
        lVar1 = local_58[0];
        while (uVar3 = uVar3 >> 5 & 3, uVar3 == 0) {
          lVar1 = *(longlong *)(lVar1 + 0x40);
          if (lVar1 == 0) goto LAB_140bccefc;
          uVar3 = *(uint *)(lVar1 + 0x70);
        }
        if (uVar3 != 2) {
LAB_140bccefc:
          uVar5 = FUN_140c4e150(*(undefined8 *)(local_58[0] + 0x58));
          FUN_140c4d9c0(uVar5,0);
        }
        iVar2 = quic_read_actual(local_58,*(undefined8 *)(local_38 + 0x80),param_2,param_3,param_4,
                                 CONCAT44(uVar11,param_5));
        if (iVar2 == 0) goto LAB_140bccfa7;
        if (*param_4 == 0) {
          uVar7 = uVar6;
          if (local_24 != 0) {
            if (local_30 == 0) {
              if (local_40 != 0) {
                *(undefined4 *)(local_40 + 0x128) = 2;
              }
            }
            else if (local_38 != 0) {
              *(undefined4 *)(local_38 + 0xb8) = 2;
            }
          }
          goto LAB_140bccfa7;
        }
        goto LAB_140bcce13;
      }
      local_88 = local_58;
      local_80 = *(undefined8 *)(local_38 + 0x80);
      local_60 = param_5;
      uVar5 = *(undefined8 *)(local_58[0] + 0x58);
      local_78 = param_2;
      local_70 = param_3;
      local_68 = param_4;
      FUN_140c4e130(uVar5,0);
      uVar5 = FUN_140c4e150(uVar5);
      iVar2 = FUN_140c4da80(uVar5,quic_read_again,&local_88,0);
      if (iVar2 != 0) {
        uVar7 = (ulonglong)(-1 < iVar2);
        goto LAB_140bccfa7;
      }
      uVar5 = 0xc11;
      uVar9 = CONCAT44(uVar10,0xc0103);
    }
    else {
      uVar5 = 0xc00;
      uVar9 = CONCAT44(uVar10,0xcf);
    }
    uVar3 = FUN_140bcba90(local_58,"ssl\\quic\\quic_impl.c",uVar5,"quic_read",uVar9,0);
    uVar7 = (ulonglong)uVar3;
  }
  else {
    if (((*(byte *)(local_40 + 0x100) & 0x20) == 0) &&
       (iVar2 = FUN_140c504f0(*(undefined8 *)(local_40 + 0xa0)), iVar2 == 0)) {
      uVar3 = *(uint *)(local_58[0] + 0x70);
      lVar1 = local_58[0];
      while (uVar3 = uVar3 >> 5 & 3, uVar3 == 0) {
        lVar1 = *(longlong *)(lVar1 + 0x40);
        if (lVar1 == 0) goto LAB_140bccdfc;
        uVar3 = *(uint *)(lVar1 + 0x70);
      }
      if (uVar3 != 2) {
LAB_140bccdfc:
        uVar5 = FUN_140c4e150(*(undefined8 *)(local_58[0] + 0x58));
        FUN_140c4d9c0(uVar5,0);
      }
    }
LAB_140bcce13:
    uVar7 = 1;
  }
LAB_140bccfa7:
  uVar5 = FUN_140b77290(*(undefined8 *)(local_58[0] + 0x58));
  FUN_140c20b80(uVar5);
  return uVar7;
}

