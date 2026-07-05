/**
 * Function: ~QsciScintillaQt
 * Address:  1407d2400
 * Signature: void __thiscall ~QsciScintillaQt(QsciScintillaQt * this, undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 207 bytes
 */


void __thiscall
QsciScintillaQt::~QsciScintillaQt
          (QsciScintillaQt *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  QsciScintillaQt_vftable1 **this_00;
  int iVar1;
  QsciScintillaQt_vftable1 *pQVar2;
  undefined8 uVar3;
  
  this->vftablePtr = &vftable;
  pQVar2 = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  iVar1 = (this->QsciScintillaQt_data).offset_0x0;
  if (iVar1 != 0) {
    QObject::killTimer((QObject *)this,iVar1);
    (this->QsciScintillaQt_data).offset_0x0 = 0;
    pQVar2 = this->vftablePtr;
  }
  this_00 = &this->vftablePtr;
  (*pQVar2->vfunction52)(this_00,1);
  (*(*this_00)->vfunction52)(this_00,2);
  (*(*this_00)->vfunction52)(this_00,3);
  uVar3 = 4;
  (*(*this_00)->vfunction52)(this_00,4);
  Scintilla::ScintillaBase::vfunction7((ScintillaBase *)this_00);
  Scintilla::ScintillaBase::~ScintillaBase((ScintillaBase *)this_00,uVar3,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001407d24c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QObject::~QObject((QObject *)this);
  return;
}

