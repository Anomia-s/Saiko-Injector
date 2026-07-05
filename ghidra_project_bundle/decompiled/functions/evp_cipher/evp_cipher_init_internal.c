/**
 * Function: evp_cipher_init_internal
 * Address:  140b86750
 * Signature: undefined evp_cipher_init_internal(void)
 * Body size: 3258 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_cipher_init_internal
               (longlong *param_1,int *param_2,longlong param_3,longlong param_4,longlong *param_5,
               int param_6,char param_7,code *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  size_t _Size;
  longlong *_Src;
  longlong lVar15;
  undefined8 *puVar16;
  code *pcVar17;
  undefined1 auStack_138 [32];
  code *local_118;
  code *local_110;
  code *local_108;
  uint local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_138;
  lVar12 = 0;
  iVar4 = 0;
  iVar8 = 0;
  local_e8 = 0;
  if (param_6 == -1) {
    local_f8 = *(uint *)(param_1 + 2);
  }
  else {
    local_f8 = (uint)(param_6 != 0);
    *(uint *)(param_1 + 2) = local_f8;
  }
  local_f0 = param_4;
  if ((param_2 == (int *)0x0) && (*param_1 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x76,"evp_cipher_init_internal");
    FUN_140b91cc0(6,0x83,0);
    goto switchD_140b86c55_default;
  }
  if (param_7 != '\0') {
    if (param_2 == (int *)0x0) {
LAB_140b86e90:
      param_2 = (int *)*param_1;
    }
    else {
LAB_140b86d85:
      lVar12 = *param_1;
      if (lVar12 != 0) {
        lVar3 = param_1[0xe];
        if (*(longlong *)(lVar12 + 0x70) == 0) {
          if ((*(code **)(lVar12 + 0x28) == (code *)0x0) ||
             (iVar5 = (**(code **)(lVar12 + 0x28))(param_1), iVar5 != 0)) {
            if ((param_1[0xf] != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
              FUN_14046e980();
            }
            FUN_140b8d990(param_1[0xf],"crypto\\evp\\evp_enc.c",0x3f);
            engine_unlocked_finish(param_1[1]);
            goto LAB_140b86e6c;
          }
        }
        else {
          if (param_1[0x16] != 0) {
            if (*(code **)(lVar12 + 0xd0) != (code *)0x0) {
              (**(code **)(lVar12 + 0xd0))();
            }
            param_1[0x16] = 0;
          }
          lVar12 = param_1[0x17];
          if ((lVar12 != 0) && (*(int *)(lVar12 + 0x14) == 0)) {
            LOCK();
            piVar1 = (int *)(lVar12 + 0x78);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 < 2) {
              FUN_140b8d990(*(undefined8 *)(lVar12 + 0x60),"crypto\\evp\\evp_enc.c",0x841);
              FUN_140bd3160(*(undefined8 *)(lVar12 + 0x70));
              FUN_140b8d990(lVar12,"crypto\\evp\\evp_enc.c",0x844);
            }
          }
LAB_140b86e6c:
          memset(param_1,0,0xc0);
          *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
        }
        *(uint *)(param_1 + 2) = local_f8;
        *(int *)(param_1 + 0xe) = (int)lVar3;
      }
    }
    if (*(longlong *)(param_2 + 0x1c) == 0) {
      if (*param_2 == 0) {
        puVar11 = &DAT_1413a68b4;
      }
      else {
        puVar11 = (undefined *)FUN_140b96490();
      }
      local_108 = FUN_140b843f0;
      local_110 = FUN_140b843e0;
      local_118 = FUN_140b87810;
      param_2 = (int *)FUN_140bd58f0(0,2,puVar11,&DAT_1413a2ad6);
      if (param_2 == (int *)0x0) goto switchD_140b86c55_default;
      lVar12 = param_1[0x17];
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0x14) == 0)) {
        LOCK();
        piVar1 = (int *)(lVar12 + 0x78);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          FUN_140b8d990(*(undefined8 *)(lVar12 + 0x60),"crypto\\evp\\evp_enc.c",0x841);
          FUN_140bd3160(*(undefined8 *)(lVar12 + 0x70));
          FUN_140b8d990(lVar12,"crypto\\evp\\evp_enc.c",0x844);
        }
      }
      param_1[0x17] = (longlong)param_2;
      if (*(longlong *)(param_2 + 0x1c) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\evp_enc.c",0xcf,"evp_cipher_init_internal");
        FUN_140b91cc0(6,0x86,0);
        goto switchD_140b86c55_default;
      }
    }
    if (param_2 != (int *)param_1[0x17]) {
      if (param_2[5] == 0) {
        LOCK();
        param_2[0x1e] = param_2[0x1e] + 1;
        UNLOCK();
      }
      lVar12 = param_1[0x17];
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0x14) == 0)) {
        LOCK();
        piVar1 = (int *)(lVar12 + 0x78);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 < 2) {
          FUN_140b8d990(*(undefined8 *)(lVar12 + 0x60),"crypto\\evp\\evp_enc.c",0x841);
          FUN_140bd3160(*(undefined8 *)(lVar12 + 0x70));
          FUN_140b8d990(lVar12,"crypto\\evp\\evp_enc.c",0x844);
        }
      }
      param_1[0x17] = (longlong)param_2;
    }
    *param_1 = (longlong)param_2;
    if (param_7 != '\0') {
      if (local_f8 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x2e);
      }
      else {
        lVar12 = *(longlong *)(param_2 + 0x2c);
      }
      if (((lVar12 == 0) || (*(longlong *)(param_2 + 0x30) == 0)) ||
         (*(longlong *)(param_2 + 0x32) == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\evp_enc.c",0xe0,"evp_cipher_init_internal");
        FUN_140b91cc0(6,0xe6,0);
        goto switchD_140b86c55_default;
      }
    }
    if (param_1[0x16] == 0) {
      pcVar17 = *(code **)(param_2 + 0x20);
      uVar9 = FUN_140bd3830(*(undefined8 *)(param_2 + 0x1c));
      lVar12 = (*pcVar17)(uVar9);
      param_1[0x16] = lVar12;
      if (lVar12 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\evp_enc.c",0xe7,"evp_cipher_init_internal");
        FUN_140b91cc0(6,0x86,0);
        goto switchD_140b86c55_default;
      }
    }
    if (((*(uint *)(param_1 + 0xe) & 0x100) != 0) && (iVar5 = FUN_140b85ae0(param_1,0), iVar5 == 0))
    goto switchD_140b86c55_default;
    if (param_8 != (code *)0x0) {
      local_d8 = 0;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      puVar13 = (undefined8 *)FUN_140b93540(param_8,"keylen");
      puVar16 = &local_d8;
      if (puVar13 != (undefined8 *)0x0) {
        local_d8 = *puVar13;
        uStack_d0 = puVar13[1];
        local_c8 = puVar13[2];
        uStack_c0 = puVar13[3];
        local_b8 = puVar13[4];
        puVar16 = &local_b0;
      }
      puVar14 = (undefined8 *)FUN_140b93540(param_8,"ivlen");
      puVar13 = puVar16;
      if (puVar14 != (undefined8 *)0x0) {
        uVar9 = puVar14[1];
        puVar13 = puVar16 + 5;
        *puVar16 = *puVar14;
        puVar16[1] = uVar9;
        uVar9 = puVar14[3];
        puVar16[2] = puVar14[2];
        puVar16[3] = uVar9;
        puVar16[4] = puVar14[4];
      }
      if (puVar13 != &local_d8) {
        if ((*param_1 != 0) && (pcVar17 = *(code **)(*param_1 + 0xf0), pcVar17 != (code *)0x0)) {
          iVar5 = (*pcVar17)(param_1[0x16],&local_d8);
          if (iVar5 < 1) {
            if (iVar5 != 0) goto LAB_140b8726b;
          }
          else {
            lVar12 = FUN_140b93540(&local_d8,"keylen");
            if ((lVar12 == 0) || (iVar5 = FUN_140b93920(lVar12,param_1 + 0xd), iVar5 != 0)) {
              lVar12 = FUN_140b93540(&local_d8,"ivlen");
              if ((lVar12 == 0) ||
                 (iVar5 = FUN_140b93920(lVar12,(longlong)param_1 + 0x6c), iVar5 != 0))
              goto LAB_140b8726b;
              *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
            }
            else {
              *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
            }
          }
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\evp_enc.c",0x112,"evp_cipher_init_internal");
        FUN_140b91cc0(6,0xdd,0);
        goto switchD_140b86c55_default;
      }
    }
LAB_140b8726b:
    if (param_7 != '\0') goto switchD_140b86c55_default;
    lVar12 = *param_1;
    if (local_f8 == 0) {
      if (*(longlong *)(lVar12 + 0x90) != 0) {
        if (param_5 != (longlong *)0x0) {
          iVar8 = FUN_140b98300(param_1);
        }
        lVar12 = local_f0;
        if (local_f0 != 0) {
          iVar4 = FUN_140b981e0(param_1);
        }
        pcVar17 = *(code **)(*param_1 + 0x90);
        goto LAB_140b873d6;
      }
      if ((local_f0 != 0) || (*(longlong *)(lVar12 + 0x118) == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\evp_enc.c",0x143,"evp_cipher_init_internal");
        FUN_140b91cc0(6,0x86,0);
        goto switchD_140b86c55_default;
      }
      if (param_5 != (longlong *)0x0) {
        iVar4 = FUN_140b98300(param_1);
      }
      pcVar17 = *(code **)(*param_1 + 0x118);
    }
    else {
      if (*(longlong *)(lVar12 + 0x88) != 0) {
        if (param_5 != (longlong *)0x0) {
          iVar8 = FUN_140b98300(param_1);
        }
        lVar12 = local_f0;
        if (local_f0 != 0) {
          iVar4 = FUN_140b981e0(param_1);
        }
        pcVar17 = *(code **)(*param_1 + 0x88);
LAB_140b873d6:
        local_118 = (code *)(longlong)iVar8;
        local_110 = param_8;
        (*pcVar17)(param_1[0x16],lVar12,(longlong)iVar4,param_5);
        goto switchD_140b86c55_default;
      }
      if ((local_f0 != 0) || (*(longlong *)(lVar12 + 0x110) == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\evp_enc.c",0x129,"evp_cipher_init_internal");
        FUN_140b91cc0(6,0x86,0);
        goto switchD_140b86c55_default;
      }
      if (param_5 != (longlong *)0x0) {
        iVar4 = FUN_140b98300(param_1);
      }
      pcVar17 = *(code **)(*param_1 + 0x110);
    }
    local_118 = param_8;
    (*pcVar17)(param_1[0x16],0,param_5,(longlong)iVar4);
    goto switchD_140b86c55_default;
  }
  if ((param_1[1] == 0) || ((int *)*param_1 == (int *)0x0)) {
    if (param_2 != (int *)0x0) goto LAB_140b868cb;
LAB_140b868e0:
    if (((param_1[1] == 0) && (local_e8 == 0)) && (param_3 == 0)) {
      if (param_2 == (int *)0x0) {
        if ((*param_1 == 0) || (*(int *)(*param_1 + 0x14) != 2)) goto LAB_140b86e90;
      }
      else if (param_2[5] != 2) {
        if (*param_1 != 0) {
          pcVar17 = *(code **)(*param_1 + 0x28);
          if ((pcVar17 != (code *)0x0) && (iVar5 = (*pcVar17)(param_1), iVar5 == 0))
          goto switchD_140b86c55_default;
          FUN_140b8db20(param_1[0xf],(longlong)*(int *)(*param_1 + 0x30),"crypto\\evp\\evp_enc.c",
                        0xa7);
          param_1[0xf] = 0;
        }
        goto LAB_140b86d85;
      }
    }
    lVar3 = param_1[0x17];
    if (*param_1 == lVar3) {
      *param_1 = 0;
    }
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x14) == 0)) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x78);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 < 2) {
        FUN_140b8d990(*(undefined8 *)(lVar3 + 0x60),"crypto\\evp\\evp_enc.c",0x841);
        FUN_140bd3160(*(undefined8 *)(lVar3 + 0x70));
        FUN_140b8d990(lVar3,"crypto\\evp\\evp_enc.c",0x844);
      }
    }
    param_1[0x17] = 0;
    if (param_2 != (int *)0x0) {
      lVar3 = *param_1;
      if (lVar3 != 0) {
        lVar2 = param_1[0xe];
        if (*(longlong *)(lVar3 + 0x70) == 0) {
          if ((*(code **)(lVar3 + 0x28) == (code *)0x0) ||
             (iVar4 = (**(code **)(lVar3 + 0x28))(param_1), iVar4 != 0)) {
            if ((param_1[0xf] != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
              FUN_14046e980();
            }
            FUN_140b8d990(param_1[0xf],"crypto\\evp\\evp_enc.c",0x3f);
            engine_unlocked_finish(param_1[1]);
            goto LAB_140b86ab4;
          }
        }
        else {
          if (param_1[0x16] != 0) {
            lVar15 = lVar12;
            if (*(code **)(lVar3 + 0xd0) != (code *)0x0) {
              (**(code **)(lVar3 + 0xd0))();
              lVar15 = param_1[0x17];
            }
            param_1[0x16] = 0;
            if ((lVar15 != 0) && (*(int *)(lVar15 + 0x14) == 0)) {
              LOCK();
              piVar1 = (int *)(lVar15 + 0x78);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 < 2) {
                FUN_140b8d990(*(undefined8 *)(lVar15 + 0x60),"crypto\\evp\\evp_enc.c",0x841);
                FUN_140bd3160(*(undefined8 *)(lVar15 + 0x70));
                FUN_140b8d990(lVar15,"crypto\\evp\\evp_enc.c",0x844);
              }
            }
          }
LAB_140b86ab4:
          memset(param_1,0,0xc0);
          *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
        }
        *(uint *)(param_1 + 2) = local_f8;
        *(int *)(param_1 + 0xe) = (int)lVar2;
      }
      if (param_3 == 0) {
        param_3 = local_e8;
        if (local_e8 != 0) goto LAB_140b86b27;
      }
      else {
        iVar4 = cryptoengineeng_initc(param_3);
        if (iVar4 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_enc.c",0x163,"evp_cipher_init_internal");
          FUN_140b91cc0(6,0x86,0);
          goto switchD_140b86c55_default;
        }
LAB_140b86b27:
        lVar12 = param_3;
        param_2 = (int *)FUN_140c1b7d0(lVar12,*param_2);
        if (param_2 == (int *)0x0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_enc.c",0x173,"evp_cipher_init_internal");
          FUN_140b91cc0(6,0x86,0);
          goto switchD_140b86c55_default;
        }
      }
      param_1[1] = lVar12;
      *param_1 = (longlong)param_2;
      if (param_2[0xc] == 0) {
        param_1[0xf] = 0;
      }
      else {
        lVar12 = FUN_140b8da80((longlong)param_2[0xc],"crypto\\evp\\evp_enc.c",0x184);
        param_1[0xf] = lVar12;
        if (lVar12 == 0) {
          *param_1 = 0;
          goto switchD_140b86c55_default;
        }
      }
      iVar4 = param_2[2];
      *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 1;
      *(int *)(param_1 + 0xd) = iVar4;
      if (((*(byte *)(*param_1 + 0x10) & 0x40) != 0) &&
         (iVar4 = FUN_140b85be0(param_1,0,0,0), iVar4 < 1)) {
        *param_1 = 0;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\evp_enc.c",0x192,"evp_cipher_init_internal");
        FUN_140b91cc0(6,0x86,0);
        goto switchD_140b86c55_default;
      }
    }
  }
  else if ((param_2 != (int *)0x0) && (*param_2 != *(int *)*param_1)) {
LAB_140b868cb:
    if (param_3 == 0) {
      local_e8 = FUN_140c1b840(*param_2);
    }
    goto LAB_140b868e0;
  }
  if (*param_1 == 0) goto switchD_140b86c55_default;
  iVar4 = *(int *)(*param_1 + 4);
  if ((iVar4 != 1) && ((iVar4 - 8U & 0xfffffff7) != 0)) {
    s_d_openssl_internal_error_sn
              ("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
               ,"crypto\\evp\\evp_enc.c",0x1a0);
  }
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    uVar9 = FUN_140b76060(param_1);
    iVar4 = FUN_140b97ed0(uVar9);
    if (iVar4 == 0x10002) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\evp_enc.c",0x1a4,"evp_cipher_init_internal");
      FUN_140b91cc0(6,0xaa,0);
      goto switchD_140b86c55_default;
    }
  }
  uVar9 = FUN_140b76060(param_1);
  uVar10 = FUN_140b97ec0(uVar9);
  if ((uVar10 & 0x10) == 0) {
    uVar9 = FUN_140b76060(param_1);
    uVar6 = FUN_140b97ed0(uVar9);
    switch(uVar6) {
    case 0:
    case 1:
      break;
    case 2:
      goto switchD_140b86c55_caseD_2;
    case 3:
    case 4:
      goto switchD_140b86c55_caseD_3;
    case 5:
      *(undefined4 *)(param_1 + 0xb) = 0;
      if (param_5 == (longlong *)0x0) break;
      iVar4 = FUN_140b98300(param_1);
      _Size = (size_t)iVar4;
      _Src = param_5;
      if (0xf < iVar4 - 1U) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\evp_enc.c",0x1c7,"evp_cipher_init_internal");
        FUN_140b91cc0(6,0xc2,0);
        goto switchD_140b86c55_default;
      }
      goto LAB_140b86c89;
    default:
      goto switchD_140b86c55_default;
    }
  }
  goto switchD_140b86c55_caseD_0;
switchD_140b86c55_caseD_3:
  *(undefined4 *)(param_1 + 0xb) = 0;
switchD_140b86c55_caseD_2:
  uVar7 = FUN_140b98300(param_1);
  if (0x10 < uVar7) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_enc.c",0x1b9,"evp_cipher_init_internal");
    FUN_140b91cc0(6,0xc2,0);
    goto switchD_140b86c55_default;
  }
  _Size = (size_t)(int)uVar7;
  if (param_5 != (longlong *)0x0) {
    memcpy(param_1 + 3,param_5,_Size);
  }
  _Src = param_1 + 3;
LAB_140b86c89:
  memcpy(param_1 + 5,_Src,_Size);
switchD_140b86c55_caseD_0:
  if (((local_f0 == 0) && ((*(byte *)(*param_1 + 0x10) & 0x20) == 0)) ||
     (iVar4 = (**(code **)(*param_1 + 0x18))(param_1,local_f0,param_5,local_f8), iVar4 != 0)) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)((longlong)param_1 + 0x84) = *(int *)(*param_1 + 4) + -1;
  }
switchD_140b86c55_default:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_138);
}

