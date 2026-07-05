/**
 * Function: rect_has_a_negative_size
 * Address:  14011a0e0
 * Signature: undefined rect_has_a_negative_size(void)
 * Body size: 479 bytes
 */


undefined8 rect_has_a_negative_size(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  cVar5 = FUN_1403d8fa0(param_1,2);
  if (cVar5 == '\0') {
    FUN_1400fbed0("Parameter \'%s\' is invalid","renderer");
LAB_14011a133:
    uVar7 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x2b8) == '\x01') {
      FUN_1400fbed0("Renderer\'s window has been destroyed, can\'t use further");
      goto LAB_14011a133;
    }
    if (param_2 == (undefined4 *)0x0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 8) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0xc) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x10) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x14) = 0xffffffff;
    }
    else {
      if (((int)param_2[2] < 0) || ((int)param_2[3] < 0)) {
        uVar7 = FUN_1400fbed0("rect has a negative size");
        if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
          return uVar7;
        }
        goto LAB_14011a191;
      }
      lVar1 = *(longlong *)(param_1 + 0x150);
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(lVar1 + 8) = *param_2;
      *(undefined4 *)(lVar1 + 0xc) = uVar2;
      *(undefined4 *)(lVar1 + 0x10) = uVar3;
      *(undefined4 *)(lVar1 + 0x14) = uVar4;
    }
    FUN_140119ed0(*(undefined8 *)(param_1 + 0x150));
    lVar1 = *(longlong *)(param_1 + 0x150);
    local_28 = *(undefined4 *)(lVar1 + 0x18);
    uStack_24 = *(undefined4 *)(lVar1 + 0x1c);
    uStack_20 = *(undefined4 *)(lVar1 + 0x20);
    uStack_1c = *(undefined4 *)(lVar1 + 0x24);
    if ((*(char *)(param_1 + 0x272) != '\x01') ||
       (iVar6 = FUN_1400fc560(&local_28,param_1 + 0x250,0x10), iVar6 != 0)) {
      puVar8 = *(undefined4 **)(param_1 + 0x230);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)FUN_140160c70(1,0x48);
        if (puVar8 == (undefined4 *)0x0) goto LAB_14011a133;
      }
      else {
        *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(puVar8 + 0x10);
        *(undefined8 *)(puVar8 + 0x10) = 0;
      }
      if (*(longlong *)(param_1 + 0x228) == 0) {
        *(undefined4 **)(param_1 + 0x220) = puVar8;
      }
      else {
        *(undefined4 **)(*(longlong *)(param_1 + 0x228) + 0x40) = puVar8;
      }
      *(undefined4 **)(param_1 + 0x228) = puVar8;
      *puVar8 = 1;
      *(undefined8 *)(puVar8 + 2) = 0;
      puVar8[4] = local_28;
      puVar8[5] = uStack_24;
      puVar8[6] = uStack_20;
      puVar8[7] = uStack_1c;
      cVar5 = (**(code **)(param_1 + 0x20))(param_1,puVar8);
      if (cVar5 == '\0') {
        *puVar8 = 0;
        goto LAB_14011a133;
      }
      *(undefined4 *)(param_1 + 0x250) = local_28;
      *(undefined4 *)(param_1 + 0x254) = uStack_24;
      *(undefined4 *)(param_1 + 600) = uStack_20;
      *(undefined4 *)(param_1 + 0x25c) = uStack_1c;
      *(undefined1 *)(param_1 + 0x272) = 1;
    }
    uVar7 = 1;
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar7;
  }
LAB_14011a191:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_48);
}

