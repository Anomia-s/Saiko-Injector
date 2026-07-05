/**
 * Function: Unwind@140087e80
 * Address:  140087e80
 * Signature: undefined Unwind@140087e80(void)
 * Body size: 70 bytes
 */


void Unwind_140087e80(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x277);
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  QString::~QString((QString *)(param_2 + 0xf8));
  *(undefined8 *)(param_2 + 0x1a0) = uVar2;
  *(undefined1 *)(param_2 + 0x276) = uVar1;
  return;
}

