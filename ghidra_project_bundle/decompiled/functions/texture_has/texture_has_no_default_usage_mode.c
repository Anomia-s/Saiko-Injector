/**
 * Function: texture_has_no_default_usage_mode
 * Address:  140401d20
 * Signature: undefined texture_has_no_default_usage_mode(void)
 * Body size: 326 bytes
 */


void texture_has_no_default_usage_mode(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  uVar7 = (ulonglong)*(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x18) != 0) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x10) + lVar9);
      uVar1 = *(uint *)(*plVar2 + 8);
      uVar3 = 0xc0;
      if ((((uVar1 & 9) == 0) && (uVar3 = 4, (uVar1 & 2) == 0)) && (uVar3 = 0x10, (uVar1 & 4) == 0))
      {
        if ((uVar1 & 0x10) == 0) {
          uVar3 = 8;
          if ((uVar1 & 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1400fb950(9,"Texture has no default usage mode!");
          }
          goto LAB_140401dd0;
        }
        if ((uVar1 & 0x60) != 0) {
          lVar4 = plVar2[4];
          iVar5 = 0;
          goto LAB_140401e01;
        }
      }
      else {
LAB_140401dd0:
        local_70 = uVar3;
        local_78 = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x14 + lVar9);
        lVar4 = plVar2[4];
        local_88[0] = 0;
        local_74 = 0x40;
        iVar6 = 1;
        iVar5 = 1;
        local_88[1] = lVar4;
        if ((uVar1 & 0x60) != 0) {
LAB_140401e01:
          *(undefined8 *)((longlong)local_88 + (ulonglong)(uint)(iVar5 << 5)) = 2;
          *(longlong *)((longlong)local_88 + (ulonglong)(uint)(iVar5 << 5) + 8) = lVar4;
          iVar6 = iVar5 + 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0xd0))
                  (*(longlong **)(param_1 + 0x60),iVar6,local_88);
        uVar7 = (ulonglong)*(uint *)(param_2 + 0x18);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x60;
    } while (uVar8 < uVar7);
  }
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_a8);
  }
  return;
}

