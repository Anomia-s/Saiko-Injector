/**
 * Function: intel_rdrand_engine
 * Address:  140c737b0
 * Signature: undefined intel_rdrand_engine(void)
 * Body size: 206 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void intel_rdrand_engine(void)

{
  int iVar1;
  longlong lVar2;
  
  if (((DAT_1416f2384 & 0x40000000) == 0) || (lVar2 = FUN_140c10070(), lVar2 == 0)) {
    return;
  }
  iVar1 = FUN_140c101e0(lVar2,PTR_s_rdrand_141517c60);
  if (((iVar1 != 0) &&
      (((iVar1 = FUN_140c10240(lVar2,PTR_s_Intel_RDRAND_engine_141517c68), iVar1 != 0 &&
        (iVar1 = FUN_140c102e0(lVar2,8), iVar1 != 0)) &&
       (iVar1 = FUN_140c102b0(lVar2,FUN_140b69250), iVar1 != 0)))) &&
     (iVar1 = FUN_140bd67f0(lVar2,&DAT_141517c30), iVar1 != 0)) {
    FUN_140b932f0();
    FUN_140c5b1a0(lVar2);
    FUN_140c10150(lVar2);
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    return;
  }
  FUN_140c10150(lVar2);
  return;
}

