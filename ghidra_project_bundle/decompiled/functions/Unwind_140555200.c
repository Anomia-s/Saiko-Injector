/**
 * Function: Unwind@140555200
 * Address:  140555200
 * Signature: undefined Unwind@140555200(void)
 * Body size: 57 bytes
 */


void Unwind_140555200(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x7d);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x7c) = uVar1;
  return;
}

