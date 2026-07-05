/**
 * Function: ecdhe_ecdsa_aes128_gcm_sha256
 * Address:  140ba5e90
 * Signature: undefined ecdhe_ecdsa_aes128_gcm_sha256(void)
 * Body size: 3208 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ecdhe_ecdsa_aes128_gcm_sha256
                   (longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                   char *param_5,longlong param_6)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  bool bVar21;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar22;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 uStack_48;
  
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uStack_48 = 0x140ba5eba;
  uVar18 = 0;
  lVar10 = *(longlong *)(param_1 + 8);
  local_68 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  bVar21 = false;
  if (param_5 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (longlong *)0x0) {
    return 0;
  }
  if (param_4 == (longlong *)0x0) {
    return 0;
  }
  iVar7 = strncmp(param_5,"SUITEB128ONLY",0xd);
  if (iVar7 == 0) {
    uVar12 = 0x10000;
    bVar21 = false;
LAB_140ba5f82:
    *(uint *)(param_6 + 0x1c) = uVar12 | *(uint *)(param_6 + 0x1c) & 0xfffcffff;
LAB_140ba5fb2:
    if ((*(byte *)(*(longlong *)(lVar10 + 0xd8) + 0x50) & 0x10) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\ssl_ciph.c",0x4ea,"check_suiteb_cipher_list");
      FUN_140b91cc0(0x14,0x9e,0);
      return 0;
    }
    if (uVar12 == 0x10000) {
      param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256";
    }
    else if (uVar12 == 0x20000) {
      param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
    else if ((uVar12 == 0x30000) && (param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384", !bVar21)) {
      param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
    }
  }
  else {
    iVar7 = strncmp(param_5,"SUITEB128C2",0xb);
    if (iVar7 == 0) {
      uVar12 = 0x30000;
      bVar21 = true;
      goto LAB_140ba5f82;
    }
    iVar7 = strncmp(param_5,"SUITEB128",9);
    if (iVar7 == 0) {
      uVar12 = 0x30000;
      bVar21 = false;
      goto LAB_140ba5f82;
    }
    iVar7 = strncmp(param_5,"SUITEB192",9);
    if (iVar7 == 0) {
      uVar12 = 0x20000;
      bVar21 = false;
      goto LAB_140ba5f82;
    }
    uVar12 = *(uint *)(param_6 + 0x1c) & 0x30000;
    if (uVar12 != 0) goto LAB_140ba5fb2;
  }
  uVar12 = *(uint *)(param_1 + 0x698);
  uVar3 = *(uint *)(param_1 + 0x694);
  uVar4 = *(uint *)(param_1 + 0x69c);
  uVar5 = *(uint *)(param_1 + 0x690);
  iVar7 = (**(code **)(lVar10 + 0xc0))();
  uVar9 = uVar18;
  if ((0 < iVar7) &&
     (uVar9 = FUN_140b8d8d0((longlong)iVar7 << 5,"ssl\\ssl_ciph.c",0x5ba), uVar9 == 0)) {
    return 0;
  }
  FUN_140ba76c0(lVar10,iVar7,uVar12,uVar4,CONCAT44(uVar22,uVar5),uVar3,uVar9,&local_68,&local_60);
  plVar14 = local_68;
  plVar13 = local_60;
  if (local_60 != (longlong *)0x0) {
    do {
      if (plVar14 == (longlong *)0x0) break;
      plVar15 = (longlong *)plVar14[2];
      if ((((*(byte *)(*plVar14 + 0x1c) & 4) != 0) && ((*(byte *)(*plVar14 + 0x20) & 8) != 0)) &&
         ((int)plVar14[1] == 0)) {
        if (plVar14 != plVar13) {
          if (plVar14 == local_68) {
            local_68 = plVar15;
          }
          if (plVar14[3] != 0) {
            *(longlong **)(plVar14[3] + 0x10) = plVar15;
          }
          if (plVar14[2] != 0) {
            *(longlong *)(plVar14[2] + 0x18) = plVar14[3];
          }
          plVar13[2] = (longlong)plVar14;
          plVar14[3] = (longlong)plVar13;
          plVar14[2] = 0;
          plVar13 = plVar14;
        }
        *(undefined4 *)(plVar14 + 1) = 1;
      }
      bVar21 = plVar14 != local_60;
      plVar14 = plVar15;
    } while (bVar21);
  }
  plVar14 = local_68;
  plVar15 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    do {
      if (plVar14 == (longlong *)0x0) break;
      plVar20 = (longlong *)plVar14[2];
      if (((*(byte *)(*plVar14 + 0x1c) & 4) != 0) && ((int)plVar14[1] == 0)) {
        if (plVar14 != plVar15) {
          if (plVar14 == local_68) {
            local_68 = plVar20;
          }
          if (plVar14[3] != 0) {
            *(longlong **)(plVar14[3] + 0x10) = plVar20;
          }
          if (plVar14[2] != 0) {
            *(longlong *)(plVar14[2] + 0x18) = plVar14[3];
          }
          plVar15[2] = (longlong)plVar14;
          plVar14[3] = (longlong)plVar15;
          plVar14[2] = 0;
          plVar15 = plVar14;
        }
        *(undefined4 *)(plVar14 + 1) = 1;
      }
      bVar21 = plVar14 != plVar13;
      plVar14 = plVar20;
    } while (bVar21);
  }
  plVar14 = local_68;
  plVar13 = plVar15;
  if (local_68 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar20 = (longlong *)plVar15[3];
      if (((*(byte *)(*plVar15 + 0x1c) & 4) != 0) && ((int)plVar15[1] != 0)) {
        if (plVar15 != plVar14) {
          if (plVar15 == plVar13) {
            plVar13 = plVar20;
          }
          if (plVar15[2] != 0) {
            *(longlong **)(plVar15[2] + 0x18) = plVar20;
          }
          if (plVar15[3] != 0) {
            *(longlong *)(plVar15[3] + 0x10) = plVar15[2];
          }
          plVar14[3] = (longlong)plVar15;
          plVar15[2] = (longlong)plVar14;
          plVar15[3] = 0;
          plVar14 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 0;
      }
      bVar21 = plVar15 != local_68;
      plVar15 = plVar20;
    } while (bVar21);
  }
  plVar15 = plVar14;
  plVar20 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar15[2];
      if (((*(uint *)(*plVar15 + 0x24) & 0x3000) != 0) && ((int)plVar15[1] == 0)) {
        if (plVar15 != plVar20) {
          if (plVar15 == plVar14) {
            plVar14 = plVar6;
          }
          if (plVar15[3] != 0) {
            *(longlong **)(plVar15[3] + 0x10) = plVar6;
          }
          if (plVar15[2] != 0) {
            *(longlong *)(plVar15[2] + 0x18) = plVar15[3];
          }
          plVar20[2] = (longlong)plVar15;
          plVar15[3] = (longlong)plVar20;
          plVar15[2] = 0;
          plVar20 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 1;
      }
      bVar21 = plVar15 != plVar13;
      plVar15 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar15 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[2];
      if (((*(uint *)(*plVar13 + 0x24) & 0x80000) != 0) && ((int)plVar13[1] == 0)) {
        if (plVar13 != plVar15) {
          if (plVar13 == plVar14) {
            plVar14 = plVar6;
          }
          if (plVar13[3] != 0) {
            *(longlong **)(plVar13[3] + 0x10) = plVar6;
          }
          if (plVar13[2] != 0) {
            *(longlong *)(plVar13[2] + 0x18) = plVar13[3];
          }
          plVar15[2] = (longlong)plVar13;
          plVar13[3] = (longlong)plVar15;
          plVar13[2] = 0;
          plVar15 = plVar13;
        }
        *(undefined4 *)(plVar13 + 1) = 1;
      }
      bVar21 = plVar13 != plVar20;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar20 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[2];
      if (((*(uint *)(*plVar13 + 0x24) & 0x3c0c0) != 0) && ((int)plVar13[1] == 0)) {
        if (plVar13 != plVar20) {
          if (plVar13 == plVar14) {
            plVar14 = plVar6;
          }
          if (plVar13[3] != 0) {
            *(longlong **)(plVar13[3] + 0x10) = plVar6;
          }
          if (plVar13[2] != 0) {
            *(longlong *)(plVar13[2] + 0x18) = plVar13[3];
          }
          plVar20[2] = (longlong)plVar13;
          plVar13[3] = (longlong)plVar20;
          plVar13[2] = 0;
          plVar20 = plVar13;
        }
        *(undefined4 *)(plVar13 + 1) = 1;
      }
      bVar21 = plVar13 != plVar15;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar15 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[2];
      if ((int)plVar13[1] == 0) {
        if (plVar13 != plVar15) {
          if (plVar13 == plVar14) {
            plVar14 = plVar6;
          }
          if (plVar13[3] != 0) {
            *(longlong **)(plVar13[3] + 0x10) = plVar6;
          }
          if (plVar13[2] != 0) {
            *(longlong *)(plVar13[2] + 0x18) = plVar13[3];
          }
          plVar15[2] = (longlong)plVar13;
          plVar13[3] = (longlong)plVar15;
          plVar13[2] = 0;
          plVar15 = plVar13;
        }
        *(undefined4 *)(plVar13 + 1) = 1;
      }
      bVar21 = plVar13 != plVar20;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar20 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[2];
      if ((((*(byte *)(*plVar13 + 0x28) & 1) != 0) && ((int)plVar13[1] != 0)) &&
         (plVar13 != plVar20)) {
        if (plVar13 == plVar14) {
          plVar14 = plVar6;
        }
        if (plVar13[3] != 0) {
          *(longlong **)(plVar13[3] + 0x10) = plVar6;
        }
        if (plVar13[2] != 0) {
          *(longlong *)(plVar13[2] + 0x18) = plVar13[3];
        }
        plVar20[2] = (longlong)plVar13;
        plVar13[3] = (longlong)plVar20;
        plVar13[2] = 0;
        plVar20 = plVar13;
      }
      bVar21 = plVar13 != plVar15;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar15 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[2];
      if ((((*(byte *)(*plVar13 + 0x20) & 4) != 0) && ((int)plVar13[1] != 0)) &&
         (plVar13 != plVar15)) {
        if (plVar13 == plVar14) {
          plVar14 = plVar6;
        }
        if (plVar13[3] != 0) {
          *(longlong **)(plVar13[3] + 0x10) = plVar6;
        }
        if (plVar13[2] != 0) {
          *(longlong *)(plVar13[2] + 0x18) = plVar13[3];
        }
        plVar15[2] = (longlong)plVar13;
        plVar13[3] = (longlong)plVar15;
        plVar13[2] = 0;
        plVar15 = plVar13;
      }
      bVar21 = plVar13 != plVar20;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar20 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[2];
      if ((((*(byte *)(*plVar13 + 0x1c) & 1) != 0) && ((int)plVar13[1] != 0)) &&
         (plVar13 != plVar20)) {
        if (plVar13 == plVar14) {
          plVar14 = plVar6;
        }
        if (plVar13[3] != 0) {
          *(longlong **)(plVar13[3] + 0x10) = plVar6;
        }
        if (plVar13[2] != 0) {
          *(longlong *)(plVar13[2] + 0x18) = plVar13[3];
        }
        plVar20[2] = (longlong)plVar13;
        plVar13[3] = (longlong)plVar20;
        plVar13[2] = 0;
        plVar20 = plVar13;
      }
      bVar21 = plVar13 != plVar15;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar15 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[2];
      if ((((*(byte *)(*plVar13 + 0x1c) & 8) != 0) && ((int)plVar13[1] != 0)) &&
         (plVar13 != plVar15)) {
        if (plVar13 == plVar14) {
          plVar14 = plVar6;
        }
        if (plVar13[3] != 0) {
          *(longlong **)(plVar13[3] + 0x10) = plVar6;
        }
        if (plVar13[2] != 0) {
          *(longlong *)(plVar13[2] + 0x18) = plVar13[3];
        }
        plVar15[2] = (longlong)plVar13;
        plVar13[3] = (longlong)plVar15;
        plVar13[2] = 0;
        plVar15 = plVar13;
      }
      bVar21 = plVar13 != plVar20;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  local_60 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar20 = (longlong *)plVar13[2];
      if ((((*(byte *)(*plVar13 + 0x24) & 4) != 0) && ((int)plVar13[1] != 0)) &&
         (plVar13 != local_60)) {
        if (plVar13 == plVar14) {
          plVar14 = plVar20;
        }
        if (plVar13[3] != 0) {
          *(longlong **)(plVar13[3] + 0x10) = plVar20;
        }
        if (plVar13[2] != 0) {
          *(longlong *)(plVar13[2] + 0x18) = plVar13[3];
        }
        local_60[2] = (longlong)plVar13;
        plVar13[3] = (longlong)local_60;
        plVar13[2] = 0;
        local_60 = plVar13;
      }
      bVar21 = plVar13 != plVar15;
      plVar13 = plVar20;
    } while (bVar21);
  }
  local_68 = plVar14;
  iVar8 = FUN_140ba7d30(&local_68,&local_60);
  if (iVar8 == 0) {
    uVar19 = 0x5fe;
    goto LAB_140ba65fe;
  }
  plVar14 = local_60;
  plVar13 = local_68;
  if (local_68 != (longlong *)0x0) {
    do {
      if (local_60 == (longlong *)0x0) break;
      plVar15 = (longlong *)local_60[3];
      if (((*(int *)(*local_60 + 0x2c) == 0x303) && ((int)local_60[1] != 0)) &&
         (local_60 != plVar13)) {
        if (local_60 == plVar14) {
          plVar14 = plVar15;
        }
        if (local_60[2] != 0) {
          *(longlong **)(local_60[2] + 0x18) = plVar15;
        }
        if (local_60[3] != 0) {
          *(longlong *)(local_60[3] + 0x10) = local_60[2];
        }
        plVar13[3] = (longlong)local_60;
        local_60[2] = (longlong)plVar13;
        local_60[3] = 0;
        plVar13 = local_60;
      }
      bVar21 = local_60 != local_68;
      local_60 = plVar15;
    } while (bVar21);
  }
  plVar15 = plVar14;
  plVar20 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar15[3];
      if ((((*(byte *)(*plVar15 + 0x28) & 0x40) != 0) && ((int)plVar15[1] != 0)) &&
         (plVar15 != plVar20)) {
        if (plVar15 == plVar14) {
          plVar14 = plVar6;
        }
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar6;
        }
        if (plVar15[3] != 0) {
          *(longlong *)(plVar15[3] + 0x10) = plVar15[2];
        }
        plVar20[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar20;
        plVar15[3] = 0;
        plVar20 = plVar15;
      }
      bVar21 = plVar15 != plVar13;
      plVar15 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar15 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[3];
      if ((((*(byte *)(*plVar13 + 0x1c) & 6) != 0) && ((int)plVar13[1] != 0)) &&
         (plVar13 != plVar15)) {
        if (plVar13 == plVar14) {
          plVar14 = plVar6;
        }
        if (plVar13[2] != 0) {
          *(longlong **)(plVar13[2] + 0x18) = plVar6;
        }
        if (plVar13[3] != 0) {
          *(longlong *)(plVar13[3] + 0x10) = plVar13[2];
        }
        plVar15[3] = (longlong)plVar13;
        plVar13[2] = (longlong)plVar15;
        plVar13[3] = 0;
        plVar15 = plVar13;
      }
      bVar21 = plVar13 != plVar20;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar13 = plVar14;
  plVar20 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      if (plVar13 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar13[3];
      if ((((*(byte *)(*plVar13 + 0x1c) & 6) != 0) && ((*(byte *)(*plVar13 + 0x28) & 0x40) != 0)) &&
         (((int)plVar13[1] != 0 && (plVar13 != plVar20)))) {
        if (plVar13 == plVar14) {
          plVar14 = plVar6;
        }
        if (plVar13[2] != 0) {
          *(longlong **)(plVar13[2] + 0x18) = plVar6;
        }
        if (plVar13[3] != 0) {
          *(longlong *)(plVar13[3] + 0x10) = plVar13[2];
        }
        plVar20[3] = (longlong)plVar13;
        plVar13[2] = (longlong)plVar20;
        plVar13[3] = 0;
        plVar20 = plVar13;
      }
      bVar21 = plVar13 != plVar15;
      plVar13 = plVar6;
    } while (bVar21);
  }
  plVar15 = plVar14;
  plVar13 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      if (plVar15 == (longlong *)0x0) break;
      plVar6 = (longlong *)plVar15[3];
      if ((int)plVar15[1] != 0) {
        if (plVar15 != plVar13) {
          if (plVar15 == plVar14) {
            plVar14 = plVar6;
          }
          if (plVar15[2] != 0) {
            *(longlong **)(plVar15[2] + 0x18) = plVar6;
          }
          if (plVar15[3] != 0) {
            *(longlong *)(plVar15[3] + 0x10) = plVar15[2];
          }
          plVar13[3] = (longlong)plVar15;
          plVar15[2] = (longlong)plVar13;
          plVar15[3] = 0;
          plVar13 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 0;
      }
      bVar21 = plVar15 != plVar20;
      plVar15 = plVar6;
    } while (bVar21);
  }
  local_68 = plVar13;
  local_60 = plVar14;
  local_58 = (longlong *)FUN_140b8d8d0((longlong)(iVar7 + 0x50) << 3,"ssl\\ssl_ciph.c",0x629);
  if (local_58 == (longlong *)0x0) {
    uVar19 = 0x62b;
    goto LAB_140ba65fe;
  }
  plVar14 = local_58;
  for (; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[2]) {
    *plVar14 = *plVar13;
    plVar14 = plVar14 + 1;
  }
  puVar16 = &DAT_141232fd0;
  do {
    if (((((puVar16[-1] == 0) || ((~uVar12 & puVar16[-1]) != 0)) &&
         ((*puVar16 == 0 || ((~uVar4 & *puVar16) != 0)))) &&
        ((puVar16[1] == 0 || ((~uVar5 & puVar16[1]) != 0)))) &&
       ((puVar16[2] == 0 || ((~uVar3 & puVar16[2]) != 0)))) {
      *plVar14 = (longlong)(&DAT_141232fb0 + (longlong)(int)uVar18 * 0x50);
      plVar14 = plVar14 + 1;
    }
    uVar18 = (ulonglong)((int)uVar18 + 1);
    puVar16 = puVar16 + 0x14;
  } while ((longlong)puVar16 < 0x141234880);
  iVar17 = 0;
  *plVar14 = 0;
  iVar7 = strncmp(param_5,"DEFAULT",7);
  plVar14 = local_58;
  iVar8 = 1;
  if (iVar7 == 0) {
    iVar8 = FUN_140ba7ea0("ALL:!COMPLEMENTOFDEFAULT:!eNULL",&local_68,&local_60,local_58,param_6);
    pcVar1 = param_5 + 7;
    pcVar2 = param_5 + 7;
    param_5 = param_5 + 8;
    if (*pcVar1 != ':') {
      param_5 = pcVar2;
    }
    if (iVar8 != 0) goto LAB_140ba6993;
  }
  else {
LAB_140ba6993:
    if (*param_5 != '\0') {
      iVar8 = FUN_140ba7ea0(param_5,&local_68,&local_60,plVar14,param_6);
    }
  }
  FUN_140b8d990(plVar14,"ssl\\ssl_ciph.c",0x643);
  if (iVar8 == 0) {
    uVar19 = 0x646;
  }
  else {
    lVar10 = FUN_140b77ab0();
    if (lVar10 != 0) {
      iVar7 = FUN_140b77980(param_2);
      plVar14 = local_68;
      if (0 < iVar7) {
        do {
          lVar11 = FUN_140b77990(param_2,iVar17);
          if (((*(uint *)(lVar11 + 0x24) & uVar5) == 0) &&
             ((*(uint *)(param_1 + 0x694) &
              (&DAT_141232e60)[(ulonglong)*(byte *)(lVar11 + 0x40) * 2]) == 0)) {
            iVar7 = FUN_140b78340(lVar10,lVar11);
            if (iVar7 == 0) {
              uVar19 = 0x662;
              goto LAB_140ba6a45;
            }
          }
          else {
            FUN_140b77f80(param_2,iVar17);
            iVar17 = iVar17 + -1;
          }
          iVar17 = iVar17 + 1;
          iVar7 = FUN_140b77980(param_2);
          plVar14 = local_68;
        } while (iVar17 < iVar7);
      }
      do {
        if (plVar14 == (longlong *)0x0) {
          FUN_140b8d990(uVar9,"ssl\\ssl_ciph.c",0x67b);
          lVar11 = FUN_140b78410(lVar10);
          if (lVar11 != 0) {
            FUN_140b77c10(*param_4);
            *param_4 = lVar11;
            FUN_140b783f0(lVar11,&LAB_140b6dbe0);
            FUN_140b78500(*param_4);
            FUN_140b77c10(*param_3);
            *param_3 = lVar10;
            return lVar10;
          }
LAB_140ba6a54:
          FUN_140b77c10(lVar10);
          return 0;
        }
        if (((int)plVar14[1] != 0) && (iVar7 = FUN_140b78340(lVar10,*plVar14), iVar7 == 0)) {
          uVar19 = 0x672;
LAB_140ba6a45:
          FUN_140b8d990(uVar9,"ssl\\ssl_ciph.c",uVar19);
          goto LAB_140ba6a54;
        }
        plVar14 = (longlong *)plVar14[2];
      } while( true );
    }
    uVar19 = 0x64f;
  }
LAB_140ba65fe:
  FUN_140b8d990(uVar9,"ssl\\ssl_ciph.c",uVar19);
  return 0;
}

