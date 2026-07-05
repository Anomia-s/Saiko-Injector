/**
 * Function: quic_error_code_0xllxsss_reason_s
 * Address:  140c55540
 * Signature: undefined quic_error_code_0xllxsss_reason_s(void)
 * Body size: 465 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void quic_error_code_0xllxsss_reason_s(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  char *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140c55550;
  uVar2 = FUN_140cd5710(*(undefined8 *)(param_1 + 0x88),2);
  if ((uVar2 < 0x4000000000000000) &&
     (iVar1 = FUN_140cc9700(*(undefined8 *)(param_1 + 0x3d0)), iVar1 != 0)) {
    uVar5 = *(uint *)(param_1 + 0x5d4) | 1;
    *(ulonglong *)(param_1 + 0x5c0) = uVar2;
    *(uint *)(param_1 + 0x5d4) = (*(uint *)(param_1 + 0x5d0) >> 0x1b ^ uVar5) & 0x10 ^ uVar5;
    return;
  }
  local_18 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (char *)0x0;
  uStack_20 = 0;
  puVar3 = (undefined1 *)stream_limit_error(1);
  puVar7 = &DAT_1413a70e4;
  puVar6 = &DAT_1413a70e0;
  if ((*(byte *)(param_1 + 0x5d4) & 0x40) != 0) {
    return;
  }
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_1413a2ad6;
    puVar7 = &DAT_1413a2ad6;
    puVar6 = &DAT_1413a2ad6;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_channel.c",0xdea,"ossl_quic_channel_raise_protocol_error_loc");
  FUN_140b91cc0(0x14,0xc0103,"QUIC error code: 0x%llx%s%s%s, reason: \"%s\"",1,puVar7,puVar3,puVar6,
                "key update");
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\quic\\quic_channel.c",0x2e7,"ch_trigger_txku")
  ;
  lVar4 = *(longlong *)(param_1 + 0x5d8);
  if (lVar4 == 0) {
    lVar4 = FUN_140c212b0();
    *(longlong *)(param_1 + 0x5d8) = lVar4;
    if (lVar4 == 0) goto LAB_140c556b4;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar4);
LAB_140c556b4:
  *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) | 0x40;
  local_38 = 1;
  uStack_30 = 0;
  local_28 = "key update";
  uStack_20 = 10;
  FUN_140c54a70(param_1,&local_38,0);
  return;
}

