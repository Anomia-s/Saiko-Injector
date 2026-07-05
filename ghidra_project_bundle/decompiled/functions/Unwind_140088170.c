/**
 * Function: Unwind@140088170
 * Address:  140088170
 * Signature: undefined Unwind@140088170(void)
 * Body size: 70 bytes
 */


void Unwind_140088170(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x271);
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  QString::~QString((QString *)(param_2 + 0x1c0));
  *(undefined8 *)(param_2 + 0xa0) = uVar2;
  *(undefined1 *)(param_2 + 0x265) = uVar1;
  return;
}

