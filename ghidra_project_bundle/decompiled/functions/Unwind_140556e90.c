/**
 * Function: Unwind@140556e90
 * Address:  140556e90
 * Signature: undefined Unwind@140556e90(void)
 * Body size: 57 bytes
 */


void Unwind_140556e90(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 99);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x62) = uVar1;
  return;
}

