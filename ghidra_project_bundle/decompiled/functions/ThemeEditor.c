/**
 * Function: ThemeEditor
 * Address:  1405500b0
 * Signature: ThemeEditor * __thiscall ThemeEditor(ThemeEditor * this, undefined8 param_1)
 * Body size: 150 bytes
 */


ThemeEditor * __thiscall
oclero::qlementine::ThemeEditor::ThemeEditor(ThemeEditor *this,undefined8 param_1)

{
  void *_Dst;
  
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  _Dst = (void *)FUN_140b65d30(0x8b0);
  memset(_Dst,0,0x218);
  *(ThemeEditor **)((longlong)_Dst + 0x218) = this;
  Theme::Theme((Theme *)((longlong)_Dst + 0x220));
  (this->ThemeEditor_data).offset_0x10 = _Dst;
  FUN_1405501d0();
  return this;
}

