/**
 * Function: could_not_create_buffer
 * Address:  140400170
 * Signature: undefined could_not_create_buffer(void)
 * Body size: 1111 bytes
 */


undefined8 *
could_not_create_buffer
          (longlong param_1,uint param_2,ulonglong param_3,uint param_4,longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined8 unaff_R15;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  longlong **local_110;
  undefined4 local_104;
  undefined4 local_100 [2];
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_84;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  puVar3 = (undefined8 *)FUN_140160c70(1,0x90);
  if (puVar3 == (undefined8 *)0x0) goto LAB_140400587;
  local_b8 = 0;
  if (3 < param_4) {
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Unrecognized buffer type!");
    }
    FUN_1400fbed0(&DAT_141339891,"Unrecognized buffer type!");
    goto LAB_140400587;
  }
  local_d0 = (param_2 & 0x20) >> 3;
  switch(param_4) {
  case 0:
    local_c4 = 1;
    break;
  case 1:
    if (*(char *)(param_1 + 0x79) != '\x01') goto switchD_1404001ee_caseD_2;
    local_c4 = 5;
    break;
  case 2:
switchD_1404001ee_caseD_2:
    local_c4 = 2;
    uVar6 = 0xac3;
    goto LAB_14040025c;
  case 3:
    local_c4 = 3;
    uVar6 = 0x400;
LAB_14040025c:
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    goto LAB_14040025f;
  }
  uVar8 = 0;
  uVar6 = 0;
LAB_14040025f:
  local_bc = 0;
  local_100[0] = 1;
  local_f8 = 0x10000;
  local_e8 = 0x1000100000001;
  local_e0 = 0;
  uStack_dc = 1;
  uStack_d8 = 0;
  uStack_d4 = 1;
  local_110 = &local_50;
  local_118 = &DAT_140e14d30;
  local_128 = CONCAT44(local_128._4_4_,uVar6);
  local_120 = 0;
  local_f0 = param_3 & 0xffffffff;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xd8))
                    (*(longlong **)(param_1 + 0x50),&local_c4,0,local_100);
  if (iVar2 < 0) {
    pcVar7 = "Could not create buffer!";
LAB_140400472:
    s_error_code_s_0x08lx(param_1,pcVar7,iVar2);
    FUN_1403fec50(puVar3);
LAB_140400587:
    puVar3 = (undefined8 *)0x0;
    goto LAB_140400589;
  }
  puVar3[2] = local_50;
  local_104 = uVar8;
  FUN_140106140(puVar3 + 0x11,0);
  puVar3[4] = 0;
  puVar3[8] = 0;
  puVar3[0xc] = 0;
  if ((param_2 & 0x20) != 0) {
    FUN_1403feeb0(param_1,0,puVar3 + 3);
    local_78 = 0x100000027;
    local_70 = 0;
    local_68 = (uint)(param_3 >> 2) & 0x3fffffff;
    local_58 = 1;
    local_60 = 0;
    local_64 = 0;
    local_128 = puVar3[5];
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x98))
              (*(longlong **)(param_1 + 0x50),local_50,0,&local_78);
  }
  if ((param_2 & 0x18) != 0) {
    FUN_1403feeb0(param_1,0,puVar3 + 7);
    local_a0 = 0x100000027;
    local_98 = 0x1688;
    local_90 = 0;
    local_88 = (uint)(param_3 >> 2) & 0x3fffffff;
    local_84 = 0x100000000;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x90))
              (*(longlong **)(param_1 + 0x50),local_50,&local_a0,puVar3[9]);
  }
  if (param_4 == 1) {
    FUN_1403feeb0(param_1,0,puVar3 + 0xb);
    local_b0 = (**(code **)(*local_50 + 0x58))();
    local_a8 = (int)param_3;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x88))
              (*(longlong **)(param_1 + 0x50),&local_b0,puVar3[0xd]);
    puVar3[0xf] = 0;
LAB_1404004c9:
    uVar4 = (**(code **)(*(longlong *)puVar3[2] + 0x58))();
    puVar3[0xf] = uVar4;
    puVar3[0x10] = 0;
  }
  else {
    puVar3[0xf] = 0;
    if (param_4 == 0) goto LAB_1404004c9;
    puVar3[0x10] = 0;
    if (param_4 == 2) {
      iVar2 = (**(code **)(*(longlong *)puVar3[2] + 0x40))((longlong *)puVar3[2],0,0,puVar3 + 0x10);
      if (iVar2 < 0) {
        pcVar7 = "Failed to map upload buffer!";
        goto LAB_140400472;
      }
    }
  }
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  *(char *)((longlong)puVar3 + 0x8c) = (char)local_104;
  FUN_140106140(puVar3 + 0x11,0);
  if ((param_5 != 0) && (*(char *)(param_1 + 0x78) != '\0')) {
    plVar1 = (longlong *)puVar3[2];
    lVar5 = FUN_1400fc570(param_5);
    uVar4 = FUN_14017b9c0("UTF-16LE","UTF-8",param_5,lVar5 + 1);
    (**(code **)(*plVar1 + 0x30))(plVar1,uVar4);
    FUN_140160cf0(uVar4);
  }
LAB_140400589:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_148)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_148);
}

