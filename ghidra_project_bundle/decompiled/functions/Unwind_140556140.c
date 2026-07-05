/**
 * Function: Unwind@140556140
 * Address:  140556140
 * Signature: undefined Unwind@140556140(void)
 * Body size: 57 bytes
 */


void Unwind_140556140(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x6d);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x6c) = uVar1;
  return;
}

