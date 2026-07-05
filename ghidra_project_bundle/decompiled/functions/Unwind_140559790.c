/**
 * Function: Unwind@140559790
 * Address:  140559790
 * Signature: undefined Unwind@140559790(void)
 * Body size: 57 bytes
 */


void Unwind_140559790(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x43);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x42) = uVar1;
  return;
}

