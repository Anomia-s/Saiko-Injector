/**
 * Function: vkcreatewin32surfacekhr
 * Address:  14059b250
 * Signature: undefined vkcreatewin32surfacekhr(void)
 * Body size: 311 bytes
 */


undefined8 vkcreatewin32surfacekhr(QWindow *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  HMODULE local_30;
  __uint64 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if (param_1 == (QWindow *)0x0) {
    if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      ppuVar4 = &PTR_s__opt_actions_runner__work_Platfo_1411f4258;
LAB_14059b353:
      FUN_140b53500(DAT_14151e360,ppuVar4);
    }
  }
  else {
    iVar1 = FUN_14059b3b0();
    if (iVar1 == 2) {
      uStack_40 = 0;
      local_38 = 0;
      local_48 = 0x3b9aed28;
      local_28 = QWindow::winId(param_1);
      local_30 = GetModuleHandleW((LPCWSTR)0x0);
      pcVar2 = (code *)vkGetInstanceProcAddr(param_2,"vkCreateWin32SurfaceKHR");
      if (pcVar2 == (code *)0x0) {
        if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
          ppuVar4 = &PTR_s__opt_actions_runner__work_Platfo_1411f4280;
          goto LAB_14059b353;
        }
      }
      else {
        iVar1 = (*pcVar2)(param_2,&local_48,0,param_3);
        if (iVar1 == 0) {
          uVar3 = 1;
          goto LAB_14059b35a;
        }
        if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
          local_4c = iVar1;
          FUN_140b5a3b0(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_1411f42a8,&local_4c);
        }
      }
    }
    else if (*(byte *)(DAT_14151e360 + 0x39) < 8) {
      ppuVar4 = &PTR_s__opt_actions_runner__work_Platfo_1411f42d0;
      goto LAB_14059b353;
    }
  }
  uVar3 = 0;
LAB_14059b35a:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_78)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_78);
}

