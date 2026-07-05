/**
 * Function: tls_process_key_update
 * Address:  140bb83e0
 * Signature: undefined tls_process_key_update(void)
 * Body size: 266 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_process_key_update(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_140baaca0(param_1 + 0xc48);
  if (iVar3 != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0x2c9,"tls_process_key_update");
    uVar4 = 10;
    uVar5 = 0xb6;
    goto LAB_140bb84d2;
  }
  if (param_2[1] == 0) {
LAB_140bb84aa:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0x2cf,"tls_process_key_update");
    uVar4 = 0x32;
  }
  else {
    cVar2 = *(char *)*param_2;
    *param_2 = (char *)*param_2 + 1;
    lVar1 = param_2[1] + -1;
    param_2[1] = lVar1;
    if (lVar1 != 0) goto LAB_140bb84aa;
    if (cVar2 == '\0') {
LAB_140bb848d:
      iVar3 = client_traffic_secret_n(param_1,0);
      return iVar3 != 0;
    }
    if (cVar2 == '\x01') {
      *(undefined4 *)(param_1 + 0xb9c) = 0;
      goto LAB_140bb848d;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0x2d9,"tls_process_key_update");
    uVar4 = 0x2f;
  }
  uVar5 = 0x7a;
LAB_140bb84d2:
  FUN_140ba3290(param_1,uVar4,uVar5,0);
  return false;
}

