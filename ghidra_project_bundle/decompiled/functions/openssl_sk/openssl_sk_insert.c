/**
 * Function: openssl_sk_insert
 * Address:  140b77e50
 * Signature: undefined openssl_sk_insert(void)
 * Body size: 299 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int openssl_sk_insert(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\stack\\stack.c",0x105,"OPENSSL_sk_insert");
    FUN_140b91cc0(0xf,0xc0102,0);
  }
  else {
    if (*param_1 == 0x7fffffff) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\stack\\stack.c",0x109,"OPENSSL_sk_insert");
      FUN_140b91cc0(0xf,0x72,0);
      return 0;
    }
    iVar1 = FUN_140b78770(param_1,1,0);
    if (iVar1 != 0) {
      iVar1 = *param_1;
      if ((param_3 < iVar1) && (-1 < param_3)) {
        memmove((void *)(*(longlong *)(param_1 + 2) + (longlong)(param_3 + 1) * 8),
                (void *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)),
                (longlong)(iVar1 - param_3) << 3);
        *(undefined8 *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)) = param_2;
      }
      else {
        *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = param_2;
      }
      *param_1 = *param_1 + 1;
      param_1[4] = 0;
      return *param_1;
    }
  }
  return 0;
}

