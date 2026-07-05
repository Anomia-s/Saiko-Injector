/**
 * Function: setting_vibration_failed_0xlx
 * Address:  140445840
 * Signature: undefined setting_vibration_failed_0xlx(void)
 * Body size: 174 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setting_vibration_failed_0xlx(longlong param_1,ushort param_2,ushort param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  if (*(char *)(*(longlong *)(param_1 + 0x140) + 0x56) == '\x01') {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x140) + 0x60);
    auVar4._0_8_ = (double)param_2;
    auVar4._8_8_ = (double)param_3;
    auVar4 = divpd(auVar4,_DAT_140e15e50);
    *(undefined1 (*) [16])(puVar1 + 0xd) = auVar4;
    local_28 = puVar1[0xb];
    uStack_20 = puVar1[0xc];
    local_18 = *(undefined4 *)(puVar1 + 0xd);
    uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x6c);
    uStack_10 = *(undefined4 *)(puVar1 + 0xe);
    uStack_c = *(undefined4 *)((longlong)puVar1 + 0x74);
    iVar2 = (**(code **)(*(longlong *)*puVar1 + 0x38))((longlong *)*puVar1,&local_28);
    uVar3 = 1;
    if (iVar2 < 0) {
      uVar3 = FUN_1400fbed0("Setting vibration failed: 0x%lx");
    }
  }
  else {
    uVar3 = FUN_1400fbed0("Controller isn\'t correlated yet, try hitting a button first");
  }
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_48)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_48);
}

