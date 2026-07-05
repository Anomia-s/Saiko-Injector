/**
 * Function: Unwind@14056e3c0
 * Address:  14056e3c0
 * Signature: undefined Unwind@14056e3c0(void)
 * Body size: 66 bytes
 */


void Unwind_14056e3c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  cVar1 = *(char *)(param_2 + 0x8f);
  QString::~QString((QString *)(param_2 + 0x60));
  if (cVar1 == '\x01') {
    thunk_FUN_140b68ba8(uVar2,0x50);
  }
  return;
}

