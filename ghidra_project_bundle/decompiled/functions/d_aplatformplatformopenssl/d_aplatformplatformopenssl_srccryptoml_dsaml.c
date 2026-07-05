/**
 * Function: d_aplatformplatformopenssl_srccryptoml_dsaml
 * Address:  140d9f3e0
 * Signature: undefined d_aplatformplatformopenssl_srccryptoml_dsaml(void)
 * Body size: 292 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 d_aplatformplatformopenssl_srccryptoml_dsaml(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0x140d9f3f5;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  lVar2 = FUN_140b8d8d0(lVar3 << 10,
                        "D:\\a\\Platform\\Platform\\openssl-src\\crypto\\ml_dsa\\ml_dsa_vector.h",
                        0x24);
  if (lVar2 == 0) {
    return 0;
  }
  local_18 = lVar2;
  local_10 = lVar3;
  lVar3 = FUN_140b70980();
  if (lVar3 != 0) {
    iVar1 = d_aplatformplatformopenssl_srccryptoml_dsaml(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_140d9f620(param_1,lVar3,param_1 + 0xc0,&local_18);
      if (iVar1 != 0) {
        iVar1 = FUN_140d9f510(&local_18,param_1 + 0xd0);
        if (iVar1 != 0) {
          iVar1 = FUN_140d9ffc0(param_1);
          if (iVar1 != 0) {
            iVar1 = FUN_140d9f5a0(lVar3,*(undefined8 *)(param_1 + 0x18),
                                  *(undefined8 *)(param_1 + 0xa0),
                                  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48),param_1 + 0x40,
                                  0x40);
            if (iVar1 != 0) {
              uVar4 = 1;
              goto LAB_140d9f4c5;
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_140d9f4c5:
  FUN_140b8d990(lVar2,"D:\\a\\Platform\\Platform\\openssl-src\\crypto\\ml_dsa\\ml_dsa_vector.h",0x2e
               );
  FUN_140b709d0(lVar3);
  return uVar4;
}

