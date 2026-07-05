/**
 * Function: Unwind@1405585f0
 * Address:  1405585f0
 * Signature: undefined Unwind@1405585f0(void)
 * Body size: 57 bytes
 */


void Unwind_1405585f0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4f);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined1 *)(param_2 + 0x4e) = uVar1;
  return;
}

