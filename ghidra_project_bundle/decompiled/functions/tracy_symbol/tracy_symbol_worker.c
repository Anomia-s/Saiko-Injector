/**
 * Function: tracy_symbol_worker
 * Address:  1401b3f10
 * Signature: undefined tracy_symbol_worker(void)
 * Body size: 434 bytes
 */


void tracy_symbol_worker(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  setthreaddescription("Tracy Symbol Worker",0);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x18c) == '\0') {
    FUN_1401b83e0();
    tracy_symbol_offline_resolve();
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    tracy_symbol_offline_resolve();
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  while (lVar3 == 0) {
    FUN_140041730();
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  do {
    while (bVar1 = *(byte *)(DAT_141526fc0 + 0x30), (*(byte *)(param_1 + 0x288) & 1) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x200);
      if (((lVar3 == *(longlong *)(param_1 + 0x240)) &&
          (*(longlong *)(param_1 + 0x240) = *(longlong *)(param_1 + 0x180),
          *(longlong *)(param_1 + 0x180) == lVar3)) ||
         (lVar3 * 0x20 + *(longlong *)(param_1 + 0x148) == -0x40)) {
        if ((bVar1 & 1) != 0) {
          DAT_141526c28 = 1;
          return;
        }
        FUN_140041730();
      }
      else {
        unresolved();
        lVar2 = *(longlong *)(param_1 + 0x200) + 1;
        lVar3 = 0;
        if (lVar2 != *(longlong *)(param_1 + 0x140)) {
          lVar3 = lVar2;
        }
        *(longlong *)(param_1 + 0x200) = lVar3;
      }
    }
    if ((bVar1 & 1) != 0) {
      DAT_141526c28 = 1;
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x200);
    if (lVar3 != *(longlong *)(param_1 + 0x240)) goto LAB_1401b4067;
    while (*(longlong *)(param_1 + 0x240) = *(longlong *)(param_1 + 0x180),
          *(longlong *)(param_1 + 0x180) != lVar3) {
LAB_1401b4067:
      do {
        if (lVar3 * 0x20 + *(longlong *)(param_1 + 0x148) == -0x40) goto LAB_1401b3f90;
        lVar2 = *(longlong *)(param_1 + 0x200) + 1;
        lVar3 = 0;
        if (lVar2 != *(longlong *)(param_1 + 0x140)) {
          lVar3 = lVar2;
        }
        *(longlong *)(param_1 + 0x200) = lVar3;
        lVar3 = *(longlong *)(param_1 + 0x200);
      } while (lVar3 != *(longlong *)(param_1 + 0x240));
    }
LAB_1401b3f90:
    FUN_140041730();
    *(undefined1 *)(param_1 + 0x298) = 0;
  } while( true );
}

