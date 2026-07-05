/**
 * Function: sdlasynciod
 * Address:  14046d160
 * Signature: undefined sdlasynciod(void)
 * Body size: 349 bytes
 */


undefined8 sdlasynciod(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  FUN_1401552a0(DAT_1416f22d8);
  if (DAT_1416f22f4 == '\x01') {
    *(undefined4 *)(param_2 + 0x38) = 2;
    puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 0x30);
    FUN_1401552a0(*puVar1);
    *(undefined8 **)(param_2 + 0x68) = puVar1 + 2;
    lVar2 = puVar1[0x10];
    *(longlong *)(param_2 + 0x70) = lVar2;
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 0x68) = param_2;
    }
    puVar1[0x10] = param_2;
    FUN_140134300(puVar1[1]);
    FUN_1401552c0(*puVar1);
  }
  else {
    *(undefined **)(param_2 + 0x78) = &DAT_1416f22f8;
    *(longlong *)(param_2 + 0x80) = DAT_1416f2378;
    if (DAT_1416f2378 != 0) {
      *(longlong *)(DAT_1416f2378 + 0x78) = param_2;
    }
    DAT_1416f2378 = param_2;
    if ((DAT_1416f22e8 == 0) && (DAT_1416f22ec < DAT_1416f22d0)) {
      FUN_1400fd420(local_38,0x20,"SDLasyncio%d",DAT_1416f22f0);
      local_48 = _endthreadex_exref;
      lVar2 = sdlthreadcreateentry_function(FUN_14046d770,local_38,0,_beginthreadex_exref);
      if (lVar2 != 0) {
        FUN_1401382e0(lVar2);
        DAT_1416f22ec = DAT_1416f22ec + 1;
        DAT_1416f22f0 = DAT_1416f22f0 + 1;
      }
    }
    FUN_140134310(DAT_1416f22e0);
  }
  FUN_1401552c0(DAT_1416f22d8);
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_68)) {
    return CONCAT71((int7)((local_18 ^ (ulonglong)auStack_68) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_68);
}

