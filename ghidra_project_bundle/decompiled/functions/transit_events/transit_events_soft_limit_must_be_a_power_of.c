/**
 * Function: transit_events_soft_limit_must_be_a_power_of
 * Address:  140dbbe5c
 * Signature: void __fastcall transit_events_soft_limit_must_be_a_power_of(longlong param_1)
 * Body size: 428 bytes
 */


void transit_events_soft_limit_must_be_a_power_of(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  DWORD DVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *pExceptionObject;
  undefined8 *puVar7;
  ulonglong local_168;
  ulonglong *local_160;
  ulonglong local_158;
  ulonglong *local_150;
  ulonglong local_148;
  undefined8 local_138 [12];
  undefined1 local_d8 [32];
  undefined8 local_b8 [7];
  undefined8 local_80 [7];
  undefined8 local_48 [7];
  
  FUN_1400120d0(param_1 + 0x20);
  DVar4 = GetCurrentThreadId();
  LOCK();
  *(DWORD *)(param_1 + 0x5a0) = DVar4;
  UNLOCK();
  failed_to_get_thread_name_invalid_data(local_d8);
  FUN_140004b30(local_d8);
  uVar5 = *(ulonglong *)(param_1 + 0x60);
  if (uVar5 == 0) {
    *(undefined8 *)(param_1 + 0x60) = 1;
    uVar5 = 1;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x58);
  if (uVar6 == 0) {
    *(undefined8 *)(param_1 + 0x58) = 1;
    uVar6 = 1;
  }
  if (uVar5 < uVar6) {
    local_160 = &local_158;
    local_168 = 0x44;
    puVar7 = local_138 + 8;
    local_158 = uVar6;
    local_148 = uVar5;
    FUN_140012b00(puVar7);
    pExceptionObject = local_48;
  }
  else if ((uVar5 & uVar5 - 1) == 0) {
    if ((uVar6 & uVar6 - 1) == 0) {
      return;
    }
    local_150 = &local_168;
    local_158 = 4;
    puVar7 = local_138;
    local_168 = uVar6;
    FUN_140012b00(puVar7);
    pExceptionObject = local_b8;
  }
  else {
    local_150 = &local_168;
    local_158 = 4;
    puVar7 = local_138 + 4;
    local_168 = uVar5;
    FUN_140012b00(puVar7);
    pExceptionObject = local_80;
  }
  pExceptionObject[1] = 0;
  pExceptionObject[2] = 0;
  *pExceptionObject = &quill::v11::QuillError::vftable;
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  pExceptionObject[3] = *puVar7;
  pExceptionObject[4] = uVar1;
  pExceptionObject[5] = uVar2;
  pExceptionObject[6] = uVar3;
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  *(undefined1 *)puVar7 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(pExceptionObject,(ThrowInfo *)&DAT_14140fa50);
}

