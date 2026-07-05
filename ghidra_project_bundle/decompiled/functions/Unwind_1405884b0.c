/**
 * Function: Unwind@1405884b0
 * Address:  1405884b0
 * Signature: undefined Unwind@1405884b0(void)
 * Body size: 107 bytes
 */


void Unwind_1405884b0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_140084750(*(undefined8 *)(param_2 + 0xe0));
  piVar1 = (int *)**(undefined8 **)(param_2 + 0xf8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      free((void *)**(undefined8 **)(param_2 + 0xf8));
    }
  }
  FUN_14000dd40(*(undefined8 *)(param_2 + 200));
  FUN_14000dd40(*(undefined8 *)(param_2 + 0xc0));
  QString::~QString(*(QString **)(param_2 + 0xb8));
  QsciScintillaBase::~QsciScintillaBase(*(QsciScintillaBase **)(param_2 + 0x110));
  return;
}

