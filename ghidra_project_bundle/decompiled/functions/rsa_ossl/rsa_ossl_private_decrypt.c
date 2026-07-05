/**
 * Function: rsa_ossl_private_decrypt
 * Address:  140ca7db0
 * Signature: undefined rsa_ossl_private_decrypt(void)
 * Body size: 1419 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rsa_ossl_private_decrypt
               (int param_1,undefined8 param_2,void *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  void *pvVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  int local_98;
  int local_94;
  void *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  pvVar7 = (void *)0x0;
  iVar1 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_98 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_80 = 0;
  if (((*(byte *)(param_4 + 0xa4) & 0x20) != 0) && (param_5 == 1)) {
    param_5 = 8;
  }
  local_94 = param_1;
  local_90 = param_3;
  local_78 = param_2;
  lVar3 = FUN_140c936d0(*(undefined8 *)(param_4 + 8));
  _Src = pvVar7;
  if (lVar3 == 0) goto LAB_140ca7ea6;
  bn_ctx_start(lVar3);
  uVar4 = FUN_140c93a20(lVar3);
  lVar5 = FUN_140c93a20(lVar3);
  local_88 = lVar5;
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar4 = 0x224;
    iVar1 = 0;
LAB_140ca7e83:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rsa\\rsa_ossl.c",uVar4,"rsa_ossl_private_decrypt");
    uVar4 = 0x80003;
  }
  else {
    iVar1 = FUN_140bfc870(*(undefined8 *)(param_4 + 0x28));
    iVar1 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
    _Src = (void *)FUN_140b8d8d0((longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x228);
    if (_Src == (void *)0x0) goto LAB_140ca7ea6;
    if (iVar1 < local_94) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ossl.c",0x231,"rsa_ossl_private_decrypt");
      uVar4 = 0x6c;
    }
    else if (local_94 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ossl.c",0x236,"rsa_ossl_private_decrypt");
      uVar4 = 0x6f;
    }
    else {
      lVar6 = FUN_140bfcc40(local_78,local_94,uVar4);
      if (lVar6 == 0) goto LAB_140ca7ea6;
      iVar2 = FUN_140bfd180(uVar4,*(undefined8 *)(param_4 + 0x28));
      if (iVar2 < 0) {
        if (((*(byte *)(param_4 + 0xa4) & 2) != 0) &&
           (lVar6 = FUN_140c92e90(param_4 + 0xa8,*(undefined8 *)(param_4 + 0xd0),
                                  *(undefined8 *)(param_4 + 0x28),lVar3), lVar6 == 0))
        goto LAB_140ca7ea6;
        if ((*(byte *)(param_4 + 0xa4) & 0x80) == 0) {
          pvVar7 = (void *)FUN_140ca8da0(param_4,&local_98,lVar3);
          if (pvVar7 == (void *)0x0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_ossl.c",0x263,"rsa_ossl_private_decrypt");
            uVar4 = 0xc0103;
            goto LAB_140ca7e94;
          }
          if (local_98 == 0) {
            lVar5 = FUN_140c93a20(lVar3);
            local_80 = lVar5;
            if (lVar5 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar4 = 0x26a;
              goto LAB_140ca7e83;
            }
            iVar2 = FUN_140cb4e00(pvVar7);
            if (iVar2 == 0) goto LAB_140ca7ea6;
            iVar2 = FUN_140cb4a60(uVar4,lVar5,pvVar7,lVar3);
            FUN_140cb4e20(pvVar7);
          }
          else {
            iVar2 = FUN_140cb4a60(uVar4,0,pvVar7,lVar3);
          }
          lVar5 = local_88;
          if (iVar2 == 0) goto LAB_140ca7ea6;
        }
        if ((((*(byte *)(param_4 + 0xa4) & 0x20) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
           (((*(longlong *)(param_4 + 0x40) == 0 ||
             (((*(longlong *)(param_4 + 0x48) == 0 || (*(longlong *)(param_4 + 0x50) == 0)) ||
              (*(longlong *)(param_4 + 0x58) == 0)))) || (*(longlong *)(param_4 + 0x60) == 0)))) {
          lVar5 = FUN_140bfcab0();
          if (lVar5 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar4 = 0x27c;
            goto LAB_140ca7e83;
          }
          if (*(longlong *)(param_4 + 0x38) == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_ossl.c",0x280,"rsa_ossl_private_decrypt");
            FUN_140b91cc0(4,0xb3,0);
          }
          else {
            FUN_140bfc6f0(lVar5,*(longlong *)(param_4 + 0x38),4);
            local_b0 = *(undefined8 **)(param_4 + 0xa8);
            local_b8 = lVar3;
            iVar2 = (**(code **)(*(longlong *)(param_4 + 0x18) + 0x30))
                              (local_88,uVar4,lVar5,*(undefined8 *)(param_4 + 0x28));
            if (iVar2 != 0) {
              FUN_140bfcf10(lVar5);
              lVar5 = local_88;
              goto LAB_140ca81ed;
            }
          }
          FUN_140bfcf10(lVar5);
          goto LAB_140ca7ea6;
        }
        iVar2 = (**(code **)(*(longlong *)(param_4 + 0x18) + 0x28))(lVar5,uVar4,param_4,lVar3);
        if (iVar2 == 0) goto LAB_140ca7ea6;
LAB_140ca81ed:
        if ((pvVar7 != (void *)0x0) &&
           (iVar2 = FUN_140ca8ed0(pvVar7,lVar5,local_80,lVar3), iVar2 == 0)) goto LAB_140ca7ea6;
        if (param_5 == 1) {
          local_b0 = &local_70;
          local_b8 = CONCAT44(local_b8._4_4_,iVar1);
          iVar2 = FUN_140ca8f30(local_94,local_78,param_4,_Src);
          if (iVar2 == 0) goto LAB_140ca7ea6;
        }
        iVar2 = FUN_140bfcca0(lVar5,_Src,iVar1);
        if (iVar2 < 0) goto LAB_140ca7ea6;
        if (param_5 == 1) {
          local_a8 = &local_70;
          local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,iVar1);
          local_b8 = CONCAT44(local_b8._4_4_,iVar2);
          iVar2 = FUN_140cfd4d0(*(undefined8 *)(param_4 + 8),local_90,iVar1,_Src);
        }
        else if (param_5 == 3) {
          memcpy(local_90,_Src,(longlong)iVar2);
        }
        else if (param_5 == 4) {
          local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
          local_b0 = (undefined8 *)0x0;
          local_b8 = CONCAT44(local_b8._4_4_,iVar1);
          iVar2 = FUN_140c8f220(local_90,iVar1,_Src,iVar2);
        }
        else {
          if (param_5 != 8) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\rsa\\rsa_ossl.c",0x2ad,"rsa_ossl_private_decrypt");
            uVar4 = 0x76;
            goto LAB_140ca7e94;
          }
          local_b8 = CONCAT44(local_b8._4_4_,iVar1);
          iVar2 = FUN_140cfd160(local_90,iVar1,_Src,iVar2);
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\rsa\\rsa_ossl.c",0x2b6,"rsa_ossl_private_decrypt");
        FUN_140b91cc0(4,0x72,0);
        FUN_140b92ab0(0xffffffffU - (iVar2 >> 0x1f) & 1);
        goto LAB_140ca7ea6;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\rsa\\rsa_ossl.c",599,"rsa_ossl_private_decrypt");
      uVar4 = 0x84;
    }
  }
LAB_140ca7e94:
  FUN_140b91cc0(4,uVar4,0);
LAB_140ca7ea6:
  FUN_140c93bc0(lVar3);
  FUN_140c93850(lVar3);
  FUN_140b8db20(_Src,(longlong)iVar1,"crypto\\rsa\\rsa_ossl.c",0x2bd);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_d8);
}

