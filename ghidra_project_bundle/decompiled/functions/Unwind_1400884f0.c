/**
 * Function: Unwind@1400884f0
 * Address:  1400884f0
 * Signature: undefined Unwind@1400884f0(void)
 * Body size: 73 bytes
 */


void Unwind_1400884f0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x26a);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  QString::~QString((QString *)(param_2 + 0x1d8));
  *(undefined8 *)(param_2 + 0x138) = uVar2;
  *(undefined1 *)(param_2 + 0x269) = uVar1;
  return;
}

