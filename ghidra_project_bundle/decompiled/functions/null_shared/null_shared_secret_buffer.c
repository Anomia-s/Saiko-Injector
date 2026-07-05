/**
 * Function: null_shared_secret_buffer
 * Address:  140d51dd0
 * Signature: undefined null_shared_secret_buffer(void)
 * Body size: 590 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
null_shared_secret_buffer
          (longlong *param_1,longlong param_2,ulonglong *param_3,longlong param_4,ulonglong *param_5
          )

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  plVar1 = (longlong *)*param_1;
  uVar4 = 0;
  uVar3 = 0;
  if (plVar1[8] == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\kem\\ml_kem_kem.c",0x9d,"ml_kem_encapsulate");
    FUN_140b91cc0(0x39,0x80,0);
    uVar3 = uVar4;
  }
  else {
    uVar2 = *(ulonglong *)(*plVar1 + 0x28);
    if (param_2 == 0) {
      if (param_3 == (ulonglong *)0x0) {
        if (param_5 == (ulonglong *)0x0) {
          return 0;
        }
      }
      else {
        *param_3 = uVar2;
        if (param_5 == (ulonglong *)0x0) {
          return 1;
        }
      }
      *param_5 = 0x20;
      return 1;
    }
    if (param_4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\ml_kem_kem.c",0xae,"ml_kem_encapsulate");
      FUN_140b91cc0(0x39,0xf8,"NULL shared-secret buffer");
      uVar3 = uVar4;
    }
    else if (param_3 == (ulonglong *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\ml_kem_kem.c",0xb4,"ml_kem_encapsulate");
      FUN_140b91cc0(0x39,0xf7,"null ciphertext input/output length pointer");
      uVar3 = uVar4;
    }
    else if (*param_3 < uVar2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\ml_kem_kem.c",0xb8,"ml_kem_encapsulate");
      FUN_140b91cc0(0x39,0x6a,"ciphertext buffer too small");
    }
    else {
      *param_3 = uVar2;
      if (param_5 == (ulonglong *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\kem\\ml_kem_kem.c",0xc0,"ml_kem_encapsulate");
        FUN_140b91cc0(0x39,0xf7,"null shared secret input/output length pointer");
      }
      else if (*param_5 < 0x20) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\kem\\ml_kem_kem.c",0xc4,"ml_kem_encapsulate");
        FUN_140b91cc0(0x39,0x6a,"shared-secret buffer too small");
      }
      else {
        *param_5 = 0x20;
        if (param_1[5] == 0) {
          uVar3 = FUN_140da2fd0(param_2,uVar2,param_4,0x20,plVar1);
        }
        else {
          uVar3 = FUN_140da2e40();
        }
      }
    }
  }
  if (param_1[5] != 0) {
    FUN_14046e980(param_1[5],0x20);
    param_1[5] = 0;
  }
  return uVar3;
}

