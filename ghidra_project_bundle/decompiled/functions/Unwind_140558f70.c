/**
 * Function: Unwind@140558f70
 * Address:  140558f70
 * Signature: undefined Unwind@140558f70(void)
 * Body size: 57 bytes
 */


void Unwind_140558f70(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x47);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x46) = uVar1;
  return;
}

