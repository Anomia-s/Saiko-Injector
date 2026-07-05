/**
 * Function: Unwind@140559c30
 * Address:  140559c30
 * Signature: undefined Unwind@140559c30(void)
 * Body size: 57 bytes
 */


void Unwind_140559c30(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x3f);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x3e) = uVar1;
  return;
}

