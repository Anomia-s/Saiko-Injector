/**
 * Function: tracy_no_exit
 * Address:  1401aa190
 * Signature: undefined tracy_no_exit(void)
 * Body size: 3379 bytes
 */


longlong tracy_no_exit(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  char cVar3;
  _FILETIME _Var4;
  ulonglong uVar5;
  DWORD DVar6;
  longlong lVar7;
  void *_Dst;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar13;
  char *pcVar11;
  undefined8 *puVar12;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  _FILETIME local_90;
  _FILETIME local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  _FILETIME local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x10) = 0;
  DVar6 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x18) = DVar6;
  lVar7 = _Xtime_get_ticks();
  *(longlong *)(param_1 + 0x20) = lVar7 / 10000000;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0x100000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  _Dst = malloc(0x4020);
  if (((ulonglong)_Dst & 7) == 0 && _Dst != (void *)0x0) {
    memset(_Dst,0,0x4020);
  }
  *(void **)(param_1 + 0x88) = _Dst;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x18c) == '\0') {
    FUN_1401b83e0();
  }
  pcVar1 = (char *)(lVar7 + 0x18c);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar9 = *(longlong *)(lVar7 + 0x1a0);
  lVar8 = *(longlong *)(lVar9 + 0x3b60);
  if (lVar8 == 0) {
LAB_1401aa2b2:
    lVar8 = FUN_1401ba010(lVar9,0xd);
    if ((lVar8 != 0) ||
       (((0xc < *(uint *)(lVar9 + 0x1880) && (lVar8 = FUN_1401b9230(lVar9,0xd), lVar8 != 0)) ||
        (lVar8 = FUN_1401ba100(lVar9,0xd), lVar8 != 0)))) goto LAB_1401aa2c8;
    lVar8 = *(longlong *)(lVar9 + 0x3e88);
    if (lVar8 != 0) {
      *(longlong *)(lVar9 + 0x3e88) = lVar8 + -1;
      lVar8 = *(longlong *)(lVar9 + 0x3e88 + lVar8 * 8);
      if (lVar8 != 0) goto LAB_1401aa2c8;
    }
    lVar8 = FUN_1401ba010(lVar9,0xe);
    if (((lVar8 != 0) ||
        ((0xd < *(uint *)(lVar9 + 0x1880) && (lVar8 = FUN_1401b9230(lVar9,0xe), lVar8 != 0)))) ||
       (lVar8 = FUN_1401ba100(lVar9,0xe), lVar8 != 0)) goto LAB_1401aa2c8;
    lVar8 = *(longlong *)(lVar9 + 0x41b0);
    if (lVar8 != 0) {
      *(longlong *)(lVar9 + 0x41b0) = lVar8 + -1;
      lVar8 = *(longlong *)(lVar9 + 0x41b0 + lVar8 * 8);
      if (lVar8 != 0) goto LAB_1401aa2c8;
    }
    lVar8 = FUN_1401ba010(lVar9,0xf);
    if (((lVar8 != 0) ||
        ((0xe < *(uint *)(lVar9 + 0x1880) && (lVar8 = FUN_1401b9230(lVar9,0xf), lVar8 != 0)))) ||
       (lVar8 = FUN_1401ba100(lVar9,0xf), lVar8 != 0)) goto LAB_1401aa2c8;
    lVar8 = *(longlong *)(lVar9 + 0x44d8);
    if (lVar8 != 0) {
      *(longlong *)(lVar9 + 0x44d8) = lVar8 + -1;
      lVar8 = *(longlong *)(lVar9 + 0x44d8 + lVar8 * 8);
      if (lVar8 != 0) goto LAB_1401aa2c8;
    }
    lVar8 = FUN_1401ba010(lVar9,0x10);
    if ((lVar8 != 0) ||
       (((0xf < *(uint *)(lVar9 + 0x1880) && (lVar8 = FUN_1401b9230(lVar9,0x10), lVar8 != 0)) ||
        (lVar8 = FUN_1401ba100(lVar9,0x10), lVar8 != 0)))) goto LAB_1401aa2c8;
    lVar8 = *(longlong *)(lVar9 + 0x4800);
    if (lVar8 != 0) {
      *(longlong *)(lVar9 + 0x4800) = lVar8 + -1;
      lVar8 = *(longlong *)(lVar9 + 0x4800 + lVar8 * 8);
      if (lVar8 != 0) goto LAB_1401aa2c8;
    }
    lVar8 = FUN_1401ba010(lVar9,0x11);
    if (((lVar8 != 0) ||
        ((0x10 < *(uint *)(lVar9 + 0x1880) && (lVar8 = FUN_1401b9230(lVar9,0x11), lVar8 != 0)))) ||
       (lVar8 = FUN_1401ba100(lVar9,0x11), lVar8 != 0)) goto LAB_1401aa2c8;
    lVar8 = *(longlong *)(lVar9 + 0x4b28);
    if (lVar8 != 0) {
      *(longlong *)(lVar9 + 0x4b28) = lVar8 + -1;
      lVar8 = *(longlong *)(lVar9 + 0x4b28 + lVar8 * 8);
      if (lVar8 != 0) goto LAB_1401aa2c8;
    }
    lVar8 = FUN_1401ba010(lVar9,0x12);
    if (((lVar8 != 0) ||
        ((0x11 < *(uint *)(lVar9 + 0x1880) && (lVar8 = FUN_1401b9230(lVar9,0x12), lVar8 != 0)))) ||
       (lVar8 = FUN_1401ba100(lVar9,0x12), lVar8 != 0)) goto LAB_1401aa2c8;
    lVar8 = *(longlong *)(lVar9 + 0x4e50);
    if (lVar8 != 0) {
      *(longlong *)(lVar9 + 0x4e50) = lVar8 + -1;
      lVar8 = *(longlong *)(lVar9 + 0x4e50 + lVar8 * 8);
      if (lVar8 != 0) goto LAB_1401aa2c8;
    }
    lVar8 = FUN_1401ba010(lVar9,0x13);
    if ((lVar8 != 0) ||
       ((((0x12 < *(uint *)(lVar9 + 0x1880) && (lVar8 = FUN_1401b9230(lVar9,0x13), lVar8 != 0)) ||
         (lVar8 = FUN_1401ba100(lVar9,0x13), lVar8 != 0)) ||
        (lVar8 = FUN_1401b9230(lVar9,0xd), lVar8 != 0)))) goto LAB_1401aa2c8;
    lVar8 = 0;
  }
  else {
    *(longlong *)(lVar9 + 0x3b60) = lVar8 + -1;
    lVar8 = *(longlong *)(lVar9 + 0x3b60 + lVar8 * 8);
    if (lVar8 == 0) goto LAB_1401aa2b2;
LAB_1401aa2c8:
    *(undefined4 *)(lVar8 + 0xc) = 0x7e;
    *(longlong *)(lVar8 + 0x40) = lVar9;
    *(longlong *)(lVar9 + 0x1868) = *(longlong *)(lVar9 + 0x1868) + 1;
    lVar8 = lVar8 + 0x80;
  }
  plVar2 = (longlong *)(lVar7 + 0x1a0);
  *(longlong *)(param_1 + 0x90) = lVar8;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (*pcVar1 == '\0') {
    FUN_1401b83e0();
  }
  lVar7 = *plVar2;
  lVar9 = *(longlong *)(lVar7 + 0x2220);
  if (lVar9 == 0) {
LAB_1401aa329:
    lVar9 = FUN_1401ba010(lVar7,5);
    if (((lVar9 != 0) ||
        ((4 < *(uint *)(lVar7 + 0x1880) && (lVar9 = FUN_1401b9230(lVar7,5), lVar9 != 0)))) ||
       (lVar9 = FUN_1401ba100(lVar7,5), lVar9 != 0)) goto LAB_1401aa33f;
    lVar9 = *(longlong *)(lVar7 + 0x2548);
    if (lVar9 != 0) {
      *(longlong *)(lVar7 + 0x2548) = lVar9 + -1;
      lVar9 = *(longlong *)(lVar7 + 0x2548 + lVar9 * 8);
      if (lVar9 != 0) goto LAB_1401aa33f;
    }
    lVar9 = FUN_1401ba010(lVar7,6);
    if (((lVar9 != 0) ||
        ((5 < *(uint *)(lVar7 + 0x1880) && (lVar9 = FUN_1401b9230(lVar7,6), lVar9 != 0)))) ||
       (lVar9 = FUN_1401ba100(lVar7,6), lVar9 != 0)) goto LAB_1401aa33f;
    lVar9 = *(longlong *)(lVar7 + 0x2870);
    if (lVar9 != 0) {
      *(longlong *)(lVar7 + 0x2870) = lVar9 + -1;
      lVar9 = *(longlong *)(lVar7 + 0x2870 + lVar9 * 8);
      if (lVar9 != 0) goto LAB_1401aa33f;
    }
    lVar9 = FUN_1401ba010(lVar7,7);
    if (((lVar9 != 0) ||
        (((6 < *(uint *)(lVar7 + 0x1880) && (lVar9 = FUN_1401b9230(lVar7,7), lVar9 != 0)) ||
         (lVar9 = FUN_1401ba100(lVar7,7), lVar9 != 0)))) ||
       (lVar9 = FUN_1401b9230(lVar7,5), lVar9 != 0)) goto LAB_1401aa33f;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    cVar3 = *pcVar1;
  }
  else {
    *(longlong *)(lVar7 + 0x2220) = lVar9 + -1;
    lVar9 = *(longlong *)(lVar7 + 0x2220 + lVar9 * 8);
    if (lVar9 == 0) goto LAB_1401aa329;
LAB_1401aa33f:
    *(undefined4 *)(lVar9 + 0xc) = 0x7e;
    *(longlong *)(lVar9 + 0x40) = lVar7;
    *(longlong *)(lVar7 + 0x1868) = *(longlong *)(lVar7 + 0x1868) + 1;
    *(longlong *)(param_1 + 0xa0) = lVar9 + 0x80;
    cVar3 = *pcVar1;
  }
  if (cVar3 == '\0') {
    FUN_1401b83e0();
  }
  local_80 = param_1 + 0xa8;
  lVar7 = FUN_1401b9b30(*plVar2,0x2000000);
  *(longlong *)(param_1 + 0xa8) = lVar7;
  *(longlong *)(param_1 + 0xb0) = lVar7;
  *(longlong *)(param_1 + 0xb8) = lVar7 + 0x2000000;
  if (*pcVar1 == '\0') {
    FUN_1401b83e0();
  }
  lVar7 = FUN_1401b9b30(*plVar2,0x2000000);
  local_78 = param_1 + 0xc0;
  *(longlong *)(param_1 + 0xc0) = lVar7;
  *(longlong *)(param_1 + 200) = lVar7;
  *(longlong *)(param_1 + 0xd0) = lVar7 + 0x2000000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (*pcVar1 == '\0') {
    FUN_1401b83e0();
  }
  lVar7 = *plVar2;
  puVar12 = *(undefined8 **)(lVar7 + 0x248);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)FUN_1401b9c30(lVar7,(undefined8 *)(lVar7 + 0x248),0x18);
  }
  else {
    *(undefined8 *)(lVar7 + 0x248) = *puVar12;
  }
  local_70 = param_1 + 0xe0;
  *(undefined8 **)(param_1 + 0xe0) = puVar12;
  *(undefined8 **)(param_1 + 0xe8) = puVar12;
  *(undefined8 **)(param_1 + 0xf0) = puVar12 + 0x30;
  if (*pcVar1 == '\0') {
    FUN_1401b83e0();
  }
  lVar7 = *plVar2;
  puVar12 = *(undefined8 **)(lVar7 + 0x248);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)FUN_1401b9c30(lVar7,(undefined8 *)(lVar7 + 0x248),0x18);
  }
  else {
    *(undefined8 *)(lVar7 + 0x248) = *puVar12;
  }
  local_68 = param_1 + 0xf8;
  *(undefined8 **)(param_1 + 0xf8) = puVar12;
  *(undefined8 **)(param_1 + 0x100) = puVar12;
  *(undefined8 **)(param_1 + 0x108) = puVar12 + 0x30;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0x2001;
  if (*pcVar1 == '\0') {
    FUN_1401b83e0();
  }
  local_60 = param_1 + 0x140;
  lVar7 = *plVar2;
  uVar15 = 5;
  do {
    lVar9 = *(longlong *)(lVar7 + 0x1258 + uVar15 * 0x328);
    if (lVar9 != 0) {
      plVar10 = (longlong *)(uVar15 * 0x328 + lVar7 + 0x1258);
      *plVar10 = lVar9 + -1;
      lVar9 = plVar10[lVar9];
      if (lVar9 != 0) goto LAB_1401aa55a;
    }
    lVar9 = FUN_1401ba010(lVar7,uVar15);
    if (((lVar9 != 0) ||
        ((uVar15 <= *(uint *)(lVar7 + 0x1880) && (lVar9 = FUN_1401b9230(lVar7,uVar15), lVar9 != 0)))
        ) || (lVar9 = FUN_1401ba100(lVar7,uVar15), lVar9 != 0)) goto LAB_1401aa55a;
    bVar17 = uVar15 < 7;
    uVar15 = uVar15 + 1;
  } while (bVar17);
  lVar9 = FUN_1401b9230(lVar7,5);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
