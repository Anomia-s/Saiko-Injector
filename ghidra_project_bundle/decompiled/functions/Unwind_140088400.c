/**
 * Function: Unwind@140088400
 * Address:  140088400
 * Signature: undefined Unwind@140088400(void)
 * Body size: 70 bytes
 */


void Unwind_140088400(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x26d);
  uVar2 = *(undefined8 *)(param_2 + 0x158);
  QString::~QString((QString *)(param_2 + 0xe0));
  *(undefined8 *)(param_2 + 0x150) = uVar2;
  *(undefined1 *)(param_2 + 0x26c) = uVar1;
  return;
}

