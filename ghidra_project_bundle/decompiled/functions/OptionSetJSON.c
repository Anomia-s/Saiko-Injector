/**
 * Function: OptionSetJSON
 * Address:  14096d6a0
 * Signature: OptionSetJSON * __thiscall OptionSetJSON(OptionSetJSON * this)
 * Body size: 481 bytes
 */


OptionSetJSON * __thiscall OptionSetJSON::OptionSetJSON(OptionSetJSON *this)

{
  longlong lVar1;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  OptionSetJSON *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor:
                       Scintilla::OptionSet<OptionsJSON>::OptionSet<OptionsJSON> */
  this->vftablePtr = (OptionSetJSON_vftable *)&Scintilla::OptionSet<OptionsJSON>::vftable;
  (this->OptionSet<OptionsJSON>_data).offset_0x0 = 0;
  (this->OptionSet<OptionsJSON>_data).offset_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->OptionSet<OptionsJSON>_data).offset_0x0 = lVar1;
  (this->OptionSet<OptionsJSON>_data).offset_0x10 = 0;
  (this->OptionSet<OptionsJSON>_data).offset_0x18 = 0;
  (this->OptionSet<OptionsJSON>_data).offset_0x20 = 0;
  (this->OptionSet<OptionsJSON>_data).offset_0x28 = 0xf;
  (this->OptionSet<OptionsJSON>_data).offset_0x30 = 0;
  (this->OptionSet<OptionsJSON>_data).offset_0x38 = 0;
  (this->OptionSet<OptionsJSON>_data).offset_0x40 = 0;
  (this->OptionSet<OptionsJSON>_data).offset_0x48 = 0xf;
  this->vftablePtr = &vftable;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_38 = this;
  local_78 = (char *)FUN_140b65d30(0x40);
  local_68 = 0x3e;
  uStack_60 = 0x3f;
  builtin_strncpy(local_78,"Set to 1 to enable highlighting of escape sequences in strings",0x3f);
  FUN_1408d11c0(local_38,"lexer.json.escape.sequence",3,&local_78);
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_58 = (char *)FUN_140b65d30(0x40);
  local_48 = 0x3e;
  uStack_40 = 0x3f;
  builtin_strncpy(local_58,"Set to 1 to enable highlighting of line/block comments in JSON",0x3f);
  FUN_1408d11c0(local_38,"lexer.json.allow.comments",2,&local_58);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0xf;
  FUN_1408d11c0(local_38,"fold.compact",0,&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  FUN_1408d11c0(local_38,"fold",1,&local_98);
  FUN_1408d1660(local_38,&PTR_s_JSON_Keywords_1412a4280);
  return local_38;
}

