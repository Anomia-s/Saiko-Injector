/**
 * Function: Unwind@140556f20
 * Address:  140556f20
 * Signature: undefined Unwind@140556f20(void)
 * Body size: 57 bytes
 */


void Unwind_140556f20(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x61);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x60) = uVar1;
  return;
}

