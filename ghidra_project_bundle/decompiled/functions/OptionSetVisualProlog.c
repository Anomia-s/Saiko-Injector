/**
 * Function: OptionSetVisualProlog
 * Address:  140a2ca70
 * Signature: OptionSetVisualProlog * __thiscall OptionSetVisualProlog(OptionSetVisualProlog * this)
 * Body size: 307 bytes
 */


OptionSetVisualProlog * __thiscall
OptionSetVisualProlog::OptionSetVisualProlog(OptionSetVisualProlog *this)

{
  longlong lVar1;
  
                    /* inlined constructor: LexerVisualProlog::LexerVisualProlog */
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = (OptionSetVisualProlog_vftable *)&LexerVisualProlog::vftable;
  FUN_140a8b860(&(this->OptionSet<OptionsVisualProlog>_data).offset_0x10,0);
  FUN_140a8b860(&this[0xc].OptionSet<OptionsVisualProlog>_data.field_0x8,0);
  FUN_140a8b860(&this[0x18].OptionSet<OptionsVisualProlog>_data,0);
  FUN_140a8b860(this + 0x24,0);
                    /* inlined constructor:
                       Scintilla::OptionSet<OptionsVisualProlog>::OptionSet<OptionsVisualProlog> */
  this[0x30].vftablePtr =
       (OptionSetVisualProlog_vftable *)&Scintilla::OptionSet<OptionsVisualProlog>::vftable;
  this[0x30].OptionSet<OptionsVisualProlog>_data.offset_0x0 = 0;
  *(undefined8 *)&this[0x30].OptionSet<OptionsVisualProlog>_data.field_0x8 = 0;
  lVar1 = FUN_140b65d30(0x68);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  this[0x30].OptionSet<OptionsVisualProlog>_data.offset_0x0 = lVar1;
  this[0x30].OptionSet<OptionsVisualProlog>_data.offset_0x10 = 0;
  *(undefined8 *)&this[0x30].OptionSet<OptionsVisualProlog>_data.field_0x18 = 0;
  this[0x30].OptionSet<OptionsVisualProlog>_data.offset_0x20 = 0;
  this[0x30].OptionSet<OptionsVisualProlog>_data.offset_0x28 = 0xf;
  this[0x30].OptionSet<OptionsVisualProlog>_data.offset_0x30 = 0;
  *(undefined8 *)&this[0x30].OptionSet<OptionsVisualProlog>_data.field_0x38 = 0;
  this[0x30].OptionSet<OptionsVisualProlog>_data.offset_0x40 = 0;
  this[0x30].OptionSet<OptionsVisualProlog>_data.offset_0x48 = 0xf;
  this[0x30].vftablePtr = &vftable;
  FUN_1408d1660(this + 0x30,&PTR_s_Major_keywords__class__predicate_1412ab3a0);
  return this;
}

