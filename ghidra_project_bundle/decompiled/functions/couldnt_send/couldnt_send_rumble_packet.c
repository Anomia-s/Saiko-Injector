/**
 * Function: couldnt_send_rumble_packet
 * Address:  14064ec90
 * Signature: undefined couldnt_send_rumble_packet(void)
 * Body size: 363 bytes
 */


ulonglong couldnt_send_rumble_packet(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong unaff_RDI;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined2 local_28;
  undefined4 uStack_26;
  undefined2 uStack_22;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined3 uStack_1e;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  if (*(int *)((longlong)param_1 + 0x34) == 2) {
LAB_14064ecc3:
    lVar5 = 10;
    if (*(char *)(*param_1 + 0x54) != '\0') {
      lVar5 = 0x32;
    }
    uVar4 = sdl_timer_resolution();
    unaff_RDI = lVar5 + param_1[7];
    if (unaff_RDI <= uVar4) {
      param_1[7] = 0;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
  }
  else if ((*(int *)((longlong)param_1 + 0x34) == 1) && (param_1[7] != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 2;
    goto LAB_14064ecc3;
  }
  uVar4 = CONCAT71((int7)(unaff_RDI >> 8),1);
  if (((char)param_1[8] != '\x01') || (*(int *)((longlong)param_1 + 0x34) != 0)) goto LAB_14064edd1;
  *(undefined1 *)(param_1 + 8) = 0;
  cVar1 = hidapi_rumble();
  if (cVar1 == '\0') {
    uVar4 = 0;
    goto LAB_14064edd1;
  }
  lVar5 = *param_1;
  local_38 = param_1;
  if (*(char *)(lVar5 + 0x54) == '\x01') {
    local_28 = 0xf03;
    uStack_22 = 0xff;
    uStack_20 = 0xeb;
    auVar6 = pshuflw(ZEXT416(*(uint *)((longlong)param_1 + 0x2f)),
                     ZEXT416(*(uint *)((longlong)param_1 + 0x2f)),0xe1);
    uStack_26 = auVar6._0_4_;
    iVar2 = couldnt_send_rumble_size_d_is_greater_than_d(lVar5,&local_28,9,FUN_14064f690);
    if (iVar2 != 9) {
LAB_14064edc3:
      uVar3 = FUN_1400fbed0("Couldn\'t send rumble packet");
      uVar4 = (ulonglong)uVar3;
      goto LAB_14064edd1;
    }
  }
  else {
    local_28 = 9;
    uStack_26 = 0xf000900;
    auVar6 = pshuflw(ZEXT416(*(uint *)((longlong)param_1 + 0x2f)),
                     ZEXT416(*(uint *)((longlong)param_1 + 0x2f)),0xe1);
    uStack_22 = auVar6._0_2_;
    uStack_20 = auVar6[2];
    _uStack_1f = CONCAT31(0xeb00ff,auVar6[3]);
    iVar2 = couldnt_send_rumble_size_d_is_greater_than_d(lVar5,&local_28,0xd,FUN_14064f690);
    if (iVar2 != 0xd) goto LAB_14064edc3;
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
LAB_14064edd1:
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_58)) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
}

