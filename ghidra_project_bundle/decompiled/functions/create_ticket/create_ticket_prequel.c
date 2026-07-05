/**
 * Function: create_ticket_prequel
 * Address:  140bc3350
 * Signature: undefined create_ticket_prequel(void)
 * Body size: 465 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
create_ticket_prequel(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x8f8) + 0x2d8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  lVar5 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar2,8);
  uVar6 = (uVar1 - lVar5 >> 1) + lVar5 >> 0x1d;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    if (0x2260ff9290000 < uVar1) {
      uVar6 = 0x93a80;
    }
  }
  else {
    uVar6 = uVar6 & 0xffffffff;
    if (*(int *)(param_1 + 0x508) != 0) {
      uVar6 = 0;
    }
  }
  iVar3 = FUN_140c22430(param_2,uVar6 & 0xffffffff,4);
  if (iVar3 != 0) {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) &&
       ((iVar3 != 0x10000 &&
        ((iVar3 = FUN_140c22430(param_2,param_3,4), iVar3 == 0 ||
         (iVar3 = FUN_140c22660(param_2,param_4,8,1), iVar3 == 0)))))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0xf58,"create_ticket_prequel");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      uVar4 = 0;
    }
    else {
      iVar3 = FUN_140c22090(param_2,2);
      if (iVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_srvr.c",0xf5f,"create_ticket_prequel");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    return uVar4;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_srvr.c",0xf51,"create_ticket_prequel");
  FUN_140ba3290(param_1,0x50,0xc0103,0);
  return 0;
}

