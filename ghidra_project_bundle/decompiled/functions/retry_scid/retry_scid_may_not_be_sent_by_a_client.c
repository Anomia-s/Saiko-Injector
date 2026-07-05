/**
 * Function: retry_scid_may_not_be_sent_by_a_client
 * Address:  140c526c0
 * Signature: undefined retry_scid_may_not_be_sent_by_a_client(void)
 * Body size: 4175 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void retry_scid_may_not_be_sent_by_a_client(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 auStack_168 [32];
  char *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  char *local_130;
  int local_128;
  int local_124;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulonglong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0 [3];
  char *local_b8;
  size_t sStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  byte local_90;
  undefined1 local_8f [23];
  undefined2 local_78;
  undefined2 local_76;
  undefined1 local_74 [4];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  char local_50;
  undefined1 local_4f [23];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140c526e7;
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  piVar16 = *(int **)(param_3 + 0x30);
  pcVar13 = "bad transport parameter";
  piVar15 = (int *)0x0;
  local_f4 = 0;
  local_128 = 0;
  local_f8 = 0;
  local_124 = 0;
  local_fc = 0;
  local_100 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_d4 = 0;
  local_a0 = 0;
  local_98 = 0;
  piVar7 = piVar15;
  if (((piVar16 != (int *)0x0) && (piVar7 = piVar16, *piVar16 != 0)) &&
     (piVar7 = piVar15, (char)*piVar16 < '\0')) {
    piVar7 = (int *)FUN_140bc8b20(piVar16);
  }
  uVar2 = *(uint *)(param_3 + 0x5d0);
  if (((uVar2 >> 0x19 & 1) == 0) || (piVar7[0x232] == 0)) {
    if (-1 < (char)uVar2) goto LAB_140c527c2;
    pcVar13 = "multiple transport parameter extensions";
    goto LAB_140c535f6;
  }
  if ((char)uVar2 < '\0') {
    *(undefined8 *)(param_3 + 0x508) = 0;
    *(uint *)(param_3 + 0x5d0) = uVar2 & 0xfffffeff;
    *(undefined8 *)(param_3 + 0x510) = 0;
    FUN_140b8d990(*(undefined8 *)(param_3 + 0x50),"ssl\\quic\\quic_channel.c",0x541);
    *(undefined8 *)(param_3 + 0x50) = 0;
  }
LAB_140c527c2:
  if (param_2 < 0x8000000000000000) {
    piVar16 = piVar15;
    piVar7 = piVar15;
    local_110 = param_1;
    local_108 = param_2;
    if (param_2 == 0) {
LAB_140c535ef:
      pcVar13 = "INITIAL_SCID was not sent but is required";
    }
    else {
      do {
        iVar5 = FUN_140ccbfc0(&local_110,&local_118);
        if (iVar5 == 0) goto LAB_140c535f6;
        switch(local_118) {
        case 0:
          if ((int)piVar7 != 0) {
            pcVar13 = "ORIG_DCID appears multiple times";
            goto LAB_140c535f6;
          }
          if ((*(uint *)(param_3 + 0x5d0) & 0x2000000) != 0) {
            pcVar13 = "ORIG_DCID may not be sent by a client";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc210(&local_110,0,&local_90);
          if (iVar5 == 0) {
            pcVar13 = "ORIG_DCID is malformed";
            goto LAB_140c535f6;
          }
          bVar1 = *(byte *)(param_3 + 0x428);
          if (((bVar1 != local_90) || (0x14 < bVar1)) ||
             (iVar5 = memcmp((void *)(param_3 + 0x429),local_8f,(ulonglong)bVar1), iVar5 != 0)) {
            pcVar13 = "ORIG_DCID does not match expected value";
            goto LAB_140c535f6;
          }
          piVar7 = (int *)0x1;
          break;
        case 1:
          if (local_e4 != 0) {
            pcVar13 = "MAX_IDLE_TIMEOUT appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if (iVar5 == 0) {
            pcVar13 = "MAX_IDLE_TIMEOUT is malformed";
            goto LAB_140c535f6;
          }
          uVar3 = *(ulonglong *)(param_3 + 0x518);
          *(ulonglong *)(param_3 + 0x520) = local_120;
          uVar10 = local_120;
          if (((uVar3 != 0) && (uVar10 = uVar3, local_120 != 0)) &&
             (uVar10 = local_120, uVar3 < local_120)) {
            uVar10 = uVar3;
          }
          *(ulonglong *)(param_3 + 0x528) = uVar10;
          FUN_140c54840(param_3);
          local_a0 = local_120;
          local_e4 = 1;
          break;
        case 2:
          if (local_dc != 0) {
            pcVar13 = "STATELESS_RESET_TOKEN appears multiple times";
            goto LAB_140c535f6;
          }
          if ((*(uint *)(param_3 + 0x5d0) & 0x2000000) != 0) {
            pcVar13 = "STATELESS_RESET_TOKEN may not be sent by a client";
            goto LAB_140c535f6;
          }
          local_98 = FUN_140ccc010(&local_110,&local_118,local_d0);
          if ((local_98 == 0) || (local_d0[0] != 0x10)) {
            pcVar13 = "STATELESS_RESET_TOKEN is malformed";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140cced50(*(undefined8 *)(param_3 + 0x40),param_3,
                                *(undefined8 *)(param_3 + 0x4a8),local_98);
          if (iVar5 == 0) {
            pcVar13 = "STATELESS_RESET_TOKEN encountered internal error";
            goto LAB_140c535f6;
          }
          local_dc = 1;
          break;
        case 3:
          if (local_e8 != 0) {
            pcVar13 = "MAX_UDP_PAYLOAD_SIZE appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if ((iVar5 == 0) || (local_120 < 0x4b0)) {
            pcVar13 = "MAX_UDP_PAYLOAD_SIZE is malformed";
            goto LAB_140c535f6;
          }
          *(ulonglong *)(param_3 + 0x530) = local_120;
          local_e8 = 1;
          break;
        case 4:
          if (local_f4 != 0) {
            pcVar13 = "INITIAL_MAX_DATA appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if (iVar5 == 0) {
            pcVar13 = "INITIAL_MAX_DATA is malformed";
            goto LAB_140c535f6;
          }
          FUN_140c56070(param_3 + 0xa0,local_120);
          local_f4 = 1;
          break;
        case 5:
          if (local_128 != 0) {
            pcVar13 = "INITIAL_MAX_STREAM_DATA_BIDI_LOCAL appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if (iVar5 == 0) {
            pcVar13 = "INITIAL_MAX_STREAM_DATA_BIDI_LOCAL is malformed";
            goto LAB_140c535f6;
          }
          *(ulonglong *)(param_3 + 0x4e0) = local_120;
          local_128 = 1;
          break;
        case 6:
          if (local_f8 != 0) {
            pcVar13 = "INITIAL_MAX_STREAM_DATA_BIDI_REMOTE appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if (iVar5 == 0) {
            pcVar13 = "INITIAL_MAX_STREAM_DATA_BIDI_REMOTE is malformed";
            goto LAB_140c535f6;
          }
          *(ulonglong *)(param_3 + 0x4d8) = local_120;
          FUN_140c57f10(param_3 + 0x300,FUN_140c55800,&local_120);
          local_f8 = 1;
          break;
        case 7:
          if (local_124 != 0) {
            pcVar13 = "INITIAL_MAX_STREAM_DATA_UNI appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if (iVar5 == 0) {
            pcVar13 = "INITIAL_MAX_STREAM_DATA_UNI is malformed";
            goto LAB_140c535f6;
          }
          *(ulonglong *)(param_3 + 0x4e8) = local_120;
          FUN_140c57f10(param_3 + 0x300,FUN_140c55830,&local_120);
          local_124 = 1;
          break;
        case 8:
          if (local_fc != 0) {
            pcVar13 = "INITIAL_MAX_STREAMS_BIDI appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if ((iVar5 == 0) || (0x1000000000000000 < local_120)) {
            pcVar13 = "INITIAL_MAX_STREAMS_BIDI is malformed";
            goto LAB_140c535f6;
          }
          *(ulonglong *)(param_3 + 0x508) = local_120;
          local_fc = 1;
          break;
        case 9:
          if (local_100 != 0) {
            pcVar13 = "INITIAL_MAX_STREAMS_UNI appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if ((iVar5 == 0) || (0x1000000000000000 < local_120)) {
            pcVar13 = "INITIAL_MAX_STREAMS_UNI is malformed";
            goto LAB_140c535f6;
          }
          *(ulonglong *)(param_3 + 0x510) = local_120;
          local_100 = 1;
          break;
        case 10:
          if (local_f0 != 0) {
            pcVar13 = "ACK_DELAY_EXP appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if ((iVar5 == 0) || (0x14 < local_120)) {
            pcVar13 = "ACK_DELAY_EXP is malformed";
            goto LAB_140c535f6;
          }
          *(char *)(param_3 + 0x4f8) = (char)local_120;
          local_f0 = 1;
          break;
        case 0xb:
          if (local_ec != 0) {
            pcVar13 = "MAX_ACK_DELAY appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if ((iVar5 == 0) || (0x3fff < local_120)) {
            pcVar13 = "MAX_ACK_DELAY is malformed";
            goto LAB_140c535f6;
          }
          *(ulonglong *)(param_3 + 0x4f0) = local_120;
          FUN_140ccfd90(*(undefined8 *)(param_3 + 0x3c8),local_120 * 1000000);
          local_ec = 1;
          break;
        case 0xc:
          if (local_d4 != 0) {
            pcVar13 = "DISABLE_ACTIVE_MIGRATION appears multiple times";
            goto LAB_140c535f6;
          }
          lVar9 = FUN_140ccc010(&local_110,&local_118,local_d0);
          if ((lVar9 == 0) || (local_d0[0] != 0)) {
            pcVar13 = "DISABLE_ACTIVE_MIGRATION is malformed";
            goto LAB_140c535f6;
          }
          local_d4 = 1;
          break;
        case 0xd:
          if (local_d8 != 0) {
            pcVar13 = "PREFERRED_ADDR appears multiple times";
            goto LAB_140c535f6;
          }
          if ((*(uint *)(param_3 + 0x5d0) & 0x2000000) != 0) {
            pcVar13 = "PREFERRED_ADDR may not be sent by a client";
            goto LAB_140c535f6;
          }
          if (*(char *)(param_3 + 0x491) == '\0') {
            pcVar13 = "PREFERRED_ADDR provided for zero-length CID";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc310(&local_110,&local_78);
          if (iVar5 == 0) {
            pcVar13 = "PREFERRED_ADDR is malformed";
            goto LAB_140c535f6;
          }
          if (local_50 == '\0') {
            pcVar13 = "zero-length CID in PREFERRED_ADDR";
            goto LAB_140c535f6;
          }
          local_d8 = 1;
          break;
        case 0xe:
          if (local_e0 != 0) {
            pcVar13 = "ACTIVE_CONN_ID_LIMIT appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc0f0(&local_110,&local_118,&local_120);
          if ((iVar5 == 0) || (local_120 < 2)) {
            pcVar13 = "ACTIVE_CONN_ID_LIMIT is malformed";
            goto LAB_140c535f6;
          }
          *(ulonglong *)(param_3 + 0x538) = local_120;
          local_e0 = 1;
          break;
        case 0xf:
          if ((int)piVar15 != 0) {
            pcVar13 = "INITIAL_SCID appears multiple times";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc210(&local_110,0,&local_90);
          if (iVar5 == 0) {
            pcVar13 = "INITIAL_SCID is malformed";
            goto LAB_140c535f6;
          }
          bVar1 = *(byte *)(param_3 + 0x452);
          if (((bVar1 != local_90) || (0x14 < bVar1)) ||
             (iVar5 = memcmp((void *)(param_3 + 0x453),local_8f,(ulonglong)bVar1), iVar5 != 0)) {
            pcVar13 = "INITIAL_SCID does not match expected value";
            goto LAB_140c535f6;
          }
          piVar15 = (int *)0x1;
          break;
        case 0x10:
          if ((*(uint *)(param_3 + 0x5d0) >> 0x19 & 1) != 0) {
            pcVar13 = "RETRY_SCID may not be sent by a client";
            goto LAB_140c535f6;
          }
          if ((int)piVar16 != 0) {
            pcVar13 = "RETRY_SCID appears multiple times";
            goto LAB_140c535f6;
          }
          if ((*(uint *)(param_3 + 0x5d0) >> 0xb & 1) == 0) {
            pcVar13 = "RETRY_SCID sent when not performing a retry";
            goto LAB_140c535f6;
          }
          iVar5 = FUN_140ccc210(&local_110,0,&local_90);
          if (iVar5 == 0) {
            pcVar13 = "RETRY_SCID is malformed";
            goto LAB_140c535f6;
          }
          bVar1 = *(byte *)(param_3 + 0x467);
          if (((bVar1 != local_90) || (0x14 < bVar1)) ||
             (iVar5 = memcmp((void *)(param_3 + 0x468),local_8f,(ulonglong)bVar1), iVar5 != 0)) {
            pcVar13 = "RETRY_SCID does not match expected value";
            goto LAB_140c535f6;
          }
          piVar16 = (int *)0x1;
          break;
        default:
          lVar9 = FUN_140ccc010(&local_110,&local_118,local_d0);
          if (lVar9 == 0) goto LAB_140c535f6;
        }
        iVar4 = local_124;
        iVar5 = local_128;
      } while (local_108 != 0);
      if ((int)piVar15 == 0) goto LAB_140c535ef;
      uVar2 = *(uint *)(param_3 + 0x5d0);
      if ((uVar2 >> 0x19 & 1) != 0) {
LAB_140c531a5:
        *(uint *)(param_3 + 0x5d0) = uVar2 | 0x80;
        uVar11 = FUN_140c54cc0(param_3);
        local_148 = "transport:parameters_set";
        iVar6 = FUN_140cc8560(uVar11,4,"transport","parameters_set");
        iVar19 = local_f8;
        iVar17 = local_fc;
        iVar14 = local_100;
        if (iVar6 != 0) {
          FUN_140cc87d0(uVar11,"owner","remote");
          if ((int)piVar7 != 0) {
            FUN_140cc88e0(uVar11,"original_destination_connection_id",param_3 + 0x429,
                          *(undefined1 *)(param_3 + 0x428));
          }
          FUN_140cc88e0(uVar11,"original_source_connection_id",param_3 + 0x429,
                        *(undefined1 *)(param_3 + 0x428));
          if ((int)piVar16 != 0) {
            FUN_140cc88e0(uVar11,"retry_source_connection_id",param_3 + 0x468,
                          *(undefined1 *)(param_3 + 0x467));
          }
          if (local_f4 != 0) {
            uVar12 = FUN_140b77290(param_3 + 0xa0);
            FUN_140cc8860(uVar11,"initial_max_data",uVar12);
          }
          if (iVar5 != 0) {
            FUN_140cc8860(uVar11,"initial_max_stream_data_bidi_local",
                          *(undefined8 *)(param_3 + 0x4d8));
          }
          iVar19 = local_f8;
          if (local_f8 != 0) {
            FUN_140cc8860(uVar11,"initial_max_stream_data_bidi_remote",
                          *(undefined8 *)(param_3 + 0x4e0));
          }
          if (iVar4 != 0) {
            FUN_140cc8860(uVar11,"initial_max_stream_data_uni",*(undefined8 *)(param_3 + 0x4e8));
          }
          iVar17 = local_fc;
          if (local_fc != 0) {
            FUN_140cc8860(uVar11,"initial_max_streams_bidi",*(undefined8 *)(param_3 + 0x508));
          }
          iVar14 = local_100;
          if (local_100 != 0) {
            FUN_140cc8860(uVar11,"initial_max_streams_uni",*(undefined8 *)(param_3 + 0x510));
          }
          if (local_f0 != 0) {
            FUN_140cc8860(uVar11,"ack_delay_exponent",*(undefined1 *)(param_3 + 0x4f8));
          }
          if (local_ec != 0) {
            FUN_140cc8860(uVar11,"max_ack_delay",*(undefined8 *)(param_3 + 0x4f0));
          }
          if (local_e8 != 0) {
            FUN_140cc8860(uVar11,"max_udp_payload_size",*(undefined8 *)(param_3 + 0x530));
          }
          if (local_e4 != 0) {
            FUN_140cc8860(uVar11,"max_idle_timeout",local_a0);
          }
          if (local_e0 != 0) {
            FUN_140cc8860(uVar11,"active_connection_id_limit",*(undefined8 *)(param_3 + 0x538));
          }
          if (local_dc != 0) {
            FUN_140cc88e0(uVar11,"stateless_reset_token",local_98,0x10);
          }
          if (local_d8 != 0) {
            FUN_140cc8730(uVar11,"preferred_addr");
            FUN_140cc8860(uVar11,"port_v4",local_78);
            FUN_140cc8860(uVar11,"port_v6",local_76);
            FUN_140cc88e0(uVar11,"ip_v4",local_74,4);
            FUN_140cc88e0(uVar11,"ip_v6",local_70,0x10);
            FUN_140cc88e0(uVar11,"stateless_reset_token",local_60,0x10);
            FUN_140cc88e0(uVar11,"connection_id",local_4f,local_50);
            FUN_140cc8760(uVar11);
          }
          FUN_140cc88a0(uVar11,"disable_active_migration",local_d4);
          FUN_140cc8640(uVar11);
        }
        if ((((local_f4 != 0) || (iVar19 != 0)) || (iVar17 != 0)) || (iVar14 != 0)) {
          FUN_140c57f10(param_3 + 0x300,FUN_140c55860,param_3);
        }
        if (((*(uint *)(param_3 + 0x5d0) & 0x2000000) == 0) ||
           (iVar5 = active_connection_id_limit(param_3), iVar5 != 0)) goto LAB_140c53703;
        local_a8 = 0;
        local_d0[1] = 0;
        local_d0[2] = 0;
        local_b8 = (char *)0x0;
        sStack_b0 = 0;
        puVar8 = (undefined1 *)stream_limit_error(1);
        pcVar13 = " (";
        puVar20 = &DAT_1413a70e0;
        if ((*(byte *)(param_3 + 0x5d4) & 0x40) != 0) goto LAB_140c53703;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_1413a2ad6;
          pcVar13 = "";
          puVar20 = &DAT_1413a2ad6;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_channel.c",0xdea,"ossl_quic_channel_raise_protocol_error_loc");
        local_130 = "internal error";
        local_148 = pcVar13;
        local_140 = puVar8;
        local_138 = puVar20;
        FUN_140b91cc0(0x14,0xc0103,"QUIC error code: 0x%llx%s%s%s, reason: \"%s\"",1);
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_channel.c",0x731,"ch_on_transport_params");
        lVar9 = *(longlong *)(param_3 + 0x5d8);
        if (lVar9 == 0) {
          lVar9 = FUN_140c212b0();
          *(longlong *)(param_3 + 0x5d8) = lVar9;
          if (lVar9 != 0) goto LAB_140c535bc;
        }
        else {
LAB_140c535bc:
          d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar9);
        }
        local_d0[2] = 0;
        sStack_b0 = 0xe;
        local_d0[1] = 1;
        local_b8 = "internal error";
        goto LAB_140c536eb;
      }
      if ((int)piVar7 == 0) {
        pcVar13 = "ORIG_DCID was not sent but is required";
      }
      else {
        if (((uVar2 >> 0xb & 1) == 0) || ((int)piVar16 != 0)) goto LAB_140c531a5;
        pcVar13 = "RETRY_SCID was not sent but is required";
      }
    }
LAB_140c535f6:
    local_a8 = 0;
    local_d0[1] = 0;
    local_d0[2] = 0;
    local_b8 = (char *)0x0;
    sStack_b0 = 0;
    puVar8 = (undefined1 *)stream_limit_error(8);
    pcVar18 = " (";
    puVar20 = &DAT_1413a70e0;
    if ((*(byte *)(param_3 + 0x5d4) & 0x40) != 0) goto LAB_140c53703;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_1413a2ad6;
      pcVar18 = "";
      puVar20 = &DAT_1413a2ad6;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_channel.c",0xdea,"ossl_quic_channel_raise_protocol_error_loc");
    local_148 = pcVar18;
    local_140 = puVar8;
    local_138 = puVar20;
    local_130 = pcVar13;
    FUN_140b91cc0(0x14,0x17e,"QUIC error code: 0x%llx%s%s%s, reason: \"%s\"",8);
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_channel.c",0x739,"ch_on_transport_params");
    lVar9 = *(longlong *)(param_3 + 0x5d8);
    if (lVar9 == 0) {
      lVar9 = FUN_140c212b0();
      *(longlong *)(param_3 + 0x5d8) = lVar9;
      if (lVar9 != 0) goto LAB_140c536c3;
    }
    else {
LAB_140c536c3:
      d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar9);
    }
    local_d0[1] = 8;
    local_d0[2] = 0;
    local_b8 = pcVar13;
    sStack_b0 = strlen(pcVar13);
  }
  else {
    local_a8 = 0;
    local_d0[1] = 0;
    local_d0[2] = 0;
    local_b8 = (char *)0x0;
    sStack_b0 = 0;
    puVar8 = (undefined1 *)stream_limit_error(1);
    pcVar13 = " (";
    puVar20 = &DAT_1413a70e0;
    if ((*(byte *)(param_3 + 0x5d4) & 0x40) != 0) goto LAB_140c53703;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_1413a2ad6;
      pcVar13 = "";
      puVar20 = &DAT_1413a2ad6;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_channel.c",0xdea,"ossl_quic_channel_raise_protocol_error_loc");
    local_130 = "internal error (packet buf init)";
    local_148 = pcVar13;
    local_140 = puVar8;
    local_138 = puVar20;
    FUN_140b91cc0(0x14,0xc0103,"QUIC error code: 0x%llx%s%s%s, reason: \"%s\"",1);
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_channel.c",0x54a,"ch_on_transport_params");
    lVar9 = *(longlong *)(param_3 + 0x5d8);
    if (lVar9 == 0) {
      lVar9 = FUN_140c212b0();
      *(longlong *)(param_3 + 0x5d8) = lVar9;
      if (lVar9 != 0) goto LAB_140c528a9;
    }
    else {
LAB_140c528a9:
      d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar9);
    }
    local_d0[2] = 0;
    sStack_b0 = 0x20;
    local_d0[1] = 1;
    local_b8 = "internal error (packet buf init)";
  }
LAB_140c536eb:
  *(uint *)(param_3 + 0x5d4) = *(uint *)(param_3 + 0x5d4) | 0x40;
  FUN_140c54a70(param_3,local_d0 + 1,0);
LAB_140c53703:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_168);
}

