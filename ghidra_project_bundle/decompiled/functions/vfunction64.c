/**
 * Function: vfunction64
 * Address:  1407d3ff0
 * Signature: void __thiscall vfunction64(QsciScintillaQt * this, char * param_1, undefined4 param_2, undefined1 param_3)
 * Body size: 152 bytes
 */


void __thiscall
QsciScintillaQt::vfunction64
          (QsciScintillaQt *this,char *param_1,undefined4 param_2,undefined1 param_3)

{
  QMenu *this_00;
  undefined8 unaff_RBX;
  QString local_50 [24];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  this_00 = (QMenu *)this->vftablePtr;
  if (*param_1 != '\0') {
    QCoreApplication::translate((char *)local_50,"ContextMenu",param_1,0);
    FUN_14081efc0(this_00,local_50,param_2,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff,
                  (undefined1 *)((longlong)&this[-1].QsciScintillaQt_data.offset_0x1c + 4));
    QString::~QString(local_50);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001407d4081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QMenu::addSeparator(this_00);
  return;
}

