/**
 * Function: ossl_quic_channel_on_handshake_confirmed
 * Address:  140c4f070
 * Signature: undefined ossl_quic_channel_on_handshake_confirmed(void)
 * Body size: 739 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_quic_channel_on_handshake_confirmed(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  char *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = *(uint *)(param_1 + 0x5d0);
  if ((uVar1 >> 10 & 1) != 0) {
    return 1;
  }
  if ((uVar1 >> 9 & 1) != 0) {
    if ((uVar1 >> 0x16 & 1) == 0) {
      FUN_140cd5500(*(undefined8 *)(param_1 + 0x88),2);
      FUN_140cd2c70(*(undefined8 *)(param_1 + 0x3d8),2);
      FUN_140cc8e70(*(undefined8 *)(param_1 + 0x3d0),2);
      FUN_140cd0640(*(undefined8 *)(param_1 + 0x3c8),1);
      if ((*(longlong *)(param_1 + 0x400) != 0) && (*(longlong *)(param_1 + 0x418) != 0)) {
        d_aplatformplatformopenssl_srcincludeinternal();
        *(undefined8 *)(param_1 + 0x400) = 0;
        d_aplatformplatformopenssl_srcincludeinternal(*(undefined8 *)(param_1 + 0x418));
        *(undefined8 *)(param_1 + 0x418) = 0;
        *(uint *)(param_1 + 0x5d0) = *(uint *)(param_1 + 0x5d0) | 0x400000;
      }
    }
    *(uint *)(param_1 + 0x5d0) = *(uint *)(param_1 + 0x5d0) | 0x400;
    FUN_140c54c40(param_1,*(uint *)(param_1 + 0x5d0) & 7);
    FUN_140cd0770(*(undefined8 *)(param_1 + 0x3c8));
    return 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  puVar2 = (undefined1 *)stream_limit_error(10);
  puVar5 = &DAT_1413a70e4;
  puVar7 = &DAT_1413a70e0;
  puVar8 = &DAT_1413a70e4;
  puVar6 = &DAT_1413a70e0;
  if ((*(byte *)(param_1 + 0x5d4) & 0x40) != 0) {
    return 0;
  }
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_1413a2ad6;
    puVar5 = &DAT_1413a2ad6;
    puVar7 = &DAT_1413a2ad6;
  }
  puVar3 = (undefined1 *)conn_close_transport(0x1e);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_1413a2ad6;
    puVar8 = &DAT_1413a2ad6;
    puVar6 = &DAT_1413a2ad6;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_channel.c",0xde1,"ossl_quic_channel_raise_protocol_error_loc");
  FUN_140b91cc0(0x14,0x17e,
                "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                ,10,puVar5,puVar2,puVar7,0x1e,puVar8,puVar3,puVar6,
                "handshake cannot be confirmed before it is completed");
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_channel.c",0xc17,"ossl_quic_channel_on_handshake_confirmed");
  lVar4 = *(longlong *)(param_1 + 0x5d8);
  if (lVar4 == 0) {
    lVar4 = FUN_140c212b0();
    *(longlong *)(param_1 + 0x5d8) = lVar4;
    if (lVar4 == 0) goto LAB_140c4f215;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar4);
LAB_140c4f215:
  *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) | 0x40;
  local_58 = 10;
  uStack_50 = 0x1e;
  local_48 = "handshake cannot be confirmed before it is completed";
  uStack_40 = 0x34;
  FUN_140c54a70(param_1,&local_58,0);
  return 0;
}

