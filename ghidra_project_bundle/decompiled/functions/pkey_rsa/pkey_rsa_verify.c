/**
 * Function: pkey_rsa_verify
 * Address:  140bfb1c0
 * Signature: undefined pkey_rsa_verify(void)
 * Body size: 516 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong pkey_rsa_verify(longlong param_1,undefined8 param_2,ulonglong param_3,void *param_4,
                         size_t param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  size_t local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar7 = 0x140bfb1df;
  lVar1 = *(longlong *)(param_1 + 0x98);
  uVar4 = FUN_140c0a3e0(*(undefined8 *)(param_1 + 0x88));
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    iVar3 = FUN_140bfc400(lVar1,param_1);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_140c8d110(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar4,
                          CONCAT44(uVar6,*(undefined4 *)(lVar1 + 0x1c)),uVar7);
    local_res8 = (size_t)iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(lVar1 + 0x1c) == 1) {
      uVar2 = FUN_140b78ee0();
      uVar5 = FUN_140c8e870(uVar2,param_4,(undefined4)param_5,param_2,CONCAT44(uVar6,(int)param_3),
                            uVar4);
      return uVar5;
    }
    iVar3 = FUN_140b97b40();
    if (iVar3 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_pmeth.c",0x11c,"pkey_rsa_verify");
      FUN_140b91cc0(4,0x8f,0);
      return 0xffffffff;
    }
    if (param_5 != (longlong)iVar3) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_pmeth.c",0x120,"pkey_rsa_verify");
      FUN_140b91cc0(4,0x8f,0);
      return 0xffffffff;
    }
    if (*(int *)(lVar1 + 0x1c) != 5) {
      if (*(int *)(lVar1 + 0x1c) != 6) {
        return 0xffffffff;
      }
      iVar3 = FUN_140bfc400(lVar1,param_1);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      iVar3 = FUN_140c8d110(param_3 & 0xffffffff,param_2,*(undefined8 *)(lVar1 + 0x38),uVar4,
                            CONCAT44(uVar6,3),uVar7);
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = FUN_140c90270(uVar4,param_4,*(undefined8 *)(lVar1 + 0x20),
                            *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x38),
                            *(undefined4 *)(lVar1 + 0x30));
      if (iVar3 < 1) {
        return 0;
      }
      return 1;
    }
    iVar3 = pkey_rsa_verifyrecover(param_1,0,&local_res8,param_2,param_3);
    if (iVar3 < 1) {
      return 0;
    }
  }
  if (local_res8 != param_5) {
    return 0;
  }
  iVar3 = memcmp(param_4,*(void **)(lVar1 + 0x38),local_res8);
  return (ulonglong)(iVar3 == 0);
}

