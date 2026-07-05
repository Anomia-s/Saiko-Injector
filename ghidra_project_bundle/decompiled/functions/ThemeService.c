/**
 * Function: ThemeService
 * Address:  140089100
 * Signature: ThemeService * __thiscall ThemeService(ThemeService * this)
 * Body size: 64 bytes
 */


ThemeService * __thiscall ldv::editor::ThemeService::ThemeService(ThemeService *this)

{
  QObject::QObject((QObject *)this,(QObject *)0x0);
  this->vftablePtr = &vftable;
  (this->ThemeService_data).offset_0x8 = 0;
  (this->ThemeService_data).offset_0x10 = 0;
  FUN_14008b470(&(this->ThemeService_data).field_0x18);
  QString::QString((QString *)&(this->ThemeService_data).field_0x178);
  return this;
}

