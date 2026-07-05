/**
 * Function: Action_Constructor_or_Destructor
 * Address:  1405475b0
 * Signature: void __fastcall Action_Constructor_or_Destructor(QAction * param_1)
 * Body size: 281 bytes
 */


void oclero::qlementine::Action::Action_Constructor_or_Destructor(QAction *param_1)

{
  QAction QVar1;
  
  param_1->QObject = (QObject)&vftable;
  QVar1.QObject = param_1[0x30].QObject;
  if (QVar1.QObject != (QObject)0x0) {
    (**(code **)(*(longlong *)QVar1.QObject + 0x20))
              (QVar1.QObject,QVar1.QObject != (QObject)(param_1 + 0x29));
    param_1[0x30].QObject = (QObject)0x0;
  }
  QVar1.QObject = param_1[0x28].QObject;
  if (QVar1.QObject != (QObject)0x0) {
    (**(code **)(*(longlong *)QVar1.QObject + 0x20))
              (QVar1.QObject,QVar1.QObject != (QObject)(param_1 + 0x21));
    param_1[0x28].QObject = (QObject)0x0;
  }
  QVar1.QObject = param_1[0x20].QObject;
  if (QVar1.QObject != (QObject)0x0) {
    (**(code **)(*(longlong *)QVar1.QObject + 0x20))
              (QVar1.QObject,QVar1.QObject != (QObject)(param_1 + 0x19));
    param_1[0x20].QObject = (QObject)0x0;
  }
  QVar1.QObject = param_1[0x18].QObject;
  if (QVar1.QObject != (QObject)0x0) {
    (**(code **)(*(longlong *)QVar1.QObject + 0x20))
              (QVar1.QObject,QVar1.QObject != (QObject)(param_1 + 0x11));
    param_1[0x18].QObject = (QObject)0x0;
  }
  QVar1.QObject = param_1[0x10].QObject;
  if (QVar1.QObject != (QObject)0x0) {
    (**(code **)(*(longlong *)QVar1.QObject + 0x20))
              (QVar1.QObject,QVar1.QObject != (QObject)(param_1 + 9));
    param_1[0x10].QObject = (QObject)0x0;
  }
  QMetaObject::Connection::~Connection((Connection *)(param_1 + 8));
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 7));
  QKeySequence::~QKeySequence((QKeySequence *)(param_1 + 6));
  QString::~QString((QString *)(param_1 + 3));
                    /* WARNING: Could not recover jumptable at 0x0001405476c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QAction::~QAction(param_1);
  return;
}

