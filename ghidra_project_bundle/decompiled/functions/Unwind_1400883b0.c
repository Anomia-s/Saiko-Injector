/**
 * Function: Unwind@1400883b0
 * Address:  1400883b0
 * Signature: undefined Unwind@1400883b0(void)
 * Body size: 70 bytes
 */


void Unwind_1400883b0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x26e);
  uVar2 = *(undefined8 *)(param_2 + 0x160);
  QString::~QString((QString *)(param_2 + 0xf8));
  *(undefined8 *)(param_2 + 0x158) = uVar2;
  *(undefined1 *)(param_2 + 0x26d) = uVar1;
  return;
}

