/**
 * Function: Unwind@14023c4e0
 * Address:  14023c4e0
 * Signature: undefined Unwind@14023c4e0(void)
 * Body size: 148 bytes
 */


void Unwind_14023c4e0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int *piVar2;
  QString *this;
  
  bVar1 = *(byte *)(param_2 + 0xfd);
  this = *(QString **)(param_2 + 0x98);
  piVar2 = *(int **)(param_2 + 0x150);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      free(*(void **)(param_2 + 0x150));
    }
  }
  if ((~bVar1 & 1) == 0 && (QString *)(param_2 + 0x100) != this) {
    do {
      this = this + -0x18;
      QString::~QString(this);
    } while (this != (QString *)(param_2 + 0x100));
  }
  return;
}

