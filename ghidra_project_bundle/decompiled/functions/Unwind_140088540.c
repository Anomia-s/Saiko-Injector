/**
 * Function: Unwind@140088540
 * Address:  140088540
 * Signature: undefined Unwind@140088540(void)
 * Body size: 70 bytes
 */


void Unwind_140088540(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x269);
  uVar2 = *(undefined8 *)(param_2 + 0x138);
  QString::~QString((QString *)(param_2 + 0x1c0));
  *(undefined8 *)(param_2 + 0x98) = uVar2;
  *(undefined1 *)(param_2 + 0x263) = uVar1;
  return;
}

