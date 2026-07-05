/**
 * Function: ThemeManager_Constructor_or_Destructor
 * Address:  140545a80
 * Signature: void __fastcall ThemeManager_Constructor_or_Destructor(QObject * param_1)
 * Body size: 211 bytes
 */


void oclero::qlementine::ThemeManager::ThemeManager_Constructor_or_Destructor(QObject *param_1)

{
  ulonglong uVar1;
  QObject QVar2;
  QObject QVar3;
  
  *param_1 = (QObject)&vftable;
  QVar2 = param_1[5];
  if (QVar2 != (QObject)0x0) {
    LOCK();
    *(int *)QVar2 = *(int *)QVar2 + -1;
    UNLOCK();
    if ((*(int *)QVar2 == 0) && (param_1[5] != (QObject)0x0)) {
      FUN_140b68ba8();
    }
  }
  QVar2 = param_1[2];
  if (QVar2 != (QObject)0x0) {
    QVar3 = param_1[3];
    if (QVar2 != QVar3) {
      do {
        (*(code *)**(undefined8 **)QVar2)(QVar2,0);
        QVar2 = (QObject)((longlong)QVar2 + 0x690);
      } while (QVar2 != QVar3);
      QVar2 = param_1[2];
    }
    uVar1 = (longlong)param_1[4] - (longlong)QVar2;
    QVar3 = QVar2;
    if (0xfff < uVar1) {
      QVar3 = *(QObject *)((longlong)QVar2 + -8);
      if (0x1f < (ulonglong)((longlong)((longlong)QVar2 + -8) - (longlong)QVar3)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar1 = uVar1 + 0x27;
    }
    thunk_FUN_140b68ba8(QVar3,uVar1);
    param_1[2] = (QObject)0x0;
    param_1[3] = (QObject)0x0;
    param_1[4] = (QObject)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140545b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QObject::~QObject(param_1);
  return;
}

