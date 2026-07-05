/**
 * Function: subgroup_factor
 * Address:  140c7b4e0
 * Signature: undefined subgroup_factor(void)
 * Body size: 530 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool subgroup_factor(undefined8 param_1,undefined8 *param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0x140c7b502;
  iVar2 = s_slu_s0xlxn(param_1,"prime P:",*param_2,0,param_3,0x140c7b502);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = s_slu_s0xlxn(param_1,"generator G:",param_2[2],0,param_3,uVar5);
  if (iVar2 == 0) {
    return false;
  }
  if ((param_2[1] != 0) &&
     (iVar2 = s_slu_s0xlxn(param_1,"subgroup order Q:",param_2[1],0,param_3,uVar5), iVar2 == 0)) {
    return false;
  }
  if ((param_2[3] != 0) &&
     (iVar2 = s_slu_s0xlxn(param_1,"subgroup factor:",param_2[3],0,param_3,uVar5), iVar2 == 0)) {
    return false;
  }
  uVar3 = 0;
  if (param_2[4] != 0) {
    iVar2 = FUN_140b73ea0(param_1,param_3,0x80);
    if (iVar2 == 0) {
      return false;
    }
    iVar2 = FUN_140b73bf0(param_1,"seed:");
    if (iVar2 < 1) {
      return false;
    }
    if (param_2[5] != 0) {
      do {
        if (uVar3 == (uVar3 / 0xf) * 0xf) {
          iVar2 = FUN_140b73bf0(param_1,&DAT_1413a7288);
          if (iVar2 < 1) {
            return false;
          }
          iVar2 = FUN_140b73ea0(param_1,param_3 + 4,0x80);
          if (iVar2 == 0) {
            return false;
          }
        }
        uVar1 = uVar3 + 1;
        pcVar4 = ":";
        if (uVar1 == param_2[5]) {
          pcVar4 = "";
        }
        iVar2 = FUN_140c078a0(param_1,"%02x%s",*(undefined1 *)(param_2[4] + uVar3),pcVar4);
        if (iVar2 < 1) {
          return false;
        }
        uVar3 = uVar1;
      } while (uVar1 < (ulonglong)param_2[5]);
    }
    iVar2 = FUN_140b73860(param_1,&DAT_1413a7288,1);
    if (iVar2 < 1) {
      return false;
    }
  }
  if (*(int *)(param_2 + 6) == -1) {
    return true;
  }
  iVar2 = FUN_140b73ea0(param_1,param_3,0x80);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_140c078a0(param_1,"counter: %d\n",*(undefined4 *)(param_2 + 6));
  return 0 < iVar2;
}

