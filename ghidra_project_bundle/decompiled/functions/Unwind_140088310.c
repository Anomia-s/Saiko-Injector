/**
 * Function: Unwind@140088310
 * Address:  140088310
 * Signature: undefined Unwind@140088310(void)
 * Body size: 70 bytes
 */


void Unwind_140088310(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x270);
  uVar2 = *(undefined8 *)(param_2 + 0x170);
  QString::~QString((QString *)(param_2 + 0x50));
  *(undefined8 *)(param_2 + 0x168) = uVar2;
  *(undefined1 *)(param_2 + 0x26f) = uVar1;
  return;
}

