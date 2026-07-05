/**
 * Function: conn_recvmmsg
 * Address:  140cdf190
 * Signature: undefined conn_recvmmsg(void)
 * Body size: 271 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
conn_recvmmsg(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    *param_6 = 0;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0x357,"conn_recvmmsg");
    FUN_140b91cc0(0x20,0xc0102,0);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x40);
  if ((*piVar1 != 5) && (iVar2 = hostnames_services(param_1,piVar1), iVar2 < 1)) {
    *param_6 = 0;
    return 0;
  }
  if (*(longlong *)(piVar1 + 0x10) == 0) {
    *param_6 = 0;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0x366,"conn_recvmmsg");
    FUN_140b91cc0(0x20,0xc0101,0);
    uVar3 = 0;
  }
  else {
    uVar3 = bio_recvmmsg(*(longlong *)(piVar1 + 0x10),param_2,param_3,param_4,param_5,param_6);
  }
  return uVar3;
}

