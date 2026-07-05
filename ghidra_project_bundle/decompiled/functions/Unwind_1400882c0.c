/**
 * Function: Unwind@1400882c0
 * Address:  1400882c0
 * Signature: undefined Unwind@1400882c0(void)
 * Body size: 70 bytes
 */


void Unwind_1400882c0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x264);
  QString::~QString((QString *)(param_2 + 0x68));
  *(longlong *)(param_2 + 0x170) = param_2 + 600;
  *(undefined1 *)(param_2 + 0x270) = uVar1;
  return;
}

