/**
 * Function: client_early_traffic_secret
 * Address:  140bba6c0
 * Signature: undefined client_early_traffic_secret(void)
 * Body size: 2559 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void client_early_traffic_secret(longlong param_1,uint param_2)

{
  char **ppcVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined1 auStack_228 [32];
  char *local_208;
  char *local_200;
  undefined1 *local_1f8;
  char *local_1f0;
  undefined1 *local_1e8;
  char *local_1e0;
  undefined1 *local_1d8;
  int *local_1d0;
  undefined1 **local_1c8;
  char **local_1c0;
  undefined1 ***local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  char *local_198;
  undefined4 local_190;
  int local_18c;
  char *local_188;
  undefined1 **local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  longlong local_168;
  char *local_160;
  char *local_158;
  undefined1 *local_150;
  int local_148;
  undefined4 uStack_144;
  uint local_140;
  longlong local_138;
  char **local_130;
  char *local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  char local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140bba6e2;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_228;
  ppcVar1 = *(char ***)(param_1 + 8);
  local_138 = 0;
  local_18c = 0;
  local_198 = (char *)0x0;
  local_168 = 0;
  local_140 = param_2 & 1 ^ 1;
  local_158 = (char *)0x0;
  local_170 = local_c8;
  bVar2 = (byte)param_2;
  local_180 = (undefined1 **)0x0;
  local_190 = 0;
  pcVar11 = "c e traffic";
  local_128 = &DAT_00000010;
  puVar10 = local_118;
  local_150 = local_118;
  local_130 = ppcVar1;
  if (((bVar2 & 0x12) == 0x12) || (((param_2 & 0x20) != 0 && ((param_2 & 1) != 0)))) {
    if ((param_2 & 0x40) == 0) {
      if ((char)bVar2 < '\0') {
        local_138 = param_1 + 0x674;
        local_188 = (char *)(param_1 + 0x5b4);
        uVar6 = FUN_140ba7640(param_1);
        local_18c = FUN_140b97b40(uVar6);
        if (local_18c < 1) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\tls13_enc.c",0x266,"tls13_change_cipher_state");
          FUN_140ba3290(param_1,0x50,0xc0103,0);
          goto LAB_140bbacd7;
        }
        local_160 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
        pcVar11 = "c hs traffic";
        local_170 = (undefined1 *)(param_1 + 0x734);
      }
      else {
        local_188 = (char *)(param_1 + 0x5f4);
        pcVar11 = "c ap traffic";
        local_160 = "CLIENT_TRAFFIC_SECRET_0";
        local_170 = (undefined1 *)(param_1 + 0x6f4);
      }
LAB_140bbae39:
      local_178 = (undefined1 *)0xc;
      local_168 = FUN_140ba7640(param_1);
      local_180 = *(undefined1 ***)(param_1 + 0x370);
      local_158 = *(char **)(param_1 + 0x378);
      local_190 = *(undefined4 *)(param_1 + 0x380);
      iVar5 = ssl3_digest_cached_records(param_1,1);
      if ((iVar5 == 0) || (iVar5 = ssl_handshake_hash(param_1,local_c8,0x40,&local_198), iVar5 == 0)
         ) goto LAB_140bbacd7;
      goto LAB_140bbae97;
    }
    lVar7 = FUN_140ba43d0(*(undefined8 *)(param_1 + 0x8f8));
    local_178 = (undefined1 *)0xb;
    local_160 = "CLIENT_EARLY_TRAFFIC_SECRET";
    local_148 = FUN_140b74190(*(undefined8 *)(param_1 + 0x1a8),3,0,&local_120);
    if (0 < local_148) {
      if (((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(param_1 + 0x1530) != 0)) &&
         (*(int *)(*(longlong *)(param_1 + 0x8f8) + 0x338) == 0)) {
        if ((*(longlong *)(param_1 + 0x900) == 0) ||
           (*(int *)(param_1 + 0x1530) != *(int *)(*(longlong *)(param_1 + 0x900) + 0x338))) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\tls13_enc.c",0x221,"tls13_change_cipher_state");
          FUN_140ba3290(param_1,0x50,0xc0103,0);
          goto LAB_140bbacb6;
        }
        lVar7 = FUN_140ba43d0();
      }
      if (lVar7 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\tls13_enc.c",0x227,"tls13_change_cipher_state");
        FUN_140ba3290(param_1,0x50,0xdb,0);
        goto LAB_140bbacb6;
      }
      iVar5 = FUN_140ba6b20(ppcVar1,lVar7,&local_180);
      if (iVar5 == 0) {
        FUN_140ba3200(param_1,0x50);
        goto LAB_140bbacb6;
      }
      uVar4 = FUN_140b97ec0(local_180);
      if ((uVar4 >> 0x15 & 1) == 0) {
        local_208 = (char *)0x0;
        iVar5 = FUN_140ba6bf0(ppcVar1,lVar7,&local_158,&local_190);
        if (iVar5 == 0) {
          FUN_140ba3200(param_1,0x50);
          goto LAB_140bbacb6;
        }
      }
      lVar8 = FUN_140b70980();
      if (lVar8 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\tls13_enc.c",0x243,"tls13_change_cipher_state");
        FUN_140ba3290(param_1,0x50,0x80006,0);
        goto LAB_140bbacb6;
      }
      local_168 = FUN_140ba75f0(local_130,*(undefined4 *)(lVar7 + 0x40));
      if (((local_168 == 0) || (iVar5 = FUN_140b70ff0(lVar8,local_168,0), iVar5 == 0)) ||
         ((iVar5 = evp_digestupdate(lVar8,local_120,(longlong)local_148), iVar5 == 0 ||
          (iVar5 = assertion_failed_mdsize_evp_max_md_size(lVar8,local_c8,&local_188), iVar5 == 0)))
         ) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\tls13_enc.c",0x24b,"tls13_change_cipher_state");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        FUN_140b709d0(lVar8);
        goto LAB_140bbacb6;
      }
      local_198 = (char *)((ulonglong)local_188 & 0xffffffff);
      FUN_140b709d0(lVar8);
      pcVar9 = (char *)(param_1 + 0x574);
      local_1d8 = (undefined1 *)((ulonglong)local_1d8 & 0xffffffff00000000);
      local_1e0 = local_198;
      local_1f0 = local_198;
      local_1f8 = local_c8;
      local_200 = (char *)0xc;
      local_208 = "e exp master";
      local_1e8 = (undefined1 *)(param_1 + 0x834);
      iVar5 = FUN_140bbb470(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8c],
                            local_168,pcVar9);
      if (iVar5 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\tls13_enc.c",0x71,"tls13_hkdf_expand");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\tls13_enc.c",600,"tls13_change_cipher_state");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        goto LAB_140bbacb6;
      }
      iVar5 = FUN_140b6ede0(param_1,"EARLY_EXPORTER_SECRET",(undefined1 *)(param_1 + 0x834),
                            local_198);
      if (iVar5 == 0) goto LAB_140bbacb6;
      goto LAB_140bbab6b;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\tls13_enc.c",0x212,"tls13_change_cipher_state");
    FUN_140ba3290(param_1,0x50,0x14c,0);
  }
  else {
    if ((char)bVar2 < '\0') {
      local_138 = param_1 + 0x6b4;
      local_188 = (char *)(param_1 + 0x5b4);
      uVar6 = FUN_140ba7640(param_1);
      local_18c = FUN_140b97b40(uVar6);
      if (0 < local_18c) {
        local_160 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
        pcVar11 = "s hs traffic";
        goto LAB_140bba817;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\tls13_enc.c",0x28a,"tls13_change_cipher_state");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
    }
    else {
      local_188 = (char *)(param_1 + 0x5f4);
      pcVar11 = "s ap traffic";
      local_160 = "SERVER_TRAFFIC_SECRET_0";
      local_170 = (undefined1 *)(param_1 + 0x6f4);
LAB_140bba817:
      local_178 = (undefined1 *)0xc;
      if ((param_2 & 0x40) == 0) goto LAB_140bbae39;
LAB_140bbae97:
      pcVar3 = local_198;
      pcVar9 = local_188;
      if (pcVar11 == "c ap traffic") {
        uVar6 = FUN_140ba7640(param_1);
        pcVar9 = local_188;
        local_1e8 = (undefined1 *)(param_1 + 0x634);
        local_1d8 = (undefined1 *)((ulonglong)local_1d8 & 0xffffffff00000000);
        local_1e0 = pcVar3;
        local_1f8 = local_c8;
        local_1f0 = pcVar3;
        local_200 = (char *)0xa;
        local_208 = "res master";
        iVar5 = FUN_140bbb470(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[0x8c],
                              uVar6,local_188);
        if (iVar5 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\tls13_enc.c",0x71,"tls13_hkdf_expand")
          ;
          FUN_140ba3290(param_1,0x50,0xc0103,0);
          goto LAB_140bbacb0;
        }
      }
LAB_140bbab6b:
      lVar7 = local_168;
      if (local_180 != (undefined1 **)0x0) {
        local_1b8 = &local_130;
        local_1c0 = &local_128;
        local_1c8 = &local_150;
        local_1d0 = &local_148;
        local_1d8 = local_88;
        local_1e0 = local_108;
        local_1e8 = local_178;
        local_1f8 = local_170;
        local_208 = local_158;
        local_200 = pcVar9;
        local_1f0 = pcVar11;
        iVar5 = FUN_140bbbee0(param_1,local_168,local_180,local_190);
        pcVar3 = local_198;
        puVar10 = local_150;
        if (iVar5 != 0) {
          if (pcVar11 == "s ap traffic") {
            memcpy((void *)(param_1 + 0x7b4),local_108,(size_t)local_198);
            uVar6 = FUN_140ba7640(param_1);
            local_1d8 = (undefined1 *)((ulonglong)local_1d8 & 0xffffffff00000000);
            local_1e0 = pcVar3;
            local_1f0 = pcVar3;
            local_1f8 = local_170;
            local_200 = (char *)0xa;
            local_208 = "exp master";
            local_1e8 = (undefined1 *)(param_1 + 0x7f4);
            iVar5 = FUN_140bbb470(**(undefined8 **)(param_1 + 8),
                                  (*(undefined8 **)(param_1 + 8))[0x8c],uVar6,pcVar9);
            if (iVar5 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\tls13_enc.c",0x71,"tls13_hkdf_expand");
              FUN_140ba3290(param_1,0x50,0xc0103,0);
              puVar10 = local_150;
            }
            else {
              iVar5 = FUN_140b6ede0(param_1,"EXPORTER_SECRET",(undefined1 *)(param_1 + 0x7f4),
                                    local_198);
              puVar10 = local_150;
              lVar7 = local_168;
              if (iVar5 != 0) goto LAB_140bbaf8e;
            }
          }
          else {
            if (pcVar11 == "c ap traffic") {
              memcpy((void *)(param_1 + 0x774),local_108,(size_t)local_198);
            }
LAB_140bbaf8e:
            iVar5 = FUN_140b6ede0(param_1,local_160,local_108,local_198);
            lVar8 = local_138;
            puVar10 = local_150;
            if (iVar5 != 0) {
              if (local_138 != 0) {
                pcVar9 = (char *)(longlong)local_18c;
                uVar6 = FUN_140ba7640(param_1);
                local_208 = pcVar9;
                iVar5 = FUN_140bbb7a0(param_1,uVar6,local_108,lVar8);
                puVar10 = local_150;
                if (iVar5 == 0) goto LAB_140bbacb0;
              }
              if ((param_2 & 2) != 0) {
                if ((*(int *)(param_1 + 0x78) == 0) && (pcVar11 == "c e traffic")) {
                  (**(code **)(*(longlong *)(param_1 + 0xc68) + 0x68))
                            (*(undefined8 *)(param_1 + 0xc78),1);
                }
                else {
                  (**(code **)(*(longlong *)(param_1 + 0xc68) + 0x68))
                            (*(undefined8 *)(param_1 + 0xc78),0);
                }
              }
              puVar10 = local_150;
              if ((param_2 & 0x40) == 0) {
                uVar4 = ~(param_2 >> 7) & 1 | 2;
              }
              else {
                uVar4 = 1;
              }
              local_1a8 = 0;
              local_1b0 = local_158;
              local_1b8 = (undefined1 ***)CONCAT44(local_1b8._4_4_,local_190);
              local_1c0 = local_130;
              local_1c8 = local_180;
              local_1d0 = (int *)0x0;
              local_1d8 = (undefined1 *)0x0;
              local_1e0 = local_128;
              local_1f0 = (char *)CONCAT44(uStack_144,local_148);
              local_1e8 = local_150;
              local_1f8 = local_88;
              local_200 = local_198;
              local_208 = local_108;
              local_1a0 = lVar7;
              read_buffer_len(param_1,*(undefined4 *)(param_1 + 0x48),local_140,uVar4);
            }
          }
        }
      }
    }
LAB_140bbacb0:
    if ((param_2 & 0x40) == 0) goto LAB_140bbacd7;
  }
LAB_140bbacb6:
  uVar4 = FUN_140b97ec0(local_180);
  if ((uVar4 >> 0x15 & 1) == 0) {
    FUN_140b6f050(local_158);
  }
  FUN_140b6ef70(local_180);
LAB_140bbacd7:
  FUN_14046e980(local_88,0x40);
  FUN_14046e980(local_108,0x40);
  if (puVar10 != local_118) {
    FUN_140b8d990(puVar10,"ssl\\tls13_enc.c",0x300);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_228);
}

