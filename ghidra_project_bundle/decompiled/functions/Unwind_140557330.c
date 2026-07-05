/**
 * Function: Unwind@140557330
 * Address:  140557330
 * Signature: undefined Unwind@140557330(void)
 * Body size: 57 bytes
 */


void Unwind_140557330(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x5f);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x5e) = uVar1;
  return;
}

