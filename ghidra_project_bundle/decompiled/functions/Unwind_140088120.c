/**
 * Function: Unwind@140088120
 * Address:  140088120
 * Signature: undefined Unwind@140088120(void)
 * Body size: 73 bytes
 */


void Unwind_140088120(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x266);
  QString::~QString((QString *)(param_2 + 0x1d8));
  *(longlong *)(param_2 + 0x178) = param_2 + 0x208;
  *(undefined1 *)(param_2 + 0x271) = uVar1;
  return;
}

