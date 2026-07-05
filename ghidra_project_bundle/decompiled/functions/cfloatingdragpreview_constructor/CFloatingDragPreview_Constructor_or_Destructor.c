/**
 * Function: CFloatingDragPreview_Constructor_or_Destructor
 * Address:  1405983a0
 * Signature: void __fastcall CFloatingDragPreview_Constructor_or_Destructor(QWidget * param_1)
 * Body size: 92 bytes
 */


void ads::CFloatingDragPreview::CFloatingDragPreview_Constructor_or_Destructor(QWidget *param_1)

{
  QObject QVar1;
  
  param_1->QObject = (QObject)&vftable;
  param_1->QPaintDevice = (QPaintDevice)&vftable;
  param_1[1].QPaintDevice = (QPaintDevice)&vftable;
  QVar1 = param_1[2].QObject;
  if (QVar1 != (QObject)0x0) {
    QPixmap::~QPixmap((QPixmap *)((longlong)QVar1 + 0x48));
    thunk_FUN_140b68ba8(QVar1,0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405983f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::~QWidget(param_1);
  return;
}

