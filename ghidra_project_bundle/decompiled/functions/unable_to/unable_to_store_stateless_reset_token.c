/**
 * Function: unable_to_store_stateless_reset_token
 * Address:  140c4f660
 * Signature: undefined unable_to_store_stateless_reset_token(void)
 * Body size: 1670 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void unable_to_store_stateless_reset_token(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 local_58;
  undefined8 uStack_50;
  char *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = *(ulonglong *)(param_1 + 0x4a8);
  uVar2 = *(ulonglong *)(param_1 + 0x4b0);
  if (((byte)*(undefined4 *)(param_1 + 0x5d0) & 7) != 1) {
    return;
  }
  if (*(char *)(param_1 + 0x491) != '\0') {
    uVar10 = *param_2;
    if (*param_2 <= uVar1) {
      uVar10 = uVar1;
    }
    uVar12 = param_2[1];
    if (param_2[1] <= uVar2) {
      uVar12 = uVar2;
    }
    if (uVar10 - uVar12 < 2) {
      if (uVar12 - uVar2 < 0xb) {
        if (uVar10 <= uVar1) {
LAB_140c4fc7f:
          uVar1 = *(ulonglong *)(param_1 + 0x4b0);
          while( true ) {
            if (uVar12 <= uVar1) {
              return;
            }
            iVar5 = internal_error_enqueueing_retire_conn_id(param_1,uVar1);
            if (iVar5 == 0) break;
            *(longlong *)(param_1 + 0x4b0) = *(longlong *)(param_1 + 0x4b0) + 1;
            uVar1 = *(ulonglong *)(param_1 + 0x4b0);
          }
          return;
        }
        iVar5 = FUN_140cced50(*(undefined8 *)(param_1 + 0x40),param_1,uVar10,
                              (longlong)param_2 + 0x25);
        if (iVar5 != 0) {
          *(ulonglong *)(param_1 + 0x4a8) = uVar10;
          uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
          uVar1 = param_2[3];
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(int *)(param_1 + 0x491) = (int)param_2[2];
          *(undefined4 *)(param_1 + 0x495) = uVar3;
          *(int *)(param_1 + 0x499) = (int)uVar1;
          *(undefined4 *)(param_1 + 0x49d) = uVar4;
          *(int *)(param_1 + 0x4a1) = (int)param_2[4];
          *(undefined1 *)(param_1 + 0x4a5) = *(undefined1 *)((longlong)param_2 + 0x24);
          FUN_140cd53d0(*(undefined8 *)(param_1 + 0x88),param_1 + 0x491);
          goto LAB_140c4fc7f;
        }
        local_38 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = (char *)0x0;
        uStack_40 = 0;
        puVar6 = (undefined1 *)stream_limit_error(9);
        puVar11 = &DAT_1413a70e4;
        puVar9 = &DAT_1413a70e0;
        puVar13 = &DAT_1413a70e4;
        puVar14 = &DAT_1413a70e0;
        if ((*(byte *)(param_1 + 0x5d4) & 0x40) != 0) {
          return;
        }
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_1413a2ad6;
          puVar11 = &DAT_1413a2ad6;
          puVar9 = &DAT_1413a2ad6;
        }
        puVar7 = (undefined1 *)conn_close_transport(0x18);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_1413a2ad6;
          puVar13 = &DAT_1413a2ad6;
          puVar14 = &DAT_1413a2ad6;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_channel.c",0xde1,"ossl_quic_channel_raise_protocol_error_loc");
        FUN_140b91cc0(0x14,0x17e,
                      "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                      ,9,puVar11,puVar6,puVar9,0x18,puVar13,puVar7,puVar14,
                      "unable to store stateless reset token");
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_channel.c",0xd51,"ossl_quic_channel_on_new_conn_id");
        lVar8 = *(longlong *)(param_1 + 0x5d8);
        if (lVar8 == 0) {
          lVar8 = FUN_140c212b0();
          *(longlong *)(param_1 + 0x5d8) = lVar8;
          if (lVar8 != 0) goto LAB_140c4fc01;
        }
        else {
LAB_140c4fc01:
          d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar8);
        }
        local_48 = "unable to store stateless reset token";
      }
      else {
        local_38 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = (char *)0x0;
        uStack_40 = 0;
        puVar6 = (undefined1 *)stream_limit_error(9);
        puVar11 = &DAT_1413a70e4;
        puVar9 = &DAT_1413a70e0;
        puVar13 = &DAT_1413a70e4;
        puVar14 = &DAT_1413a70e0;
        if ((*(byte *)(param_1 + 0x5d4) & 0x40) != 0) {
          return;
        }
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_1413a2ad6;
          puVar11 = &DAT_1413a2ad6;
          puVar9 = &DAT_1413a2ad6;
        }
        puVar7 = (undefined1 *)conn_close_transport(0x18);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_1413a2ad6;
          puVar13 = &DAT_1413a2ad6;
          puVar14 = &DAT_1413a2ad6;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_channel.c",0xde1,"ossl_quic_channel_raise_protocol_error_loc");
        FUN_140b91cc0(0x14,0x17e,
                      "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                      ,9,puVar11,puVar6,puVar9,0x18,puVar13,puVar7,puVar14,
                      "retiring connection id limit violated");
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_channel.c",0xd45,"ossl_quic_channel_on_new_conn_id");
        lVar8 = *(longlong *)(param_1 + 0x5d8);
        if (lVar8 == 0) {
          lVar8 = FUN_140c212b0();
          *(longlong *)(param_1 + 0x5d8) = lVar8;
          if (lVar8 != 0) goto LAB_140c4faa8;
        }
        else {
LAB_140c4faa8:
          d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar8);
        }
        local_48 = "retiring connection id limit violated";
      }
      uStack_40 = 0x25;
    }
    else {
      local_38 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = (char *)0x0;
      uStack_40 = 0;
      puVar6 = (undefined1 *)stream_limit_error(9);
      puVar11 = &DAT_1413a70e4;
      puVar9 = &DAT_1413a70e0;
      puVar13 = &DAT_1413a70e4;
      puVar14 = &DAT_1413a70e0;
      if ((*(byte *)(param_1 + 0x5d4) & 0x40) != 0) {
        return;
      }
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_1413a2ad6;
        puVar11 = &DAT_1413a2ad6;
        puVar9 = &DAT_1413a2ad6;
      }
      puVar7 = (undefined1 *)conn_close_transport(0x18);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_1413a2ad6;
        puVar13 = &DAT_1413a2ad6;
        puVar14 = &DAT_1413a2ad6;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\quic\\quic_channel.c",0xde1,"ossl_quic_channel_raise_protocol_error_loc");
      FUN_140b91cc0(0x14,0x17e,
                    "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                    ,9,puVar11,puVar6,puVar9,0x18,puVar13,puVar7,puVar14,
                    "active_connection_id limit violated");
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\quic\\quic_channel.c",0xd2e,"ossl_quic_channel_on_new_conn_id");
      lVar8 = *(longlong *)(param_1 + 0x5d8);
      if (lVar8 == 0) {
        lVar8 = FUN_140c212b0();
        *(longlong *)(param_1 + 0x5d8) = lVar8;
        if (lVar8 != 0) goto LAB_140c4f95b;
      }
      else {
LAB_140c4f95b:
        d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar8);
      }
      local_48 = "active_connection_id limit violated";
      uStack_40 = 0x23;
    }
    local_58 = 9;
    goto LAB_140c4fc20;
  }
  local_38 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  puVar6 = (undefined1 *)stream_limit_error(10);
  puVar11 = &DAT_1413a70e4;
  puVar9 = &DAT_1413a70e0;
  puVar13 = &DAT_1413a70e4;
  puVar14 = &DAT_1413a70e0;
  if ((*(byte *)(param_1 + 0x5d4) & 0x40) != 0) {
    return;
  }
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_1413a2ad6;
    puVar11 = &DAT_1413a2ad6;
    puVar9 = &DAT_1413a2ad6;
  }
  puVar7 = (undefined1 *)conn_close_transport(0x18);
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_1413a2ad6;
    puVar13 = &DAT_1413a2ad6;
    puVar14 = &DAT_1413a2ad6;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_channel.c",0xde1,"ossl_quic_channel_raise_protocol_error_loc");
  FUN_140b91cc0(0x14,0x17e,
                "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                ,10,puVar11,puVar6,puVar9,0x18,puVar13,puVar7,puVar14,
                "zero length connection id in use");
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_channel.c",0xd16,"ossl_quic_channel_on_new_conn_id");
  lVar8 = *(longlong *)(param_1 + 0x5d8);
  if (lVar8 == 0) {
    lVar8 = FUN_140c212b0();
    *(longlong *)(param_1 + 0x5d8) = lVar8;
    if (lVar8 != 0) goto LAB_140c4f7f1;
  }
  else {
LAB_140c4f7f1:
    d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar8);
  }
  local_58 = 10;
  local_48 = "zero length connection id in use";
  uStack_40 = 0x20;
LAB_140c4fc20:
  *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) | 0x40;
  uStack_50 = 0x18;
  FUN_140c54a70(param_1,&local_58,0);
  return;
}

