/**
 * Function: file_open_stream
 * Address:  140d6fa90
 * Signature: undefined file_open_stream(void)
 * Body size: 187 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * file_open_stream(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140d713c0();
  if (lVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)
           FUN_140b8da80(0x48,"providers\\implementations\\storemgmt\\file_store.c",0x80);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 2) = 0;
    *puVar2 = param_1;
    puVar2[3] = lVar1;
    return puVar2;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\storemgmt\\file_store.c",0x9d,"file_open_stream");
  FUN_140b91cc0(0x39,0x80039,0);
  FUN_140b73150(lVar1);
  return (undefined8 *)0x0;
}

