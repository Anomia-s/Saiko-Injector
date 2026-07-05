/**
 * Function: unknown_nintendo_switch_pro_effect_type
 * Address:  140648d70
 * Signature: undefined unknown_nintendo_switch_pro_effect_type(void)
 * Body size: 508 bytes
 */


undefined8
unknown_nintendo_switch_pro_effect_type
          (longlong param_1,undefined8 param_2,char *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e [62];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (param_4 == 10) {
    if (*param_3 != '\x10') {
      pcVar8 = "Unknown Nintendo Switch Pro effect type";
LAB_140648e81:
      uVar7 = FUN_1400fbed0(pcVar8);
LAB_140648e86:
      if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_98)) {
        return uVar7;
      }
      goto LAB_140648f5f;
    }
    *(undefined4 *)(plVar3 + 7) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)plVar3 + 0x3c) = *(undefined4 *)(param_3 + 6);
    *(undefined1 *)((longlong)plVar3 + 0x36) = 0x10;
    *(char *)((longlong)plVar3 + 0x37) = *(char *)((longlong)plVar3 + 0x2c);
    *(byte *)((longlong)plVar3 + 0x2c) = *(char *)((longlong)plVar3 + 0x2c) + 1U & 0xf;
    lVar6 = sdl_timer_resolution();
    plVar3[0x11] = lVar6;
    lVar6 = *plVar3;
    local_68 = *(undefined8 *)((longlong)plVar3 + 0x36);
    lVar9 = 0x40;
    if (*(char *)(lVar6 + 0x54) != '\0') {
      lVar9 = 0x31;
    }
    local_60 = *(undefined2 *)((longlong)plVar3 + 0x3e);
    memset(local_5e,0,lVar9 - 10);
    if ((char)plVar3[3] == '\x01') {
      iVar5 = FUN_14017a5d0(*(undefined8 *)(lVar6 + 0x80),&local_68,lVar9);
joined_r0x000140648ebe:
      if (-1 < iVar5) {
        *(undefined2 *)(plVar3 + 0x12) = 0;
        uVar7 = 1;
        goto LAB_140648f40;
      }
    }
    else {
      cVar4 = hidapi_rumble();
      if (cVar4 != '\0') {
        iVar5 = FUN_14064f890(*plVar3,&local_68,lVar9);
        goto joined_r0x000140648ebe;
      }
    }
    uVar7 = 0;
  }
  else {
    if (0xfe < param_4 - 2U) {
      pcVar8 = "That operation is not supported";
      goto LAB_140648e81;
    }
    cVar4 = *param_3;
    if (cVar4 == '8') {
      sVar1 = *(short *)(*plVar3 + 0x20);
      sVar2 = *(short *)(*plVar3 + 0x22);
      uVar7 = 1;
      if ((((sVar1 != 0 || sVar2 != 0) && (sVar2 != 0xf6 || sVar1 != 0xf0d)) &&
          (iVar5 = (int)plVar3[4], iVar5 != 0)) && ((iVar5 != 6 && (sVar1 != 0x57e || iVar5 < 4))))
      {
        local_78 = 0;
        uVar7 = FUN_140649540(plVar3,0x38,param_3 + 1,(char)param_4 + -1);
        goto LAB_140648e86;
      }
    }
    else if ((cVar4 != '\x03') || (uVar7 = 1, *(char *)(param_1 + 0x54) == '\x01')) {
      local_78 = 0;
      uVar7 = FUN_140649540(plVar3,cVar4,param_3 + 1,(char)param_4 + -1);
      goto LAB_140648e86;
    }
  }
LAB_140648f40:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_98)) {
    return uVar7;
  }
LAB_140648f5f:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_98);
}

