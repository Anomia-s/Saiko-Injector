/**
 * Function: invalid_get_log_level_value
 * Address:  140b57940
 * Signature: undefined invalid_get_log_level_value(void)
 * Body size: 228 bytes
 */


longlong * invalid_get_log_level_value(longlong *param_1,byte param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  QuillError_vftable *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_2 < param_4) {
    lVar2 = (ulonglong)param_2 * 0x20;
    lVar1 = *(longlong *)(param_3 + 0x10 + lVar2);
    if (*(ulonglong *)(param_3 + 0x18 + lVar2) < 0x10) {
      param_3 = param_3 + lVar2;
    }
    else {
      param_3 = *(longlong *)(param_3 + lVar2);
    }
    *param_1 = param_3;
    param_1[1] = lVar1;
    return param_1;
  }
  FUN_140011070(local_78);
  FUN_1400089f0(local_58,"Invalid get_log_level value \"",local_78);
  FUN_140008840(local_98,local_58,&DAT_14139efde);
  FUN_140004b30(local_58);
  FUN_140004b30(local_78);
  FUN_14000f430(local_38,local_98);
  local_c8 = 0;
  uStack_c0 = 0;
                    /* inlined constructor: quill::v11::QuillError::QuillError */
  local_d0 = &quill::v11::QuillError::vftable;
  uStack_b0 = uStack_30;
  local_a8 = local_28;
  uStack_a0 = uStack_20;
  local_28 = 0;
  uStack_20 = 0xf;
  local_38[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_d0,(ThrowInfo *)&DAT_14140fa50);
}

