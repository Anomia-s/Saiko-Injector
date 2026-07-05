/**
 * Function: Unwind@140555b40
 * Address:  140555b40
 * Signature: undefined Unwind@140555b40(void)
 * Body size: 57 bytes
 */


void Unwind_140555b40(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x75);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x74) = uVar1;
  return;
}

