/**
 * Function: SeverityHighlighter
 * Address:  140282450
 * Signature: SeverityHighlighter * __thiscall SeverityHighlighter(SeverityHighlighter * this, QWidget * param_1)
 * Body size: 426 bytes
 */


SeverityHighlighter * __thiscall
ldv::editor::SeverityHighlighter::SeverityHighlighter(SeverityHighlighter *this,QWidget *param_1)

{
  QTextDocument *pQVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  uint in_stack_ffffffffffffff8c;
  code *local_58 [3];
  QObject local_40 [8];
  QFont local_38 [16];
  QPaintDevice local_28;
  QWidget *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  QPlainTextEdit::QPlainTextEdit((QPlainTextEdit *)this,param_1);
                    /* inlined constructor: ldv::editor::OutputPanel::OutputPanel */
  this->vftablePtr = (SeverityHighlighter_vftable *)&OutputPanel::vftable;
  this[2].vftablePtr = (SeverityHighlighter_vftable *)&OutputPanel::vftable;
  this[5].vftablePtr = (SeverityHighlighter_vftable *)0x0;
  local_20 = (QWidget *)this;
  QPlainTextEdit::setReadOnly((QPlainTextEdit *)this,true);
  pQVar1 = QPlainTextEdit::document((QPlainTextEdit *)local_20);
  QTextDocument::setMaximumBlockCount(pQVar1,10000);
  QPlainTextEdit::setLineWrapMode((QPlainTextEdit *)local_20,0);
  QFrame::setFrameShape((QFrame *)local_20,0);
  QString::QString((QString *)local_58,"Monospace");
  QFont::QFont(local_38,(QString *)local_58,9,-1,false);
  QString::~QString((QString *)local_58);
  QFont::setStyleHint(local_38,2,1);
  QWidget::setFont(local_20,local_38);
  local_28 = (QPaintDevice)FUN_140b65d30(0x10);
  pQVar1 = QPlainTextEdit::document((QPlainTextEdit *)local_20);
  QSyntaxHighlighter::QSyntaxHighlighter((QSyntaxHighlighter *)local_28,pQVar1);
  *(SeverityHighlighter_vftable **)local_28 = &vftable;
  local_20[1].QPaintDevice = local_28;
  ppvVar2 = (void **)FUN_140089040();
  local_58[0] = FUN_14009e980;
  puVar3 = (undefined4 *)FUN_140b65d30(0x18);
  *puVar3 = 1;
  *(undefined1 **)(puVar3 + 2) = &LAB_140282cd0;
  *(QWidget **)(puVar3 + 4) = local_20;
  QObject::connectImpl
            (local_40,ppvVar2,(QObject *)local_58,(void **)local_20,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar3,(int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_40);
  QFont::~QFont(local_38);
  return (SeverityHighlighter *)local_20;
}

