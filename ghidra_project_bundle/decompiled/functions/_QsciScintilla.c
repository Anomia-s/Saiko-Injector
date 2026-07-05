/**
 * Function: ~QsciScintilla
 * Address:  140588520
 * Signature: void __thiscall ~QsciScintilla(QsciScintilla * this)
 * Body size: 505 bytes
 */


void __thiscall QsciScintilla::~QsciScintilla(QsciScintilla *this)

{
  undefined1 *puVar1;
  int *piVar2;
  QObject *pQVar3;
  longlong lVar4;
  QString *pQVar5;
  
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  piVar2 = (this->QsciScintilla_data).offset_0xf8;
  if (piVar2 != (int *)0x0) {
    pQVar3 = (this->QsciScintilla_data).offset_0x100;
    if (pQVar3 != (QObject *)0x0 && piVar2[1] != 0) {
      (**(code **)(*(longlong *)pQVar3 + 0x110))();
      QObject::disconnect((this->QsciScintilla_data).offset_0x100,(char *)0x0,(QObject *)this,
                          (char *)0x0);
      FUN_14074b900(this,0x80a,0,0);
      FUN_14074b900(this,0x802,0,0);
    }
  }
  puVar1 = &(this->QsciScintilla_data).field_0x110;
  FUN_14074d1b0(puVar1,this);
  lVar4 = (this->QsciScintilla_data).offset_0x108;
  if (lVar4 != 0) {
    FUN_14074d510(lVar4);
    thunk_FUN_140b68ba8(lVar4,0x20);
  }
  QString::~QString((QString *)&(this->QsciScintilla_data).field_0x160);
  QByteArray::~QByteArray((QByteArray *)&(this->QsciScintilla_data).field_0x140);
  QsciDocument::QsciDocument_Constructor_or_Destructor((undefined8 *)puVar1);
  piVar2 = (this->QsciScintilla_data).offset_0xf8;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && ((this->QsciScintilla_data).offset_0xf8 != (int *)0x0)) {
      FUN_140b68ba8();
    }
  }
  piVar2 = (this->QsciScintilla_data).offset_0xd8;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      free((this->QsciScintilla_data).offset_0xd8);
    }
  }
  piVar2 = (this->QsciScintilla_data).offset_0xb8;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      lVar4 = (this->QsciScintilla_data).offset_0xc8;
      if (lVar4 != 0) {
        pQVar5 = (this->QsciScintilla_data).offset_0xc0;
        lVar4 = lVar4 * 0x18;
        do {
          QString::~QString(pQVar5);
          pQVar5 = pQVar5 + 0x18;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
      }
      free((this->QsciScintilla_data).offset_0xb8);
    }
  }
  piVar2 = (this->QsciScintilla_data).offset_0x88;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      lVar4 = (this->QsciScintilla_data).offset_0x98;
      if (lVar4 != 0) {
        pQVar5 = (this->QsciScintilla_data).offset_0x90;
        lVar4 = lVar4 * 0x18;
        do {
          QString::~QString(pQVar5);
          pQVar5 = pQVar5 + 0x18;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
      }
      free((this->QsciScintilla_data).offset_0x88);
    }
  }
  QString::~QString((QString *)&(this->QsciScintilla_data).field_0x20);
  QsciScintillaBase::~QsciScintillaBase((QsciScintillaBase *)this);
  return;
}

