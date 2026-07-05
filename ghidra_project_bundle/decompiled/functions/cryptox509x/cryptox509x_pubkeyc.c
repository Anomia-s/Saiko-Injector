/**
 * Function: cryptox509x_pubkeyc
 * Address:  140b9ef30
 * Signature: undefined cryptox509x_pubkeyc(void)
 * Body size: 525 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong cryptox509x_pubkeyc(longlong *param_1,undefined8 *param_2,undefined4 param_3,
                            longlong param_4,longlong param_5,int param_6,code *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = *param_2;
  plVar4 = (longlong *)0x0;
  local_res10[0] = 0;
  lVar5 = 0;
  if (((param_4 != 0) || (param_5 != 0)) || (param_6 != 0)) {
    lVar2 = FUN_140b8da80(0x30,"crypto\\x509\\x_pubkey.c",0x1fb);
    if (lVar2 == 0) {
      return 0;
    }
    *(longlong *)(lVar2 + 0x18) = param_4;
    local_res10[0] = lVar2;
    FUN_140b8d990(*(undefined8 *)(lVar2 + 0x20),"crypto\\x509\\x_pubkey.c",0x34);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    if (param_5 != 0) {
      lVar3 = FUN_140b8c830(param_5,"crypto\\x509\\x_pubkey.c",0x37);
      *(longlong *)(lVar2 + 0x20) = lVar3;
      if (lVar3 == 0) goto LAB_140b9f117;
    }
    *(uint *)(local_res10[0] + 0x28) =
         (uint)(param_6 != 0) | *(uint *)(local_res10[0] + 0x28) & 0xfffffffe;
    plVar4 = local_res10;
  }
  lVar2 = (*param_7)(plVar4,&local_res20,param_3);
  if (lVar2 != 0) {
    lVar5 = *(longlong *)(lVar2 + 0x10);
    if (lVar5 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\x_pubkey.c",0x1d0,"X509_PUBKEY_get0");
      FUN_140b91cc0(6,0x72,0);
      FUN_140be0760(lVar2,&DAT_141232978);
      local_res10[0] = 0;
      lVar5 = 0;
    }
    else {
      iVar1 = FUN_140b7ee20(lVar5);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\x_pubkey.c",0x1dc,"X509_PUBKEY_get");
        FUN_140b91cc0(0xb,0xc0103,0);
        FUN_140be0760(lVar2,&DAT_141232978);
        local_res10[0] = 0;
        lVar5 = 0;
      }
      else {
        FUN_140be0760(lVar2,&DAT_141232978);
        *param_2 = local_res20;
        local_res10[0] = 0;
        if (param_1 != (longlong *)0x0) {
          FUN_140b7efe0(*param_1);
          *param_1 = lVar5;
        }
      }
    }
  }
LAB_140b9f117:
  FUN_140be0760(local_res10[0],&DAT_141232978);
  return lVar5;
}

