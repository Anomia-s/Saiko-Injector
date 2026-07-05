/**
 * Function: uninitialized_variable_s_on_right_hand_side_o
 * Address:  1403905c0
 * Signature: undefined uninitialized_variable_s_on_right_hand_side_o(void)
 * Body size: 291 bytes
 */


undefined8
uninitialized_variable_s_on_right_hand_side_o
          (undefined8 param_1,longlong param_2,char *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_2 + 0x18) & 0xffffffffffffff;
  FUN_14039b9a0(param_3[1],0);
  uVar1 = FUN_14039b9a0(param_3[1],4);
  if (uVar6 == 0x13d) {
    uVar6 = (ulonglong)(*(short *)(param_2 + 0x42) == 2);
    if ((*(ulonglong *)(param_2 + 0x28) & 0x100000000000000) == 0) {
      puVar3 = &DAT_140e0b580;
    }
    else {
      puVar3 = &DAT_140e0b588;
    }
  }
  else {
    if (uVar6 != 0x13e) goto LAB_140390656;
    uVar6 = (ulonglong)(*(short *)(param_2 + 0x42) == 2);
    puVar3 = &DAT_140e0b590;
  }
  *param_3 = puVar3[uVar6 * 4];
LAB_140390656:
  if (((uVar1 & 2) == 0) || ((param_4 >> ((ulonglong)(byte)param_3[0x20] & 0x3f) & 1) != 0)) {
    if ((param_4 >> ((ulonglong)(byte)param_3[0x10] & 0x3f) & 1) != 0) {
      return 0;
    }
    if (*param_3 == '\x1b') {
      return 0;
    }
    if (*param_3 == '\x1d') {
      return 0;
    }
    uVar2 = FUN_1400b2a90(param_1);
    pcVar5 = "uninitialized variable \'%s\' on left-hand side of equality operator";
    uVar4 = 0x2a0;
  }
  else {
    uVar2 = FUN_1400b2a90(param_1);
    pcVar5 = "uninitialized variable \'%s\' on right-hand side of equality operator";
    uVar4 = 0x292;
  }
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/query/compiler/compiler_term.c"
                ,uVar4,pcVar5,uVar2);
  return 0xffffffff;
}

