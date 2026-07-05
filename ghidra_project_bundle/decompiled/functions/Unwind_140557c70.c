/**
 * Function: Unwind@140557c70
 * Address:  140557c70
 * Signature: undefined Unwind@140557c70(void)
 * Body size: 57 bytes
 */


void Unwind_140557c70(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x57);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x56) = uVar1;
  return;
}

