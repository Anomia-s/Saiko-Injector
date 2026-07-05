/**
 * Function: gettimerquerytime_map_failed
 * Address:  14072dd20
 * Signature: void __thiscall gettimerquerytime_map_failed(void * this, longlong param_1)
 * Body size: 468 bytes
 */


void __thiscall gettimerquerytime_map_failed(void *this,longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x29) == '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_14053e390(*(longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                    *(undefined8 *)((longlong)this + 0x490));
      plVar1 = *(longlong **)(param_1 + 0x18);
      if (plVar1 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x478) + 0x80))
              ((longlong *)**(undefined8 **)((longlong)this + 0x478),&local_50);
    local_60 = (ulonglong)*(uint *)(param_1 + 0x10) << 3;
    local_58 = (ulonglong)(*(uint *)(param_1 + 0x10) + 2) << 3;
    plVar1 = *(longlong **)(*(longlong *)((longlong)this + 0x58) + 0x70);
    iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,0,&local_60);
    if (iVar2 < 0) {
      local_38 = 0;
      local_40 = (char *)FUN_140b65d30(0x20);
      local_30 = 0x1f;
      local_28 = 0x1f;
      builtin_strncpy(local_40,"getTimerQueryTime: Map() failed",0x20);
      FUN_14053e350((longlong)this + 0x10,&local_40);
      if (0xf < local_28) {
        uVar3 = local_28 + 1;
        pcVar4 = local_40;
        if (0xfff < uVar3) {
          pcVar4 = *(char **)(local_40 + -8);
          if ((char *)0x1f < local_40 + (-8 - (longlong)pcVar4)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar3 = local_28 + 0x28;
        }
        thunk_FUN_140b68ba8(pcVar4,uVar3);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x29) = 1;
      lVar5 = *(longlong *)(local_48 + (ulonglong)*(uint *)(param_1 + 0x14) * 8) -
              *(longlong *)(local_48 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
      auVar6._8_4_ = (int)((ulonglong)lVar5 >> 0x20);
      auVar6._0_8_ = lVar5;
      auVar6._12_4_ = 0x45300000;
      auVar7._8_4_ = (int)((ulonglong)local_50 >> 0x20);
      auVar7._0_8_ = local_50;
      auVar7._12_4_ = 0x45300000;
      *(float *)(param_1 + 0x2c) =
           (float)(((auVar6._8_8_ - 1.9342813113834067e+25) +
                   ((double)CONCAT44(0x43300000,(int)lVar5) - 4503599627370496.0)) /
                  ((auVar7._8_8_ - 1.9342813113834067e+25) +
                  ((double)CONCAT44(0x43300000,(int)local_50) - 4503599627370496.0)));
      plVar1 = *(longlong **)(*(longlong *)((longlong)this + 0x58) + 0x70);
      (**(code **)(*plVar1 + 0x48))(plVar1,0,0);
    }
  }
  return;
}

