/**
 * Function: RoundedFocusFrame_Constructor_or_Destructor
 * Address:  140235300
 * Signature: void __fastcall RoundedFocusFrame_Constructor_or_Destructor(undefined8 param_1, QFocusFrame * param_2)
 * Body size: 90 bytes
 */


void oclero::qlementine::RoundedFocusFrame::RoundedFocusFrame_Constructor_or_Destructor
               (undefined8 param_1,QFocusFrame *param_2)

{
  param_2[2].QWidget.QObject = (QObject)0x0;
  *(undefined8 *)&param_2[2].QWidget.field_0x8 = 0;
  *(undefined8 *)&param_2[1].QWidget.field_0x8 = 0;
  param_2[1].QWidget.QPaintDevice = (QPaintDevice)0x0;
  (param_2->QWidget).QPaintDevice = (QPaintDevice)0x0;
  param_2[1].QWidget.QObject = (QObject)0x0;
  (param_2->QWidget).QObject = (QObject)0x0;
  *(undefined8 *)&(param_2->QWidget).field_0x8 = 0;
  param_2[2].QWidget.QPaintDevice = (QPaintDevice)0x0;
  QFocusFrame::QFocusFrame(param_2,(QWidget *)0x0);
  (param_2->QWidget).QObject = (QObject)&vftable;
  (param_2->QWidget).QPaintDevice = (QPaintDevice)&vftable;
  param_2[1].QWidget.QPaintDevice = (QPaintDevice)0x0;
  param_2[2].QWidget.QObject = (QObject)0x0;
  *(undefined8 *)&param_2[2].QWidget.field_0x8 = 0;
  param_2[2].QWidget.QPaintDevice = (QPaintDevice)0x0;
  return;
}

