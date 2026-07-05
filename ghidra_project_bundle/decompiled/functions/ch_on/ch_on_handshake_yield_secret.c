/**
 * Function: ch_on_handshake_yield_secret
 * Address:  140c53eb0
 * Signature: undefined ch_on_handshake_yield_secret(void)
 * Body size: 824 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ch_on_handshake_yield_secret
          (int param_1,int param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined1 *param_7)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 local_res8 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  char *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = (longlong)param_7;
  uStack_30 = 0x140c53ec6;
  if (param_1 != 1) {
    if (param_1 == 2) {
      uVar6 = 2;
    }
    else {
      if (param_1 != 3) {
        return 0;
      }
      uVar6 = 3;
    }
    if (param_2 == 0) {
      if ((*(uint *)((longlong)param_7 + 0x5d0) >> 0x11 & 7) < uVar6) {
        uVar7 = 0;
        do {
          if (uVar7 == 0) {
            lVar3 = 0x410;
          }
          else if ((uVar7 == 1) || (uVar7 != 2)) {
            lVar3 = 0x420;
          }
          else {
            lVar3 = 0x418;
          }
          param_7 = (undefined1 *)0x0;
          local_res8[0] = 0;
          if ((*(longlong *)(lVar3 + lVar1) != 0) &&
             ((iVar2 = FUN_140c573e0(*(longlong *)(lVar3 + lVar1),&param_7,local_res8), iVar2 == 0
              || (param_7 != (undefined1 *)0x0)))) {
            local_38 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_48 = (char *)0x0;
            uStack_40 = 0;
            puVar4 = (undefined1 *)stream_limit_error(10);
            puVar10 = &DAT_1413a70e4;
            puVar8 = &DAT_1413a70e0;
            puVar9 = &DAT_1413a70e4;
            param_7 = &DAT_1413a70e0;
            if ((*(byte *)(lVar1 + 0x5d4) & 0x40) != 0) {
              return 0;
            }
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_1413a2ad6;
              puVar10 = &DAT_1413a2ad6;
              puVar8 = &DAT_1413a2ad6;
            }
            puVar5 = (undefined1 *)conn_close_transport(6);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_1413a2ad6;
              param_7 = &DAT_1413a2ad6;
              puVar9 = &DAT_1413a2ad6;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\quic\\quic_channel.c",0xde1,
                       "ossl_quic_channel_raise_protocol_error_loc");
            FUN_140b91cc0(0x14,0x17e,
                          "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                          ,10,puVar10,puVar4,puVar8,6,puVar9,puVar5,param_7,
                          "crypto stream data in wrong EL");
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\quic\\quic_channel.c",0x45d,"ch_on_handshake_yield_secret");
            lVar3 = *(longlong *)(lVar1 + 0x5d8);
            if (lVar3 == 0) {
              lVar3 = FUN_140c212b0();
              *(longlong *)(lVar1 + 0x5d8) = lVar3;
              if (lVar3 == 0) goto LAB_140c5418c;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar3);
LAB_140c5418c:
            *(uint *)(lVar1 + 0x5d4) = *(uint *)(lVar1 + 0x5d4) | 0x40;
            local_58 = 10;
            uStack_50 = 6;
            local_48 = "crypto stream data in wrong EL";
            uStack_40 = 0x1e;
            FUN_140c54a70(lVar1,&local_58,0);
            return 0;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
        iVar2 = FUN_140cd2bb0(*(undefined8 *)(lVar1 + 0x3d8),uVar6,param_3 & 0xffffffff,param_4,
                              param_5,param_6);
        if (iVar2 != 0) {
          *(uint *)(lVar1 + 0x5d0) = *(uint *)(lVar1 + 0x5d0) & 0xfff1ffff | (uVar6 | 0x200) << 0x11
          ;
          return 1;
        }
      }
    }
    else if (((*(uint *)((longlong)param_7 + 0x5d0) >> 0xe & 7) < uVar6) &&
            (iVar2 = FUN_140cc8e00(*(undefined8 *)((longlong)param_7 + 0x3d0),uVar6,param_3,param_4,
                                   param_5,param_6), iVar2 != 0)) {
      *(uint *)(lVar1 + 0x5d0) = *(uint *)(lVar1 + 0x5d0) & 0xfffe3fff | uVar6 << 0xe;
      return 1;
    }
  }
  return 0;
}

