/**
 * Function: worldldvautosave
 * Address:  140281270
 * Signature: undefined worldldvautosave(void)
 * Body size: 184 bytes
 */


void worldldvautosave(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong local_58 [3];
  ulonglong local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = "world.ldv.autosave";
  local_30 = 0x12;
  uVar1 = FUN_140b6625c();
  FUN_140004460(local_58,uVar1,&local_38);
  FUN_140003330(param_1,param_2,local_58);
  if (7 < local_40) {
    uVar2 = local_40 * 2 + 2;
    lVar3 = local_58[0];
    if (0xfff < uVar2) {
      lVar3 = *(longlong *)(local_58[0] + -8);
      if (0x1f < (ulonglong)((local_58[0] + -8) - lVar3)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = local_40 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar3,uVar2);
  }
  return;
}

