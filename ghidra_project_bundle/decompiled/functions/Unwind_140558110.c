/**
 * Function: Unwind@140558110
 * Address:  140558110
 * Signature: undefined Unwind@140558110(void)
 * Body size: 57 bytes
 */


void Unwind_140558110(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x53);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x52) = uVar1;
  return;
}

