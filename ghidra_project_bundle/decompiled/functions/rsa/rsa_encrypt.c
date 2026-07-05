/**
 * Function: rsa_encrypt
 * Address:  140d4f040
 * Signature: undefined rsa_encrypt(void)
 * Body size: 569 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int rsa_encrypt(undefined8 *param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,
               undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  iVar1 = FUN_140c8d0a0(param_1[1]);
  uVar6 = (ulonglong)iVar1;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  if (uVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\asymciphers\\rsa_enc.c",0xad,"rsa_encrypt");
    uVar5 = 0x9e;
  }
  else {
    if (param_2 == 0) {
      *param_3 = uVar6;
      return 1;
    }
    if (uVar6 <= param_4) {
      if (*(int *)(param_1 + 2) == 4) {
        iVar1 = FUN_140c8d0a0(param_1[1]);
        lVar3 = FUN_140b8d8d0((longlong)iVar1,"providers\\implementations\\asymciphers\\rsa_enc.c",
                              0xbf);
        if (lVar3 == 0) {
          return 0;
        }
        lVar4 = param_1[3];
        if (lVar4 == 0) {
          lVar4 = FUN_140b71980(*param_1,&DAT_1413a7040,0);
          param_1[3] = lVar4;
          if (lVar4 == 0) {
            FUN_140b8d990(lVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0xc4);
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("providers\\implementations\\asymciphers\\rsa_enc.c",0xc5,"rsa_encrypt");
            uVar5 = 0xc0103;
            goto LAB_140d4f0ae;
          }
        }
        iVar2 = FUN_140c8fac0(*param_1,lVar3,iVar1,param_5,param_6,param_1[5],
                              *(undefined4 *)(param_1 + 6),lVar4,param_1[4]);
        if (iVar2 == 0) {
          FUN_140b8d990(lVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0xd2);
          return 0;
        }
        iVar1 = FUN_140c8d0d0(iVar1,lVar3,param_2,param_1[1],3);
        FUN_140b8d990(lVar3,"providers\\implementations\\asymciphers\\rsa_enc.c",0xd7);
      }
      else {
        iVar1 = FUN_140c8d0d0(param_6,param_5,param_2,param_1[1],*(int *)(param_1 + 2));
      }
      if (-1 < iVar1) {
        *param_3 = (longlong)iVar1;
        return 1;
      }
      return iVar1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\asymciphers\\rsa_enc.c",0xb7,"rsa_encrypt");
    uVar5 = 0x6a;
  }
LAB_140d4f0ae:
  FUN_140b91cc0(0x39,uVar5,0);
  return 0;
}

