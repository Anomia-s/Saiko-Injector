/**
 * Function: x_as_format_modifier_is_not_currently_support
 * Address:  140dbc380
 * Signature: void __fastcall x_as_format_modifier_is_not_currently_support(longlong param_1, undefined8 param_2, undefined1 param_3)
 * Body size: 414 bytes
 */


void x_as_format_modifier_is_not_currently_support
               (longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  QuillError_vftable *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x30;
  local_38 = param_2;
  FUN_140011170(lVar1);
  *(undefined1 *)(param_1 + 0xb0) = param_3;
  lVar2 = FUN_1400329e0(lVar1,&DAT_141361214,0);
  if (lVar2 == -1) {
    FUN_140004940(local_58,"%I:%M:%S %p");
    FUN_140004940(local_78,&DAT_14133ddcd);
    FUN_140032bf0(lVar1,local_78,local_58);
    FUN_140004b30(local_78);
    FUN_140004b30(local_58);
    FUN_140004940(local_58,"%H:%M");
    FUN_140004940(local_78,&DAT_141366850);
    FUN_140032bf0(lVar1,local_78,local_58);
    FUN_140004b30(local_78);
    FUN_140004b30(local_58);
    FUN_140004940(local_58,"%H:%M:%S");
    FUN_140004940(local_78,&DAT_141363fdc);
    FUN_140032bf0(lVar1,local_78,local_58);
    FUN_140004b30(local_78);
    FUN_140004b30(local_58);
    FUN_14000f430(local_b8,lVar1);
    FUN_140dbc5d0(param_1,local_b8);
    FUN_140004b30(local_38);
    return;
  }
  FUN_1400119b0(local_98,"`%X` as format modifier is not currently supported in format: ",lVar1);
  local_e8 = 0;
  uStack_e0 = 0;
  local_f0 = &quill::v11::QuillError::vftable;
  uStack_d0 = uStack_90;
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  local_88 = 0;
  uStack_80 = 0xf;
  local_98[0] = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_f0,(ThrowInfo *)&DAT_14140fa50);
}

