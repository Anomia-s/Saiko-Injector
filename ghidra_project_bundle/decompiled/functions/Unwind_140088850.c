/**
 * Function: Unwind@140088850
 * Address:  140088850
 * Signature: undefined Unwind@140088850(void)
 * Body size: 75 bytes
 */


void Unwind_140088850(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  QIcon *this;
  
  this = *(QIcon **)(param_2 + 0x30);
  for (lVar1 = *(longlong *)(param_2 + 0x28); lVar1 != 0; lVar1 = lVar1 + -8) {
    QIcon::~QIcon(this);
    this = this + 8;
  }
  FUN_1400888a0(param_2 + 0x20);
  return;
}

