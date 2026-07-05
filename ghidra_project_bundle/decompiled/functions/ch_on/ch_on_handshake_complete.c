/**
 * Function: ch_on_handshake_complete
 * Address:  140c53b40
 * Signature: undefined ch_on_handshake_complete(void)
 * Body size: 871 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ch_on_handshake_complete(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x140c53b51;
  if ((*(uint *)(param_1 + 0x5d0) >> 9 & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5d0) & 0x1c000) != 0xc000) {
    return 0;
  }
  FUN_140cd4970(*(undefined8 *)(param_1 + 0x88));
  if ((*(byte *)(param_1 + 0x5d0) & 0x80) == 0) {
    local_48 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = (char *)0x0;
    uStack_50 = 0;
    puVar3 = (undefined1 *)stream_limit_error(0x16d);
    puVar7 = &DAT_1413a70e4;
    puVar9 = &DAT_1413a70e0;
    puVar10 = &DAT_1413a70e4;
    puVar8 = &DAT_1413a70e0;
    if ((*(byte *)(param_1 + 0x5d4) & 0x40) != 0) {
      return 0;
    }
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_1413a2ad6;
      puVar7 = &DAT_1413a2ad6;
      puVar9 = &DAT_1413a2ad6;
    }
    puVar4 = (undefined1 *)conn_close_transport(6);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_1413a2ad6;
      puVar10 = &DAT_1413a2ad6;
      puVar8 = &DAT_1413a2ad6;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_channel.c",0xde1,"ossl_quic_channel_raise_protocol_error_loc");
    FUN_140b91cc0(0x14,0x17e,
                  "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                  ,0x16d,puVar7,puVar3,puVar9,6,puVar10,puVar4,puVar8,
                  "no transport parameters received");
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_channel.c",0x485,"ch_on_handshake_complete");
    lVar5 = *(longlong *)(param_1 + 0x5d8);
    if (lVar5 == 0) {
      lVar5 = FUN_140c212b0();
      *(longlong *)(param_1 + 0x5d8) = lVar5;
      if (lVar5 == 0) goto LAB_140c53cd7;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar5);
LAB_140c53cd7:
    *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) | 0x40;
    local_68 = 0x16d;
    uStack_60 = 6;
    local_58 = "no transport parameters received";
    uStack_50 = 0x20;
    FUN_140c54a70(param_1,&local_68,0);
    return 0;
  }
  FUN_140b8d990(*(undefined8 *)(param_1 + 0x50),"ssl\\quic\\quic_channel.c",0x48a);
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_140cd2fa0(*(undefined8 *)(param_1 + 0x3d8));
  FUN_140cd55a0(*(undefined8 *)(param_1 + 0x88));
  *(uint *)(param_1 + 0x5d0) = *(uint *)(param_1 + 0x5d0) | 0x200;
  lVar5 = *(longlong *)(param_1 + 0x58);
  if (lVar5 == 0) goto LAB_140c53e63;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  local_res8 = 0;
  lVar6 = FUN_140b8eea0();
  if ((lVar6 == 0) || (iVar2 = FUN_140c21ba0(&local_68,lVar6), iVar2 == 0)) {
LAB_140c53e3d:
    FUN_140b8ef10(lVar6);
  }
  else {
    iVar2 = FUN_140cca960(&local_68,lVar5,uVar1);
    if (iVar2 == 0) {
      FUN_140c227c0();
      goto LAB_140c53e3d;
    }
    FUN_140c21e60(&local_68);
    iVar2 = FUN_140c22710(&local_68,&local_res8);
    if ((iVar2 == 0) ||
       (lVar5 = FUN_140ccf4d0(*(undefined8 *)(param_1 + 0x98),1,2,7,
                              in_stack_ffffffffffffff58 & 0xffffffff00000000,
                              *(undefined8 *)(lVar6 + 8),local_res8,FUN_140c55520,lVar6), lVar5 == 0
       )) goto LAB_140c53e3d;
  }
  FUN_140b8d990(*(undefined8 *)(param_1 + 0x58),"ssl\\quic\\quic_channel.c",0x4a1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
LAB_140c53e63:
  if ((*(uint *)(param_1 + 0x5d0) & 0x2000000) != 0) {
    ossl_quic_channel_on_handshake_confirmed(param_1);
    FUN_140cd55b0(*(undefined8 *)(param_1 + 0x88));
  }
  FUN_140c54c40(param_1,*(uint *)(param_1 + 0x5d0) & 7);
  return 1;
}

