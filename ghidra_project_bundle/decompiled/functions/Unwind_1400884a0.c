/**
 * Function: Unwind@1400884a0
 * Address:  1400884a0
 * Signature: undefined Unwind@1400884a0(void)
 * Body size: 70 bytes
 */


void Unwind_1400884a0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x26b);
  uVar2 = *(undefined8 *)(param_2 + 0x148);
  QString::~QString((QString *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0x140) = uVar2;
  *(undefined1 *)(param_2 + 0x26a) = uVar1;
  return;
}

