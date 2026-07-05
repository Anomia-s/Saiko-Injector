/**
 * Function: unsupported_ml_kem_key_type_d
 * Address:  140da21b0
 * Signature: undefined unsupported_ml_kem_key_type_d(void)
 * Body size: 645 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * unsupported_ml_kem_key_type_d(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined **ppuVar3;
  
  if (param_3 == 0x5ae) {
    ppuVar3 = &PTR_s_ML_KEM_512_14131b500;
  }
  else if (param_3 == 0x5af) {
    ppuVar3 = &PTR_s_ML_KEM_768_14131b558;
  }
  else {
    if (param_3 != 0x5b0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\ml_kem\\ml_kem.c",0x652,"ossl_ml_kem_key_new");
      FUN_140b91cc0(0xf,0x80106,"unsupported ML-KEM key type: %d",param_3);
      return (longlong *)0x0;
    }
    ppuVar3 = &PTR_s_ML_KEM_1024_14131b5b0;
  }
  plVar1 = (longlong *)FUN_140b8d8d0(0xb8,"crypto\\ml_kem\\ml_kem.c",0x657);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)ppuVar3;
    plVar1[1] = param_1;
    *(undefined4 *)(plVar1 + 0xd) = 0xd;
    lVar2 = FUN_140b71980(param_1,"SHAKE128",param_2);
    plVar1[2] = lVar2;
    lVar2 = FUN_140b71980(param_1,"SHAKE256",param_2);
    plVar1[3] = lVar2;
    lVar2 = FUN_140b71980(param_1,"SHA3-256",param_2);
    plVar1[4] = lVar2;
    lVar2 = FUN_140b71980(param_1,"SHA3-512",param_2);
    plVar1[5] = lVar2;
    plVar1[0x16] = 0;
    plVar1[7] = 0;
    plVar1[6] = 0;
    plVar1[0xb] = 0;
    plVar1[0xc] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0;
    plVar1[10] = 0;
    if ((((plVar1[2] != 0) && (plVar1[3] != 0)) && (plVar1[4] != 0)) && (lVar2 != 0)) {
      return plVar1;
    }
    FUN_140b719e0();
    FUN_140b719e0(plVar1[3]);
    FUN_140b719e0(plVar1[4]);
    FUN_140b719e0(plVar1[5]);
    if ((plVar1[0x16] != 0) || ((plVar1[10] == 0 && (plVar1[0xc] != 0)))) {
      FUN_14046e980((longlong)plVar1 + 0x6c,0x40);
      if (plVar1[0x16] != 0) {
        FUN_14046e980(plVar1[0x16],*(undefined8 *)(*plVar1 + 8));
        FUN_140b8d990(plVar1[0x16],"crypto\\ml_kem\\ml_kem.c",0x6b5);
      }
    }
    if (plVar1[8] != 0) {
      if (plVar1[10] != 0) {
        FUN_14046e980(plVar1[10],(longlong)*(int *)(*plVar1 + 0x48) * 0x200 + 0x40);
      }
      FUN_140b8d990(plVar1[8],"crypto\\ml_kem\\ml_kem.c",0x632);
      plVar1[8] = 0;
      plVar1[9] = 0;
      plVar1[10] = 0;
      plVar1[0xb] = 0;
      plVar1[0xc] = 0;
    }
    FUN_140b8d990(plVar1,"crypto\\ml_kem\\ml_kem.c",0x6b9);
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\ml_kem\\ml_kem.c",0x66b,"ossl_ml_kem_key_new");
    FUN_140b91cc0(0xf,0xc0103,"missing SHA3 digest algorithms while creating %s key",*ppuVar3);
  }
  return (longlong *)0x0;
}

