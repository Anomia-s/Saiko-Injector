/**
 * Function: CDockOverlayCross_Constructor_or_Destructor
 * Address:  140578c30
 * Signature: void __fastcall CDockOverlayCross_Constructor_or_Destructor(QWidget * param_1)
 * Body size: 244 bytes
 */


void ads::CDockOverlayCross::CDockOverlayCross_Constructor_or_Destructor(QWidget *param_1)

{
  QPaintDevice QVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  param_1->QObject = (QObject)&vftable;
  param_1->QPaintDevice = (QPaintDevice)&vftable;
  QVar1 = param_1[1].QPaintDevice;
  if (QVar1 != (QPaintDevice)0x0) {
    piVar2 = *(int **)((longlong)QVar1 + 0x18);
    if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((*piVar2 == 0) && (lVar3 = *(longlong *)((longlong)QVar1 + 0x18), lVar3 != 0)) {
        lVar4 = *(longlong *)(lVar3 + 0x20);
        if (lVar4 != 0) {
          uVar5 = *(ulonglong *)(lVar4 + -8) * 0x90;
          uVar7 = uVar5;
          uVar6 = *(ulonglong *)(lVar4 + -8);
          while (uVar6 != 0) {
            if (*(longlong *)(lVar4 + -0x10 + uVar7) != 0) {
              thunk_FUN_140b68ba8();
              *(undefined8 *)(lVar4 + -0x10 + uVar7) = 0;
            }
            uVar7 = uVar7 - 0x90;
            uVar6 = uVar7;
          }
          thunk_FUN_140b68ba8(lVar4 + -8,uVar5 | 8);
        }
        thunk_FUN_140b68ba8(lVar3,0x28);
      }
    }
    thunk_FUN_140b68ba8(QVar1,0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x000140578d21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::~QWidget(param_1);
  return;
}

