/**
 * Function: Menu_Constructor_or_Destructor
 * Address:  140234630
 * Signature: void __fastcall Menu_Constructor_or_Destructor(undefined8 param_1, QMenu * param_2)
 * Body size: 124 bytes
 */


void oclero::qlementine::Menu::Menu_Constructor_or_Destructor(undefined8 param_1,QMenu *param_2)

{
  param_2[6].QWidget.QObject = (QObject)0x0;
  *(undefined8 *)&param_2[6].QWidget.field_0x8 = 0;
  *(undefined8 *)&param_2[5].QWidget.field_0x8 = 0;
  param_2[5].QWidget.QPaintDevice = (QPaintDevice)0x0;
  param_2[4].QWidget.QPaintDevice = (QPaintDevice)0x0;
  param_2[5].QWidget.QObject = (QObject)0x0;
  param_2[4].QWidget.QObject = (QObject)0x0;
  *(undefined8 *)&param_2[4].QWidget.field_0x8 = 0;
  *(undefined8 *)&param_2[3].QWidget.field_0x8 = 0;
  param_2[3].QWidget.QPaintDevice = (QPaintDevice)0x0;
  param_2[2].QWidget.QPaintDevice = (QPaintDevice)0x0;
  param_2[3].QWidget.QObject = (QObject)0x0;
  param_2[2].QWidget.QObject = (QObject)0x0;
  *(undefined8 *)&param_2[2].QWidget.field_0x8 = 0;
  *(undefined8 *)&param_2[1].QWidget.field_0x8 = 0;
  param_2[1].QWidget.QPaintDevice = (QPaintDevice)0x0;
  (param_2->QWidget).QPaintDevice = (QPaintDevice)0x0;
  param_2[1].QWidget.QObject = (QObject)0x0;
  (param_2->QWidget).QObject = (QObject)0x0;
  *(undefined8 *)&(param_2->QWidget).field_0x8 = 0;
  param_2[6].QWidget.QPaintDevice = (QPaintDevice)0x0;
  QMenu::QMenu(param_2,(QWidget *)0x0);
  (param_2->QWidget).QObject = (QObject)&vftable;
  (param_2->QWidget).QPaintDevice = (QPaintDevice)&vftable;
  param_2[4].QWidget.QObject = (QObject)0x0;
  param_2[6].QWidget.QPaintDevice = (QPaintDevice)0x0;
  return;
}

