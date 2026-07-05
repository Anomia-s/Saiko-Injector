/**
 * Function: do_sigver_init
 * Address:  140bd1320
 * Signature: undefined do_sigver_init(void)
 * Body size: 2335 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void do_sigver_init(longlong *param_1,longlong *param_2,longlong param_3,char *param_4,
                   undefined8 param_5,longlong param_6,longlong param_7,longlong param_8,int param_9
                   ,undefined8 param_10)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  int local_108;
  int local_104;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  char local_a8 [80];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140bd133c;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_138;
  lVar9 = 0;
  local_f8 = param_6;
  local_c0 = param_7;
  local_e8 = param_8;
  local_104 = param_9;
  local_d8 = param_10;
  local_a8[0x41] = '\0';
  local_a8[0x42] = '\0';
  local_a8[0x43] = '\0';
  local_a8[0x44] = '\0';
  local_a8[0x45] = '\0';
  local_a8[0x46] = '\0';
  local_a8[0x47] = '\0';
  local_a8[0x48] = '\0';
  local_a8[0x49] = '\0';
  local_a8[0x4a] = '\0';
  local_a8[0x4b] = '\0';
  local_a8[0x4c] = '\0';
  local_a8[0x4d] = '\0';
  local_a8[0x4e] = '\0';
  local_a8[0x4f] = 0;
  local_100 = 0;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x10] = '\0';
  local_f0 = 0;
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_a8[0x20] = '\0';
  local_108 = 1;
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_a8[0x28] = '\0';
  local_a8[0x29] = '\0';
  local_a8[0x2a] = '\0';
  local_a8[0x2b] = '\0';
  local_a8[0x2c] = '\0';
  local_a8[0x2d] = '\0';
  local_a8[0x2e] = '\0';
  local_a8[0x2f] = '\0';
  local_a8[0x30] = '\0';
  local_a8[0x31] = '\0';
  local_a8[0x32] = '\0';
  local_a8[0x33] = '\0';
  local_a8[0x34] = '\0';
  local_a8[0x35] = '\0';
  local_a8[0x36] = '\0';
  local_a8[0x37] = '\0';
  local_a8[0x38] = '\0';
  local_a8[0x39] = '\0';
  local_a8[0x3a] = '\0';
  local_a8[0x3b] = '\0';
  local_a8[0x3c] = '\0';
  local_a8[0x3d] = '\0';
  local_a8[0x3e] = '\0';
  local_a8[0x3f] = '\0';
  local_a8[0x40] = '\0';
  local_d0 = param_3;
  local_c8 = param_2;
  iVar4 = FUN_140b71c00();
  if (iVar4 == 0) goto LAB_140bd1687;
  if (param_1[5] == 0) {
    local_108 = 0;
    if (local_c0 == 0) {
      lVar5 = FUN_140b7b2e0(param_5,local_e8,local_f8);
    }
    else {
      lVar5 = FUN_140b7b240(local_e8,local_c0);
    }
    param_1[5] = lVar5;
    if (lVar5 == 0) goto LAB_140bd1687;
  }
  FUN_140b988e0(param_1,0x800);
  piVar2 = (int *)param_1[5];
  FUN_140b932f0();
  if (*(longlong *)(piVar2 + 8) == 0) {
LAB_140bd1615:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    FUN_140bfdf00(local_100);
    local_100 = 0;
    if ((param_3 == 0) && (param_4 != (char *)0x0)) {
      param_3 = FUN_140b99bf0(*(undefined8 *)(piVar2 + 2),param_4);
    }
    if (*(longlong *)(param_1[5] + 0x78) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\m_sigver.c",0x131,"do_sigver_init");
      uVar8 = 0x96;
    }
    else {
      if (((*(byte *)(*(longlong *)(param_1[5] + 0x78) + 4) & 4) != 0) || (param_3 != 0)) {
LAB_140bd1b18:
        puVar3 = (undefined4 *)param_1[5];
        lVar9 = *(longlong *)(puVar3 + 0x1e);
        if (local_104 == 0) {
          if (*(code **)(lVar9 + 0x70) == (code *)0x0) {
            if (*(longlong *)(lVar9 + 0xd0) == 0) {
              iVar4 = FUN_140bfecd0();
              goto LAB_140bd1bb0;
            }
            *puVar3 = 0x10;
            param_1[6] = (longlong)FUN_140bd12d0;
          }
          else {
            iVar4 = (**(code **)(lVar9 + 0x70))(puVar3,param_1);
            if (iVar4 < 1) goto LAB_140bd1687;
            *(undefined4 *)param_1[5] = 0x80;
          }
        }
        else if (*(code **)(lVar9 + 0x80) == (code *)0x0) {
          if (*(longlong *)(lVar9 + 0xd8) == 0) {
            iVar4 = FUN_140bfeff0();
LAB_140bd1bb0:
            if (iVar4 < 1) goto LAB_140bd1687;
          }
          else {
            *puVar3 = 0x20;
            param_1[6] = (longlong)FUN_140bd12d0;
          }
        }
        else {
          iVar4 = (**(code **)(lVar9 + 0x80))(puVar3,param_1);
          if (iVar4 < 1) goto LAB_140bd1687;
          *(undefined4 *)param_1[5] = 0x100;
        }
        iVar4 = FUN_140b7b150(param_1[5],param_3);
        if (iVar4 < 1) goto LAB_140bd1687;
        if (local_c8 != (longlong *)0x0) {
          *local_c8 = param_1[5];
        }
        if (((*(byte *)(*(longlong *)(param_1[5] + 0x78) + 4) & 4) != 0) ||
           (iVar4 = FUN_140b70ff0(param_1,param_3,local_c0), iVar4 == 0)) goto LAB_140bd1687;
        *(uint *)(param_1[5] + 0xa0) = *(uint *)(param_1[5] + 0xa0) & 0xfffffffe;
        if (*(longlong *)(*(longlong *)(param_1[5] + 0x78) + 0xf8) != 0) {
          puVar1 = (uint *)(param_1[5] + 0xa0);
          *puVar1 = *puVar1 | 1;
        }
LAB_140bd1c2f:
        FUN_140b7c0b0(piVar2);
LAB_140bd1c39:
        FUN_140bfdf00(local_100);
        goto LAB_140bd1687;
      }
      iVar4 = FUN_140b7f520(local_e8,&local_108);
      if (0 < iVar4) {
        uVar8 = FUN_140b96490(local_108);
        param_3 = FUN_140b999e0(uVar8);
        if (param_3 != 0) goto LAB_140bd1b18;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\m_sigver.c",0x13e,"do_sigver_init");
      uVar8 = 0x9e;
    }
    FUN_140b91cc0(6,uVar8,0);
  }
  else {
    lVar5 = lVar9;
    if (local_108 != 0) {
      if (local_e8 == 0) {
        iVar4 = 0x80;
        if (local_104 != 0) {
          iVar4 = 0x100;
        }
        lVar5 = 0;
        if (((*piVar2 == iVar4) && (lVar5 = *(longlong *)(piVar2 + 10), lVar5 != 0)) &&
           (*(longlong *)(piVar2 + 0xc) != 0)) goto LAB_140bd148b;
      }
      local_108 = 0;
    }
LAB_140bd148b:
    if (local_f8 == 0) {
      local_f8 = *(longlong *)(piVar2 + 4);
    }
    if (*(longlong *)(piVar2 + 0x22) == 0) {
      FUN_140b93470();
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\m_sigver.c",0x58,"do_sigver_init")
      ;
      FUN_140b91cc0(6,0x9a,0);
    }
    else if (local_108 == 0) {
      FUN_140b7c180(piVar2);
      if ((*(longlong *)(*(longlong *)(piVar2 + 0x22) + 0x60) == 0) ||
         (*(longlong *)(*(longlong *)(piVar2 + 0x22) + 0x60) == *(longlong *)(piVar2 + 8))) {
        local_e0 = FUN_140c07360(*(undefined8 *)(piVar2 + 8),0xc);
        if (local_e0 == 0) {
          FUN_140b93470();
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\m_sigver.c",0x71,"do_sigver_init");
          FUN_140b91cc0(6,0x86,0);
        }
        else {
          iVar4 = 1;
          local_f0 = 0;
          do {
            if (local_f0 != 0) goto LAB_140bd177d;
            cryptoevpsignaturec(lVar5);
            FUN_140bfdf00(local_100);
            if (iVar4 == 1) {
              lVar5 = FUN_140bfec80(*(undefined8 *)(piVar2 + 2),local_e0,*(undefined8 *)(piVar2 + 4)
                                   );
              if (lVar5 != 0) {
                lVar9 = FUN_140b772a0(lVar5);
                goto LAB_140bd16cc;
              }
            }
            else {
              if (iVar4 == 2) {
                lVar9 = FUN_140b97dc0(*(undefined8 *)(piVar2 + 8));
                lVar5 = FUN_140bff200(lVar9,local_e0,*(undefined8 *)(piVar2 + 4));
                param_3 = local_d0;
                if (lVar5 == 0) goto LAB_140bd1615;
              }
              else if (lVar5 == 0) goto LAB_140bd1724;
LAB_140bd16cc:
              uVar8 = *(undefined8 *)(piVar2 + 4);
              uVar6 = FUN_140b77290(*(undefined8 *)(piVar2 + 8));
              lVar7 = FUN_140bfe4f0(lVar9,uVar6,uVar8);
              local_100 = lVar7;
              if ((lVar7 == 0) ||
                 (local_f0 = FUN_140b80640(*(undefined8 *)(piVar2 + 0x22),
                                           *(undefined8 *)(piVar2 + 2),&local_100,
                                           *(undefined8 *)(piVar2 + 4)), local_100 == 0)) {
                FUN_140bfdf00(lVar7);
              }
            }
LAB_140bd1724:
            iVar4 = iVar4 + 1;
          } while (iVar4 < 3);
          if (local_f0 == 0) {
            cryptoevpsignaturec(lVar5);
            FUN_140b93470();
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\m_sigver.c",0xbc,"do_sigver_init");
            FUN_140b91cc0(6,0x86,0);
          }
          else {
LAB_140bd177d:
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            *(longlong *)(piVar2 + 10) = lVar5;
            iVar4 = 0x80;
            if (local_104 != 0) {
              iVar4 = 0x100;
            }
            *piVar2 = iVar4;
            pcVar10 = *(code **)(lVar5 + 0x28);
            uVar8 = FUN_140bd3830(*(undefined8 *)(lVar5 + 0x18));
            lVar9 = local_f8;
            lVar7 = (*pcVar10)(uVar8,local_f8);
            *(longlong *)(piVar2 + 0xc) = lVar7;
            param_3 = local_d0;
            if (lVar7 != 0) goto LAB_140bd1831;
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\m_sigver.c",0xca,"do_sigver_init");
            FUN_140b91cc0(6,0x86,0);
          }
        }
      }
      else {
        FUN_140b93470();
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\m_sigver.c",0x6a,"do_sigver_init");
        FUN_140b91cc0(6,0xc0103,0);
      }
    }
    else {
      lVar9 = local_f8;
      if (((param_4 == (char *)0x0) && (param_3 == 0)) &&
         ((param_4 = (char *)FUN_140b97a80(*param_1), lVar9 = local_f8, param_4 != (char *)0x0 &&
          (iVar4 = strcmp(param_4,"UNDEF"), lVar9 = local_f8, iVar4 == 0)))) {
        param_4 = (char *)0x0;
      }
LAB_140bd1831:
      if (local_c8 != (longlong *)0x0) {
        *local_c8 = (longlong)piVar2;
      }
      if (param_3 == 0) {
        if (param_4 == (char *)0x0) {
          if ((local_108 == 0) &&
             (iVar4 = FUN_140c071b0(local_100,local_f0,local_a8,0x50), 0 < iVar4)) {
            iVar4 = strcmp(local_a8,"UNDEF");
            if (iVar4 != 0) {
              param_4 = local_a8;
              goto LAB_140bd18d6;
            }
            param_4 = (char *)0x0;
          }
        }
        else {
LAB_140bd18d6:
          FUN_140b71b30(param_1,1,0);
          FUN_140b932f0();
          lVar9 = FUN_140b71980(*(undefined8 *)(piVar2 + 2),param_4,lVar9);
          param_1[8] = lVar9;
          if (lVar9 == 0) {
            lVar9 = FUN_140b999e0(param_4);
            param_1[1] = lVar9;
            *param_1 = lVar9;
            if (lVar9 == 0) {
              FUN_140b93470();
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\evp\\m_sigver.c",0xf7,"do_sigver_init");
              FUN_140b91cc0(6,0x86,0);
              goto LAB_140bd1a9d;
            }
          }
          else {
            *param_1 = lVar9;
            param_1[1] = lVar9;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
        }
      }
      else {
        *param_1 = param_3;
        if (((param_4 == (char *)0x0) &&
            (param_4 = (char *)FUN_140b97a80(param_3), param_4 != (char *)0x0)) &&
           (iVar4 = strcmp(param_4,"UNDEF"), iVar4 == 0)) {
          param_4 = (char *)0x0;
        }
      }
      puVar11 = &DAT_1413a2ad6;
      if (*(undefined1 **)(lVar5 + 0x10) != (undefined1 *)0x0) {
        puVar11 = *(undefined1 **)(lVar5 + 0x10);
      }
      if (local_104 == 0) {
        pcVar10 = *(code **)(lVar5 + 0x90);
        if (pcVar10 != (code *)0x0) goto LAB_140bd19f7;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\m_sigver.c",0x10a,"do_sigver_init");
        pcVar12 = "%s digest_sign_init:%s";
        uVar8 = 0xed;
      }
      else {
        pcVar10 = *(code **)(lVar5 + 0xb0);
        if (pcVar10 == (code *)0x0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\m_sigver.c",0x102,"do_sigver_init");
          pcVar12 = "%s digest_verify_init:%s";
          uVar8 = 0xed;
        }
        else {
LAB_140bd19f7:
          iVar4 = (*pcVar10)(*(undefined8 *)(piVar2 + 0xc),param_4,local_f0,local_d8);
          if (0 < iVar4) goto LAB_140bd1c2f;
          if (param_4 != (char *)0x0) goto LAB_140bd1c39;
          if (param_3 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\m_sigver.c",0x119,"do_sigver_init");
            FUN_140b91cc0(6,0x9e,0);
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\m_sigver.c",0x11a,"do_sigver_init");
          pcVar12 = "%s digest_sign_init:%s";
          uVar8 = 0xea;
          if (local_104 != 0) {
            pcVar12 = "%s digest_verify_init:%s";
          }
        }
      }
      local_118 = puVar11;
      FUN_140b91cc0(6,uVar8,pcVar12,*(undefined8 *)(lVar5 + 8));
    }
LAB_140bd1a9d:
    FUN_140b7c180(piVar2);
    *piVar2 = 0;
    FUN_140bfdf00(local_100);
  }
LAB_140bd1687:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_138);
}

