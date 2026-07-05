/**
 * Function: rsa_verify_directly
 * Address:  140d44730
 * Signature: undefined rsa_verify_directly(void)
 * Body size: 688 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool rsa_verify_directly(longlong param_1,undefined8 param_2,ulonglong param_3,void *param_4,
                        size_t param_5)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uStack_20 = 0x140d4474e;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    iVar1 = providersimplementationssignaturersa_sigc(param_1);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = FUN_140c8d110(param_3 & 0xffffffff,param_2,*(undefined8 *)(param_1 + 200),
                          *(undefined8 *)(param_1 + 0x10),
                          CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x68)));
    if (0 < iVar1) {
      sVar4 = (size_t)iVar1;
LAB_140d449b4:
      if (sVar4 != param_5) {
        return false;
      }
      iVar1 = memcmp(param_4,*(void **)(param_1 + 200),sVar4);
      return iVar1 == 0;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar2 = 0x452;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 1) {
      iVar1 = FUN_140c8e870(*(undefined4 *)(param_1 + 0x30),param_4,(undefined4)param_5,param_2,
                            CONCAT44(uVar5,(int)param_3),*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        return true;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar2 = 0x411;
    }
    else {
      if (iVar1 == 5) {
        iVar1 = providersimplementationssignaturersa_sigc(param_1);
        if (iVar1 == 0) {
          return false;
        }
        iVar1 = only_x931_or_pkcs1_v15_padding_allowed
                          (param_1,*(undefined8 *)(param_1 + 200),&local_28,0,param_2,param_3);
        if (iVar1 < 1) {
          return false;
        }
        sVar4 = CONCAT44(uStack_24,local_28);
        goto LAB_140d449b4;
      }
      if (iVar1 != 6) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\signature\\rsa_sig.c",0x446,"rsa_verify_directly");
        pcVar3 = "Only X.931, PKCS#1 v1.5 or PSS padding allowed";
        uVar2 = 0xa8;
        goto LAB_140d4486e;
      }
      iVar1 = FUN_140b97b40(*(longlong *)(param_1 + 0x20));
      sVar4 = 0;
      if (0 < iVar1) {
        sVar4 = (longlong)iVar1;
      }
      if (param_5 != sVar4) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\signature\\rsa_sig.c",0x428,"rsa_verify_directly");
        FUN_140b91cc0(0x39,0xa6,"Should be %d, but got %d",sVar4,param_5);
        return false;
      }
      iVar1 = providersimplementationssignaturersa_sigc(param_1);
      if (iVar1 == 0) {
        return false;
      }
      iVar1 = FUN_140c8d110(param_3 & 0xffffffff,param_2,*(undefined8 *)(param_1 + 200),
                            *(undefined8 *)(param_1 + 0x10),CONCAT44(uVar5,3));
      if (iVar1 < 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar2 = 0x433;
      }
      else {
        local_28 = *(undefined4 *)(param_1 + 0xb0);
        iVar1 = expected_d_retrieved_d
                          (*(undefined8 *)(param_1 + 0x10),param_4,*(undefined8 *)(param_1 + 0x20),
                           *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 200),&local_28)
        ;
        if (0 < iVar1) {
          return true;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar2 = 0x43c;
      }
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\signature\\rsa_sig.c",uVar2,"rsa_verify_directly");
  pcVar3 = (char *)0x0;
  uVar2 = 0x80004;
LAB_140d4486e:
  FUN_140b91cc0(0x39,uVar2,pcVar3);
  return false;
}

