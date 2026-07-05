/**
 * Function: ssl_read_internal
 * Address:  140b6d7c0
 * Signature: undefined ssl_read_internal(void)
 * Body size: 401 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_read_internal(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140b6d7e0;
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
LAB_140b6d814:
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x50))(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    if (pbVar2 != (byte *)0x0) {
      if (*(longlong *)(pbVar2 + 0x70) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0x928,"ssl_read_internal");
        FUN_140b91cc0(0x14,0x114,0);
      }
      else {
        if ((pbVar2[0x84] & 2) != 0) {
          pbVar2[0x68] = 1;
          pbVar2[0x69] = 0;
          pbVar2[0x6a] = 0;
          pbVar2[0x6b] = 0;
          return 0;
        }
        if ((*(int *)(pbVar2 + 0xf0) == 1) || (*(int *)(pbVar2 + 0xf0) == 8)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0x933,"ssl_read_internal");
          FUN_140b91cc0(0x14,0xc0101,0);
          return 0;
        }
        iVar1 = FUN_140ba33e0(pbVar2,0);
        if (iVar1 != 0) {
          if (((*(uint *)(pbVar2 + 0x9b0) & 0x100) != 0) && (lVar4 = FUN_140ba0960(), lVar4 == 0)) {
            local_20 = 0;
            local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50);
            local_38 = param_1;
            local_30 = param_2;
            local_28 = param_3;
            uVar3 = ssl_start_async_job(param_1,&local_38,FUN_140b6f830);
            *param_4 = *(undefined8 *)(pbVar2 + 0x1528);
            return uVar3;
          }
          goto LAB_140b6d814;
        }
      }
    }
  }
  return 0xffffffff;
}

