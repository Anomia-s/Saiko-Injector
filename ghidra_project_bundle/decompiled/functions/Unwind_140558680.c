/**
 * Function: Unwind@140558680
 * Address:  140558680
 * Signature: undefined Unwind@140558680(void)
 * Body size: 57 bytes
 */


void Unwind_140558680(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4d);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x4c) = uVar1;
  return;
}

