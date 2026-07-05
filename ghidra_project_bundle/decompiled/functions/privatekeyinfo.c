/**
 * Function: privatekeyinfo
 * Address:  140d6e720
 * Signature: undefined privatekeyinfo(void)
 * Body size: 886 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void privatekeyinfo(undefined8 param_1,int param_2,undefined8 param_3,code *param_4,
                   undefined8 param_5,code *param_6,longlong param_7,undefined8 param_8,
                   undefined8 param_9)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_638 [32];
  longlong local_618;
  undefined8 *local_610;
  int *local_608;
  undefined4 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  int local_5e8 [2];
  undefined8 *local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  ulonglong local_5c0;
  undefined4 *local_5b8;
  undefined8 local_5b0;
  code *local_5a8;
  undefined1 local_5a0 [40];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined8 local_490;
  undefined1 local_488 [64];
  undefined1 local_448 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140d6e742;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_638;
  local_5b0 = param_5;
  local_5d8 = param_9;
  local_5c8 = 0;
  local_5e0 = (undefined8 *)0x0;
  local_5d0 = param_1;
  local_5a8 = param_4;
  FUN_140b932f0();
  lVar3 = FUN_140c6f6a0(0,&local_5d0,param_2);
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
  }
  else {
    local_5c0 = 0;
    FUN_140b93470();
    local_618 = param_7;
    iVar2 = (*param_6)(local_448,0x400,&local_5c0,0);
    if (iVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\decode_epki2pki.c",0x88,
                 "ossl_epki2pki_der_decode");
      FUN_140b91cc0(0x39,0x9f,0);
      FUN_140c6f680(lVar3);
    }
    else {
      local_5e8[0] = 0;
      FUN_140c6ea90(lVar3,&local_5e0,&local_5b8);
      local_5f0 = local_5d8;
      local_608 = local_5e8;
      local_5f8 = param_8;
      local_600 = 0;
      local_610 = &local_5c8;
      local_618 = CONCAT44(local_618._4_4_,*local_5b8);
      lVar4 = maybe_wrong_password
                        (local_5e0,local_448,local_5c0 & 0xffffffff,*(undefined8 *)(local_5b8 + 2));
      uVar1 = local_5c8;
      iVar2 = local_5e8[0];
      if (lVar4 == 0) {
        local_5e0 = (undefined8 *)0x0;
        FUN_140c6f680(lVar3);
      }
      else {
        local_5e0 = (undefined8 *)0x0;
        FUN_140c6f680(lVar3);
        param_1 = uVar1;
        param_2 = iVar2;
      }
    }
  }
  FUN_140b932f0();
  local_5d0 = param_1;
  lVar3 = FUN_140c6c200(0,&local_5d0,param_2);
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  if (lVar3 != 0) {
    local_618 = lVar3;
    iVar2 = FUN_140c6c2f0(0,0,0,&local_5e0);
    if (iVar2 != 0) {
      local_5d8 = CONCAT44(local_5d8._4_4_,2);
      FUN_140b96640(local_488,0x32,*local_5e0,0);
      puVar5 = (undefined8 *)FUN_140b93780(local_5a0,"data-type",local_488,0);
      local_578 = *puVar5;
      uStack_570 = puVar5[1];
      local_568 = *(undefined4 *)(puVar5 + 2);
      uStack_564 = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_560 = *(undefined4 *)(puVar5 + 3);
      uStack_55c = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_558 = puVar5[4];
      puVar5 = (undefined8 *)FUN_140b93780(local_5a0,"input-type",&DAT_1413a67ac,0);
      local_550 = *puVar5;
      uStack_548 = puVar5[1];
      local_540 = *(undefined4 *)(puVar5 + 2);
      uStack_53c = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_538 = *(undefined4 *)(puVar5 + 3);
      uStack_534 = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_530 = puVar5[4];
      puVar5 = (undefined8 *)FUN_140b93780(local_5a0,"data-structure","PrivateKeyInfo",0);
      local_528 = *puVar5;
      uStack_520 = puVar5[1];
      local_518 = *(undefined4 *)(puVar5 + 2);
      uStack_514 = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_510 = *(undefined4 *)(puVar5 + 3);
      uStack_50c = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_508 = puVar5[4];
      puVar5 = (undefined8 *)FUN_140b93860(local_5a0,&DAT_1413a6588,param_1,(longlong)param_2);
      local_500 = *puVar5;
      uStack_4f8 = puVar5[1];
      local_4f0 = *(undefined4 *)(puVar5 + 2);
      uStack_4ec = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_4e8 = *(undefined4 *)(puVar5 + 3);
      uStack_4e4 = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_4e0 = puVar5[4];
      puVar5 = (undefined8 *)FUN_140b935b0(local_5a0,&DAT_1413a6260,&local_5d8);
      local_4d8 = *puVar5;
      uStack_4d0 = puVar5[1];
      local_4c8 = *(undefined4 *)(puVar5 + 2);
      uStack_4c4 = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_4c0 = *(undefined4 *)(puVar5 + 3);
      uStack_4bc = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_4b8 = puVar5[4];
      puVar5 = (undefined8 *)FUN_140b93900(local_5a0);
      local_4b0 = *puVar5;
      uStack_4a8 = puVar5[1];
      local_4a0 = *(undefined4 *)(puVar5 + 2);
      uStack_49c = *(undefined4 *)((longlong)puVar5 + 0x14);
      uStack_498 = *(undefined4 *)(puVar5 + 3);
      uStack_494 = *(undefined4 *)((longlong)puVar5 + 0x1c);
      local_490 = puVar5[4];
      (*local_5a8)(&local_578,local_5b0);
    }
  }
  FUN_140c6c1e0(lVar3);
  FUN_140b8d990(local_5c8,"providers\\implementations\\encode_decode\\decode_epki2pki.c",0xbd);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_638);
}

