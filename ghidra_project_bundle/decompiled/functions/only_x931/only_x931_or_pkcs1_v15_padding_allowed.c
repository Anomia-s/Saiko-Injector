/**
 * Function: only_x931_or_pkcs1_v15_padding_allowed
 * Address:  140d40d00
 * Signature: undefined only_x931_or_pkcs1_v15_padding_allowed(void)
 * Body size: 722 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
only_x931_or_pkcs1_v15_padding_allowed
          (longlong param_1,void *param_2,ulonglong *param_3,ulonglong param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong _Size;
  char *pcVar6;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
    iVar1 = FUN_140c8d0a0(*(undefined8 *)(param_1 + 0x10));
    *param_3 = (longlong)iVar1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_140c8d110((undefined4)param_6,param_5,param_2,*(undefined8 *)(param_1 + 0x10),
                          CONCAT44(uVar7,iVar1));
    if (0 < iVar1) {
LAB_140d40f18:
      *param_3 = (longlong)iVar1;
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar5 = 0x3ee;
LAB_140d40dec:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",uVar5,"rsa_verify_recover");
    uVar5 = 0x80004;
  }
  else {
    if (iVar1 == 1) {
      iVar1 = cryptorsarsa_signc(*(undefined4 *)(param_1 + 0x30),0,0,param_2,local_res8,param_5,
                                 param_6,*(undefined8 *)(param_1 + 0x10));
      if (0 < iVar1) {
        *param_3 = (longlong)local_res8[0];
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x3de;
      goto LAB_140d40dec;
    }
    if (iVar1 != 5) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\rsa_sig.c",0x3e6,"rsa_verify_recover");
      pcVar6 = "Only X.931 or PKCS#1 v1.5 padding allowed";
      uVar5 = 0xa8;
      goto LAB_140d40e00;
    }
    iVar1 = providersimplementationssignaturersa_sigc(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    uVar5 = CONCAT44(uVar7,5);
    iVar2 = FUN_140c8d110((undefined4)param_6,param_5,*(undefined8 *)(param_1 + 200),
                          *(undefined8 *)(param_1 + 0x10),uVar5);
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (iVar2 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x3bc;
      goto LAB_140d40dec;
    }
    iVar1 = iVar2 + -1;
    uVar3 = FUN_140c90230(*(undefined4 *)(param_1 + 0x30));
    _Size = (longlong)iVar2 - 1;
    if (*(byte *)(*(longlong *)(param_1 + 200) + _Size) == uVar3) {
      iVar2 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
      if (iVar1 != iVar2) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\signature\\rsa_sig.c",0x3c5,"rsa_verify_recover");
        uVar4 = FUN_140b97b40(*(undefined8 *)(param_1 + 0x20));
        FUN_140b91cc0(0x39,0xa6,"Should be %d, but got %d",uVar4,CONCAT44(uVar7,iVar1));
        return 0;
      }
      *param_3 = _Size;
      if (param_2 != *(void **)(param_1 + 200)) {
        if (param_4 < _Size) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\signature\\rsa_sig.c",0x3ce,"rsa_verify_recover");
          FUN_140b91cc0(0x39,0x6a,"buffer size is %d, should be %d",param_4,CONCAT44(uVar7,iVar1));
          return 0;
        }
        memcpy(param_2,*(void **)(param_1 + 200),_Size);
      }
      goto LAB_140d40f18;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\rsa_sig.c",0x3c1,"rsa_verify_recover");
    uVar5 = 0xad;
  }
  pcVar6 = (char *)0x0;
LAB_140d40e00:
  FUN_140b91cc0(0x39,uVar5,pcVar6);
  return 0;
}

