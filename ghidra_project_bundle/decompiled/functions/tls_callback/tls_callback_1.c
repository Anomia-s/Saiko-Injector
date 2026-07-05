/**
 * Function: tls_callback_1
 * Address:  140b683dc
 * Signature: undefined tls_callback_1(void)
 * Body size: 165 bytes
 */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void tls_callback_1(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int *_Memory;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    _Memory = *(int **)(lVar1 + 0x30);
    if (*(int **)(lVar1 + 0x30) != (int *)0x0) {
      while( true ) {
        iVar2 = *_Memory + -1;
        if (-1 < iVar2) {
          piVar3 = _Memory + ((longlong)iVar2 + 2) * 2;
          do {
            if (*(code **)piVar3 != (code *)0x0) {
              (**(code **)piVar3)();
            }
            piVar3 = piVar3 + -2;
            iVar2 = iVar2 + -1;
          } while (-1 < iVar2);
        }
        piVar3 = *(int **)(_Memory + 2);
        if (piVar3 == (int *)0x0) break;
        free(_Memory);
        *(int **)(lVar1 + 0x30) = piVar3;
        _Memory = piVar3;
      }
      *(undefined8 *)(lVar1 + 0x30) = 0;
    }
  }
  return;
}

