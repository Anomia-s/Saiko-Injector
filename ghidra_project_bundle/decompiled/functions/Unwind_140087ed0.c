/**
 * Function: Unwind@140087ed0
 * Address:  140087ed0
 * Signature: undefined Unwind@140087ed0(void)
 * Body size: 70 bytes
 */


void Unwind_140087ed0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x276);
  uVar2 = *(undefined8 *)(param_2 + 0x1a0);
  QString::~QString((QString *)(param_2 + 0xe0));
  *(undefined8 *)(param_2 + 0x198) = uVar2;
  *(undefined1 *)(param_2 + 0x275) = uVar1;
  return;
}

