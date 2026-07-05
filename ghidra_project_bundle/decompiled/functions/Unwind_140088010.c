/**
 * Function: Unwind@140088010
 * Address:  140088010
 * Signature: undefined Unwind@140088010(void)
 * Body size: 70 bytes
 */


void Unwind_140088010(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x272);
  uVar2 = *(undefined8 *)(param_2 + 0x180);
  QString::~QString((QString *)(param_2 + 0x1c0));
  *(undefined8 *)(param_2 + 0xa8) = uVar2;
  *(undefined1 *)(param_2 + 0x267) = uVar1;
  return;
}

