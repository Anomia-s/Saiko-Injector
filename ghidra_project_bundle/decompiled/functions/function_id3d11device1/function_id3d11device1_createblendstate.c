/**
 * Function: function_id3d11device1_createblendstate
 * Address:  14041c780
 * Signature: undefined function_id3d11device1_createblendstate(void)
 * Body size: 477 bytes
 */


longlong * function_id3d11device1_createblendstate(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong *local_158;
  undefined1 local_150 [8];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_130;
  undefined1 local_12c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_188;
  local_160 = param_1;
  iVar2 = FUN_140125230(param_2);
  iVar3 = FUN_1401252e0(param_2);
  iVar4 = FUN_1401252b0(param_2);
  iVar5 = FUN_140125270(param_2);
  iVar6 = FUN_140125320(param_2);
  iVar7 = FUN_140125370(param_2);
  local_158 = (longlong *)0x0;
  uVar10 = 0;
  memset(local_150,0,0x108);
  lVar1 = local_160;
  local_148 = 1;
  local_144 = 0;
  if (iVar2 - 1U < 10) {
    local_144 = *(undefined4 *)(&DAT_140e1541c + (ulonglong)(iVar2 - 1U) * 4);
  }
  if (iVar5 - 1U < 10) {
    uVar10 = *(undefined4 *)(&DAT_140e1541c + (ulonglong)(iVar5 - 1U) * 4);
  }
  local_134 = 0;
  if (4 < iVar4 - 1U) {
    iVar4 = 0;
  }
  local_138 = 0;
  if (iVar3 - 1U < 10) {
    local_138 = *(undefined4 *)(&DAT_140e1541c + (ulonglong)(iVar3 - 1U) * 4);
  }
  if (iVar6 - 1U < 10) {
    local_134 = *(undefined4 *)(&DAT_140e1541c + (ulonglong)(iVar6 - 1U) * 4);
  }
  local_130 = 0;
  if (iVar7 - 1U < 5) {
    local_130 = iVar7;
  }
  local_12c = 0xf;
  local_140 = uVar10;
  local_13c = iVar4;
  iVar2 = (**(code **)(**(longlong **)(local_160 + 0x28) + 0xa0))
                    (*(longlong **)(local_160 + 0x28),local_150,&local_158);
  if (iVar2 < 0) {
    FUN_1403d7600("__FUNCTION__, ID3D11Device1::CreateBlendState",iVar2);
  }
  else {
    lVar8 = FUN_140160cc0(*(undefined8 *)(lVar1 + 0x118),
                          (longlong)*(int *)(lVar1 + 0x110) * 0x10 + 0x10);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + (longlong)*(int *)(lVar1 + 0x110) * 0x10) = param_2;
      *(longlong **)(lVar8 + 8 + (longlong)*(int *)(lVar1 + 0x110) * 0x10) = local_158;
      *(longlong *)(lVar1 + 0x118) = lVar8;
      *(int *)(lVar1 + 0x110) = *(int *)(lVar1 + 0x110) + 1;
      plVar9 = local_158;
      goto LAB_14041c922;
    }
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 0x10))();
    }
  }
  plVar9 = (longlong *)0x0;
LAB_14041c922:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_188)) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_188);
}

