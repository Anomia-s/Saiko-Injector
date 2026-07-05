/**
 * Function: rsa_decrypt
 * Address:  140d4f380
 * Signature: undefined rsa_decrypt(void)
 * Body size: 872 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint rsa_decrypt(undefined8 *param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,
                undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  iVar1 = FUN_140c8d0a0(param_1[1]);
  uVar6 = (ulonglong)iVar1;
  iVar2 = FUN_140b69250();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 == 7) {
    if (param_2 == 0) {
      *param_3 = 0x30;
      return 1;
    }
    if (param_4 < 0x30) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0xf4;
LAB_140d4f3f7:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\asymciphers\\rsa_enc.c",uVar5,"rsa_decrypt");
      uVar5 = 0x8e;
      goto LAB_140d4f408;
    }
  }
  else {
    if (param_2 == 0) {
      if (iVar1 != 0) {
        *param_3 = uVar6;
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\asymciphers\\rsa_enc.c",0xfa,"rsa_decrypt");
      uVar5 = 0x9e;
      goto LAB_140d4f408;
    }
    if (param_4 < uVar6) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0x102;
      goto LAB_140d4f3f7;
    }
    if (iVar2 != 4) {
      if ((*(int *)(param_1 + 8) == 0) && (iVar2 == 1)) {
        iVar2 = 8;
      }
      iVar1 = FUN_140c8d130(param_6,param_5,param_2,param_1[1],CONCAT44(uVar7,iVar2));
      goto LAB_140d4f67c;
    }
  }
  lVar3 = FUN_140b8d8d0(uVar6,"providers\\implementations\\asymciphers\\rsa_enc.c",0x10b);
  if (lVar3 == 0) {
    return 0;
  }
  uVar5 = CONCAT44(uVar7,3);
  iVar2 = FUN_140c8d130(param_6,param_5,lVar3,param_1[1],uVar5);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (iVar2 != iVar1) {
    FUN_140b8d990(lVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0x114);
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\asymciphers\\rsa_enc.c",0x115,"rsa_decrypt");
    uVar5 = 0xa2;
LAB_140d4f408:
    FUN_140b91cc0(0x39,uVar5,0);
    return 0;
  }
  if (*(int *)(param_1 + 2) == 4) {
    lVar4 = param_1[3];
    if (lVar4 == 0) {
      lVar4 = FUN_140b71980(*param_1,&DAT_1413a7040,0);
      param_1[3] = lVar4;
      if (lVar4 == 0) {
        FUN_140b8d990(lVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0x11c);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\asymciphers\\rsa_enc.c",0x11d,"rsa_decrypt");
        uVar5 = 0xc0103;
        goto LAB_140d4f408;
      }
    }
    iVar1 = FUN_140c8f2d0(param_2,param_4 & 0xffffffff,lVar3,iVar1,CONCAT44(uVar7,iVar1),param_1[5],
                          *(undefined4 *)(param_1 + 6),lVar4,param_1[4]);
  }
  else {
    if (*(int *)(param_1 + 7) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\asymciphers\\rsa_enc.c",0x12a,"rsa_decrypt");
      FUN_140b91cc0(0x39,0xa1,0);
      FUN_140b8d990(lVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",299);
      return 0;
    }
    iVar1 = FUN_140cfd860(*param_1,param_2,param_4,lVar3,uVar6,CONCAT44(uVar8,*(int *)(param_1 + 7))
                          ,*(undefined4 *)((longlong)param_1 + 0x3c));
  }
  FUN_140b8d990(lVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0x132);
LAB_140d4f67c:
  uVar6 = (longlong)iVar1 >> 0x3f;
  *param_3 = *param_3 & uVar6 | (longlong)iVar1 & ~uVar6;
  return ~(iVar1 >> 0x1f) & 1;
}

