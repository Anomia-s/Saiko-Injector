/**
 * Function: QsciScintillaQt
 * Address:  1407d22a0
 * Signature: QsciScintillaQt * __thiscall QsciScintillaQt(QsciScintillaQt * this, QAbstractScrollArea * param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 243 bytes
 */


QsciScintillaQt * __thiscall
QsciScintillaQt::QsciScintillaQt
          (QsciScintillaQt *this,QAbstractScrollArea *param_1,undefined8 param_2,undefined8 param_3)

{
  QsciScintillaQt_vftable1 **this_00;
  QWidget *pQVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  QObject::QObject((QObject *)this,(QObject *)0x0);
  this_00 = &this->vftablePtr;
  Scintilla::ScintillaBase::ScintillaBase((ScintillaBase *)this_00,uVar2,param_2,param_3);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->QsciScintillaQt_data).offset_0x14 = 0;
  (this->QsciScintillaQt_data).offset_0x1c = 0;
  (this->QsciScintillaQt_data).offset_0x24 = 0;
  (this->QsciScintillaQt_data).offset_0x28 = param_1;
  pQVar1 = QAbstractScrollArea::viewport((QAbstractScrollArea *)param_1);
  *(QWidget **)&(this->Editor_data).field_0x8 = pQVar1;
  *(undefined4 *)&(this->Editor_data).field_0x10 = 0;
  *(undefined4 *)&(this->EditModel_data).offset_0x2b4 = 1;
  (*this->vftablePtr->vfunction62)
            (this_00,0x7f3,(SetComponentCmd<Position>_vftable *)0x0,
             (SetComponentCmd<Position>_vftable *)0x0);
  *(undefined8 *)&this->QsciScintillaQt_data = 0;
  (this->QsciScintillaQt_data).offset_0x8 = 0;
  (this->QsciScintillaQt_data).offset_0x10 = 0;
  (*this->vftablePtr->vfunction6)(this_00);
  return this;
}

