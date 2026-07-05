/**
 * Function: failed_to_convert_id3d12device_to_id3d12infoq
 * Address:  1403f5df0
 * Signature: undefined failed_to_convert_id3d12device_to_id3d12infoq(void)
 * Body size: 272 bytes
 */


bool failed_to_convert_id3d12device_to_id3d12infoq(longlong param_1)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  local_28 = (longlong *)0x0;
  local_1c = 3;
  iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x50))
                    (*(undefined8 **)(param_1 + 0x50),&DAT_140e147e4,&local_28);
  if (iVar1 < 0) {
    s_error_code_s_0x08lx(param_1,"Failed to convert ID3D12Device to ID3D12InfoQueue",iVar1);
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_48 = 1;
    puStack_40 = &local_1c;
    (**(code **)(*local_28 + 0x88))(local_28,&local_88);
    (**(code **)(*local_28 + 0xf8))(local_28,0,1);
    (**(code **)(*local_28 + 0x10))();
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_a8)) {
    return -1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_a8);
}

