/**
 * Function: ~QsciLexer
 * Address:  14074d7f0
 * Signature: void __thiscall ~QsciLexer(QsciLexer * this)
 * Body size: 142 bytes
 */


void __thiscall QsciLexer::~QsciLexer(QsciLexer *this)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  this->vftablePtr = &vftable;
  lVar1 = (this->QsciLexer_data).offset_0x8;
  if (lVar1 != 0) {
    piVar2 = *(int **)(lVar1 + 8);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (lVar3 = *(longlong *)(lVar1 + 8), lVar3 != 0)) {
        FUN_14074e1c0(lVar3 + 8,lVar3 + 8,*(undefined8 *)(*(longlong *)(lVar3 + 8) + 8));
        thunk_FUN_140b68ba8(*(undefined8 *)(lVar3 + 8),0x60);
        thunk_FUN_140b68ba8(lVar3,0x18);
      }
    }
    thunk_FUN_140b68ba8(lVar1,0x10);
  }
  QFont::~QFont((QFont *)&(this->QsciLexer_data).field_0x18);
                    /* WARNING: Could not recover jumptable at 0x00014074d877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QObject::~QObject((QObject *)this);
  return;
}

