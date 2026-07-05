/**
 * Function: tls_callback_0
 * Address:  140b68f38
 * Signature: undefined tls_callback_0(void)
 * Body size: 102 bytes
 */


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 0x169) != '\x01')) {
    *(undefined1 *)(lVar1 + 0x169) = 1;
    for (ppuVar2 = &PTR_FUN_1413e5620; ppuVar2 != (undefined **)&DAT_1413e5628;
        ppuVar2 = ppuVar2 + 1) {
      if ((code *)*ppuVar2 != (code *)0x0) {
        (*(code *)*ppuVar2)();
      }
    }
  }
  return;
}

