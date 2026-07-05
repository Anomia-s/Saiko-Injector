/**
 * Function: QsciLexer
 * Address:  14074d5e0
 * Signature: QsciLexer * __thiscall QsciLexer(QsciLexer * this, QObject * param_1)
 * Body size: 323 bytes
 */


QsciLexer * __thiscall QsciLexer::QsciLexer(QsciLexer *this,QObject *param_1)

{
  undefined4 *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  QsciLexer *pQVar5;
  QsciLexer *pQVar6;
  QBrush *pQVar7;
  QColor *pQVar8;
  undefined1 *puVar9;
  QFont local_68 [16];
  QString local_58 [24];
  QFont *local_40;
  QsciLexer *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  QObject::QObject((QObject *)this,param_1);
  this->vftablePtr = &vftable;
  (this->QsciLexer_data).offset_0x10 = 0xffffffff;
  local_40 = (QFont *)&(this->QsciLexer_data).field_0x18;
  local_38 = this;
  QFont::QFont(local_40);
  pQVar6 = local_38;
  pQVar5 = local_38 + 1;
  QColor::QColor((QColor *)&pQVar5->QsciLexer_data);
  this_00 = &pQVar6[1].QsciLexer_data.offset_0x10;
  QColor::QColor((QColor *)this_00);
  pQVar6[2].vftablePtr = (QsciLexer_vftable *)0x0;
  *(undefined8 *)&pQVar6[2].QsciLexer_data = 0;
  QString::QString(local_58,"Verdana");
  QFont::QFont(local_68,local_58,10,-1,false);
  QFont::swap(local_40,local_68);
  QFont::~QFont(local_68);
  QString::~QString(local_58);
  QGuiApplication::palette();
  pQVar7 = QPalette::brush((QPalette *)local_58,4,6);
  pQVar8 = QBrush::color(pQVar7);
  lVar4 = *(longlong *)(pQVar8 + 8);
  *(undefined8 *)&pQVar5->QsciLexer_data = *(undefined8 *)pQVar8;
  pQVar6[1].QsciLexer_data.offset_0x8 = lVar4;
  pQVar7 = QPalette::brush((QPalette *)local_58,4,9);
  pQVar8 = QBrush::color(pQVar7);
  uVar1 = *(undefined4 *)(pQVar8 + 4);
  uVar2 = *(undefined4 *)(pQVar8 + 8);
  uVar3 = *(undefined4 *)(pQVar8 + 0xc);
  *this_00 = *(undefined4 *)pQVar8;
  *(undefined4 *)&pQVar6[1].QsciLexer_data.field_0x14 = uVar1;
  *(undefined4 *)&pQVar6[1].QsciLexer_data.field_0x18 = uVar2;
  *(undefined4 *)&pQVar6[1].QsciLexer_data.field_0x1c = uVar3;
  puVar9 = (undefined1 *)FUN_140b65d30(0x10);
  pQVar5 = local_38;
  *(undefined8 *)(puVar9 + 8) = 0;
  (local_38->QsciLexer_data).offset_0x8 = (longlong)puVar9;
  *puVar9 = 0;
  QPalette::~QPalette((QPalette *)local_58);
  return pQVar5;
}

