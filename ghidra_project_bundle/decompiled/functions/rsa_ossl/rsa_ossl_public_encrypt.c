/**
 * Function: rsa_ossl_public_encrypt
 * Address:  140ca71a0
 * Signature: undefined rsa_ossl_public_encrypt(void)
 * Body size: 883 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
rsa_ossl_public_encrypt
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar9;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar2 = 0;
  lVar7 = 0;
  uVar3 = 0xffffffff;
  iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",0x6c,"rsa_ossl_public_encrypt");
    FUN_140b91cc0(4,0x69,0);
    return 0xffffffff;
  }
  iVar1 = FUN_140bfd180(*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30));
  if (iVar1 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",0x71,"rsa_ossl_public_encrypt");
    FUN_140b91cc0(4,0x65,0);
    return 0xffffffff;
  }
  iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x28));
  if ((0xc00 < iVar1) && (iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x30)), 0x40 < iVar1)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",0x78,"rsa_ossl_public_encrypt");
    FUN_140b91cc0(4,0x65,0);
    return 0xffffffff;
  }
  lVar4 = FUN_140c936d0(*(undefined8 *)(param_4 + 8));
  if (lVar4 != 0) {
    bn_ctx_start(lVar4);
    uVar5 = FUN_140c93a20(lVar4);
    lVar6 = FUN_140c93a20(lVar4);
    iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x28));
    iVar2 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
    lVar7 = FUN_140b8d8d0((longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0x83);
    if ((lVar6 != 0) && (lVar7 != 0)) {
      if (param_5 == 1) {
        iVar1 = FUN_140cfdb70(*(undefined8 *)(param_4 + 8),lVar7,iVar2,param_2,
                              CONCAT44(uVar9,param_1));
      }
      else if (param_5 == 3) {
        iVar1 = FUN_140cfe100(lVar7,iVar2,param_2,param_1);
      }
      else {
        if (param_5 != 4) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\rsa\\rsa_ossl.c",0x95,"rsa_ossl_public_encrypt");
          FUN_140b91cc0(4,0x76,0);
          goto LAB_140ca74d2;
        }
        iVar1 = FUN_140c8fac0(*(undefined8 *)(param_4 + 8),lVar7,iVar2,param_2,
                              CONCAT44(uVar9,param_1),0,0,0,0);
      }
      if ((0 < iVar1) && (lVar8 = FUN_140bfcc40(lVar7,iVar2,uVar5), lVar8 != 0)) {
        iVar1 = FUN_140bfd180(uVar5,*(undefined8 *)(param_4 + 0x28));
        if (iVar1 < 0) {
          if ((((*(byte *)(param_4 + 0xa4) & 2) == 0) ||
              (lVar8 = FUN_140c92e90((undefined8 *)(param_4 + 0xa8),*(undefined8 *)(param_4 + 0xd0),
                                     *(undefined8 *)(param_4 + 0x28),lVar4), lVar8 != 0)) &&
             (iVar1 = (**(code **)(*(longlong *)(param_4 + 0x18) + 0x30))
                                (lVar6,uVar5,*(undefined8 *)(param_4 + 0x30),
                                 *(undefined8 *)(param_4 + 0x28),lVar4,
                                 *(undefined8 *)(param_4 + 0xa8)), iVar1 != 0)) {
            uVar3 = FUN_140bfcca0(lVar6,param_3,iVar2);
          }
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\rsa\\rsa_ossl.c",0xb8,"rsa_ossl_public_encrypt");
          FUN_140b91cc0(4,0x84,0);
        }
      }
    }
  }
LAB_140ca74d2:
  FUN_140c93bc0(lVar4);
  FUN_140c93850(lVar4);
  FUN_140b8db20(lVar7,(longlong)iVar2,"crypto\\rsa\\rsa_ossl.c",0xce);
  return uVar3;
}

