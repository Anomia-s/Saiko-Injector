/**
 * Function: Popover_Constructor_or_Destructor
 * Address:  14054c060
 * Signature: void __fastcall Popover_Constructor_or_Destructor(QWidget * param_1)
 * Body size: 178 bytes
 */


void oclero::qlementine::Popover::Popover_Constructor_or_Destructor(QWidget *param_1)

{
  QPaintDevice QVar1;
  QObject QVar2;
  int *piVar3;
  
  param_1->QObject = (QObject)&vftable;
  param_1->QPaintDevice = (QPaintDevice)&vftable;
  QVar1 = param_1[0xe].QPaintDevice;
  if (QVar1 != (QPaintDevice)0x0) {
    (**(code **)(*(longlong *)QVar1 + 0x20))(QVar1,QVar1 != (QPaintDevice)&param_1[0xc].field_0x8);
    param_1[0xe].QPaintDevice = (QPaintDevice)0x0;
  }
  QTimer::~QTimer((QTimer *)(param_1 + 8));
  QPixmap::~QPixmap((QPixmap *)&param_1[6].QPaintDevice);
  QVariantAnimation::~QVariantAnimation((QVariantAnimation *)(param_1 + 5));
  QVar2 = param_1[4].QObject;
  if (QVar2 != (QObject)0x0) {
    LOCK();
    *(int *)QVar2 = *(int *)QVar2 + -1;
    UNLOCK();
    if ((*(int *)QVar2 == 0) && (param_1[4].QObject != (QObject)0x0)) {
      FUN_140b68ba8();
    }
  }
  piVar3 = *(int **)&param_1[2].field_0x8;
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && (*(longlong *)&param_1[2].field_0x8 != 0)) {
      FUN_140b68ba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014054c10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::~QWidget(param_1);
  return;
}

