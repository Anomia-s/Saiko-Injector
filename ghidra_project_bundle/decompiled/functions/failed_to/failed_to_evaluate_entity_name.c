/**
 * Function: failed_to_evaluate_entity_name
 * Address:  1405f13d0
 * Signature: undefined failed_to_evaluate_entity_name(void)
 * Body size: 440 bytes
 */


undefined8
failed_to_evaluate_entity_name(longlong *param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  code *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)*param_1;
  local_80 = puVar1[1];
  local_78 = 0;
  local_70 = param_1[0x92];
  local_68 = 0x160;
  local_60 = FUN_1405f16d0;
  local_50 = 0;
  local_48 = param_1[0x8a];
  local_40 = 0;
  lVar4 = *param_3;
  local_58 = param_1;
  if (*(longlong *)(lVar4 + 0x10) == 0) {
    iVar2 = FUN_140766730(puVar1,lVar4,&local_80);
    if ((iVar2 == 0) && (iVar2 = invalid_division_by_zero(puVar1,param_3,&local_80), iVar2 == 0)) {
      lVar4 = *param_3;
      goto LAB_1405f146c;
    }
  }
  else {
LAB_1405f146c:
    local_90 = 0x160;
    local_88 = (longlong *)0x0;
    iVar2 = failed_to_write_to_output(puVar1,lVar4,&local_80,&local_90);
    if (iVar2 == 0) {
      lVar4 = *local_88;
      if (lVar4 == 0) {
        FUN_1405f0f70(param_1,param_2,"failed to evaluate entity name");
        uVar3 = 0;
      }
      else {
        if (param_4 == '\0') {
          local_98 = FUN_1405f1590(param_1,lVar4);
        }
        else {
          local_b0 = &local_98;
          local_a8 = 0;
          local_b8 = 0;
          uVar3 = 0;
          iVar2 = variable_identifier_s_not_allowed_here(param_1,0,lVar4,0);
          if (iVar2 != 0) goto LAB_1405f150e;
        }
        uVar3 = local_98;
        FUN_140762ba0(*puVar1,local_90,local_88);
      }
      goto LAB_1405f150e;
    }
  }
  uVar3 = 0;
LAB_1405f150e:
  if (DAT_1414ef3c0 != (local_38 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_38 ^ (ulonglong)auStack_d8);
  }
  return uVar3;
}

