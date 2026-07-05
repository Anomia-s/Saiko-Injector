/**
 * Function: rsa_ossl_private_encrypt
 * Address:  140ca7520
 * Signature: undefined rsa_ossl_private_encrypt(void)
 * Body size: 1190 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
rsa_ossl_private_encrypt
          (undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res20 [2];
  undefined4 local_48;
  longlong local_40;
  
  lVar8 = 0;
  iVar1 = 0;
  local_res20[0] = 0;
  local_40 = 0;
  local_48 = 0xffffffff;
  lVar3 = FUN_140c936d0(*(undefined8 *)(param_4 + 8));
  lVar6 = lVar8;
  if (lVar3 == 0) goto LAB_140ca798c;
  bn_ctx_start(lVar3);
  lVar4 = FUN_140c93a20(lVar3);
  lVar5 = FUN_140c93a20(lVar3);
  iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x28));
  iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
  lVar6 = FUN_140b8d8d0((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x146);
  if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_140ca798c;
  if (param_5 == 1) {
    iVar2 = FUN_140cfced0(lVar6,iVar1,param_2,param_1);
  }
  else if (param_5 == 3) {
    iVar2 = FUN_140cfe100(lVar6,iVar1,param_2,param_1);
  }
  else {
    if (param_5 != 5) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ossl.c",0x155,"rsa_ossl_private_encrypt");
      FUN_140b91cc0(4,0x76,0);
      goto LAB_140ca798c;
    }
    iVar2 = FUN_140c90030(lVar6,iVar1,param_2,param_1);
  }
  if ((iVar2 < 1) || (lVar7 = FUN_140bfcc40(lVar6,iVar1,lVar4), lVar7 == 0)) goto LAB_140ca798c;
  iVar2 = FUN_140bfd180(lVar4,*(undefined8 *)(param_4 + 0x28));
  if (-1 < iVar2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",0x160,"rsa_ossl_private_encrypt");
    FUN_140b91cc0(4,0x84,0);
    goto LAB_140ca798c;
  }
  if (((*(byte *)(param_4 + 0xa4) & 2) != 0) &&
     (lVar7 = FUN_140c92e90(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),
                            *(undefined8 *)(param_4 + 0x28),lVar3), lVar7 == 0)) goto LAB_140ca798c;
  if ((*(byte *)(param_4 + 0xa4) & 0x80) == 0) {
    lVar8 = FUN_140ca8da0(param_4,local_res20,lVar3);
    if (lVar8 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ossl.c",0x16c,"rsa_ossl_private_encrypt");
      FUN_140b91cc0(4,0xc0103,0);
      goto LAB_140ca798c;
    }
    if (local_res20[0] == 0) {
      local_40 = FUN_140c93a20(lVar3);
      if (local_40 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\rsa\\rsa_ossl.c",0x173,"rsa_ossl_private_encrypt");
        FUN_140b91cc0(4,0x80003,0);
        goto LAB_140ca798c;
      }
      iVar2 = FUN_140cb4e00(lVar8);
      if (iVar2 == 0) goto LAB_140ca798c;
      iVar2 = FUN_140cb4a60(lVar4,local_40,lVar8,lVar3);
      FUN_140cb4e20(lVar8);
    }
    else {
      iVar2 = FUN_140cb4a60(lVar4,0,lVar8,lVar3);
    }
    if (iVar2 == 0) goto LAB_140ca798c;
  }
  if ((((*(byte *)(param_4 + 0xa4) & 0x20) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
     (((*(longlong *)(param_4 + 0x40) == 0 ||
       (((*(longlong *)(param_4 + 0x48) == 0 || (*(longlong *)(param_4 + 0x50) == 0)) ||
        (*(longlong *)(param_4 + 0x58) == 0)))) || (*(longlong *)(param_4 + 0x60) == 0)))) {
    lVar7 = FUN_140bfcab0();
    if (lVar7 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ossl.c",0x184,"rsa_ossl_private_encrypt");
      FUN_140b91cc0(4,0x80003,0);
      goto LAB_140ca798c;
    }
    if (*(longlong *)(param_4 + 0x38) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ossl.c",0x188,"rsa_ossl_private_encrypt");
      FUN_140b91cc0(4,0xb3,0);
    }
    else {
      FUN_140bfc6f0(lVar7,*(longlong *)(param_4 + 0x38),4);
      iVar2 = (**(code **)(*(longlong *)(param_4 + 0x18) + 0x30))
                        (lVar5,lVar4,lVar7,*(undefined8 *)(param_4 + 0x28),lVar3,
                         *(undefined8 *)(param_4 + 0xa8));
      if (iVar2 != 0) {
        FUN_140bfcf10(lVar7);
        goto LAB_140ca791e;
      }
    }
    FUN_140bfcf10(lVar7);
  }
  else {
    iVar2 = (**(code **)(*(longlong *)(param_4 + 0x18) + 0x28))(lVar5,lVar4,param_4,lVar3);
    if (iVar2 == 0) goto LAB_140ca798c;
LAB_140ca791e:
    if ((lVar8 == 0) || (iVar2 = FUN_140ca8ed0(lVar8,lVar5,local_40,lVar3), iVar2 != 0)) {
      if (param_5 == 5) {
        iVar2 = FUN_140c99e50(lVar4,*(undefined8 *)(param_4 + 0x28),lVar5);
        if (iVar2 == 0) goto LAB_140ca798c;
        iVar2 = FUN_140bfce80(lVar5,lVar4);
        if (0 < iVar2) {
          lVar5 = lVar4;
        }
      }
      local_48 = FUN_140bfcca0(lVar5,param_3,iVar1);
    }
  }
LAB_140ca798c:
  FUN_140c93bc0(lVar3);
  FUN_140c93850(lVar3);
  FUN_140b8db20(lVar6,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x1ae);
  return local_48;
}

