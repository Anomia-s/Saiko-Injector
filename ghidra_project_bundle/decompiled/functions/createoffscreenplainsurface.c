/**
 * Function: createoffscreenplainsurface
 * Address:  140424eb0
 * Signature: undefined createoffscreenplainsurface(void)
 * Body size: 455 bytes
 */


undefined8 createoffscreenplainsurface(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong **local_80;
  undefined8 local_78;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_40 [6];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  plVar5 = *(longlong **)(lVar1 + 0x88);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x80);
  }
  iVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,local_40);
  if (iVar2 < 0) {
    pcVar4 = "GetDesc()";
  }
  else {
    local_80 = &local_48;
    local_78 = 0;
    local_88 = CONCAT44(local_88._4_4_,2);
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x120))
                      (*(longlong **)(lVar1 + 0x10),local_28,local_24,local_40[0]);
    if (iVar2 < 0) {
      pcVar4 = "CreateOffscreenPlainSurface()";
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x100))
                        (*(longlong **)(lVar1 + 0x10),plVar5,local_48);
      if (iVar2 < 0) {
        (**(code **)(*local_48 + 0x10))();
        pcVar4 = "GetRenderTargetData()";
      }
      else {
        local_58 = *param_2;
        local_50 = CONCAT44((int)((ulonglong)param_2[1] >> 0x20) +
                            (int)((ulonglong)local_58 >> 0x20),(int)param_2[1] + (int)local_58);
        iVar2 = (**(code **)(*local_48 + 0x68))(local_48,local_68,&local_58,0x10);
        if (-1 < iVar2) {
          uVar6 = 0;
          if (local_40[0] - 0x15U < 3) {
            uVar6 = *(undefined4 *)(&DAT_140e1578c + (ulonglong)(local_40[0] - 0x15U) * 4);
          }
          local_80 = (longlong **)CONCAT44(local_80._4_4_,local_68[0]);
          local_88 = local_60;
          uVar3 = parameter_s_is_invalid
                            (*(undefined4 *)(param_2 + 1),*(undefined4 *)((longlong)param_2 + 0xc),
                             uVar6,0x120005a0);
          (**(code **)(*local_48 + 0x70))();
          (**(code **)(*local_48 + 0x10))();
          goto LAB_140425015;
        }
        (**(code **)(*local_48 + 0x10))();
        pcVar4 = "LockRect()";
      }
    }
  }
  outofvideomemory(pcVar4,iVar2);
  uVar3 = 0;
LAB_140425015:
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_a8);
  }
  return uVar3;
}

