/**
 * Function: Unwind@140087f20
 * Address:  140087f20
 * Signature: undefined Unwind@140087f20(void)
 * Body size: 70 bytes
 */


void Unwind_140087f20(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x275);
  uVar2 = *(undefined8 *)(param_2 + 0x198);
  QString::~QString((QString *)(param_2 + 200));
  *(undefined8 *)(param_2 + 400) = uVar2;
  *(undefined1 *)(param_2 + 0x274) = uVar1;
  return;
}

