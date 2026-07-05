/**
 * Function: ~WidgetAnimator
 * Address:  14024a100
 * Signature: void __thiscall ~WidgetAnimator(WidgetAnimator * this)
 * Body size: 233 bytes
 */


void __thiscall oclero::qlementine::WidgetAnimator::~WidgetAnimator(WidgetAnimator *this)

{
  longlong *plVar1;
  
  this->vftablePtr = &vftable;
  plVar1 = (this->WidgetAnimator_data).offset_0x50;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x48;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x40;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x38;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x30;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x28;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x20;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x18;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x10;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
  plVar1 = (this->WidgetAnimator_data).offset_0x8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014024a1e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QObject::~QObject((QObject *)this);
  return;
}

