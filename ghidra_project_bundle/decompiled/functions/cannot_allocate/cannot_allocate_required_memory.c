/**
 * Function: cannot_allocate_required_memory
 * Address:  140d28600
 * Signature: undefined cannot_allocate_required_memory(void)
 * Body size: 489 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cannot_allocate_required_memory(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_498 [32];
  undefined1 *local_478;
  undefined8 local_470;
  undefined1 local_468 [64];
  undefined4 local_428;
  undefined1 local_424;
  undefined1 local_423;
  undefined1 local_422;
  undefined1 local_421;
  undefined1 local_418 [1024];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140d2860c;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_498;
  if (param_1 != 0) {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x74) << 10;
    if (*(int *)(param_1 + 100) == 0) {
      lVar1 = FUN_140b8da80(lVar1,"providers\\implementations\\kdfs\\argon2.c",0x2e4);
    }
    else {
      lVar1 = FUN_140b8ddf0(lVar1,"providers\\implementations\\kdfs\\argon2.c",0x2e1);
    }
    *(longlong *)(param_1 + 0x68) = lVar1;
    if (lVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kdfs\\argon2.c",0x2e7,"initialize");
      FUN_140b91cc0(0x39,0xeb,"cannot allocate required memory");
    }
    else {
      FUN_140d283b0(local_468,param_1);
      FUN_14046e980(&local_428,8);
      uVar2 = 0;
      if (*(int *)(param_1 + 0x54) != 0) {
        do {
          local_423 = (undefined1)(uVar2 >> 8);
          local_422 = (undefined1)(uVar2 >> 0x10);
          local_421 = (undefined1)(uVar2 >> 0x18);
          local_478 = local_468;
          local_470 = 0x48;
          local_428 = 0;
          local_424 = (undefined1)uVar2;
          FUN_140d28a70(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),local_418,
                        0x400);
          FUN_140d26740((ulonglong)(uVar2 * *(int *)(param_1 + 0x7c)) * 0x400 +
                        *(longlong *)(param_1 + 0x68),local_418);
          local_478 = local_468;
          local_470 = 0x48;
          local_428 = 1;
          FUN_140d28a70(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),local_418,
                        0x400);
          FUN_140d26740((ulonglong)(uVar2 * *(int *)(param_1 + 0x7c) + 1) * 0x400 +
                        *(longlong *)(param_1 + 0x68),local_418);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x54));
      }
      FUN_14046e980(local_418,0x400);
      FUN_14046e980(local_468,0x48);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_498);
}

