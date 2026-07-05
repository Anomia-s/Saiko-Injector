/**
 * Function: ~CDockContainerWidget
 * Address:  14056be40
 * Signature: void __thiscall ~CDockContainerWidget(CDockContainerWidget * this)
 * Body size: 130 bytes
 */


void __thiscall ads::CDockContainerWidget::~CDockContainerWidget(CDockContainerWidget *this)

{
  longlong lVar1;
  
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  lVar1 = (this->CDockContainerWidget_data).offset_0x10;
  if (((*(longlong *)(lVar1 + 8) != 0) && (*(int *)(*(longlong *)(lVar1 + 8) + 4) != 0)) &&
     (*(longlong *)(lVar1 + 0x10) != 0)) {
    FUN_140276ed0(*(longlong *)(lVar1 + 0x10),this);
    lVar1 = (this->CDockContainerWidget_data).offset_0x10;
    if (lVar1 == 0) goto LAB_14056beb1;
  }
  FUN_14056bef0(lVar1);
  thunk_FUN_140b68ba8(lVar1,200);
LAB_14056beb1:
                    /* WARNING: Could not recover jumptable at 0x00014056bebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QFrame::~QFrame((QFrame *)this);
  return;
}

