/**
 * Function: x25519mlkem768_x25519_secp256r1_x448_secp384r
 * Address:  140bb4380
 * Signature: undefined x25519mlkem768_x25519_secp256r1_x448_secp384r(void)
 * Body size: 1494 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void x25519mlkem768_x25519_secp256r1_x448_secp384r(char *param_1,int param_2,longlong *param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  undefined1 *puVar8;
  longlong lVar9;
  short *psVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short sVar15;
  undefined **ppuVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  int local_a8;
  int local_a4;
  int local_a0;
  longlong local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140bb4395;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  uVar14 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (((param_3 == (longlong *)0x0) || (param_1 == (char *)0x0)) ||
     (uVar17 = uVar14, uVar13 = uVar14, param_2 < 1)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\t1_lib.c",0x4f6,"gid_cb");
    FUN_140b91cc0(0x14,0x19e,0);
    goto LAB_140bb45da;
  }
  while( true ) {
    iVar5 = (int)uVar13;
    if (param_2 < 1) break;
    pcVar6 = strchr("/:?*-",(int)*param_1);
    puVar3 = PTR_DAT_14150faa8;
    if ((pcVar6 == (char *)0x0) &&
       (iVar4 = FUN_140b8c740(PTR_DAT_14150faa8,param_1,1), pcVar6 = puVar3, iVar4 != 0))
    goto LAB_140bb4602;
    cVar2 = *pcVar6;
    if (cVar2 == '*') {
      if (local_a8 != 0) goto LAB_140bb45da;
      param_1 = param_1 + 1;
      local_a8 = 1;
      param_2 = param_2 + -1;
    }
    else if (cVar2 == '-') {
      if (iVar5 != 0) goto LAB_140bb45da;
      param_1 = param_1 + 1;
      local_a0 = 1;
      param_2 = param_2 + -1;
      uVar13 = 1;
    }
    else {
      if ((cVar2 == '/') || (cVar2 == ':')) goto LAB_140bb45da;
      if (cVar2 != '?') {
        ppuVar16 = &PTR_s_DEFAULT_141234d10;
        uVar17 = uVar14;
        goto LAB_140bb44b0;
      }
      if ((int)uVar17 != 0) goto LAB_140bb45da;
      param_1 = param_1 + 1;
      local_a4 = 1;
      param_2 = param_2 + -1;
      uVar17 = 1;
    }
  }
  if (param_2 == 0) goto LAB_140bb45da;
  goto LAB_140bb4602;
  while( true ) {
    uVar17 = uVar17 + 1;
    ppuVar16 = ppuVar16 + 2;
    iVar5 = local_a0;
    if (1 < uVar17) break;
LAB_140bb44b0:
    pcVar6 = *ppuVar16;
    sVar7 = strlen(pcVar6);
    if (((longlong)param_2 == sVar7) &&
       (iVar5 = FUN_140b8c740(pcVar6,param_1,(longlong)param_2), iVar5 == 0)) {
      if ((local_a4 == 0) && (local_a0 == 0)) {
        sVar7 = strlen((&PTR_s___X25519MLKEM768_____X25519__sec_141234d18)[uVar17 * 2]);
        puVar8 = (undefined1 *)FUN_140b8d8d0(sVar7 + 2,"ssl\\t1_lib.c",0x537);
        if (puVar8 != (undefined1 *)0x0) {
          if ((local_a8 != 0) &&
             (*(&PTR_s___X25519MLKEM768_____X25519__sec_141234d18)[uVar17 * 2] != '*')) {
            *puVar8 = 0x2a;
            local_98 = 1;
          }
          sVar7 = strlen((&PTR_s___X25519MLKEM768_____X25519__sec_141234d18)[uVar17 * 2]);
          lVar9 = local_98;
          memcpy(puVar8 + local_98,(&PTR_s___X25519MLKEM768_____X25519__sec_141234d18)[uVar17 * 2],
                 sVar7);
          sVar7 = strlen((&PTR_s___X25519MLKEM768_____X25519__sec_141234d18)[uVar17 * 2]);
          puVar8[lVar9 + sVar7] = 0;
          *(undefined4 *)(param_3 + 0xb) = 1;
          param_3[10] = 0;
          local_b8 = param_3;
          FUN_140c1aad0(puVar8,0x2f,1,FUN_140bb4200);
          param_3[10] = 1;
          *(undefined4 *)(param_3 + 0xb) = 0;
          FUN_140b8d990(puVar8,"ssl\\t1_lib.c",0x550);
        }
      }
      goto LAB_140bb45da;
    }
  }
LAB_140bb4602:
  if (param_3[2] == param_3[1]) {
    lVar9 = FUN_140b8d9c0(param_3[3],param_3[1] * 2 + 0x40,"ssl\\t1_lib.c",0x569);
    if (lVar9 == 0) goto LAB_140bb45da;
    param_3[1] = param_3[1] + 0x20;
    param_3[3] = lVar9;
  }
  if (param_3[8] == param_3[7]) {
    lVar9 = FUN_140b8d9c0(param_3[9],param_3[7] * 2 + 0x40,"ssl\\t1_lib.c",0x575);
    if (lVar9 == 0) goto LAB_140bb45da;
    param_3[7] = param_3[7] + 0x20;
    param_3[9] = lVar9;
  }
  if (param_2 < 0x40) {
    uVar17 = (ulonglong)param_2;
    memcpy(local_88,param_1,uVar17);
    if (0x3f < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_140b68c50();
    }
    lVar9 = *param_3;
    local_88[uVar17] = 0;
    uVar17 = uVar14;
    uVar13 = uVar14;
    if (*(longlong *)(lVar9 + 0x668) != 0) {
      do {
        iVar4 = FUN_140b8c6a0(*(undefined8 *)(*(longlong *)(lVar9 + 0x660) + uVar17),local_88);
        if ((iVar4 == 0) ||
           (iVar4 = FUN_140b8c6a0(*(undefined8 *)(*(longlong *)(lVar9 + 0x660) + 8 + uVar17),
                                  local_88), iVar4 == 0)) {
          sVar15 = *(short *)(*(longlong *)(lVar9 + 0x660) + 0x1c + uVar13 * 0x38);
          if (sVar15 != 0) goto LAB_140bb4768;
          break;
        }
        uVar13 = uVar13 + 1;
        uVar17 = uVar17 + 0x38;
      } while (uVar13 < *(ulonglong *)(lVar9 + 0x668));
    }
    ppuVar16 = &PTR_s_GC256A_141234d30;
    uVar17 = uVar14;
    do {
      iVar4 = FUN_140b8c6a0(local_88,*ppuVar16);
      if (iVar4 == 0) {
        sVar15 = (&DAT_141234d38)[uVar17 * 8];
        if (sVar15 != 0) goto LAB_140bb4768;
        break;
      }
      uVar17 = uVar17 + 1;
      ppuVar16 = ppuVar16 + 2;
    } while (uVar17 < 7);
  }
  goto LAB_140bb45da;
LAB_140bb4768:
  uVar17 = *(ulonglong *)(*param_3 + 0x668);
  if (uVar17 != 0) {
    psVar10 = (short *)(*(longlong *)(*param_3 + 0x660) + 0x1c);
    uVar13 = uVar14;
    do {
      if (*psVar10 == sVar15) {
        uVar17 = param_3[2];
        if (iVar5 == 0) {
          if (uVar17 == 0) goto LAB_140bb48e6;
          psVar10 = (short *)param_3[3];
          goto LAB_140bb48d0;
        }
        if (uVar17 != 0) {
          psVar10 = (short *)param_3[3];
          uVar13 = uVar14;
          goto LAB_140bb47c0;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      psVar10 = psVar10 + 0x1c;
    } while (uVar13 < uVar17);
  }
  goto LAB_140bb45da;
  while( true ) {
    uVar14 = uVar14 + 1;
    psVar10 = psVar10 + 1;
    if (uVar17 <= uVar14) break;
LAB_140bb48d0:
    if (*psVar10 == sVar15) goto LAB_140bb45da;
  }
LAB_140bb48e6:
  *(short *)(param_3[3] + uVar17 * 2) = sVar15;
  param_3[2] = param_3[2] + 1;
  plVar11 = (longlong *)(param_3[6] + param_3[5] * 8);
  *plVar11 = *plVar11 + 1;
  if (local_a8 != 0) {
    *(short *)(param_3[9] + param_3[8] * 2) = sVar15;
    param_3[8] = param_3[8] + 1;
  }
  goto LAB_140bb45da;
LAB_140bb47c0:
  if (*psVar10 != sVar15) {
    uVar13 = uVar13 + 1;
    psVar10 = psVar10 + 1;
    if (uVar17 <= uVar13) goto LAB_140bb45da;
    goto LAB_140bb47c0;
  }
  uVar12 = uVar13;
  if (uVar13 < uVar17 - 1) {
    do {
      puVar1 = (undefined2 *)(param_3[3] + uVar12 * 2);
      uVar12 = uVar12 + 1;
      *puVar1 = puVar1[1];
      uVar17 = param_3[2];
    } while (uVar12 < uVar17 - 1);
  }
  param_3[2] = uVar17 - 1;
  uVar17 = uVar14;
  if (param_3[5] == 0) {
LAB_140bb4847:
    plVar11 = (longlong *)(param_3[6] + uVar17 * 8);
    *plVar11 = *plVar11 + -1;
  }
  else {
    plVar11 = (longlong *)param_3[6];
    uVar12 = uVar14;
    while( true ) {
      uVar12 = uVar12 + *plVar11;
      if (uVar13 < uVar12) break;
      uVar17 = uVar17 + 1;
      plVar11 = plVar11 + 1;
      if ((ulonglong)param_3[5] <= uVar17) goto LAB_140bb4847;
    }
    *(longlong *)(param_3[6] + uVar17 * 8) = *plVar11 + -1;
  }
  uVar17 = param_3[8];
  if (uVar17 == 0) goto LAB_140bb45da;
  psVar10 = (short *)param_3[9];
  do {
    if (*psVar10 == sVar15) {
      if (uVar14 < uVar17 - 1) {
        do {
          puVar1 = (undefined2 *)(param_3[9] + uVar14 * 2);
          uVar14 = uVar14 + 1;
          *puVar1 = puVar1[1];
          uVar17 = param_3[8];
        } while (uVar14 < uVar17 - 1);
      }
      param_3[8] = uVar17 - 1;
      break;
    }
    uVar14 = uVar14 + 1;
    psVar10 = psVar10 + 1;
  } while (uVar14 < uVar17);
LAB_140bb45da:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
}

