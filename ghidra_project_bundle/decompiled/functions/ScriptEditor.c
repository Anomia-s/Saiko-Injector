/**
 * Function: ScriptEditor
 * Address:  14028f360
 * Signature: ScriptEditor * __thiscall ScriptEditor(ScriptEditor * this, undefined8 param_1, QString * param_2, undefined8 param_3)
 * Body size: 1091 bytes
 */


ScriptEditor * __thiscall
ldv::editor::ScriptEditor::ScriptEditor
          (ScriptEditor *this,undefined8 param_1,QString *param_2,undefined8 param_3)

{
  longlong *plVar1;
  QWidget *this_00;
  QsciLexerLua *pQVar2;
  ScriptEditor *pSVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void **ppvVar8;
  uint in_stack_ffffffffffffff4c;
  QObject local_98 [8];
  QObject local_90 [8];
  code *local_88 [2];
  QString *local_78;
  QFont local_70 [16];
  QFontMetrics local_60 [8];
  code *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  QsciLexerLua *local_40;
  QsciScintilla *local_38;
  ScriptEditor *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_3);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->ScriptEditor_data).offset_0x10 = param_1;
  local_78 = (QString *)&(this->ScriptEditor_data).field_0x18;
  QString::QString(local_78,param_2);
  (this->ScriptEditor_data).offset_0x30 = 0;
  local_30 = this;
  local_40 = (QsciLexerLua *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_40,(QWidget *)local_30);
  pQVar2 = local_40;
  QLayout::setContentsMargins((QLayout *)local_40,0,0,0,0);
  local_38 = (QsciScintilla *)FUN_140b65d30(0x1d0);
  pSVar3 = local_30;
  QsciScintilla::QsciScintilla(local_38,(QWidget *)local_30);
  (pSVar3->ScriptEditor_data).offset_0x30 = local_38;
  QFrame::setFrameShape((QFrame *)local_38,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar2,(local_30->ScriptEditor_data).offset_0x30,0,0);
  local_40 = (QsciLexerLua *)FUN_140b65d30(0x68);
  QsciLexerLua::QsciLexerLua(local_40,(QObject *)(local_30->ScriptEditor_data).offset_0x30);
  QString::QString((QString *)&local_58,"Monospace");
  pQVar2 = local_40;
  QFont::QFont(local_70,(QString *)&local_58,10,-1,false);
  (*pQVar2->vftablePtr->vfunction42)(pQVar2,local_70,-1);
  QFont::~QFont(local_70);
  QString::~QString((QString *)&local_58);
  plVar1 = (longlong *)(local_30->ScriptEditor_data).offset_0x30;
  (**(code **)(*plVar1 + 0x360))(plVar1,pQVar2);
  QFontMetrics::QFontMetrics
            (local_60,(QFont *)(*(longlong *)((local_30->ScriptEditor_data).offset_0x30 + 0x20) +
                               0x38));
  this_00 = (QWidget *)(local_30->ScriptEditor_data).offset_0x30;
  iVar5 = QFontMetrics::lineSpacing(local_60);
  iVar6 = QFontMetrics::averageCharWidth(local_60);
  QWidget::setMinimumSize(this_00,iVar6 * 10,iVar5 * 5);
  FUN_14028fa00((local_30->ScriptEditor_data).offset_0x30,pQVar2);
  plVar1 = (longlong *)(local_30->ScriptEditor_data).offset_0x30;
  (**(code **)(*plVar1 + 0x3e0))(plVar1,4);
  plVar1 = (longlong *)(local_30->ScriptEditor_data).offset_0x30;
  (**(code **)(*plVar1 + 0x350))(plVar1,1);
  plVar1 = (longlong *)(local_30->ScriptEditor_data).offset_0x30;
  (**(code **)(*plVar1 + 0x2c8))(plVar1,1);
  FUN_14058d480((local_30->ScriptEditor_data).offset_0x30,0,1);
  plVar1 = (longlong *)(local_30->ScriptEditor_data).offset_0x30;
  QString::QString((QString *)&local_58,"0000");
  (**(code **)(*plVar1 + 0x398))(plVar1,0,&local_58);
  QString::~QString((QString *)&local_58);
  plVar1 = (longlong *)(local_30->ScriptEditor_data).offset_0x30;
  (**(code **)(*plVar1 + 0x2f8))(plVar1,1);
  QFile::QFile((QFile *)local_70,local_78);
  bVar4 = QFile::open((QFile *)local_70,0x11);
  if (bVar4) {
    QTextStream::QTextStream((QTextStream *)local_88,(QIODevice *)local_70);
    plVar1 = (longlong *)(local_30->ScriptEditor_data).offset_0x30;
    QTextStream::readAll((QTextStream *)local_88);
    (**(code **)(*plVar1 + 1000))(plVar1,&local_58);
    QString::~QString((QString *)&local_58);
    plVar1 = (longlong *)(local_30->ScriptEditor_data).offset_0x30;
    (**(code **)(*plVar1 + 0x3a8))(plVar1,0);
    QTextStream::~QTextStream((QTextStream *)local_88);
  }
  local_38 = (QsciScintilla *)FUN_140b65d30(0x10);
  QShortcut::QShortcut((QShortcut *)local_38,5,(QObject *)local_30,(char *)0x0,(char *)0x0,1);
  local_58 = FUN_14028fbe0;
  uStack_50 = 0;
  local_88[0] = activated_exref;
  puVar7 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar7 = 1;
  *(undefined1 **)(puVar7 + 2) = &LAB_140085340;
  *(code **)(puVar7 + 4) = local_58;
  *(ulonglong *)(puVar7 + 6) = CONCAT44(uStack_4c,uStack_50);
  QObject::connectImpl
            (local_98,&local_38->vftablePtr,(QObject *)local_88,&local_30->vftablePtr,
             (QSlotObjectBase *)&local_58,(ConnectionType)puVar7,
             (int *)((ulonglong)in_stack_ffffffffffffff4c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_98);
  ppvVar8 = (void **)FUN_140089040();
  local_58 = FUN_14009e980;
  puVar7 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar7 = 1;
  *(undefined1 **)(puVar7 + 2) = &LAB_14028fe70;
  *(ScriptEditor **)(puVar7 + 4) = local_30;
  *(QsciLexerLua **)(puVar7 + 6) = pQVar2;
  QObject::connectImpl
            (local_90,ppvVar8,(QObject *)&local_58,&local_30->vftablePtr,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar7,(int *)((ulonglong)in_stack_ffffffffffffff4c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_90);
  QFile::~QFile((QFile *)local_70);
  QFontMetrics::~QFontMetrics(local_60);
  return local_30;
}

