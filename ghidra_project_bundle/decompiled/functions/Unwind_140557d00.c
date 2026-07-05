/**
 * Function: Unwind@140557d00
 * Address:  140557d00
 * Signature: undefined Unwind@140557d00(void)
 * Body size: 57 bytes
 */


void Unwind_140557d00(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x55);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x54) = uVar1;
  return;
}

