/**
 * Function: vfunction63
 * Address:  1407d3f20
 * Signature: void __thiscall vfunction63(QsciScintillaQt * this, undefined8 * param_1)
 * Body size: 156 bytes
 */


void __thiscall QsciScintillaQt::vfunction63(QsciScintillaQt *this,undefined8 *param_1)

{
  QsciSciCallTip *this_00;
  undefined8 local_38;
  QsciSciCallTip *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  this_00 = *(QsciSciCallTip **)&(this->ScintillaBase_data).field_0x110;
  if (this_00 == (QsciSciCallTip *)0x0) {
    local_30 = (QsciSciCallTip *)FUN_140b65d30(0x30);
    QsciSciCallTip::QsciSciCallTip
              (local_30,*(QWidget **)((longlong)&(this->QsciScintillaQt_data).offset_0x14 + 4),
               (undefined1 *)((longlong)&this[-1].QsciScintillaQt_data.offset_0x1c + 4));
    *(QsciSciCallTip **)&(this->ScintillaBase_data).field_0x110 = local_30;
    *(undefined4 *)&(this->ScintillaBase_data).field_0x118 = 0;
    this_00 = local_30;
  }
  local_38 = CONCAT44((int)((float)((ulonglong)param_1[1] >> 0x20) -
                           (float)((ulonglong)*param_1 >> 0x20)),
                      (int)((float)param_1[1] - (float)*param_1));
  QWidget::resize((QWidget *)this_00,(QSize *)&local_38);
  FUN_140801c70(&(this->ScintillaBase_data).field_0x108,1);
  return;
}

