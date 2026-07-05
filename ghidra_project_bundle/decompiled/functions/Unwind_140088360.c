/**
 * Function: Unwind@140088360
 * Address:  140088360
 * Signature: undefined Unwind@140088360(void)
 * Body size: 69 bytes
 */


void Unwind_140088360(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x26f);
  uVar2 = *(undefined8 *)(param_2 + 0x168);
  QString::~QString((QString *)(param_2 + 0x80));
  *(undefined8 *)(param_2 + 0x160) = uVar2;
  *(undefined1 *)(param_2 + 0x26e) = uVar1;
  return;
}

