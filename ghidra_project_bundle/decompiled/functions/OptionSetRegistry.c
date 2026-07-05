/**
 * Function: OptionSetRegistry
 * Address:  1409e0590
 * Signature: OptionSetRegistry * __thiscall OptionSetRegistry(OptionSetRegistry * this)
 * Body size: 256 bytes
 */


OptionSetRegistry * __thiscall OptionSetRegistry::OptionSetRegistry(OptionSetRegistry *this)

{
  longlong lVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  OptionSetRegistry *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor:
                       Scintilla::OptionSet<OptionsRegistry>::OptionSet<OptionsRegistry> */
  this->vftablePtr = (OptionSetRegistry_vftable *)&Scintilla::OptionSet<OptionsRegistry>::vftable;
  (this->OptionSet<OptionsRegistry>_data).offset_0x0 = 0;
  (this->OptionSet<OptionsRegistry>_data).offset_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  (this->OptionSet<OptionsRegistry>_data).offset_0x0 = lVar1;
  (this->OptionSet<OptionsRegistry>_data).offset_0x10 = 0;
  (this->OptionSet<OptionsRegistry>_data).offset_0x18 = 0;
  (this->OptionSet<OptionsRegistry>_data).offset_0x20 = 0;
  (this->OptionSet<OptionsRegistry>_data).offset_0x28 = 0xf;
  (this->OptionSet<OptionsRegistry>_data).offset_0x30 = 0;
  (this->OptionSet<OptionsRegistry>_data).offset_0x38 = 0;
  (this->OptionSet<OptionsRegistry>_data).offset_0x40 = 0;
  (this->OptionSet<OptionsRegistry>_data).offset_0x48 = 0xf;
  this->vftablePtr = &vftable;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  local_38 = this;
  FUN_1408d11c0(this,"fold.compact",0,&local_78);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  FUN_1408d11c0(local_38,"fold",1,&local_58);
  FUN_1408d1660(local_38,&DAT_1412a8bf0);
  return local_38;
}

