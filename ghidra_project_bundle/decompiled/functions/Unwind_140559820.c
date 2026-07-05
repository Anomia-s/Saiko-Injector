/**
 * Function: Unwind@140559820
 * Address:  140559820
 * Signature: undefined Unwind@140559820(void)
 * Body size: 57 bytes
 */


void Unwind_140559820(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x41);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x40) = uVar1;
  return;
}

