/**
 * Function: qtx_encrypt_into_txe
 * Address:  140cc99e0
 * Signature: undefined qtx_encrypt_into_txe(void)
 * Body size: 1043 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void qtx_encrypt_into_txe
               (longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  size_t _Size;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  byte local_68 [4];
  undefined4 local_64;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_64 = 0;
  lVar6 = FUN_140d05030(param_1 + 0x10,param_4,1);
  if (lVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\quic\\quic_record_tx.c",0x1f6,"qtx_encrypt_into_txe");
    FUN_140b91cc0(0x14,0xc0103,0);
  }
  else {
    uVar8 = *(ulonglong *)(lVar6 + 0x58);
    uVar7 = FUN_140cc79f0(*(undefined4 *)(lVar6 + 0x60));
    if (uVar8 < uVar7) {
      lVar1 = *(longlong *)(lVar6 + 0x30);
      if (lVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_record_tx.c",0x20a,"qtx_encrypt_into_txe");
        FUN_140b91cc0(0x14,0xc0103,0);
      }
      else {
        iVar5 = FUN_140b98300(lVar1);
        if (iVar5 < 8) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\quic\\quic_record_tx.c",0x211,"qtx_encrypt_into_txe");
          FUN_140b91cc0(0x14,0xc0103,0);
        }
        else {
          _Size = (size_t)iVar5;
          memcpy(local_60,(void *)(lVar6 + 0x6a),_Size);
          local_60[_Size - 1] = local_60[_Size - 1] ^ (byte)param_5;
          local_60[_Size - 2] = local_60[_Size - 2] ^ (byte)((ulonglong)param_5 >> 8);
          local_70 = 1;
          local_60[_Size - 3] = local_60[_Size - 3] ^ (byte)((ulonglong)param_5 >> 0x10);
          local_60[_Size - 4] = local_60[_Size - 4] ^ (byte)((ulonglong)param_5 >> 0x18);
          local_68[_Size + 3] = local_68[_Size + 3] ^ (byte)((ulonglong)param_5 >> 0x20);
          local_68[_Size + 2] = local_68[_Size + 2] ^ (byte)((ulonglong)param_5 >> 0x28);
          local_68[_Size + 1] = local_68[_Size + 1] ^ (byte)((ulonglong)param_5 >> 0x30);
          local_78 = local_60;
          local_68[_Size] = local_68[_Size] ^ (byte)((ulonglong)param_5 >> 0x38);
          iVar5 = FUN_140b85520(lVar1,0,0,0);
          if (iVar5 == 1) {
            local_78 = (undefined1 *)CONCAT44(local_78._4_4_,param_7);
            iVar5 = evp_encryptupdate(lVar1,0,local_68,param_6);
            if (iVar5 == 1) {
              while( true ) {
                uVar8 = param_2[2];
                if ((ulonglong)param_2[1] <= uVar8) break;
                plVar9 = (longlong *)(*param_2 + 8 + uVar8 * 0x10);
                while( true ) {
                  lVar2 = *plVar9;
                  lVar3 = param_2[3];
                  lVar10 = lVar2 - lVar3;
                  if (lVar10 != 0) break;
                  uVar8 = uVar8 + 1;
                  param_2[3] = 0;
                  plVar9 = plVar9 + 2;
                  param_2[2] = uVar8;
                  if ((ulonglong)param_2[1] <= uVar8) goto LAB_140cc9cb3;
                }
                local_78 = (undefined1 *)CONCAT44(local_78._4_4_,(int)lVar10);
                lVar4 = *(longlong *)(uVar8 * 0x10 + *param_2);
                param_2[4] = param_2[4] - lVar10;
                param_2[3] = lVar2;
                iVar5 = evp_encryptupdate(lVar1,*(longlong *)(param_3 + 0x10) + 0x58 + param_3,
                                          local_68,lVar3 + lVar4);
                if (iVar5 != 1) {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\quic\\quic_record_tx.c",0x230,"qtx_encrypt_into_txe");
                  FUN_140b91cc0(0x14,0x80006,0);
                  goto LAB_140cc9deb;
                }
                *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + lVar10;
              }
LAB_140cc9cb3:
              iVar5 = FUN_140b85790(lVar1,0,&local_64);
              if (iVar5 == 1) {
                iVar5 = FUN_140b85be0(lVar1,0x10,*(undefined4 *)(lVar6 + 100),
                                      *(longlong *)(param_3 + 0x10) + 0x58 + param_3);
                if (iVar5 == 1) {
                  *(longlong *)(param_3 + 0x10) =
                       *(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(lVar6 + 100);
                  iVar5 = FUN_140cc5fc0(lVar6,param_8);
                  if (iVar5 != 0) {
                    *(longlong *)(lVar6 + 0x58) = *(longlong *)(lVar6 + 0x58) + 1;
                  }
                }
                else {
                  d_aplatformplatformopenssl_srccryptoerrerr_lo();
                  d_aplatformplatformopenssl_srccryptoerrerr_lo
                            ("ssl\\quic\\quic_record_tx.c",0x245,"qtx_encrypt_into_txe");
                  FUN_140b91cc0(0x14,0x80006,0);
                }
              }
              else {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\quic\\quic_record_tx.c",0x23f,"qtx_encrypt_into_txe");
                FUN_140b91cc0(0x14,0x80006,0);
              }
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\quic\\quic_record_tx.c",0x221,"qtx_encrypt_into_txe");
              FUN_140b91cc0(0x14,0x80006,0);
            }
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\quic\\quic_record_tx.c",0x21b,"qtx_encrypt_into_txe");
            FUN_140b91cc0(0x14,0x80006,0);
          }
        }
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\quic\\quic_record_tx.c",0x1ff,"qtx_encrypt_into_txe");
      FUN_140b91cc0(0x14,0x18b,0);
    }
  }
LAB_140cc9deb:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_98);
}

