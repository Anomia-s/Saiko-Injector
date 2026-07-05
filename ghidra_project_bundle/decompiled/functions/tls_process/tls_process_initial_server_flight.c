/**
 * Function: tls_process_initial_server_flight
 * Address:  140c36900
 * Signature: undefined tls_process_initial_server_flight(void)
 * Body size: 252 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint tls_process_initial_server_flight(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar3 = FUN_140c39d80();
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0xa20) == -1) ||
       (pcVar2 = *(code **)(lVar1 + 0x268), pcVar2 == (code *)0x0)) {
LAB_140c369c0:
      if (*(longlong *)(param_1 + 0xb60) != 0) {
        iVar3 = FUN_140b6ea20(param_1);
        if (iVar3 == 0) {
          return ~*(uint *)(param_1 + 0x948) & 1;
        }
      }
      return 1;
    }
    iVar3 = (*pcVar2)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar1 + 0x270));
    if (iVar3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0xb9f,"tls_process_initial_server_flight");
      uVar4 = 0x71;
      uVar5 = 0x148;
    }
    else {
      if (-1 < iVar3) goto LAB_140c369c0;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",0xba4,"tls_process_initial_server_flight");
      uVar4 = 0x50;
      uVar5 = 0x131;
    }
    FUN_140ba3290(param_1,uVar4,uVar5,0);
  }
  return 0;
}

