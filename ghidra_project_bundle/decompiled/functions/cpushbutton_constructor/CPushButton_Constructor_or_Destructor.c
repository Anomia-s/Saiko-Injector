/**
 * Function: CPushButton_Constructor_or_Destructor
 * Address:  140295070
 * Signature: void __fastcall CPushButton_Constructor_or_Destructor(undefined8 param_1, QPushButton * param_2)
 * Body size: 67 bytes
 */


void ads::CPushButton::CPushButton_Constructor_or_Destructor
               (undefined8 param_1,QPushButton *param_2)

{
  *(undefined8 *)&param_2[1].QAbstractButton.QWidget.field_0x8 = 0;
  param_2[1].QAbstractButton.QWidget.QPaintDevice = (QPaintDevice)0x0;
  (param_2->QAbstractButton).QWidget.QPaintDevice = (QPaintDevice)0x0;
  param_2[1].QAbstractButton.QWidget.QObject = (QObject)0x0;
  (param_2->QAbstractButton).QWidget.QObject = (QObject)0x0;
  *(undefined8 *)&(param_2->QAbstractButton).QWidget.field_0x8 = 0;
  QPushButton::QPushButton(param_2,(QWidget *)0x0);
  (param_2->QAbstractButton).QWidget.QObject = (QObject)&vftable;
  (param_2->QAbstractButton).QWidget.QPaintDevice = (QPaintDevice)&vftable;
  *(undefined4 *)&param_2[1].QAbstractButton.QWidget.QPaintDevice = 0;
  return;
}