LAB_1401aa55a:
    *(undefined4 *)(lVar9 + 0xc) = 0x7e;
    *(longlong *)(lVar9 + 0x40) = lVar7;
    *(longlong *)(lVar7 + 0x1868) = *(longlong *)(lVar7 + 0x1868) + 1;
    lVar9 = lVar9 + 0x80;
  }
  *(longlong *)(param_1 + 0x148) = lVar9;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  if (*pcVar1 == '\0') {
    FUN_1401b83e0();
  }
  local_58 = param_1 + 0x2a8;
  lVar7 = *plVar2;
  uVar15 = 0x21;
  do {
    lVar9 = *(longlong *)(lVar7 + 0x1258 + uVar15 * 0x328);
    if (lVar9 != 0) {
      plVar10 = (longlong *)(uVar15 * 0x328 + lVar7 + 0x1258);
      *plVar10 = lVar9 + -1;
      lVar9 = plVar10[lVar9];
      if (lVar9 != 0) goto LAB_1401aa63a;
    }
    lVar9 = FUN_1401ba010(lVar7,uVar15);
    if (((lVar9 != 0) ||
        ((uVar15 <= *(uint *)(lVar7 + 0x1880) && (lVar9 = FUN_1401b9230(lVar7,uVar15), lVar9 != 0)))
        ) || (lVar9 = FUN_1401ba100(lVar7,uVar15), lVar9 != 0)) goto LAB_1401aa63a;
    bVar17 = uVar15 < 0x31;
    uVar15 = uVar15 + 1;
  } while (bVar17);
  lVar9 = FUN_1401b9230(lVar7,0x21);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
