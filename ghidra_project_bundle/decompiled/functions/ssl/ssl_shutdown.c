/**
 * Function: ssl_shutdown
 * Address:  140b6bb70
 * Signature: undefined ssl_shutdown(void)
 * Body size: 340 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_shutdown(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined8 uStack_10;
  
  uStack_10 = 0x140b6bb80;
  if (param_1 != (byte *)0x0) {
    pbVar2 = param_1;
    if (*(int *)param_1 != 0) {
      if ((char)*(int *)param_1 < '\0') {
        pbVar2 = (byte *)FUN_140bc8b20();
      }
      else {
        pbVar2 = (byte *)0x0;
      }
    }
    if ((*param_1 & 0x80) != 0) {
      uVar3 = ossl_quic_conn_shutdown(param_1,0,0,0);
      return uVar3;
    }
    if (pbVar2 != (byte *)0x0) {
      if (*(longlong *)(pbVar2 + 0x70) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0xaf9,"SSL_shutdown");
        uVar3 = 0x114;
      }
      else {
        iVar1 = FUN_140ba2f50(param_1);
        if (iVar1 == 0) {
          if (((*(uint *)(pbVar2 + 0x9b0) & 0x100) != 0) && (lVar4 = FUN_140ba0960(), lVar4 == 0)) {
            local_1c = 0;
            local_30 = 0;
            uStack_28 = 0;
            local_20 = 2;
            uStack_18 = (undefined4)*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68);
            local_14 = (undefined4)
                       ((ulonglong)*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x68) >> 0x20);
            local_38 = param_1;
            uVar3 = ssl_start_async_job(param_1,&local_38,FUN_140b6f830);
            return uVar3;
          }
                    /* WARNING: Could not recover jumptable at 0x000140b6bc82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x68))
                            (param_1,*(code **)(*(longlong *)(param_1 + 0x18) + 0x68));
          return uVar3;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0xb0b,"SSL_shutdown");
        uVar3 = 0x197;
      }
      FUN_140b91cc0(0x14,uVar3,0);
    }
  }
  return 0xffffffff;
}

