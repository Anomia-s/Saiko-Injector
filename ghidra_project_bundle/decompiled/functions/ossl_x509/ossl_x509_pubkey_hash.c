/**
 * Function: ossl_x509_pubkey_hash
 * Address:  140c66580
 * Signature: undefined ossl_x509_pubkey_hash(void)
 * Body size: 357 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_x509_pubkey_hash(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140c6658c;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_skid.c",0x43,"ossl_x509_pubkey_hash");
    FUN_140b91cc0(0x22,0x72,0);
  }
  else {
    iVar1 = FUN_140b9df80(&local_68,&local_70,param_1);
    if ((iVar1 != 0) && (lVar2 = FUN_140b71980(local_68,&DAT_1413a6ffc,local_70), lVar2 != 0)) {
      lVar3 = FUN_140b90f50();
      if (lVar3 == 0) {
        FUN_140b719e0(lVar2);
      }
      else {
        local_88 = param_1;
        FUN_140b9df40(0,&local_60,&local_78,0);
        local_80 = 0;
        local_88 = lVar2;
        iVar1 = evp_digestupdate(local_60,(longlong)local_78,local_58,&local_74);
        if ((iVar1 == 0) || (iVar1 = FUN_140bec4a0(lVar3,local_58,local_74), iVar1 == 0)) {
          FUN_140b719e0(lVar2);
          FUN_140b90e80(lVar3);
        }
        else {
          FUN_140b719e0(lVar2);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_a8);
}

