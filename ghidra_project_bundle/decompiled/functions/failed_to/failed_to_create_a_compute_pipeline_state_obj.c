/**
 * Function: failed_to_create_a_compute_pipeline_state_obj
 * Address:  140731c00
 * Signature: undefined failed_to_create_a_compute_pipeline_state_obj(void)
 * Body size: 373 bytes
 */


longlong **
failed_to_create_a_compute_pipeline_state_obj
          (longlong param_1,longlong **param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = (longlong *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = *(undefined8 *)(param_4 + 0xa0);
  local_88 = *(longlong *)(*param_3 + 0x80);
  local_80 = *(longlong *)(*param_3 + 0x88) - local_88;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))
                    (*(longlong **)(param_1 + 0x10),&local_90,&DAT_14123cc20);
  if (iVar2 < 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = (char *)0x0;
    uStack_50 = 0;
    local_58 = (char *)FUN_140b65d30(0x40);
    local_48 = 0x30;
    uStack_40 = 0x3f;
    builtin_strncpy(local_58,"Failed to create a compute pipeline state object",0x31);
    FUN_14053e350(param_1 + 0x10,&local_58);
    if (0xf < uStack_40) {
      uVar3 = uStack_40 + 1;
      pcVar4 = local_58;
      if (0xfff < uVar3) {
        pcVar4 = *(char **)(local_58 + -8);
        if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar3 = uStack_40 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar4,uVar3);
    }
    *param_2 = (longlong *)0x0;
  }
  else {
    *param_2 = (longlong *)0x0;
    if (param_2 != &local_30) {
      *param_2 = local_30;
      return param_2;
    }
  }
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    local_30 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_2;
}

