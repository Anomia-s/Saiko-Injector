/**
 * Function: Unwind@140555130
 * Address:  140555130
 * Signature: undefined Unwind@140555130(void)
 * Body size: 57 bytes
 */


void Unwind_140555130(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x7f);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x7e) = uVar1;
  return;
}

