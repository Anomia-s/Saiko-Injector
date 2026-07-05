/**
 * Function: wasapi_cant_activate_audio_endpoint
 * Address:  14044cc90
 * Signature: undefined wasapi_cant_activate_audio_endpoint(void)
 * Body size: 219 bytes
 */


byte wasapi_cant_activate_audio_endpoint(longlong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_28;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  local_28 = (longlong *)0x0;
  cVar1 = wasapi_cant_find_requested_audio_endpoint
                    (param_1,&local_28,*(undefined1 *)(param_1 + 0x94));
  if (cVar1 == '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x10) = 0;
    bVar2 = 0;
  }
  else {
    local_38 = *(longlong *)(param_1 + 200) + 0x10;
    iVar3 = (**(code **)(*local_28 + 0x18))(local_28,&DAT_140e18510,0x17,0);
    (**(code **)(*local_28 + 0x10))();
    if (iVar3 < 0) {
      bVar2 = FUN_1403d7600("WASAPI can\'t activate audio endpoint",iVar3);
    }
    else {
      local_19 = 1;
      bVar2 = cant_add_task_were_shutting_down
                        (wasapi_cant_get_render_client_service,param_1,&local_19);
      bVar2 = bVar2 & local_19;
    }
  }
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_58)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
}

