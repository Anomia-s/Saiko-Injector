/**
 * Function: Unwind@140559380
 * Address:  140559380
 * Signature: undefined Unwind@140559380(void)
 * Body size: 57 bytes
 */


void Unwind_140559380(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x45);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x44) = uVar1;
  return;
}

