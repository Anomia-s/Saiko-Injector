/**
 * Function: setting_cooperative_level_to_exclusive
 * Address:  140652af0
 * Signature: undefined setting_cooperative_level_to_exclusive(void)
 * Body size: 662 bytes
 */


undefined8 setting_cooperative_level_to_exclusive(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_140160c70(1,0x38);
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
    *(char *)(*(longlong *)(param_1 + 0x28) + 0x14) = param_3;
    if (param_3 == '\0') {
      iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x68))
                        ((longlong *)**(undefined8 **)(param_1 + 0x28),DAT_1416f2178,9);
      if (iVar1 < 0) {
        pcVar5 = "Setting cooperative level to exclusive";
      }
      else {
        iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x58))
                          ((longlong *)**(undefined8 **)(param_1 + 0x28),&DAT_14120f868);
        if (iVar1 < 0) {
          pcVar5 = "Setting data format";
        }
        else {
          iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x38))();
          if (-1 < iVar1) goto LAB_140652b3d;
          pcVar5 = "Acquiring DirectInput device";
        }
      }
LAB_140652d3b:
      FUN_1400fbed0("Haptic error %s",pcVar5);
    }
    else {
LAB_140652b3d:
      iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x20))
                        ((longlong *)**(undefined8 **)(param_1 + 0x28),FUN_140653f90,param_1,3);
      if (iVar1 < 0) {
        pcVar5 = "Getting device axes";
        goto LAB_140652d3b;
      }
      iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0xb0))
                        ((longlong *)**(undefined8 **)(param_1 + 0x28),1);
      if (iVar1 < 0) {
        pcVar5 = "Resetting device";
        goto LAB_140652d3b;
      }
      iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0xb0))
                        ((longlong *)**(undefined8 **)(param_1 + 0x28),0x10);
      if (iVar1 < 0) {
        pcVar5 = "Enabling actuators";
        goto LAB_140652d3b;
      }
      iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x98))
                        ((longlong *)**(undefined8 **)(param_1 + 0x28),FUN_140654090,param_1,0);
      if (iVar1 < 0) {
        pcVar5 = "Enumerating supported effects";
        goto LAB_140652d3b;
      }
      if (*(int *)(param_1 + 0x20) == 0) {
        FUN_1400fbed0("Haptic: Internal error on finding supported effects.");
      }
      else {
        local_38 = 0x1000000014;
        uStack_30 = 0;
        local_28 = 10000;
        iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x30))
                          ((longlong *)**(undefined8 **)(param_1 + 0x28),7,&local_38);
        if (-1 < iVar1) {
          *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
        }
        uStack_30 = 0;
        local_28 = 0;
        iVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x30))
                          ((longlong *)**(undefined8 **)(param_1 + 0x28),9,&local_38);
        uVar4 = *(uint *)(param_1 + 0x20) | 0x20000;
        if (iVar1 < 0) {
          uVar4 = *(uint *)(param_1 + 0x20);
        }
        *(uint *)(param_1 + 0x20) = uVar4 | 0xc0000;
        *(undefined8 *)(param_1 + 0x18) = 0x8000000080;
        _Dst = (void *)FUN_140160c40(0x2800);
        *(void **)(param_1 + 0x10) = _Dst;
        if (_Dst != (void *)0x0) {
          memset(_Dst,0,(longlong)*(int *)(param_1 + 0x18) * 0x50);
          uVar3 = 1;
          goto LAB_140652d4f;
        }
      }
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x40))();
  }
  uVar3 = 0;
LAB_140652d4f:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
}

