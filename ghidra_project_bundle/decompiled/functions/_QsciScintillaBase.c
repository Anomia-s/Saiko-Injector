/**
 * Function: ~QsciScintillaBase
 * Address:  14074b750
 * Signature: void __thiscall ~QsciScintillaBase(QsciScintillaBase * this)
 * Body size: 310 bytes
 */


void __thiscall QsciScintillaBase::~QsciScintillaBase(QsciScintillaBase *this)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  plVar3 = (this->QsciScintillaBase_data).offset_0x10;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
  }
  lVar7 = -1;
  if (0 < DAT_141700148) {
    lVar6 = -8;
    do {
      if (DAT_141700148 * -8 + lVar6 == -8) goto LAB_14074b7df;
      lVar1 = lVar6 + 8;
      lVar4 = lVar6 + 8;
      lVar6 = lVar1;
    } while (*(QsciScintillaBase **)((longlong)DAT_141700140 + lVar4) != this);
    lVar7 = lVar1 >> 3;
  }
LAB_14074b7df:
  if ((DAT_141700138 == (int *)0x0) || (1 < *DAT_141700138)) {
    FUN_140096f80(&DAT_141700138,0,0,0);
  }
  _Src = (void *)((longlong)DAT_141700140 + lVar7 * 8 + 8);
  pvVar2 = (void *)((longlong)DAT_141700140 + DAT_141700148 * 8);
  if (((lVar7 != 0) || (pvVar5 = _Src, _Src == pvVar2)) && (pvVar5 = DAT_141700140, _Src != pvVar2))
  {
    memmove((void *)((longlong)DAT_141700140 + lVar7 * 8),_Src,(DAT_141700148 * 8 + lVar7 * -8) - 8)
    ;
    pvVar5 = DAT_141700140;
  }
  DAT_141700140 = pvVar5;
  DAT_141700148 = DAT_141700148 + -1;
  QString::~QString((QString *)&(this->QsciScintillaBase_data).field_0x38);
  QTimer::~QTimer((QTimer *)&(this->QsciScintillaBase_data).field_0x20);
                    /* WARNING: Could not recover jumptable at 0x00014074b87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QAbstractScrollArea::~QAbstractScrollArea((QAbstractScrollArea *)this);
  return;
}

