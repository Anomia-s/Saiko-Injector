/**
 * Function: buffer_has_no_default_usage_mode
 * Address:  140401e80
 * Signature: undefined buffer_has_no_default_usage_mode(void)
 * Body size: 338 bytes
 */


void buffer_has_no_default_usage_mode(longlong param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68 [2];
  undefined4 local_58;
  int local_54;
  int local_50;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)*param_3;
  iVar2 = 1;
  iVar3 = 1;
  if ((uVar1 & 1) == 0) {
    iVar5 = 2;
    if ((uVar1 & 2) != 0) goto LAB_140401f15;
    iVar5 = 0x200;
    if (((((uVar1 & 4) == 0) && (iVar5 = 0xc0, (uVar1 & 8) == 0)) &&
        (iVar5 = 0x40, (uVar1 & 0x10) == 0)) && (iVar5 = 8, (uVar1 & 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,"Buffer has no default usage mode!");
    }
    uVar4 = param_3[2];
    if (*(char *)((longlong)param_3 + 0x8c) == '\0') {
      param_2 = 0;
    }
    iVar6 = param_2;
    if (param_2 != iVar5) goto LAB_140401f3d;
    iVar3 = 0;
    if ((uVar1 & 0x20) == 0) goto LAB_140401f7a;
LAB_140401f53:
    *(undefined8 *)((longlong)local_68 + (ulonglong)(uint)(iVar3 << 5)) = 2;
    *(undefined8 *)((longlong)local_68 + (ulonglong)(uint)(iVar3 << 5) + 8) = uVar4;
    iVar2 = iVar3 + 1;
  }
  else {
    iVar5 = 1;
LAB_140401f15:
    iVar6 = 0;
    if (*(char *)((longlong)param_3 + 0x8c) != '\0') {
      iVar6 = param_2;
    }
    uVar4 = param_3[2];
LAB_140401f3d:
    local_54 = iVar6;
    local_68[0] = 0;
    local_58 = 0;
    local_68[1] = uVar4;
    local_50 = iVar5;
    if ((uVar1 & 0x20) != 0) goto LAB_140401f53;
  }
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0xd0))
            (*(longlong **)(param_1 + 0x60),iVar2,local_68);
LAB_140401f7a:
  *(undefined1 *)((longlong)param_3 + 0x8c) = 1;
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_88);
  }
  return;
}

