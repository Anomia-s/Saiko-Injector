/**
 * Function: srp_generate_server_master_secret
 * Address:  140bc42a0
 * Signature: undefined srp_generate_server_master_secret(void)
 * Body size: 358 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong srp_generate_server_master_secret(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  uVar10 = 0x140bc42b8;
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar8 = 0;
  iVar2 = FUN_140c4ae10(*(undefined8 *)(param_1 + 0xc10),*(undefined8 *)(param_1 + 0xbf0));
  uVar7 = uVar8;
  uVar4 = uVar8;
  uVar5 = uVar8;
  if (((iVar2 != 0) &&
      (uVar4 = FUN_140c4aeb0(*(undefined8 *)(param_1 + 0xc10),*(undefined8 *)(param_1 + 0xc08),
                             *(undefined8 *)(param_1 + 0xbf0),*puVar1,puVar1[0x8c],uVar10),
      uVar7 = 0, uVar4 != 0)) &&
     (uVar5 = FUN_140c4ab70(*(undefined8 *)(param_1 + 0xc10),*(undefined8 *)(param_1 + 0xc28),uVar4,
                            *(undefined8 *)(param_1 + 0xc20),*(undefined8 *)(param_1 + 0xbf0)),
     uVar5 != 0)) {
    iVar2 = FUN_140bfc870(uVar5);
    lVar9 = (longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
    lVar6 = FUN_140b8d8d0(lVar9,"ssl\\tls_srp.c",0x158);
    if (lVar6 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\tls_srp.c",0x159,"srp_generate_server_master_secret");
      FUN_140ba3290(param_1,0x50,0x8000f,0);
      uVar7 = uVar8;
    }
    else {
      FUN_140bfcc70(uVar5,lVar6);
      uVar3 = FUN_140bed4e0(param_1,lVar6,lVar9,1);
      uVar7 = (ulonglong)uVar3;
    }
  }
  FUN_140bfcb30(uVar5);
  FUN_140bfcb30(uVar4);
  return uVar7;
}