LAB_1401aa63a:
    *(undefined4 *)(lVar9 + 0xc) = 0x7e;
    *(longlong *)(lVar9 + 0x40) = lVar7;
    *(longlong *)(lVar7 + 0x1868) = *(longlong *)(lVar7 + 0x1868) + 1;
    lVar9 = lVar9 + 0x80;
  }
  *(longlong *)(param_1 + 0x2a8) = lVar9;
  *(longlong *)(param_1 + 0x2b0) = lVar9;
  *(longlong *)(param_1 + 0x2b8) = lVar9 + 0x200000;
  GetSystemTimes(&local_88,&local_50,&local_90);
  *(_FILETIME *)(param_1 + 0x2c0) = local_88;
  *(longlong *)(param_1 + 0x2c8) = (longlong)local_90 + (longlong)local_50;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  DAT_141526fc0 = param_1;
  lVar7 = FUN_1401ba7e0(&DAT_141526c30,&local_50);
  local_50 = (_FILETIME)(lVar7 + 8);
  if (lVar7 == 0) {
    local_50.dwLowDateTime = 0;
    local_50.dwHighDateTime = 0;
  }
  else {
    *(_FILETIME **)(lVar7 + 0x18) = &local_50;
    DVar6 = GetCurrentThreadId();
    *(DWORD *)((longlong)local_50 + 0x18) = DVar6;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  _Var4 = *(_FILETIME *)(lVar7 + 0x178);
  *(_FILETIME *)(lVar7 + 0x178) = local_50;
  if (local_50 != (_FILETIME)0x0) {
    *(longlong *)((longlong)local_50 + 0x10) =
         *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x178;
  }
  if (_Var4 != (_FILETIME)0x0) {
    *(undefined8 *)((longlong)_Var4 + 0x10) = 0;
    *(undefined1 *)((longlong)_Var4 + 8) = 1;
  }
  local_50 = _Var4;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x169) == '\0') {
    __dyn_tls_on_demand_init();
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar8 = *(longlong *)(lVar9 + 0x178);
    lVar7 = lVar8 + -8;
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    if (*(char *)(lVar9 + 0x169) != '\0') goto LAB_1401aa7f9;
    __dyn_tls_on_demand_init();
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(longlong *)(lVar9 + 0x180) = lVar7;
    uVar13 = *(undefined4 *)(param_1 + 0x18);
    if (*(char *)(lVar9 + 0x169) == '\0') {
      __dyn_tls_on_demand_init();
    }
  }
  else {
    lVar9 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x178
             );
    lVar7 = lVar9 + -8;
    if (lVar9 == 0) {
      lVar7 = 0;
    }
