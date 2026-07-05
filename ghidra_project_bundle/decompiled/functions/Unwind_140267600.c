/**
 * Function: Unwind@140267600
 * Address:  140267600
 * Signature: undefined Unwind@140267600(void)
 * Body size: 122 bytes
 */


void Unwind_140267600(undefined8 param_1,longlong param_2)

{
  QString::~QString((QString *)(param_2 + 0x100));
  *(byte *)(param_2 + 0x287) = (byte)*(undefined4 *)(param_2 + 0x274) ^ 1;
  return;
}

