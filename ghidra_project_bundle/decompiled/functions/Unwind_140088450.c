/**
 * Function: Unwind@140088450
 * Address:  140088450
 * Signature: undefined Unwind@140088450(void)
 * Body size: 70 bytes
 */


void Unwind_140088450(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x26c);
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  QString::~QString((QString *)(param_2 + 200));
  *(undefined8 *)(param_2 + 0x148) = uVar2;
  *(undefined1 *)(param_2 + 0x26b) = uVar1;
  return;
}

