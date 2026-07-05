/**
 * Function: openssl_conf_include
 * Address:  140cad970
 * Signature: undefined openssl_conf_include(void)
 * Body size: 4105 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void openssl_conf_include(longlong param_1,longlong param_2,int *param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  char *pcVar9;
  size_t sVar10;
  size_t sVar11;
  char *pcVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  short *_Str;
  byte bVar23;
  byte *pbVar24;
  char *pcVar25;
  char *pcVar26;
  bool bVar27;
  undefined1 auStack_118 [32];
  longlong local_f8;
  char *local_f0;
  int local_e8;
  uint local_e4;
  int local_e0;
  int local_dc;
  char *local_d8;
  undefined2 local_d0;
  longlong local_c8;
  byte *local_c0;
  longlong local_b8;
  longlong local_b0;
  byte *local_a8;
  char *local_a0;
  int *local_98;
  longlong local_90;
  undefined1 local_88 [6];
  ushort local_82;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140cad98a;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  local_90 = *(longlong *)(param_1 + 0x10);
  pcVar9 = (char *)0x0;
  local_e0 = 0;
  local_dc = 1;
  pcVar26 = (char *)0x0;
  local_c0 = (byte *)0x0;
  local_d8 = (char *)0x0;
  local_f0 = (char *)0x0;
  local_b8 = 0;
  local_f8 = param_2;
  local_98 = param_3;
  local_c8 = FUN_140b8eea0();
  lVar6 = param_2;
  if (local_c8 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_def.c",0xea,"def_load_bio");
    FUN_140b91cc0(0xe,0x80007,0);
    pcVar25 = pcVar9;
    pcVar26 = pcVar9;
  }
  else {
    pbVar5 = (byte *)FUN_140b8c830("default","crypto\\conf\\conf_def.c",0xee);
    pcVar25 = (char *)0x0;
    local_c0 = pbVar5;
    local_a8 = pbVar5;
    if (pbVar5 != (byte *)0x0) {
      iVar4 = FUN_140caf770(param_1);
      if (iVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\conf\\conf_def.c",0xf3,"def_load_bio");
        FUN_140b91cc0(0xe,0x8000e,0);
      }
      else {
        local_b0 = cryptoconfconf_apic(param_1,pbVar5);
        lVar15 = local_c8;
        if (local_b0 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\conf\\conf_def.c",0xf9,"def_load_bio");
          FUN_140b91cc0(0xe,0x67,0);
          pcVar25 = (char *)0x0;
        }
        else {
          local_e4 = 0;
          local_e8 = 0;
          lVar6 = FUN_140b8ef80(local_c8,0x200);
          pcVar12 = pcVar9;
          iVar4 = 1;
          if (lVar6 != 0) {
LAB_140cadb10:
            iVar22 = local_e8;
            _Str = (short *)((longlong)(int)pcVar9 + *(longlong *)(lVar15 + 8));
            *(undefined1 *)_Str = 0;
            while( true ) {
              if ((param_2 != 0) && (iVar3 = FUN_140b735c0(param_2,_Str,0x1ff), iVar3 < 0))
              goto LAB_140cae77a;
              *(undefined1 *)((longlong)_Str + 0x1ff) = 0;
              uVar7 = strlen((char *)_Str);
              uVar20 = (uint)uVar7;
              uVar21 = uVar7 & 0xffffffff;
              if (iVar4 != 0) {
                local_d0 = 0xbbef;
                uVar7 = uVar21;
                if (((2 < (int)uVar20) && (*_Str == -0x4411)) && ((char)_Str[1] == -0x41)) {
                  uVar20 = uVar20 - 3;
                  uVar7 = (ulonglong)uVar20;
                  memmove(_Str,(void *)((longlong)_Str + 3),(longlong)(int)uVar20);
                  *(undefined1 *)((longlong)(int)uVar20 + (longlong)_Str) = 0;
                }
                local_dc = 0;
                uVar20 = (uint)uVar7;
              }
              pcVar26 = local_f0;
              uVar16 = (uint)uVar7;
              if ((uVar16 != 0) || (iVar22 != 0)) break;
              if (local_b8 == 0) {
LAB_140cadbff:
                lVar6 = FUN_140b783c0(pcVar12);
                if (lVar6 == 0) {
                  FUN_140b8ef10(local_c8);
                  FUN_140b8d990(local_c0,"crypto\\conf\\conf_def.c",0x232);
                  FUN_140b77c10(pcVar12);
                  goto LAB_140cae721;
                }
              }
              else {
                lVar6 = FUN_140caf190(local_f0,&local_b8);
                if (lVar6 == 0) {
                  FUN_140b8d990(pcVar26,"crypto\\conf\\conf_def.c",0x126);
                  local_f0 = (char *)0x0;
                  goto LAB_140cadbff;
                }
              }
              FUN_140b73280(param_2);
              param_2 = lVar6;
              iVar4 = local_dc;
              local_f8 = lVar6;
            }
            local_e8 = 0;
            lVar6 = (longlong)(int)uVar16;
            if (0 < (int)uVar16) {
              do {
                uVar16 = (uint)uVar7;
                cVar2 = *(char *)((longlong)_Str + lVar6 + -1);
                if ((cVar2 != '\r') && (cVar2 != '\n')) break;
                uVar16 = uVar16 - 1;
                uVar7 = (ulonglong)uVar16;
                lVar6 = lVar6 + -1;
              } while (0 < lVar6);
            }
            lVar15 = local_f8;
            if ((uVar20 == 0) || (uVar16 != uVar20)) {
              pcVar26 = (char *)0x0;
              iVar4 = local_e4 + uVar16;
              *(undefined1 *)((longlong)(int)uVar16 + (longlong)_Str) = 0;
              iVar22 = local_e0 + 1;
              local_e0 = iVar22;
              if (iVar4 < 1) {
LAB_140cadcec:
                local_e4 = 0;
                pbVar5 = *(byte **)(local_c8 + 8);
                FUN_140caeab0(param_1,pbVar5);
                lVar14 = local_b0;
                lVar6 = local_f8;
                while( true ) {
                  bVar23 = *pbVar5;
                  uVar7 = (ulonglong)bVar23;
                  if (0x7f < bVar23) break;
                  uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + uVar7 * 2);
                  if (((uVar1 & 0x10) == 0) || ((uVar1 & 8) != 0)) {
                    lVar15 = local_f8;
                    local_e0 = iVar22;
                    if ((*(byte *)(uVar7 * 2 + *(longlong *)(param_1 + 8)) & 8) != 0)
                    goto LAB_140cae16c;
                    break;
                  }
                  pbVar5 = pbVar5 + 1;
                }
                if (bVar23 != 0x5b) {
                  pbVar24 = pbVar5;
                  do {
                    while (bVar23 = (byte)uVar7, bVar23 < 0x80) {
                      lVar15 = *(longlong *)(param_1 + 8);
                      if ((*(byte *)(lVar15 + uVar7 * 2) & 0x20) == 0) {
                        if ((*(ushort *)(uVar7 * 2 + lVar15) & 0x307) == 0) break;
                        goto LAB_140cadeb4;
                      }
                      if ((pbVar24[1] < 0x80) &&
                         ((*(byte *)(lVar15 + (ulonglong)pbVar24[1] * 2) & 8) != 0))
                      goto LAB_140cadeb4;
                      pbVar8 = pbVar24 + 2;
                      pbVar24 = pbVar24 + 2;
                      uVar7 = (ulonglong)*pbVar8;
                    }
                    if (((*(int *)(param_1 + 0x18) == 0) || (0x7f < bVar23)) ||
                       ((*(ushort *)(uVar7 * 2 + *(longlong *)(param_1 + 8)) & 0x1000) == 0))
                    goto LAB_140cadebe;
LAB_140cadeb4:
                    uVar7 = (ulonglong)pbVar24[1];
                    pbVar24 = pbVar24 + 1;
                  } while( true );
                }
                do {
                  pbVar5 = pbVar5 + 1;
                  local_e0 = iVar22;
                  if ((0x7f < *pbVar5) ||
                     (uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar5 * 2),
                     (uVar1 & 0x10) == 0)) break;
                } while ((uVar1 & 8) == 0);
                do {
                  pbVar8 = (byte *)FUN_140caea10(param_1,pbVar5);
                  pbVar24 = pbVar8;
                  while( true ) {
                    bVar23 = *pbVar24;
                    if (((0x7f < bVar23) ||
                        (uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar23 * 2),
                        (uVar1 & 0x10) == 0)) || ((uVar1 & 8) != 0)) break;
                    pbVar24 = pbVar24 + 1;
                  }
                  if (bVar23 == 0x5d) goto LAB_140caddcf;
                  if ((bVar23 == 0) || (bVar27 = pbVar5 == pbVar24, pbVar5 = pbVar24, bVar27)) {
                    d_aplatformplatformopenssl_srccryptoerrerr_lo();
                    d_aplatformplatformopenssl_srccryptoerrerr_lo
                              ("crypto\\conf\\conf_def.c",0x16f,"def_load_bio");
                    uVar17 = 100;
                    goto LAB_140cae7ab;
                  }
                } while( true );
              }
              local_e4 = iVar4 - 1;
              lVar6 = (longlong)iVar4 + *(longlong *)(local_c8 + 8);
              bVar23 = *(byte *)(lVar6 + -1);
              if (((0x7f < bVar23) ||
                  ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar23 * 2) & 0x20) == 0)) ||
                 ((1 < iVar4 &&
                  ((bVar23 = *(byte *)(lVar6 + -2), bVar23 < 0x80 &&
                   ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar23 * 2) & 0x20) != 0)))))
                 ) goto LAB_140cadcec;
              local_e8 = 1;
            }
            else {
              local_e4 = local_e4 + uVar16;
              local_e8 = 1;
            }
            goto LAB_140cae16c;
          }
LAB_140cae96d:
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\conf\\conf_def.c",0x101,"def_load_bio");
          uVar17 = 0x80007;
LAB_140cae7ab:
          FUN_140b91cc0(0xe,uVar17,0);
          lVar6 = local_f8;
          pcVar25 = local_f0;
          pcVar26 = (char *)0x0;
        }
      }
    }
  }
LAB_140cae5f4:
  FUN_140b8ef10(local_c8);
  FUN_140b8d990(local_c0,"crypto\\conf\\conf_def.c",0x23c);
  pcVar9 = local_d8;
  iVar4 = FUN_140b77980(local_d8);
  while (0 < iVar4) {
    lVar15 = FUN_140b783c0(pcVar9);
    FUN_140b73280(lVar6);
    iVar4 = FUN_140b77980(pcVar9);
    lVar6 = lVar15;
  }
  FUN_140b77c10(pcVar9);
  FUN_140b8d990(pcVar25,"crypto\\conf\\conf_def.c",0x249);
  if (local_b8 != 0) {
    FUN_140c3d760(&local_b8);
  }
  if (local_98 != (int *)0x0) {
    *local_98 = local_e0;
  }
  FUN_140c07aa0(local_58,0xd,&DAT_1413a63a0);
  FUN_140b92440(2,"line ",local_58);
  if (local_90 != *(longlong *)(param_1 + 0x10)) {
    FUN_140c1a240();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (pcVar26 != (char *)0x0) {
    FUN_140b8d990(*(undefined8 *)(pcVar26 + 8),"crypto\\conf\\conf_def.c",0x256);
    FUN_140b8d990(*(undefined8 *)(pcVar26 + 0x10),"crypto\\conf\\conf_def.c",599);
    FUN_140b8d990(pcVar26,"crypto\\conf\\conf_def.c",600);
  }
LAB_140cae721:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_118);
LAB_140cadebe:
  local_e8 = 0;
  pbVar8 = local_c0;
  pbVar18 = pbVar5;
  pbVar19 = pbVar24;
  if ((bVar23 == 0x3a) && (pbVar24[1] == 0x3a)) {
    *pbVar24 = 0;
    pbVar18 = pbVar24 + 2;
    pbVar24 = pbVar18;
    do {
      while( true ) {
        bVar23 = *pbVar24;
        uVar7 = (ulonglong)bVar23;
        if (0x7f < bVar23) break;
        if ((*(byte *)(*(longlong *)(param_1 + 8) + uVar7 * 2) & 0x20) == 0) {
          if ((*(ushort *)(uVar7 * 2 + *(longlong *)(param_1 + 8)) & 0x307) == 0) break;
          goto LAB_140cadf4c;
        }
        if ((pbVar24[1] < 0x80) &&
           ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)pbVar24[1] * 2) & 8) != 0)) {
          pbVar24 = pbVar24 + 1;
        }
        else {
          pbVar24 = pbVar24 + 2;
        }
      }
      pbVar8 = pbVar5;
      pbVar19 = pbVar24;
      if (((*(int *)(param_1 + 0x18) == 0) || (0x7f < bVar23)) ||
         ((*(ushort *)(uVar7 * 2 + *(longlong *)(param_1 + 8)) & 0x1000) == 0)) break;
LAB_140cadf4c:
      pbVar24 = pbVar24 + 1;
    } while( true );
  }
  while (((*pbVar24 < 0x80 &&
          (uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar24 * 2),
          (uVar1 & 0x10) != 0)) && ((uVar1 & 8) == 0))) {
    pbVar24 = pbVar24 + 1;
  }
  local_e0 = iVar22;
  iVar4 = strncmp((char *)pbVar18,".pragma",7);
  param_2 = lVar6;
  if (iVar4 != 0) {
LAB_140cadfaf:
    iVar4 = strncmp((char *)pbVar18,".include",8);
    if (iVar4 != 0) {
      if (*pbVar24 != 0x3d) goto LAB_140cae932;
      *pbVar19 = 0;
      do {
        pbVar24 = pbVar24 + 1;
        uVar7 = (ulonglong)*pbVar24;
        if ((0x7f < *pbVar24) ||
           (uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + uVar7 * 2), (uVar1 & 0x10) == 0))
        break;
      } while ((uVar1 & 8) == 0);
      pbVar5 = pbVar24;
      while ((0x7f < (byte)uVar7 || ((*(byte *)(*(longlong *)(param_1 + 8) + uVar7 * 2) & 8) == 0)))
      {
        uVar7 = (ulonglong)pbVar5[1];
        pbVar5 = pbVar5 + 1;
      }
      do {
        pbVar19 = pbVar5;
        pbVar5 = pbVar19 + -1;
        if ((pbVar5 < pbVar24) || (0x7f < *pbVar5)) break;
      } while ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar5 * 2) & 0x10) != 0);
      *pbVar19 = 0;
      pcVar26 = (char *)FUN_140b8d8d0(0x18,"crypto\\conf\\conf_def.c",0x216);
      pcVar25 = local_f0;
      if (pcVar26 == (char *)0x0) goto LAB_140cae5f4;
      lVar15 = FUN_140b8c830(pbVar18,"crypto\\conf\\conf_def.c",0x218);
      pcVar26[0x10] = '\0';
      pcVar26[0x11] = '\0';
      pcVar26[0x12] = '\0';
      pcVar26[0x13] = '\0';
      pcVar26[0x14] = '\0';
      pcVar26[0x15] = '\0';
      pcVar26[0x16] = '\0';
      pcVar26[0x17] = '\0';
      *(longlong *)(pcVar26 + 8) = lVar15;
      pcVar25 = local_f0;
      if ((lVar15 == 0) ||
         (iVar4 = FUN_140caec50(param_1,pbVar8,pcVar26 + 0x10,pbVar24), pcVar25 = local_f0,
         iVar4 == 0)) goto LAB_140cae5f4;
      iVar4 = strcmp((char *)pbVar8,(char *)local_c0);
      if ((iVar4 == 0) ||
         ((lVar14 = FUN_140caf530(param_1,pbVar8), lVar14 != 0 ||
          (lVar14 = cryptoconfconf_apic(param_1,pbVar8), lVar14 != 0)))) {
        iVar4 = cryptoconfconf_apic(param_1,lVar14,pcVar26);
        pcVar12 = local_d8;
        lVar15 = local_f8;
        if (iVar4 != 0) goto LAB_140cae16c;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\conf\\conf_def.c",0x22b,"def_load_bio");
        uVar17 = 0x8000e;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\conf\\conf_def.c",0x225,"def_load_bio");
        uVar17 = 0x67;
      }
      goto LAB_140cae5e2;
    }
    if ((pbVar24 == pbVar18 + 8) && (*pbVar24 != 0x3d)) {
LAB_140cae932:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_def.c",0x20d,"def_load_bio")
      ;
      FUN_140b91cc0(0xe,0x65,"HERE-->%s",pbVar24);
      pcVar25 = local_f0;
      goto LAB_140cae5f4;
    }
    local_a0 = (char *)0x0;
    pcVar9 = (char *)uopenssl_win32_utf8("OPENSSL_CONF_INCLUDE");
    if (pcVar9 == (char *)0x0) {
      pcVar9 = *(char **)(param_1 + 0x20);
    }
    if (*pbVar24 == 0x3d) {
      do {
        pbVar24 = pbVar24 + 1;
        if ((0x7f < *pbVar24) ||
           (uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar24 * 2),
           (uVar1 & 0x10) == 0)) break;
      } while ((uVar1 & 8) == 0);
    }
    pbVar5 = pbVar24;
    while ((0x7f < *pbVar5 ||
           ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar5 * 2) & 8) == 0))) {
      pbVar5 = pbVar5 + 1;
    }
    do {
      pbVar18 = pbVar5;
      pbVar5 = pbVar18 + -1;
      if ((pbVar5 < pbVar24) || (0x7f < *pbVar5)) break;
    } while ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar5 * 2) & 0x10) != 0);
    *pbVar18 = 0;
    iVar4 = FUN_140caec50(param_1,pbVar8,&local_a0,pbVar24);
    pcVar25 = local_a0;
    if (iVar4 == 0) {
LAB_140cae77a:
      lVar6 = local_f8;
      pcVar25 = local_f0;
      pcVar26 = (char *)0x0;
      goto LAB_140cae5f4;
    }
    pcVar12 = local_a0;
    if (((pcVar9 != (char *)0x0) && (cVar2 = *local_a0, cVar2 != '\\')) &&
       ((cVar2 == '\0' || ((local_a0[1] != ':' && (cVar2 != '/')))))) {
      sVar10 = strlen(local_a0);
      sVar11 = strlen(pcVar9);
      lVar6 = sVar10 + 2 + sVar11;
      pcVar12 = (char *)FUN_140b8d8d0(lVar6,"crypto\\conf\\conf_def.c",0x1d8);
      if (pcVar12 == (char *)0x0) {
        FUN_140b8d990(pcVar25,"crypto\\conf\\conf_def.c",0x1da);
        lVar6 = local_f8;
        pcVar25 = local_f0;
        goto LAB_140cae5f4;
      }
      FUN_140b8c190(pcVar12,pcVar9,lVar6);
      cVar2 = '\0';
      pcVar9 = pcVar12;
      if (*pcVar12 != '\0') {
        sVar10 = strlen(pcVar12);
        pcVar9 = pcVar12 + (sVar10 - 1);
        cVar2 = *pcVar9;
      }
      if ((cVar2 != '\\') && (*pcVar9 != '/')) {
        FUN_140b8c1e0(pcVar12,&DAT_1413a7098,lVar6);
      }
      FUN_140b8c1e0(pcVar12,pcVar25,lVar6);
      FUN_140b8d990(pcVar25,"crypto\\conf\\conf_def.c",0x1e2);
    }
    if (((*(int *)(param_1 + 0x1c) != 0) && (cVar2 = *pcVar12, cVar2 != '\\')) &&
       ((cVar2 == '\0' || ((pcVar12[1] != ':' && (cVar2 != '/')))))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_def.c",0x1e9,"def_load_bio")
      ;
      FUN_140b91cc0(0xe,0x7d,0);
      FUN_140b8d990(pcVar12,"crypto\\conf\\conf_def.c",0x1ea);
      lVar6 = local_f8;
      pcVar25 = local_f0;
      goto LAB_140cae5f4;
    }
    iVar4 = _stat64i32(pcVar12,local_88);
    if (iVar4 < 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\conf\\conf_def.c",0x32d,"process_include");
      piVar13 = _errno();
      FUN_140b91cc0(2,*piVar13,"calling stat(%s)",pcVar12);
      lVar14 = 0;
    }
    else if ((local_82 & 0xf000) == 0x4000) {
      if (local_b8 == 0) {
        lVar14 = FUN_140caf190(pcVar12,&local_b8);
        if (lVar14 != 0) {
          local_f0 = pcVar12;
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\conf\\conf_def.c",0x334,"process_include");
        FUN_140b91cc0(0xe,0x6f,&DAT_1413a5d54,pcVar12);
        lVar14 = 0;
      }
    }
    else {
      lVar14 = calling_fopens_s(pcVar12,&DAT_1413a5e14);
    }
    if (pcVar12 != local_f0) {
      FUN_140b8d990(pcVar12,"crypto\\conf\\conf_def.c",499);
    }
    param_2 = local_f8;
    pcVar12 = local_d8;
    lVar15 = local_f8;
    if (lVar14 != 0) {
      if ((local_d8 == (char *)0x0) && (local_d8 = (char *)FUN_140b77ab0(), local_d8 == (char *)0x0)
         ) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\conf\\conf_def.c",0x1fe,"def_load_bio");
        FUN_140b91cc0(0xe,0x8000f,0);
        FUN_140b73150(lVar14);
        lVar6 = local_f8;
        pcVar25 = local_f0;
        goto LAB_140cae5f4;
      }
      pcVar12 = local_d8;
      lVar6 = local_f8;
      iVar4 = FUN_140b78340(local_d8,local_f8);
      param_2 = lVar14;
      lVar15 = lVar14;
      if (iVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\conf\\conf_def.c",0x204,"def_load_bio");
        FUN_140b91cc0(0xe,0x8000f,0);
        FUN_140b73150(lVar14);
        pcVar25 = local_f0;
        goto LAB_140cae5f4;
      }
    }
    goto LAB_140cae16c;
  }
  pbVar18 = pbVar18 + 7;
  if (pbVar24 == pbVar18) {
    if (*pbVar24 != 0x3d) goto LAB_140cadfaf;
LAB_140cae044:
    do {
      pbVar24 = pbVar24 + 1;
      if ((0x7f < *pbVar24) ||
         (uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar24 * 2),
         (uVar1 & 0x10) == 0)) break;
    } while ((uVar1 & 8) == 0);
  }
  else if (*pbVar24 == 0x3d) goto LAB_140cae044;
  pbVar5 = pbVar24;
  while ((0x7f < *pbVar5 ||
         ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar5 * 2) & 8) == 0))) {
    pbVar5 = pbVar5 + 1;
  }
  do {
    pbVar5 = pbVar5 + -1;
    if ((pbVar5 < pbVar24) || (0x7f < *pbVar5)) break;
  } while ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar5 * 2) & 0x10) != 0);
  pbVar5[1] = 0;
  pbVar5 = (byte *)strchr((char *)pbVar24,0x3a);
  if (((pbVar5 == (byte *)0x0) || (pbVar5 == pbVar24)) || (pbVar5[1] == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_def.c",0x196,"def_load_bio");
    uVar17 = 0x7a;
LAB_140cae5e2:
    FUN_140b91cc0(0xe,uVar17,0);
    pcVar25 = local_f0;
    goto LAB_140cae5f4;
  }
  *pbVar5 = 0;
  pbVar8 = pbVar24;
  while ((0x7f < *pbVar8 ||
         ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar8 * 2) & 8) == 0))) {
    pbVar8 = pbVar8 + 1;
  }
  do {
    pbVar18 = pbVar8;
    pbVar8 = pbVar18 + -1;
    if ((pbVar8 < pbVar24) || (0x7f < *pbVar8)) break;
  } while ((*(byte *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar8 * 2) & 0x10) != 0);
  *pbVar18 = 0;
  do {
    pbVar5 = pbVar5 + 1;
    if ((0x7f < *pbVar5) ||
       (uVar1 = *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar5 * 2),
       (uVar1 & 0x10) == 0)) break;
  } while ((uVar1 & 8) == 0);
  iVar4 = strcmp((char *)pbVar24,"dollarid");
  if (iVar4 == 0) {
    lVar15 = param_1 + 0x18;
LAB_140cae157:
    iVar4 = FUN_140caf2f0(pbVar5,lVar15);
    bVar27 = iVar4 == 0;
  }
  else {
    iVar4 = strcmp((char *)pbVar24,"abspath");
    if (iVar4 == 0) {
      lVar15 = param_1 + 0x1c;
      goto LAB_140cae157;
    }
    iVar4 = strcmp((char *)pbVar24,"includedir");
    pcVar12 = local_d8;
    lVar15 = local_f8;
    if (iVar4 != 0) goto LAB_140cae16c;
    FUN_140b8d990(*(undefined8 *)(param_1 + 0x20),"crypto\\conf\\conf_def.c",0x1ac);
    lVar15 = FUN_140b8c830(pbVar5,"crypto\\conf\\conf_def.c",0x1ad);
    *(longlong *)(param_1 + 0x20) = lVar15;
    bVar27 = lVar15 == 0;
  }
  pcVar25 = local_f0;
  pcVar12 = local_d8;
  lVar15 = local_f8;
  if (bVar27) goto LAB_140cae5f4;
LAB_140cae16c:
  local_f8 = lVar15;
  pcVar9 = (char *)(ulonglong)local_e4;
  lVar6 = FUN_140b8ef80(local_c8,(longlong)(int)(local_e4 + 0x200));
  lVar15 = local_c8;
  iVar4 = local_dc;
  if (lVar6 == 0) goto LAB_140cae96d;
  goto LAB_140cadb10;
LAB_140caddcf:
  *pbVar8 = 0;
  iVar4 = FUN_140caec50();
  pbVar5 = local_a8;
  if (iVar4 == 0) {
    lVar6 = local_f8;
    pcVar25 = local_f0;
    local_c0 = local_a8;
    goto LAB_140cae5f4;
  }
  local_c0 = local_a8;
  local_b0 = FUN_140caf530(param_1,local_a8);
  lVar15 = local_f8;
  if ((local_b0 == 0) &&
     (local_b0 = cryptoconfconf_apic(param_1,pbVar5), lVar15 = local_f8, local_b0 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_def.c",0x178,"def_load_bio");
    uVar17 = 0x67;
    goto LAB_140cae7ab;
  }
  goto LAB_140cae16c;
}

