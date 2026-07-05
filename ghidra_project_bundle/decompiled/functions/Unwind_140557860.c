/**
 * Function: Unwind@140557860
 * Address:  140557860
 * Signature: undefined Unwind@140557860(void)
 * Body size: 57 bytes
 */


void Unwind_140557860(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x59);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x58) = uVar1;
  return;
}

