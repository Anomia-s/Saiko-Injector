/**
 * Function: s_private_key_n
 * Address:  140d6ae70
 * Signature: undefined s_private_key_n(void)
 * Body size: 397 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool s_private_key_n(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x60);
    if (iVar1 == 0) {
      pcVar3 = "X25519";
    }
    else if (iVar1 == 1) {
      pcVar3 = "X448";
    }
    else if (iVar1 == 2) {
      pcVar3 = "ED25519";
    }
    else if (iVar1 == 3) {
      pcVar3 = "ED448";
    }
    if ((param_3 & 1) == 0) {
      if ((param_3 & 2) != 0) {
        if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\encode_decode\\encode_key2text.c",0x1a7,
                     "ecx_to_text");
          uVar2 = 0xdc;
          goto LAB_140d6afde;
        }
        iVar1 = FUN_140c078a0(param_1,"%s Public-Key:\n",pcVar3);
        if (iVar1 < 1) {
          return false;
        }
      }
    }
    else {
      if (*(longlong *)(param_2 + 0x50) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\encode_decode\\encode_key2text.c",0x19c,
                   "ecx_to_text");
        uVar2 = 0xdd;
        goto LAB_140d6afde;
      }
      iVar1 = FUN_140c078a0(param_1,"%s Private-Key:\n",pcVar3);
      if (iVar1 < 1) {
        return false;
      }
      iVar1 = FUN_140c11cf0(param_1,"priv:",*(undefined8 *)(param_2 + 0x50),
                            *(undefined8 *)(param_2 + 0x58));
      if (iVar1 == 0) {
        return false;
      }
    }
    iVar1 = FUN_140c11cf0(param_1,&DAT_1413a6c3c,param_2 + 0x14,*(undefined8 *)(param_2 + 0x58));
    return iVar1 != 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo(param_1,param_2,0);
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\encode_decode\\encode_key2text.c",0x187,"ecx_to_text");
  uVar2 = 0xc0102;
LAB_140d6afde:
  FUN_140b91cc0(0x39,uVar2,0);
  return false;
}

