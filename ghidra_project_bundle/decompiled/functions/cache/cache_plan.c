/**
 * Function: cache_plan
 * Address:  1403d0560
 * Signature: undefined cache_plan(void)
 * Body size: 1394 bytes
 */


void cache_plan(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 local_1f8;
  undefined1 local_1f0 [20];
  int local_1dc;
  uint local_124;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_228;
  FUN_1403b8d70(param_4);
  FUN_1403b7a10(param_4,"\n",1);
  FUN_1403b8a80(param_4,"{",&DAT_1413944a3);
  FUN_1403b9160(param_4,"\"name\":",7);
  local_208 = 0;
  uVar2 = FUN_1403ae340(param_1,0,param_3,".");
  FUN_1405fc3c0(param_4,uVar2);
  (*DAT_1415033b0)(uVar2);
  FUN_1403b9160(param_4,"\"kind\":",7);
  cVar1 = FUN_1400b9b40(param_1,param_3,0x102);
  if (cVar1 == '\0') {
    cVar1 = FUN_1400b9b40(param_1,param_3,0x101);
    if (cVar1 == '\0') {
      pcVar3 = "\"Query\"";
      uVar2 = 7;
    }
    else {
      pcVar3 = "\"Observer\"";
      uVar2 = 10;
    }
  }
  else {
    pcVar3 = "\"System\"";
    uVar2 = 8;
  }
  FUN_1403b7a10(param_4,pcVar3,uVar2);
  FUN_1403b9160(param_4,"\"batched\":",10);
  uVar4 = *(uint *)(param_2 + 0x30) & 0x4000800;
  if (uVar4 == 0x4000800) {
    pcVar3 = "true";
    uVar2 = 4;
  }
  else {
    pcVar3 = "false";
    uVar2 = 5;
  }
  FUN_1403b7a10(param_4,pcVar3,uVar2);
  FUN_1400bd7b0(local_1f0,param_1,param_2);
  local_124 = local_124 | 8;
  FUN_1403b9160(param_4,"\"eval_mode\":",0xc);
  if ((local_124 & 0x4000) == 0) {
    if ((short)local_124 < 0) {
      pcVar3 = "\"Cached\"";
      uVar2 = 8;
    }
    else if ((local_124 & 0x100) == 0) {
      if (*(char *)(param_2 + 0x35) == '\0') {
        pcVar3 = "\"Noop\"";
      }
      else {
        pcVar3 = "\"Plan\"";
      }
      uVar2 = 6;
    }
    else {
      pcVar3 = "\"TrivialUncached\"";
      uVar2 = 0x11;
    }
  }
  else {
    pcVar3 = "\"TrivialCached\"";
    uVar2 = 0xf;
  }
  FUN_1403b7a10(param_4,pcVar3,uVar2);
  FUN_1403b9160(param_4,"\"cache_kind\":",0xd);
  switch(*(undefined4 *)(param_2 + 0x5c)) {
  case 0:
    pcVar3 = "\"Default\"";
    uVar2 = 9;
    break;
  case 1:
    pcVar3 = "\"Auto\"";
    goto LAB_1403d07de;
  case 2:
    pcVar3 = "\"All\"";
    uVar2 = 5;
    break;
  case 3:
    pcVar3 = "\"None\"";
LAB_1403d07de:
    uVar2 = 6;
    break;
  default:
    pcVar3 = "\"!! Invalid !!\"";
    uVar2 = 0xf;
  }
  FUN_1403b7a10(param_4,pcVar3,uVar2);
  local_1f8 = 0;
  FUN_1403d24d0(&local_1f8);
  cVar1 = FUN_1400bcfa0(local_1f0);
  lVar6 = 0;
  if (cVar1 == '\0') {
    iVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    iVar5 = 0;
    do {
      lVar6 = (longlong)(int)lVar6 + (longlong)local_1dc;
      iVar5 = iVar5 + (uint)(uVar4 == 0x4000800 && (int)lVar6 == 0);
      cVar1 = FUN_1400bcfa0(local_1f0);
      lVar7 = lVar7 + 1;
    } while (cVar1 != '\0');
  }
  *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + -1;
  uVar8 = FUN_1403d24d0(&local_1f8);
  FUN_1403b9160(param_4,"\"eval_time\":",0xc);
  FUN_1403b7ce0(param_4,uVar8,0x22);
  FUN_1403b9160(param_4,"\"eval_count\":",0xd);
  FUN_1403b7b70(param_4,(longlong)*(int *)(param_2 + 0x90));
  FUN_1403b9160(param_4,"\"results\":",10);
  FUN_1403b7b70(param_4,lVar7);
  FUN_1403b9160(param_4,"\"count\":",8);
  FUN_1403b7b70(param_4,lVar6);
  FUN_1403b9160(param_4,"\"empty_tables\":",0xf);
  FUN_1403b7b70(param_4,iVar5);
  FUN_1403b9160(param_4,"\"count\":",8);
  FUN_1403b7b70(param_4,lVar6);
  FUN_1403b9160(param_4,"\"expr\":",7);
  uVar2 = FUN_14039c6a0(param_2);
  FUN_1405fc3c0(param_4,uVar2);
  (*DAT_1415033b0)(uVar2);
  FUN_1403b9160(param_4,"\"plan_size\":",0xc);
  FUN_1403b7b70(param_4,(longlong)*(int *)(param_2 + 0x120));
  uVar2 = FUN_14039bf80(param_2);
  FUN_1403b9160(param_4,"\"plan\":",7);
  FUN_1405fc3c0(param_4,uVar2);
  (*DAT_1415033b0)(uVar2);
  lVar6 = FUN_1400b37f0(param_2);
  if (lVar6 != 0) {
    FUN_1403b9160(param_4,"\"cache_plan\":",0xd);
    uVar2 = FUN_14039bf80(lVar6);
    FUN_1405fc3c0(param_4,uVar2);
    (*DAT_1415033b0)(uVar2);
  }
  if (DAT_1416fde40 != 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    FUN_1405fcd20(param_2,&local_88);
    FUN_1403b9160(param_4,"\"memory\":",9);
    FUN_1405fb600(param_1,DAT_1416fde40,&local_88,param_4);
  }
  FUN_1403b8c10(param_4,"}");
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_228)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_228);
  }
  return;
}

