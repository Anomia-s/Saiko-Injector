/**
 * Function: tls_initialise_write_packets_default
 * Address:  140c41f90
 * Signature: undefined tls_initialise_write_packets_default(void)
 * Body size: 355 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_initialise_write_packets_default
          (longlong param_1,byte *param_2,ulonglong param_3,undefined8 param_4,longlong param_5,
          longlong param_6,longlong *param_7)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    plVar2 = (longlong *)(param_6 + 0x18);
    do {
      *(uint *)((longlong)plVar2 + 0x14) = (uint)*param_2;
      iVar1 = 4;
      if (*(int *)(param_1 + 0x10) != 0) {
        iVar1 = 0xc;
      }
      lVar4 = 7 - (ulonglong)(iVar1 + (int)plVar2[-3] & 7);
      *plVar2 = lVar4;
      iVar1 = FUN_140c21d10(param_5,plVar2[-3],plVar2[-1],0);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0x637,"tls_initialise_write_packets_default"
                  );
        FUN_140c40330(param_1,0x50,0xc0103,0);
        return 0;
      }
      *param_7 = *param_7 + 1;
      iVar1 = FUN_140c221d0(param_5,lVar4,0);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0x63c,"tls_initialise_write_packets_default"
                  );
        FUN_140c40330(param_1,0x50,0xc0103,0);
        return 0;
      }
      uVar3 = uVar3 + 1;
      param_5 = param_5 + 0x38;
      param_2 = param_2 + 0x18;
      plVar2 = plVar2 + 6;
    } while (uVar3 < param_3);
  }
  return 1;
}

