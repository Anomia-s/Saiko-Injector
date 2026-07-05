/**
 * Function: invalid_operator_for_add_expression
 * Address:  1403afd70
 * Signature: undefined invalid_operator_for_add_expression(void)
 * Body size: 471 bytes
 */


char * invalid_operator_for_add_expression
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_238 [40];
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_238;
  local_190 = 0;
  local_188 = local_138;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1a8 = 0;
  local_1a0 = param_2;
  local_198 = param_3;
  local_168 = param_1;
  local_150 = &local_1e8;
  pcVar2 = (char *)FUN_1405d8a60(&local_1a0,param_3);
  if (((*pcVar2 == '#') && (pcVar2[1] == '0')) && (pcVar2[2] == '\0')) {
    *param_4 = 0;
    pcVar3 = pcVar2 + 1;
  }
  else {
    pcVar3 = (char *)unexpected_ss(&local_1a0,pcVar2);
    if (pcVar3 != (char *)0x0) {
      uStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_210 = param_1;
      local_1f8 = &local_1e8;
      iVar1 = cascade_modifier_invalid_for_termfirst(param_1,&local_1e8,&local_210);
      if (iVar1 == 0) {
        if (local_1a8._2_2_ == 0) {
          if ((uStack_1e0 & 0x7ffffffffffffff) == 0x400000000000110) {
            *param_4 = local_1e8;
            goto LAB_1403aff0f;
          }
          pcVar4 = "invalid source for add expression (must be $this)";
        }
        else {
          pcVar4 = "invalid operator for add expression";
        }
        FUN_140399a50(param_2,pcVar2,(longlong)pcVar3 - (longlong)pcVar2,pcVar4);
      }
    }
    pcVar3 = (char *)0x0;
  }
LAB_1403aff0f:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_238)) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_238);
}

