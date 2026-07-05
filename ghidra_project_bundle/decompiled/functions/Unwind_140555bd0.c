/**
 * Function: Unwind@140555bd0
 * Address:  140555bd0
 * Signature: undefined Unwind@140555bd0(void)
 * Body size: 57 bytes
 */


void Unwind_140555bd0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x73);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x72) = uVar1;
  return;
}

