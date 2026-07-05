/**
 * Function: async_start_func
 * Address:  140ba0a20
 * Signature: undefined async_start_func(void)
 * Body size: 140 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_start_func(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_140b8b930(&DAT_1416ff9c0);
  if (puVar3 == (undefined8 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\async\\async.c",0x98,"async_start_func");
    FUN_140b91cc0(0x33,0xc0103,0);
    return;
  }
  do {
    lVar1 = puVar3[2];
    uVar2 = (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 0x18));
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
    *(undefined4 *)(lVar1 + 0x24) = 3;
    SwitchToFiber((LPVOID)*puVar3);
  } while( true );
}

