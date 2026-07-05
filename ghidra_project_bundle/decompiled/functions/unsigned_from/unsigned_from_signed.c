/**
 * Function: unsigned_from_signed
 * Address:  140b95dc0
 * Signature: undefined unsigned_from_signed(void)
 * Body size: 263 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int unsigned_from_signed(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(longlong *)(param_1 + 0x20) = param_3;
    return 1;
  }
  if (*(int *)(param_1 + 8) == 1) {
    cVar1 = *(char *)(param_2 + -1 + param_3) >> 7;
    uVar3 = 0x100000001;
LAB_140b95e67:
    iVar2 = FUN_140b95ba0(*(longlong *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),param_2,
                          param_3,cVar1,uVar3);
  }
  else {
    if (*(int *)(param_1 + 8) != 2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\params.c",0xe2,"general_set_int");
      FUN_140b91cc0(0xf,0x7c,0);
      goto LAB_140b95eb1;
    }
    if (-1 < *(char *)(param_2 + -1 + param_3)) {
      uVar3 = 0x100000000;
      cVar1 = '\0';
      goto LAB_140b95e67;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\params.c",0xb8,"unsigned_from_signed");
    FUN_140b91cc0(0xf,0x7d,0);
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    param_3 = *(longlong *)(param_1 + 0x18);
  }
LAB_140b95eb1:
  *(longlong *)(param_1 + 0x20) = param_3;
  return iVar2;
}

