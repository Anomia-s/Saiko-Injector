/**
 * Function: sdigest_type_public_key_certificaten
 * Address:  140c69560
 * Signature: undefined sdigest_type_public_key_certificaten(void)
 * Body size: 532 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sdigest_type_public_key_certificaten
          (undefined8 param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 local_res10 [2];
  undefined1 local_18 [8];
  longlong local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_ac_tgt.c",0x6f,"i2r_OBJECT_DIGEST_INFO");
    FUN_140b91cc0(0xd,0xc0102,0);
    return 0;
  }
  lVar1 = param_2 + 0x30;
  iVar2 = FUN_140bd8720(&local_10);
  if (iVar2 == 0) {
    return 0;
  }
  if (local_10 == 0) {
    pcVar5 = "%*sDigest Type: Public Key\n";
  }
  else if (local_10 == 1) {
    pcVar5 = "%*sDigest Type: Public Key Certificate\n";
  }
  else {
    if (local_10 != 2) goto LAB_140c6962c;
    pcVar5 = "%*sDigest Type: Other\n";
  }
  FUN_140c078a0(param_3,pcVar5,param_4,&DAT_1413a2ad6);
LAB_140c6962c:
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_140c078a0(param_3,"%*sDigest Type Identifier: ",param_4,&DAT_1413a2ad6);
    FUN_140bde8c0(param_3,*(undefined8 *)(param_2 + 0x18));
    FUN_140b73bf0(param_3,&DAT_1413a7288);
  }
  iVar2 = FUN_140c078a0(param_3,"%*sSignature Algorithm: ",param_4,&DAT_1413a2ad6);
  if ((0 < iVar2) && (iVar2 = FUN_140bde8c0(param_3,*(undefined8 *)(param_2 + 0x20)), 0 < iVar2)) {
    FUN_140b73bf0(param_3,&DAT_1413a7288);
    iVar2 = FUN_140c078a0(param_3,"\n%*sSignature Value: ",param_4,&DAT_1413a2ad6);
    if (0 < iVar2) {
      iVar2 = FUN_140b964c0(*(undefined8 *)(param_2 + 0x20));
      if ((((iVar2 != 0) && (iVar2 = FUN_140c24470(iVar2,local_18,local_res10), iVar2 != 0)) &&
          (lVar3 = FUN_140c0a620(0,local_res10[0]), lVar3 != 0)) &&
         (*(code **)(lVar3 + 0xa0) != (code *)0x0)) {
        uVar4 = (**(code **)(lVar3 + 0xa0))(param_3,param_2 + 0x20,lVar1,param_4 + 4,0);
        return uVar4;
      }
      iVar2 = FUN_140b73860(param_3,&DAT_1413a7288,1);
      if (iVar2 == 1) {
        if (lVar1 == 0) {
          return 1;
        }
        uVar4 = FUN_140b9f530(param_3,lVar1,param_4 + 4);
        return uVar4;
      }
    }
  }
  return 0;
}

