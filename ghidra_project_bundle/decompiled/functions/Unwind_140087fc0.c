/**
 * Function: Unwind@140087fc0
 * Address:  140087fc0
 * Signature: undefined Unwind@140087fc0(void)
 * Body size: 73 bytes
 */


void Unwind_140087fc0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x273);
  uVar2 = *(undefined8 *)(param_2 + 0x188);
  QString::~QString((QString *)(param_2 + 0x1d8));
  *(undefined8 *)(param_2 + 0x180) = uVar2;
  *(undefined1 *)(param_2 + 0x272) = uVar1;
  return;
}

