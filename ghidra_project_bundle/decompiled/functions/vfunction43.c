/**
 * Function: vfunction43
 * Address:  1407d3370
 * Signature: void __thiscall vfunction43(QsciScintillaQt * this, char * param_1)
 * Body size: 140 bytes
 */


void __thiscall QsciScintillaQt::vfunction43(QsciScintillaQt *this,char *param_1)

{
  longlong *plVar1;
  QClipboard *this_00;
  QMimeData *pQVar2;
  QByteArray local_48 [24];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  this_00 = QGuiApplication::clipboard();
  plVar1 = *(longlong **)((longlong)&(this->QsciScintillaQt_data).offset_0x14 + 4);
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(char **)param_1;
  }
  QByteArray::QByteArray(local_48,param_1,-1);
  pQVar2 = (QMimeData *)(**(code **)(*plVar1 + 0x1a0))(plVar1,local_48);
  QByteArray::~QByteArray(local_48);
  QClipboard::setMimeData(this_00,pQVar2,0);
  return;
}

