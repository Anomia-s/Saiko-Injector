/**
 * Function: port_send_retry
 * Address:  140c5a660
 * Signature: undefined port_send_retry(void)
 * Body size: 991 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void port_send_retry(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_498 [32];
  ulonglong *local_478;
  undefined1 *local_470;
  longlong local_468 [2];
  ulonglong local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined1 *local_448;
  undefined1 local_440 [8];
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined1 local_420 [8];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408 [64];
  ulonglong local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined5 local_3a8;
  undefined3 uStack_3a3;
  undefined5 uStack_3a0;
  undefined4 uStack_39b;
  undefined1 uStack_397;
  undefined6 uStack_396;
  undefined1 *puStack_390;
  ulonglong local_388;
  ulonglong uStack_380;
  undefined1 *local_378;
  undefined8 local_368;
  ulonglong uStack_360;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_348;
  undefined4 uStack_347;
  undefined4 uStack_343;
  undefined4 uStack_33f;
  undefined4 uStack_33b;
  undefined1 uStack_337;
  undefined6 uStack_336;
  longlong lStack_330;
  ulonglong local_328 [2];
  undefined1 local_318 [208];
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_498;
  local_378 = (undefined1 *)0x0;
  uStack_3b0 = *(undefined4 *)(param_3 + 0x2d);
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_3ac = (uint)*(byte *)(param_3 + 0x31);
  local_348 = 0;
  uStack_347 = 0;
  uStack_343 = 0;
  uStack_33f = 0;
  uStack_33b = 0;
  uStack_337 = 0;
  uStack_336 = 0;
  lStack_330 = 0;
  local_328[0] = 0;
  local_328[1] = 0;
  uStack_3c0 = *(undefined8 *)(param_3 + 0x1d);
  local_3b8 = *(undefined8 *)(param_3 + 0x25);
  local_3c8 = 0;
  local_3a8 = 0;
  uStack_3a3 = 0;
  uStack_3a0 = 0;
  uStack_39b = 0;
  uStack_397 = 0;
  uStack_396 = 0;
  puStack_390 = (undefined1 *)0x0;
  local_388 = 0;
  uStack_380 = 0;
  iVar6 = FUN_140cce420(param_1[0x10],(longlong)&uStack_3ac + 1);
  uVar5 = uStack_397;
  uVar4 = uStack_39b;
  if (iVar6 != 0) {
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    local_328[0] = 0;
    local_368 = 0;
    uStack_360 = 0;
    uVar1 = *(undefined1 *)(param_3 + 0x1c);
    local_358 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    local_348 = 0;
    uStack_347 = 0;
    uStack_343 = 0;
    uStack_33f = 0;
    local_328[1] = 1;
    uStack_33b = 0;
    uStack_337 = 0;
    uStack_336 = 0;
    lStack_330 = 0;
    local_418 = CONCAT53(local_3a8,uStack_3ac._1_3_);
    uStack_410 = CONCAT53(uStack_3a0,uStack_3a3);
    local_458 = *(ulonglong *)(param_3 + 8);
    uStack_450 = *(undefined4 *)(param_3 + 0x10);
    uStack_44c = *(undefined4 *)(param_3 + 0x14);
    local_368 = FUN_140c21250();
    local_358 = CONCAT44(uStack_44c,uStack_450);
    uStack_360 = local_458;
    local_348 = (undefined1)((ulonglong)local_418 >> 0x18);
    uStack_347 = local_418._4_4_;
    uStack_343 = (undefined4)uStack_410;
    uStack_33f = uStack_410._4_4_;
    local_328[0] = 0;
    uStack_34c = CONCAT31((int3)local_418,uVar1);
    uStack_33b = uVar4;
    uStack_337 = uVar5;
    uStack_350 = uVar2;
    iVar6 = FUN_140bd79b0(param_2,0,&lStack_330);
    if ((((iVar6 == 0) || (lStack_330 == 0)) ||
        (local_328[0] = FUN_140b8d8d0(lStack_330,"ssl\\quic\\quic_port.c",0x363), local_328[0] == 0)
        ) || (iVar6 = FUN_140bd79b0(param_2,local_328[0],&lStack_330), iVar6 == 0)) {
      FUN_140b8d990(local_328[0],"ssl\\quic\\quic_port.c",0x349);
    }
    else {
      iVar6 = FUN_140c5a090(&local_368,local_248,local_468);
      lVar3 = local_468[0];
      if (iVar6 != 0) {
        iVar6 = FUN_140b98460(param_1[0x14]);
        if (((iVar6 != 0) && (iVar7 = FUN_140b98300(param_1[0x14]), 0 < iVar7)) &&
           (local_458 = (longlong)iVar7 + 0x10 + lVar3 + (longlong)iVar6, local_458 < 0xc6)) {
          local_478 = &local_458;
          iVar6 = FUN_140c5a220(param_1,local_248,local_468[0],local_318);
          if ((iVar6 != 0) && (0xf < local_458)) {
            uStack_3b0 = *(undefined4 *)(param_3 + 0x2d);
            uStack_3c0 = *(undefined8 *)(param_3 + 0x1d);
            local_3b8 = *(undefined8 *)(param_3 + 0x25);
            uStack_3ac = CONCAT31(uStack_3ac._1_3_,*(undefined1 *)(param_3 + 0x31));
            uStack_380 = local_458;
            local_3c8 = CONCAT44(1,(undefined4)local_3c8) & 0xffffffffffffff04 | 0x8004;
            local_378 = local_318;
            local_478 = (ulonglong *)((longlong)local_328 + local_458);
            iVar6 = ossl_quic_calculate_retry_integrity_tag
                              (*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],&local_3c8,
                               param_3 + 8);
            if (iVar6 != 0) {
              puStack_390 = local_378;
              local_388 = uStack_380;
              local_448 = local_248;
              local_430 = 0;
              local_428 = 0;
              local_438 = param_2;
              iVar6 = FUN_140c21d10(local_408,local_248,0x200,0);
              if ((((iVar6 != 0) &&
                   (iVar6 = FUN_140cc65d0(local_408,*(undefined1 *)(param_3 + 8),&local_3c8,0),
                   iVar6 != 0)) && (iVar6 = FUN_140c22710(local_408,local_440), iVar6 != 0)) &&
                 (iVar6 = FUN_140c21e60(local_408), iVar6 != 0)) {
                local_470 = local_420;
                local_478 = (ulonglong *)0x0;
                iVar6 = bio_sendmmsg(param_1[7],&local_448,0x28,1);
                if (iVar6 == 0) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\quic\\quic_port.c",0x4aa,"port_send_retry");
                  FUN_140b91cc0(0x14,0x183,"port retry send failed due to network BIO I/O error");
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_140b8d990(local_328[0],"ssl\\quic\\quic_port.c",0x349);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_498);
}

