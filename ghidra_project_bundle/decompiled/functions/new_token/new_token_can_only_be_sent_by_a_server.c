/**
 * Function: new_token_can_only_be_sent_by_a_server
 * Address:  140cccde0
 * Signature: undefined new_token_can_only_be_sent_by_a_server(void)
 * Body size: 4675 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void new_token_can_only_be_sent_by_a_server
               (undefined8 *param_1,longlong *param_2,undefined8 *param_3,int param_4,
               undefined8 param_5,longlong param_6)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_178 [32];
  ulonglong local_158;
  ulonglong *local_150;
  undefined8 local_148;
  code *local_140;
  undefined8 local_138;
  uint local_128;
  longlong *local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined4 local_100;
  longlong local_f8;
  int local_f0;
  int local_ec;
  undefined8 *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_178;
  local_f8 = param_6;
  local_128 = (uint)*(byte *)*param_3;
  local_c8 = 1;
  if (param_4 == 0) {
    local_100 = 0;
  }
  else if ((param_4 == 1) || (param_4 != 2)) {
    local_100 = 2;
  }
  else {
    local_100 = 1;
  }
  local_120 = param_2;
  local_ec = param_4;
  local_e8 = param_3;
  if (param_2[1] == 0) {
    local_140 = (code *)0x1413b29b8;
    local_148 = CONCAT44(local_148._4_4_,0x428);
    local_150 = (ulonglong *)0x1413d0dd8;
    local_158 = 0;
    quic_error_code_0xllxsss_reason_s(param_1,10,0,"empty packet payload");
LAB_140cce007:
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_58 ^ (ulonglong)auStack_178);
  }
  lVar11 = 10;
  lVar12 = 4;
LAB_140ccced2:
  local_d0 = 0;
  local_118 = 0;
  local_110 = 0;
  if (param_1[0x7c] != 0) {
    local_d0 = *param_2;
  }
  iVar2 = FUN_140ccb020(param_2,&local_e0,&local_f0);
  uVar8 = local_e0;
  param_2 = local_120;
  if (iVar2 == 0) {
    local_140 = (code *)0x1413b29b8;
    pcVar10 = "malformed frame header";
    local_148 = CONCAT44(local_148._4_4_,0x439);
    uVar8 = 0;
    goto LAB_140ccdfe6;
  }
  if (local_f0 == 0) {
    pcVar10 = "non-minimal frame type encoding";
    local_140 = (code *)0x1413b29b8;
    local_148 = CONCAT44(local_148._4_4_,0x441);
    goto LAB_140ccdfe6;
  }
  if ((((local_e0 != 0) && (local_e0 != 2)) && (local_e0 != 3)) &&
     ((local_e0 != 0x1c && (local_e0 != 0x1d)))) {
    *(uint *)(local_f8 + 0x10) = *(uint *)(local_f8 + 0x10) | 4;
  }
  switch(local_e0) {
  case 0:
    FUN_140ccbf40(local_120);
    uVar9 = local_118;
    goto LAB_140ccd0cc;
  case 1:
    iVar2 = FUN_140ccbf80(local_120);
    if (iVar2 == 0) {
      lVar11 = 7;
      local_140 = (code *)0x1413bf720;
      pcVar10 = "decode error";
      local_148 = CONCAT44(local_148._4_4_,0x35);
      uVar8 = 1;
      break;
    }
    FUN_140cd55c0(param_1[0x11],local_ec);
    uVar9 = local_118;
    goto LAB_140ccd0cc;
  case 2:
  case 3:
    if (local_128 == 2) {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "ACK not valid in 0-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x46a);
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 0x9f);
      local_110 = 0;
      iVar2 = FUN_140ccb0c0(local_120,&local_110);
      if ((iVar2 == 0) || (0xfffffffffffffff < local_110)) {
LAB_140ccd9af:
        lVar11 = 7;
        pcVar10 = "decode error";
        uVar6 = 0x89;
      }
      else {
        if ((ulonglong)param_1[0xbd] < local_110) {
          lVar5 = FUN_140b8d9c0(param_1[0xbc],local_110 << 4,"ssl\\quic\\quic_rx_depack.c",0x4f);
          if (lVar5 == 0) goto LAB_140ccd9af;
          param_1[0xbd] = local_110;
          param_1[0xbc] = lVar5;
        }
        local_a0 = param_1[0xbc];
        local_98 = local_110;
        iVar2 = FUN_140ccb230(local_120,uVar1,&local_a0,0);
        if (iVar2 == 0) goto LAB_140ccd9af;
        if ((*(char *)*local_e8 != '\x05') ||
           (((uVar9 = local_e8[7], uVar3 = FUN_140cd2fd0(param_1[0x7b]), uVar3 <= uVar9 &&
             ((*(byte *)((longlong)param_1 + 0x5d4) & 0x10) == 0)) ||
            (*(ulonglong *)(local_a0 + 8) < (ulonglong)param_1[0xb8])))) {
          iVar2 = FUN_140cd0240(param_1[0x79],&local_a0,local_100,param_5);
          if (iVar2 != 0) {
            *(short *)((longlong)param_1 + 0x4fa) = *(short *)((longlong)param_1 + 0x4fa) + 1;
            uVar9 = local_118;
            param_2 = local_120;
            goto LAB_140ccd0cc;
          }
          goto LAB_140ccd9af;
        }
        lVar11 = 0xe;
        pcVar10 = "acked packet which initiated a key update without a corresponding key update";
        uVar6 = 0x7a;
      }
      local_140 = (code *)0x1413bda30;
      local_148 = CONCAT44(local_148._4_4_,uVar6);
    }
    break;
  case 4:
    if ((local_128 == 2) || (local_128 == 5)) {
      local_110 = 0;
      iVar2 = FUN_140ccb5a0(local_120,&local_a0);
      uVar8 = 4;
      if (iVar2 != 0) {
        iVar2 = exceeded_maximum_allowed_streams(param_1,local_a0,4,&local_110);
        uVar8 = local_110;
        if (iVar2 != 0) {
          uVar9 = local_118;
          param_2 = local_120;
          if (local_110 == 0) goto LAB_140ccd0cc;
          if (*(char *)(local_110 + 0x102) == '\0') {
            uVar8 = 4;
            local_140 = (code *)0x1413bbda0;
            pcVar10 = "RESET_STREAM frame for TX only stream";
            local_148 = CONCAT44(local_148._4_4_,0xaa);
            lVar11 = 5;
          }
          else {
            iVar2 = FUN_140c561d0(local_110 + 0xa0,local_90,1);
            if (iVar2 == 0) {
              uVar8 = 4;
              local_140 = (code *)0x1413bbda0;
              pcVar10 = "internal error (flow control)";
              local_148 = CONCAT44(local_148._4_4_,0xbd);
              lVar11 = 1;
            }
            else {
              iVar2 = FUN_140c56320(uVar8 + 0xa0,0);
              if (iVar2 == 0) {
                FUN_140c584e0(param_1 + 0x60,uVar8,local_98,local_90);
                FUN_140c57f60(param_1 + 0x60,uVar8);
                uVar9 = local_118;
                param_2 = local_120;
                goto LAB_140ccd0cc;
              }
              uVar8 = 4;
              local_140 = (code *)0x1413bbda0;
              pcVar10 = "flow control violation";
              local_148 = CONCAT44(local_148._4_4_,199);
              lVar11 = (longlong)iVar2;
            }
          }
          break;
        }
        goto LAB_140cce007;
      }
      local_140 = (code *)0x1413bbda0;
      local_148 = CONCAT44(local_148._4_4_,0x99);
LAB_140ccda9e:
      pcVar10 = "decode error";
      lVar11 = 7;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "RESET_STREAM not valid in INITIAL/HANDSHAKE";
      local_148 = CONCAT44(local_148._4_4_,0x47a);
    }
    break;
  case 5:
    if ((local_128 != 2) && (local_128 != 5)) {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "STOP_SENDING not valid in INITIAL/HANDSHAKE";
      local_148 = CONCAT44(local_148._4_4_,0x488);
      break;
    }
    local_110 = 0;
    iVar2 = FUN_140ccb620(local_120,&local_68);
    uVar8 = 5;
    if (iVar2 == 0) {
      local_140 = (code *)0x1413bfb30;
      local_148 = CONCAT44(local_148._4_4_,0xe4);
      goto LAB_140ccda9e;
    }
    iVar2 = exceeded_maximum_allowed_streams(param_1,local_68,5,&local_110);
    if (iVar2 != 0) {
      uVar9 = local_118;
      if (local_110 != 0) {
        if (*(char *)(local_110 + 0x101) == '\0') {
          local_140 = (code *)0x1413bfb30;
          pcVar10 = "STOP_SENDING frame for RX only stream";
          local_148 = CONCAT44(local_148._4_4_,0xf5);
          uVar8 = 5;
          lVar11 = 5;
          break;
        }
        *(uint *)(local_110 + 0x100) = *(uint *)(local_110 + 0x100) | 0x8000000;
        *(undefined8 *)(local_110 + 0x50) = local_60;
        FUN_140c58320(param_1 + 0x60,local_110,local_60);
        uVar9 = local_118;
      }
      goto LAB_140ccd0cc;
    }
    goto LAB_140cce007;
  case 6:
    if (local_128 == 2) {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "CRYPTO frame not valid in 0-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x494);
    }
    else {
      iVar2 = FUN_140ccb690(local_120,0,&local_a0);
      if (iVar2 == 0) {
        local_140 = (code *)0x1413b79b8;
        pcVar10 = "decode error";
        local_148 = CONCAT44(local_148._4_4_,0x115);
        uVar8 = 6;
        lVar11 = 7;
      }
      else {
        uVar9 = local_118;
        if (local_98 == 0) goto LAB_140ccd0cc;
        uVar8 = (ulonglong)(*(uint *)(local_f8 + 0x10) & 3);
        lVar5 = param_1[uVar8 + 0x82];
        if (lVar5 == 0) goto LAB_140cce007;
        iVar2 = FUN_140c561d0(param_1 + (uVar8 + 3) * 0xc,local_98 + local_a0,0);
        if (iVar2 == 0) {
          uVar8 = 6;
          local_140 = (code *)0x1413b79b8;
          pcVar10 = "internal error (crypto RXFC)";
          local_148 = CONCAT44(local_148._4_4_,300);
          lVar11 = 1;
        }
        else {
          iVar2 = FUN_140c56320(param_1 + (uVar8 + 3) * 0xc,0);
          if (iVar2 == 0) {
            local_150 = (ulonglong *)((ulonglong)local_150 & 0xffffffff00000000);
            local_158 = local_98;
            iVar2 = ossl_quic_rstream_queue_data(lVar5,local_e8,local_a0,local_90);
            if (iVar2 != 0) {
              *(uint *)(param_1 + 0xba) = *(uint *)(param_1 + 0xba) | 0x10000000;
              uVar9 = local_98;
              param_2 = local_120;
              goto LAB_140ccd0cc;
            }
            uVar8 = 6;
            local_140 = (code *)0x1413b79b8;
            pcVar10 = "internal error (rstream queue)";
            local_148 = CONCAT44(local_148._4_4_,0x13c);
            lVar11 = 1;
          }
          else {
            local_140 = (code *)0x1413b79b8;
            pcVar10 = "exceeded maximum crypto buffer";
            local_148 = CONCAT44(local_148._4_4_,0x133);
            uVar8 = 6;
            lVar11 = 0xd;
          }
        }
      }
    }
    break;
  case 7:
    if (local_128 == 5) {
      if ((*(uint *)(param_1 + 0xba) & 0x2000000) == 0) {
        iVar2 = FUN_140ccb750(local_120,&local_c0,&local_d8);
        if (iVar2 == 0) {
          pcVar10 = "decode error";
          local_148 = CONCAT44(local_148._4_4_,0x150);
        }
        else {
          if (local_d8 != 0) {
            uVar7 = FUN_140b6a6a0(*param_1);
            iVar2 = FUN_140bc9140(uVar7,param_1 + 0xd,local_c0,local_d8);
            uVar9 = local_118;
            goto joined_r0x000140ccd3cb;
          }
          pcVar10 = "zero-length NEW_TOKEN";
          local_148 = CONCAT44(local_148._4_4_,0x15d);
        }
        local_140 = (code *)0x1413bada8;
        uVar8 = 7;
        lVar11 = 7;
      }
      else {
        local_140 = (code *)0x1413b29b8;
        pcVar10 = "NEW_TOKEN can only be sent by a server";
        local_148 = CONCAT44(local_148._4_4_,0x4ac);
      }
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "NEW_TOKEN valid only in 1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x4a0);
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if ((local_128 != 2) && (local_128 != 5)) {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "STREAM valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x4c2);
      break;
    }
    local_150 = &local_110;
    local_158 = local_e0;
    iVar2 = flow_control_violation(local_120,param_1,local_e8,local_f8);
    uVar9 = local_110;
joined_r0x000140ccd3cb:
    if (iVar2 != 0) goto LAB_140ccd0cc;
    goto LAB_140cce007;
  case 0x10:
    if ((local_128 == 2) || (local_128 == 5)) {
      local_110 = 0;
      iVar2 = FUN_140ccb950(local_120,&local_110);
      if (iVar2 != 0) {
        FUN_140c56070(param_1 + 0x14,local_110);
        FUN_140c57f10(param_1 + 0x60,FUN_140c55860,param_1);
        uVar9 = local_118;
        goto LAB_140ccd0cc;
      }
      local_140 = (code *)0x1413d3598;
      pcVar10 = "decode error";
      local_148 = CONCAT44(local_148._4_4_,0x2a9);
      uVar8 = 0x10;
      lVar11 = 7;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "MAX_DATA valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x4d1);
    }
    break;
  case 0x11:
    if ((local_128 != 2) && (local_128 != 5)) {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "MAX_STREAM_DATA valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x4de);
      break;
    }
    local_110 = 0;
    local_108 = 0;
    iVar2 = FUN_140ccb9b0(local_120,&local_110,&local_108);
    uVar8 = 0x11;
    if (iVar2 == 0) {
      local_140 = (code *)0x1413d3680;
      local_148 = CONCAT44(local_148._4_4_,0x2bf);
      goto LAB_140ccda9e;
    }
    iVar2 = exceeded_maximum_allowed_streams(param_1,local_110,0x11,&local_b8);
    lVar5 = local_b8;
    if (iVar2 != 0) {
      uVar9 = local_118;
      if (local_b8 != 0) {
        if (*(char *)(local_b8 + 0x101) == '\0') {
          local_140 = (code *)0x1413d3680;
          pcVar10 = "MAX_STREAM_DATA for TX only stream";
          local_148 = CONCAT44(local_148._4_4_,0x2d0);
          uVar8 = 0x11;
          lVar11 = 5;
          break;
        }
        FUN_140c56070(local_b8 + 0x80,local_108);
        FUN_140c57f60(param_1 + 0x60,lVar5);
        uVar9 = local_118;
      }
      goto LAB_140ccd0cc;
    }
    goto LAB_140cce007;
  case 0x12:
  case 0x13:
    if ((local_128 == 2) || (local_128 == 5)) {
      local_108 = 0;
      iVar2 = FUN_140ccba30(local_120,&local_108);
      if (iVar2 == 0) {
        uVar6 = 0x2e4;
LAB_140ccdd51:
        pcVar10 = "decode error";
      }
      else {
        if (local_108 < 0x1000000000000001) {
          if (uVar8 == 0x12) {
            if ((ulonglong)param_1[0xa1] < local_108) {
              param_1[0xa1] = local_108;
            }
            FUN_140c57f10(param_1 + 0x60,FUN_140cccd30,param_1);
            uVar9 = local_118;
            param_2 = local_120;
          }
          else {
            if (uVar8 != 0x13) {
              uVar6 = 0x303;
              goto LAB_140ccdd51;
            }
            if ((ulonglong)param_1[0xa2] < local_108) {
              param_1[0xa2] = local_108;
            }
            FUN_140c57f10(param_1 + 0x60,FUN_140cccd70,param_1);
            uVar9 = local_118;
            param_2 = local_120;
          }
          goto LAB_140ccd0cc;
        }
        pcVar10 = "invalid max streams value";
        uVar6 = 0x2ec;
      }
      local_140 = (code *)0x1413b1590;
      local_148 = CONCAT44(local_148._4_4_,uVar6);
      lVar11 = 7;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "MAX_STREAMS valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x4ed);
    }
    break;
  case 0x14:
    if ((local_128 == 2) || (local_128 == 5)) {
      local_108 = 0;
      iVar2 = FUN_140ccbac0(local_120,&local_108);
      uVar9 = local_118;
      if (iVar2 != 0) goto LAB_140ccd0cc;
      local_140 = (code *)0x1413ccd28;
      pcVar10 = "decode error";
      local_148 = CONCAT44(local_148._4_4_,0x314);
      uVar8 = 0x14;
      lVar11 = 7;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "DATA_BLOCKED valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x4fc);
    }
    break;
  case 0x15:
    if ((local_128 == 2) || (local_128 == 5)) {
      local_108 = 0;
      local_110 = 0;
      iVar2 = FUN_140ccbb20(local_120,&local_108,&local_110);
      uVar8 = 0x15;
      if (iVar2 == 0) {
        local_140 = (code *)0x1413ccd00;
        local_148 = CONCAT44(local_148._4_4_,0x329);
        goto LAB_140ccda9e;
      }
      iVar2 = exceeded_maximum_allowed_streams(param_1,local_108,0x15,&local_b0);
      if (iVar2 == 0) goto LAB_140cce007;
      uVar9 = local_118;
      if ((local_b0 == 0) || (*(char *)(local_b0 + 0x102) != '\0')) goto LAB_140ccd0cc;
      local_140 = (code *)0x1413ccd00;
      pcVar10 = "STREAM_DATA_BLOCKED frame for TX only stream";
      local_148 = CONCAT44(local_148._4_4_,0x343);
      uVar8 = 0x15;
      lVar11 = 5;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "STREAM_DATA_BLOCKED valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x509);
    }
    break;
  case 0x16:
  case 0x17:
    if ((local_128 == 2) || (local_128 == 5)) {
      local_108 = 0;
      iVar2 = FUN_140ccbba0(local_120,&local_108);
      if (iVar2 == 0) {
        lVar12 = 7;
        pcVar10 = "decode error";
        uVar6 = 0x356;
      }
      else {
        uVar9 = local_118;
        param_2 = local_120;
        if (local_108 < 0x1000000000000001) goto LAB_140ccd0cc;
        pcVar10 = "invalid stream count limit";
        uVar6 = 0x364;
      }
      local_140 = (code *)0x1413ccce0;
      local_148 = CONCAT44(local_148._4_4_,uVar6);
      lVar11 = lVar12;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "STREAMS valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x518);
    }
    break;
  case 0x18:
    if ((local_128 != 2) && (local_128 != 5)) {
      local_140 = (code *)0x1413b29b8;
      local_148 = CONCAT44(local_148._4_4_,0x527);
      local_150 = (ulonglong *)0x1413d0dd8;
      local_158 = 0;
      quic_error_code_0xllxsss_reason_s(param_1,10,local_e0,"NEW_CONN_ID valid only in 0/1-RTT");
    }
    param_2 = local_120;
    iVar2 = FUN_140ccbc30(local_120,&local_a0);
    if (iVar2 == 0) {
      local_140 = (code *)0x1413cb008;
      pcVar10 = "decode error";
      local_148 = CONCAT44(local_148._4_4_,0x376);
      uVar8 = 0x18;
      lVar11 = 7;
      break;
    }
    unable_to_store_stateless_reset_token(param_1,&local_a0);
    uVar9 = local_118;
    goto LAB_140ccd0cc;
  case 0x19:
    if ((local_128 == 2) || (local_128 == 5)) {
      iVar2 = FUN_140ccbd20(local_120,local_a8);
      if (iVar2 == 0) {
        lVar11 = 7;
        pcVar10 = "decode error";
        uVar6 = 0x389;
      }
      else {
        uVar9 = local_118;
        if ((*(uint *)(param_1 + 0xba) & 0x2000000) != 0) goto LAB_140ccd0cc;
        pcVar10 = "conn has zero-length CID";
        uVar6 = 0x39e;
      }
      uVar8 = 0x19;
      local_140 = (code *)0x1413cb048;
      local_148 = CONCAT44(local_148._4_4_,uVar6);
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "RETIRE_CONN_ID valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x533);
    }
    break;
  case 0x1a:
    if ((local_128 == 2) || (local_128 == 5)) {
      local_108 = 0;
      iVar2 = FUN_140ccbd80(local_120,&local_108);
      if (iVar2 == 0) {
        pcVar10 = "decode error";
        local_c8 = 7;
        uVar6 = 0x3b7;
      }
      else {
        puVar4 = (ulonglong *)FUN_140b8d8d0(9,"ssl\\quic\\quic_rx_depack.c",0x3c3);
        if ((puVar4 != (ulonglong *)0x0) &&
           (iVar2 = FUN_140c21d10(&local_a0,puVar4,9,0), iVar2 != 0)) {
          iVar2 = FUN_140ccacf0(&local_a0,local_108);
          if (iVar2 == 0) {
            FUN_140c227c0(&local_a0);
          }
          else {
            FUN_140c21e60();
            local_138 = 0;
            local_140 = FUN_140cccdb0;
            local_148 = 9;
            local_158 = CONCAT44(local_158._4_4_,1);
            local_150 = puVar4;
            lVar5 = FUN_140ccf4d0(param_1[0x13],0,2,0x1b);
            uVar9 = local_118;
            if (lVar5 != 0) goto LAB_140ccd0cc;
          }
        }
        FUN_140b8d990(puVar4,"ssl\\quic\\quic_rx_depack.c",0x3da);
        pcVar10 = "internal error";
        uVar6 = 0x3dd;
      }
      local_140 = (code *)0x1413c5bd8;
      uVar8 = 0x1a;
      local_148 = CONCAT44(local_148._4_4_,uVar6);
      lVar11 = local_c8;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "PATH_CHALLENGE valid only in 0/1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x540);
    }
    break;
  case 0x1b:
    if (local_128 == 5) {
      local_108 = 0;
      iVar2 = FUN_140ccbde0(local_120,&local_108);
      uVar9 = local_118;
      if (iVar2 != 0) goto LAB_140ccd0cc;
      local_140 = (code *)0x1413c27d8;
      pcVar10 = "decode error";
      local_148 = CONCAT44(local_148._4_4_,0x3eb);
      uVar8 = 0x1b;
      lVar11 = 7;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "PATH_CHALLENGE valid only in 1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x54d);
    }
    break;
  case 0x1c:
switchD_140cccf6a_caseD_1c:
    iVar2 = FUN_140ccbe40(local_120,&local_a0);
    if (iVar2 == 0) {
      local_140 = (code *)0x1413c27b8;
      local_148 = CONCAT44(local_148._4_4_,0x3fd);
      goto LAB_140ccda9e;
    }
    FUN_140c4f5f0(param_1,&local_a0);
    uVar9 = local_118;
    param_2 = local_120;
LAB_140ccd0cc:
    if ((code *)param_1[0x7c] != (code *)0x0) {
      uVar7 = 0x202;
      local_158 = *param_2 - local_d0;
      if (local_e0 == 0) {
        uVar7 = 0x204;
      }
      else if (((local_e0 & 0xfffffffffffffff8) == 8) || (local_e0 == 6)) {
        uVar7 = 0x203;
        local_158 = local_158 - uVar9;
      }
      local_148 = param_1[0x7d];
      local_150 = (ulonglong *)param_1[0x7e];
      (*(code *)param_1[0x7c])(0,1,uVar7);
    }
    if (param_2[1] == 0) goto LAB_140cce007;
    goto LAB_140ccced2;
  case 0x1d:
    if ((local_128 == 2) || (local_128 == 5)) goto switchD_140cccf6a_caseD_1c;
    local_140 = (code *)0x1413b29b8;
    pcVar10 = "CONN_CLOSE (APP) valid only in 0/1-RTT";
    local_148 = CONCAT44(local_148._4_4_,0x55b);
    break;
  case 0x1e:
    if (local_128 == 5) {
      iVar2 = FUN_140ccbfa0(local_120);
      if (iVar2 != 0) {
        ossl_quic_channel_on_handshake_confirmed(param_1);
        uVar9 = local_118;
        goto LAB_140ccd0cc;
      }
      uVar8 = 0x1e;
      local_140 = (code *)0x1413c4328;
      pcVar10 = "internal error (decode frame handshake done)";
      local_148 = CONCAT44(local_148._4_4_,0x40e);
      lVar11 = 1;
    }
    else {
      local_140 = (code *)0x1413b29b8;
      pcVar10 = "HANDSHAKE_DONE valid only in 1-RTT";
      local_148 = CONCAT44(local_148._4_4_,0x56b);
    }
    break;
  default:
    local_140 = (code *)0x1413b29b8;
    pcVar10 = "Unknown frame type received";
    local_148 = CONCAT44(local_148._4_4_,0x577);
    lVar11 = 7;
  }
LAB_140ccdfe6:
  local_150 = (ulonglong *)0x1413d0dd8;
  local_158 = 0;
  quic_error_code_0xllxsss_reason_s(param_1,lVar11,uVar8,pcVar10);
  goto LAB_140cce007;
}

