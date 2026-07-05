/**
 * Function: pkey_rsa_verifyrecover
 * Address:  140bfafe0
 * Signature: undefined pkey_rsa_verifyrecover(void)
 * Body size: 475 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int pkey_rsa_verifyrecover
              (longlong param_1,void *param_2,longlong *param_3,undefined8 param_4,
              undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x98);
  uVar6 = FUN_140c0a3e0(*(undefined8 *)(param_1 + 0x88));
  iVar2 = *(int *)(lVar1 + 0x1c);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    if (iVar2 == 5) {
      iVar2 = FUN_140bfc400(lVar1,param_1);
      if (iVar2 == 0) {
        return -1;
      }
      iVar2 = FUN_140c8d110((undefined4)param_5,param_4,*(undefined8 *)(lVar1 + 0x38),uVar6,
                            CONCAT44(uVar3,5));
      if (0 < iVar2) {
        iVar7 = iVar2 + -1;
        uVar3 = FUN_140b78ee0(*(undefined8 *)(lVar1 + 0x20));
        uVar4 = FUN_140c90230(uVar3);
        if (*(byte *)(*(longlong *)(lVar1 + 0x38) + -1 + (longlong)iVar2) == uVar4) {
          iVar5 = FUN_140b97b40(*(undefined8 *)(lVar1 + 0x20));
          if (iVar7 != iVar5) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_pmeth.c",0xef,"pkey_rsa_verifyrecover");
            FUN_140b91cc0(4,0x8f,0);
            return 0;
          }
          local_res8[0] = iVar7;
          if (param_2 != (void *)0x0) {
            memcpy(param_2,*(void **)(lVar1 + 0x38),(longlong)iVar2 - 1);
          }
          goto LAB_140bfb18f;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\rsa\\rsa_pmeth.c",0xeb,"pkey_rsa_verifyrecover");
        FUN_140b91cc0(4,100,0);
      }
    }
    else {
      if (iVar2 != 1) {
        return -1;
      }
      uVar3 = FUN_140b78ee0();
      iVar2 = cryptorsarsa_signc(uVar3,0,0,param_2,local_res8,param_4,param_5,uVar6);
      if (0 < iVar2) goto LAB_140bfb18f;
    }
    return 0;
  }
  local_res8[0] = FUN_140c8d110((undefined4)param_5,param_4,param_2,uVar6,CONCAT44(uVar3,iVar2));
LAB_140bfb18f:
  if (0 < local_res8[0]) {
    *param_3 = (longlong)local_res8[0];
    return 1;
  }
  return local_res8[0];
}

