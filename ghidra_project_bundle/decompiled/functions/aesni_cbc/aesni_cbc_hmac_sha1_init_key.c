/**
 * Function: aesni_cbc_hmac_sha1_init_key
 * Address:  140ce4bb0
 * Signature: undefined aesni_cbc_hmac_sha1_init_key(void)
 * Body size: 325 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint aesni_cbc_hmac_sha1_init_key
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = FUN_140b987a0();
  iVar2 = FUN_140b981e0(param_1);
  if (iVar2 << 3 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\e_aes_cbc_hmac_sha1.c",0x4e,"aesni_cbc_hmac_sha1_init_key");
    FUN_140b91cc0(6,0x82,0);
    uVar3 = 0;
  }
  else {
    if (param_4 == 0) {
      uVar3 = FUN_140776b50(param_2,iVar2 << 3,lVar4);
    }
    else {
      uVar3 = FUN_140776bc0();
    }
    puVar1 = (undefined8 *)(lVar4 + 0xf4);
    FUN_140bcd2b0(puVar1);
    *(undefined8 *)(lVar4 + 0x218) = 0xffffffffffffffff;
    uVar3 = ~uVar3 >> 0x1f;
    *(undefined8 *)(lVar4 + 0x154) = *puVar1;
    *(undefined8 *)(lVar4 + 0x15c) = *(undefined8 *)(lVar4 + 0xfc);
    *(undefined8 *)(lVar4 + 0x164) = *(undefined8 *)(lVar4 + 0x104);
    *(undefined8 *)(lVar4 + 0x16c) = *(undefined8 *)(lVar4 + 0x10c);
    *(undefined8 *)(lVar4 + 0x174) = *(undefined8 *)(lVar4 + 0x114);
    *(undefined8 *)(lVar4 + 0x17c) = *(undefined8 *)(lVar4 + 0x11c);
    *(undefined8 *)(lVar4 + 0x184) = *(undefined8 *)(lVar4 + 0x124);
    *(undefined8 *)(lVar4 + 0x18c) = *(undefined8 *)(lVar4 + 300);
    *(undefined8 *)(lVar4 + 0x194) = *(undefined8 *)(lVar4 + 0x134);
    *(undefined8 *)(lVar4 + 0x19c) = *(undefined8 *)(lVar4 + 0x13c);
    *(undefined8 *)(lVar4 + 0x1a4) = *(undefined8 *)(lVar4 + 0x144);
    *(undefined8 *)(lVar4 + 0x1ac) = *(undefined8 *)(lVar4 + 0x14c);
    *(undefined8 *)(lVar4 + 0x1b4) = *puVar1;
    *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0xfc);
    *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x104);
    *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x10c);
    *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0x114);
    *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x11c);
    *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x124);
    *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 300);
    *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x134);
    *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x13c);
    *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x144);
    *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x14c);
  }
  return uVar3;
}

