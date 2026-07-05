/**
 * Function: ch_on_crypto_recv_record
 * Address:  140c541f0
 * Signature: undefined ch_on_crypto_recv_record(void)
 * Body size: 681 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 ch_on_crypto_recv_record(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_68 [3];
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar1 = *(uint *)(param_3 + 0x5d0);
  uVar7 = 0;
  local_res20[0] = 0;
  lVar9 = 0x420;
  if ((uVar1 & 0xe0000) != 0) {
    do {
      if (uVar7 != 1) {
        if (uVar7 == 0) {
          lVar3 = 0x410;
        }
        else if ((uVar7 == 1) || (uVar7 != 2)) {
          lVar3 = 0x420;
        }
        else {
          lVar3 = 0x418;
        }
        local_68[0] = 0;
        local_res18[0] = 0;
        if ((*(longlong *)(lVar3 + param_3) != 0) &&
           ((iVar2 = FUN_140c573e0(*(longlong *)(lVar3 + param_3),local_68,local_res18), iVar2 == 0
            || (local_68[0] != 0)))) {
          local_68[1] = 0;
          local_68[2] = 0;
          local_40 = 0;
          local_50 = (char *)0x0;
          uStack_48 = 0;
          puVar4 = (undefined1 *)stream_limit_error(10);
          puVar8 = &DAT_1413a70e4;
          puVar11 = &DAT_1413a70e0;
          puVar12 = &DAT_1413a70e4;
          puVar10 = &DAT_1413a70e0;
          if ((*(byte *)(param_3 + 0x5d4) & 0x40) != 0) {
            return 0;
          }
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_1413a2ad6;
            puVar8 = &DAT_1413a2ad6;
            puVar11 = &DAT_1413a2ad6;
          }
          puVar5 = (undefined1 *)conn_close_transport(6);
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_1413a2ad6;
            puVar12 = &DAT_1413a2ad6;
            puVar10 = &DAT_1413a2ad6;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\quic\\quic_channel.c",0xde1,"ossl_quic_channel_raise_protocol_error_loc")
          ;
          FUN_140b91cc0(0x14,0x17e,
                        "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                        ,10,puVar8,puVar4,puVar11,6,puVar12,puVar5,puVar10,
                        "crypto stream data in wrong EL");
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\quic\\quic_channel.c",0x3fc,"ch_on_crypto_recv_record");
          lVar9 = *(longlong *)(param_3 + 0x5d8);
          if (lVar9 == 0) {
            lVar9 = FUN_140c212b0();
            *(longlong *)(param_3 + 0x5d8) = lVar9;
            if (lVar9 == 0) goto LAB_140c5440c;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar9);
LAB_140c5440c:
          *(uint *)(param_3 + 0x5d4) = *(uint *)(param_3 + 0x5d4) | 0x40;
          local_68[1] = 10;
          local_68[2] = 6;
          local_50 = "crypto stream data in wrong EL";
          uStack_48 = 0x1e;
          FUN_140c54a70(param_3,local_68 + 1,0);
          return 0;
        }
      }
      uVar1 = *(uint *)(param_3 + 0x5d0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uVar1 >> 0x11 & 7));
  }
  uVar7 = uVar1 >> 0x11 & 7;
  if ((uVar1 >> 0x11 & 7) == 0) {
    lVar9 = 0x410;
  }
  else if ((uVar7 != 1) && (uVar7 == 2)) {
    lVar9 = 0x418;
  }
  if (*(longlong *)(lVar9 + param_3) == 0) {
    return 0;
  }
  uVar6 = FUN_140c574a0(*(longlong *)(lVar9 + param_3),param_1,param_2,local_res20);
  return uVar6;
}

