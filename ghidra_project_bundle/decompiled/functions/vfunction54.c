/**
 * Function: vfunction54
 * Address:  1407d27b0
 * Signature: void __thiscall vfunction54(QsciScintillaQt * this, char param_1)
 * Body size: 67 bytes
 */


void __thiscall QsciScintillaQt::vfunction54(QsciScintillaQt *this,char param_1)

{
  QWidget *this_00;
  
  if ((this->Editor_data).field_0x33d == '\x01') {
    this_00 = (QWidget *)
              QAbstractScrollArea::viewport
                        (*(QAbstractScrollArea **)
                          ((longlong)&(this->QsciScintillaQt_data).offset_0x14 + 4));
    if (param_1 == '\0') {
      QWidget::releaseMouse(this_00);
    }
    else {
      QWidget::grabMouse(this_00);
    }
  }
  *(char *)&(this->QsciScintillaQt_data).offset_0x14 = param_1;
  return;
}

