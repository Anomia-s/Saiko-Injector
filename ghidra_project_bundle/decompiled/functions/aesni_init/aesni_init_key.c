/**
 * Function: aesni_init_key
 * Address:  140b87d30
 * Signature: undefined aesni_init_key(void)
 * Body size: 345 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool aesni_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  bool bVar7;
  
  lVar3 = FUN_140b987a0();
  iVar1 = FUN_140b981e0(param_1);
  if (iVar1 << 3 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0x98,"aesni_init_key");
    FUN_140b91cc0(6,0x82,0);
    return false;
  }
  uVar4 = FUN_140b76060(param_1);
  iVar2 = FUN_140b97ed0(uVar4);
  if ((iVar2 - 1U < 2) && (param_4 == 0)) {
    iVar1 = FUN_140776b50(param_2,iVar1 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &LAB_140772890;
    pcVar6 = FUN_140776110;
    bVar7 = iVar2 == 2;
  }
  else {
    iVar1 = FUN_140776bc0(param_2,iVar1 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &LAB_140772840;
    if (iVar2 == 2) {
      pcVar5 = FUN_140776110;
      goto LAB_140b87e2b;
    }
    pcVar6 = (code *)&DAT_1407738a0;
    bVar7 = iVar2 == 5;
  }
  pcVar5 = (code *)0x0;
  if (bVar7) {
    pcVar5 = pcVar6;
  }
LAB_140b87e2b:
  *(code **)(lVar3 + 0x100) = pcVar5;
  if (-1 >= iVar1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0xae,"aesni_init_key");
    FUN_140b91cc0(6,0x8f,0);
  }
  return -1 < iVar1;
}

