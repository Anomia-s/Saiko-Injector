/**
 * Function: ossl_asn1_do_lock
 * Address:  140c62d10
 * Signature: undefined ossl_asn1_do_lock(void)
 * Body size: 258 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ossl_asn1_do_lock(longlong *param_1,int param_2,char *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar3 = -1;
  if ((((*param_3 == '\x01') || (*param_3 == '\x06')) &&
      (lVar1 = *(longlong *)(param_3 + 0x18), lVar1 != 0)) && ((*(byte *)(lVar1 + 8) & 1) != 0)) {
    piVar2 = (int *)((longlong)*(int *)(lVar1 + 0xc) + *param_1);
    plVar4 = (longlong *)((longlong)*(int *)(lVar1 + 0x10) + *param_1);
    if (param_2 == -1) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        cryptothreads_winc(*plVar4);
        *plVar4 = 0;
        return 0;
      }
    }
    else {
      if (param_2 == 0) {
        *piVar2 = 1;
        lVar1 = cryptothreads_winc();
        *plVar4 = lVar1;
        if (lVar1 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\asn1\\tasn_utl.c",0x5b,"ossl_asn1_do_lock");
          FUN_140b91cc0(0xd,0x8000f,0);
          return -1;
        }
        return 1;
      }
      if (param_2 == 1) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        iVar3 = iVar3 + 1;
      }
    }
    return iVar3;
  }
  return 0;
}

