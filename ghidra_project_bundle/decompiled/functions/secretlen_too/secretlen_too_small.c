/**
 * Function: secretlen_too_small
 * Address:  140d51890
 * Signature: undefined secretlen_too_small(void)
 * Body size: 557 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * secretlen_too_small(longlong *param_1,void *param_2,ulonglong *param_3,undefined8 param_4,
                          ulonglong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  char *pcVar6;
  void *_Src;
  void *pvVar7;
  
  lVar1 = param_1[8];
  pvVar7 = (void *)0x0;
  if (param_2 != (void *)0x0) {
    if (*param_5 < *(ulonglong *)(lVar1 + 0x20)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\ecx_kem.c",0x236,"dhkem_encap");
      pcVar6 = "*secretlen too small";
    }
    else {
      if (*(ulonglong *)(lVar1 + 0x28) <= *param_3) {
        lVar4 = ikm_length_is_zu_should_be_at_least_zu(param_1,param_1[5],param_1[6]);
        if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x10) & 1) == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\kem\\ecx_kem.c",0x98,"ecx_pubkey");
          FUN_140b91cc0(0x39,0xdc,0);
          _Src = pvVar7;
        }
        else {
          _Src = (void *)(lVar4 + 0x14);
        }
        lVar2 = *param_1;
        if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x10) & 1) == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\kem\\ecx_kem.c",0x98,"ecx_pubkey");
          FUN_140b91cc0(0x39,0xdc,0);
          pvVar5 = pvVar7;
        }
        else {
          pvVar5 = (void *)(lVar2 + 0x14);
        }
        if (((_Src != (void *)0x0) && (pvVar5 != (void *)0x0)) &&
           (iVar3 = ecx_pubkey(param_1,param_4,lVar4,*param_1,param_1[1],*param_1,_Src,pvVar5),
           iVar3 != 0)) {
          memcpy(param_2,_Src,*(size_t *)(lVar1 + 0x28));
          pvVar7 = (void *)0x1;
          *param_3 = *(ulonglong *)(lVar1 + 0x28);
          *param_5 = *(ulonglong *)(lVar1 + 0x20);
        }
        FUN_140c13180(lVar4);
        return pvVar7;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\ecx_kem.c",0x23a,"dhkem_encap");
      pcVar6 = "*enclen too small";
    }
    FUN_140b91cc0(0x39,0x8e,pcVar6);
    return (void *)0x0;
  }
  if (param_3 == (ulonglong *)0x0) {
    if (param_5 == (ulonglong *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    *param_3 = *(ulonglong *)(lVar1 + 0x28);
    if (param_5 == (ulonglong *)0x0) {
      return (void *)0x1;
    }
  }
  *param_5 = *(ulonglong *)(lVar1 + 0x20);
  return (void *)0x1;
}

