/**
 * Function: ssl_do_handshake
 * Address:  140b6b930
 * Signature: undefined ssl_do_handshake(void)
 * Body size: 339 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl_do_handshake(byte *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140b6b945;
  uVar5 = 1;
  if (param_1 != (byte *)0x0) {
    pbVar3 = param_1;
    if (*(int *)param_1 != 0) {
      if ((char)*(int *)param_1 < '\0') {
        pbVar3 = (byte *)FUN_140bc8b20();
      }
      else {
        pbVar3 = (byte *)0x0;
      }
    }
    if ((*param_1 & 0x80) != 0) {
      uVar5 = FUN_140bca210(param_1);
      return uVar5;
    }
    if (pbVar3 != (byte *)0x0) {
      if (*(longlong *)(pbVar3 + 0x70) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0x137d,"SSL_do_handshake");
        FUN_140b91cc0(0x14,0x90,0);
      }
      else {
        iVar1 = FUN_140ba33e0(pbVar3,0xffffffff);
        if (iVar1 != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x18) + 0x78))(param_1,0);
          iVar1 = FUN_140ba2f50(param_1);
          if ((iVar1 != 0) || (iVar1 = FUN_140ba2f90(param_1), iVar1 != 0)) {
            if (((*(uint *)(pbVar3 + 0x9b0) & 0x100) != 0) && (lVar4 = FUN_140ba0960(), lVar4 == 0))
            {
              local_30 = 0;
              uStack_28 = 0;
              local_20 = 0;
              uStack_18 = 0;
              local_38 = param_1;
              uVar5 = ssl_start_async_job(param_1,&local_38,FUN_140b6fc00);
              return uVar5;
            }
            uVar2 = (**(code **)(pbVar3 + 0x70))(param_1);
            uVar5 = (ulonglong)uVar2;
          }
          return uVar5;
        }
      }
    }
  }
  return 0xffffffff;
}

