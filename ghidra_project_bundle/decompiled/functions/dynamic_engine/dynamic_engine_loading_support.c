/**
 * Function: dynamic_engine_loading_support
 * Address:  140c73880
 * Signature: undefined dynamic_engine_loading_support(void)
 * Body size: 217 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dynamic_engine_loading_support(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140c10070();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = FUN_140c101e0(lVar2,PTR_s_dynamic_141517c70);
  if (iVar1 != 0) {
    iVar1 = FUN_140c10240(lVar2,PTR_s_Dynamic_engine_loading_support_141517c78);
    if (iVar1 != 0) {
      iVar1 = FUN_140c102b0(lVar2,FUN_140b69300);
      if (iVar1 != 0) {
        iVar1 = FUN_140c102c0(lVar2,FUN_140b69300);
        if (iVar1 != 0) {
          iVar1 = FUN_140c102d0(lVar2,FUN_140c73960);
          if (iVar1 != 0) {
            iVar1 = FUN_140c102e0(lVar2,4);
            if (iVar1 != 0) {
              iVar1 = FUN_140c102f0(lVar2,&DAT_141259af0);
              if (iVar1 != 0) {
                FUN_140b932f0();
                FUN_140c5b1a0(lVar2);
                FUN_140c10150(lVar2);
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_140c10150(lVar2);
  return;
}

