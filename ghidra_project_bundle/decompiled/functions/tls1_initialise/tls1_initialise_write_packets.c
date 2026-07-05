/**
 * Function: tls1_initialise_write_packets
 * Address:  140cc0380
 * Signature: undefined tls1_initialise_write_packets(void)
 * Body size: 392 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls1_initialise_write_packets
          (longlong param_1,char *param_2,undefined8 param_3,undefined1 *param_4,longlong param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x140cc03a4;
  if ((*(int *)(param_1 + 0x1018) == 0) || (*param_2 != '\x17')) {
    lVar2 = 0;
  }
  else {
    *(undefined8 *)(param_4 + 8) = 0;
    lVar2 = 1;
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)(param_4 + 0x10) = 0;
    *param_4 = 0x17;
    lVar3 = 7 - (ulonglong)((int)*param_6 - 4U & 7);
    param_6[3] = lVar3;
    iVar1 = FUN_140c21d10(param_5,*param_6,param_6[2],0);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\record\\methods\\tls1_meth.c",0x27d,"tls1_initialise_write_packets");
      FUN_140c40330(param_1,0x50,0xc0103,0);
      return 0;
    }
    *param_7 = 1;
    iVar1 = FUN_140c221d0(param_5,lVar3,0);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\record\\methods\\tls1_meth.c",0x282,"tls1_initialise_write_packets");
      FUN_140c40330(param_1,0x50,0xc0103,0);
      return 0;
    }
  }
  uVar4 = tls_initialise_write_packets_default
                    (param_1,param_2,param_3,0,lVar2 * 0x38 + param_5,param_6 + lVar2 * 6,param_7,
                     uVar4);
  return uVar4;
}

