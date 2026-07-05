/**
 * Function: Unwind@140087f70
 * Address:  140087f70
 * Signature: undefined Unwind@140087f70(void)
 * Body size: 70 bytes
 */


void Unwind_140087f70(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x274);
  uVar2 = *(undefined8 *)(param_2 + 400);
  QString::~QString((QString *)(param_2 + 0xb0));
  *(undefined8 *)(param_2 + 0x188) = uVar2;
  *(undefined1 *)(param_2 + 0x273) = uVar1;
  return;
}