LAB_1401aa7f9:
    *(longlong *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x180) =
         lVar7;
    uVar13 = *(undefined4 *)(param_1 + 0x18);
  }
  *(undefined4 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x188) = uVar13
  ;
  lVar7 = FUN_1401ab5b0(param_1);
  lVar9 = 0x7fffffffffffffff;
  iVar16 = 500000;
  do {
    uVar15 = rdtsc();
    uVar13 = (undefined4)((ulonglong)lVar7 >> 0x20);
    uVar5 = rdtsc();
    lVar7 = (uVar5 & 0xffffffff00000000 | CONCAT44(uVar13,(int)uVar5)) -
            (uVar15 & 0xffffffff00000000 | CONCAT44(uVar13,(int)uVar15));
    lVar8 = lVar9;
    if (lVar7 < lVar9) {
      lVar8 = lVar7;
    }
    if (lVar7 < 1) {
      lVar8 = lVar9;
    }
    uVar15 = rdtsc();
    uVar5 = rdtsc();
    lVar14 = (uVar5 & 0xffffffff00000000 | CONCAT44(uVar13,(int)uVar5)) -
             (uVar15 & 0xffffffff00000000 | CONCAT44(uVar13,(int)uVar15));
    lVar7 = lVar14;
    if (lVar8 <= lVar14) {
      lVar7 = lVar8;
    }
    lVar9 = lVar8;
    if (0 < lVar14) {
      lVar9 = lVar7;
    }
    iVar16 = iVar16 + -2;
  } while (iVar16 != 0);
  *(longlong *)(param_1 + 8) = lVar9;
  getlogicalprocessorinformationex(param_1);
  pcVar11 = (char *)FUN_1401a5b90("TRACY_NO_EXIT");
  if ((pcVar11 != (char *)0x0) && (*pcVar11 == '1')) {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  pcVar11 = (char *)FUN_1401a5b90("TRACY_PORT");
  if (pcVar11 != (char *)0x0) {
    iVar16 = atoi(pcVar11);
    *(int *)(param_1 + 0x4c) = iVar16;
  }
  if (*pcVar1 == '\0') {
    FUN_1401b83e0();
  }
  lVar7 = *plVar2;
  lVar9 = *(longlong *)(lVar7 + 0x18a8);
  if (lVar9 == 0) {
LAB_1401aa920:
    lVar9 = FUN_1401ba010(lVar7,2);
    if (((lVar9 == 0) &&
        (((*(uint *)(lVar7 + 0x1880) < 2 || (lVar9 = FUN_1401b9230(lVar7,2), lVar9 == 0)) &&
         (lVar9 = FUN_1401ba100(lVar7,2), lVar9 == 0)))) &&
       (lVar9 = FUN_1401b9230(lVar7,2), lVar9 == 0)) {
      lVar9 = 0;
      goto LAB_1401aa94c;
    }
  }
  else {
    *(longlong *)(lVar7 + 0x18a8) = lVar9 + -1;
    lVar9 = *(longlong *)(lVar7 + 0x18a8 + lVar9 * 8);
    if (lVar9 == 0) goto LAB_1401aa920;
  }
  *(undefined4 *)(lVar9 + 0xc) = 0x7e;
  *(longlong *)(lVar9 + 0x40) = lVar7;
  *(longlong *)(lVar7 + 0x1868) = *(longlong *)(lVar7 + 0x1868) + 1;
  lVar9 = lVar9 + 0x80;
LAB_1401aa94c:
  *(longlong *)(param_1 + 0x310) = lVar9;
  tracy_no_sys_trace(param_1);
  return param_1;
}

