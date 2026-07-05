/**
 * Function: uopenssl_fatal
 * Address:  140bcf5a0
 * Signature: undefined uopenssl_fatal(void)
 * Body size: 908 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void uopenssl_fatal(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  longlong lVar4;
  DWORD DVar5;
  int iVar6;
  HANDLE pvVar7;
  ulonglong *puVar8;
  size_t sVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  undefined1 *puVar15;
  uint cbMultiByte;
  undefined1 (*pauVar16) [16];
  undefined2 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 uStackY_2b0;
  undefined1 auStackY_2a8 [32];
  undefined8 *local_280;
  DWORD local_278 [2];
  undefined8 local_270 [3];
  undefined8 local_258;
  WCHAR local_248 [8];
  undefined1 local_238 [494];
  undefined2 local_4a;
  ulonglong local_48;
  undefined8 uStack_38;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  uStack_38 = 0x140bcf5c6;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)&local_258;
  uStackY_2b0 = 0x140bcf5ea;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  pvVar7 = GetStdHandle(0xfffffff4);
  if (pvVar7 != (HANDLE)0x0) {
    uStackY_2b0 = 0x140bcf5fb;
    DVar5 = GetFileType(pvVar7);
    if (DVar5 != 0) {
      uStackY_2b0 = 0x140bcf60b;
      puVar8 = (ulonglong *)FUN_14002c1a0();
      uStackY_2b0 = 0x140bcf636;
      local_280 = &local_res10;
      DVar5 = __stdio_common_vsprintf(*puVar8 | 1,local_248,0x200,param_1);
      if ((int)DVar5 < 0) {
        DVar5 = 0xffffffff;
      }
      if ((int)DVar5 < 0) {
        DVar5 = 0x200;
      }
      uStackY_2b0 = 0x140bcf65e;
      WriteFile(pvVar7,local_248,DVar5,(LPDWORD)&local_258,(LPOVERLAPPED)0x0);
      puVar15 = auStackY_2a8;
      goto LAB_140bcf91d;
    }
  }
  uStackY_2b0 = 0x140bcf672;
  sVar9 = strlen((char *)param_1);
  uVar13 = sVar9 + 1;
  uVar10 = uVar13 * 2 + 0xf;
  if (uVar10 <= uVar13 * 2) {
    uVar10 = 0xffffffffffffff0;
  }
  uStackY_2b0 = 0x140bcf699;
  lVar4 = -(uVar10 & 0xfffffffffffffff0);
  puVar15 = auStackY_2a8 + lVar4;
  uVar10 = 0;
  pwVar14 = (wchar_t *)((longlong)&local_258 + lVar4);
  if (pwVar14 == (wchar_t *)0x0) {
    pwVar14 = L"no stack?";
  }
  else {
    cbMultiByte = (uint)uVar13;
    *(uint *)((longlong)local_278 + lVar4 + -8) = cbMultiByte;
    *(wchar_t **)((longlong)local_270 + lVar4 + -0x18) = pwVar14;
    *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x140bcf6cd;
    iVar6 = MultiByteToWideChar(0,0,(LPCSTR)param_1,cbMultiByte,
                                *(LPWSTR *)((longlong)local_270 + lVar4 + -0x18),
                                *(int *)((longlong)local_278 + lVar4 + -8));
    if ((iVar6 == 0) && (uVar13 != 0)) {
      uVar12 = uVar10;
      if ((3 < uVar13) &&
         (((wchar_t *)((longlong)param_1 + sVar9) < pwVar14 || (pwVar14 + sVar9 < param_1)))) {
        if (uVar13 < 0x20) {
LAB_140bcf797:
          do {
            uVar3 = *(undefined4 *)((longlong)param_1 + uVar12);
            uVar36 = (undefined1)((uint)uVar3 >> 0x18);
            uVar35 = (undefined1)((uint)uVar3 >> 0x10);
            uVar34 = (undefined1)((uint)uVar3 >> 8);
            auVar33._4_4_ =
                 (int)(CONCAT35(CONCAT21(CONCAT11(uVar36,uVar36),uVar35),CONCAT14(uVar35,uVar3)) >>
                      0x20);
            auVar33[3] = uVar34;
            auVar33[2] = uVar34;
            auVar33[0] = (undefined1)uVar3;
            auVar33[1] = auVar33[0];
            auVar33._8_8_ = 0;
            auVar24 = psraw(auVar33,8);
            *(longlong *)(pwVar14 + uVar12) = auVar24._0_8_;
            uVar12 = uVar12 + 4;
          } while (uVar12 < (uVar13 & 0xfffffffffffffffc));
        }
        else {
          pwVar11 = param_1 + 8;
          pauVar16 = (undefined1 (*) [16])(local_238 + lVar4);
          do {
            uVar1 = *(ulonglong *)(pwVar11 + -8);
            uVar2 = *(ulonglong *)(pwVar11 + -4);
            uVar34 = (undefined1)(uVar1 >> 0x38);
            auVar23._8_6_ = 0;
            auVar23._0_8_ = uVar1;
            auVar23[0xe] = uVar34;
            auVar23[0xf] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x30);
            auVar22._14_2_ = auVar23._14_2_;
            auVar22._8_5_ = 0;
            auVar22._0_8_ = uVar1;
            auVar22[0xd] = uVar34;
            auVar21._13_3_ = auVar22._13_3_;
            auVar21._8_4_ = 0;
            auVar21._0_8_ = uVar1;
            auVar21[0xc] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x28);
            auVar20._12_4_ = auVar21._12_4_;
            auVar20._8_3_ = 0;
            auVar20._0_8_ = uVar1;
            auVar20[0xb] = uVar34;
            auVar19._11_5_ = auVar20._11_5_;
            auVar19._8_2_ = 0;
            auVar19._0_8_ = uVar1;
            auVar19[10] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x20);
            auVar18._10_6_ = auVar19._10_6_;
            auVar18[8] = 0;
            auVar18._0_8_ = uVar1;
            auVar18[9] = uVar34;
            auVar45._9_7_ = auVar18._9_7_;
            auVar45[8] = uVar34;
            auVar45._0_8_ = uVar1;
            uVar34 = (undefined1)(uVar1 >> 0x18);
            auVar24._8_8_ = auVar45._8_8_;
            auVar24[7] = uVar34;
            auVar24[6] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x10);
            auVar24[5] = uVar34;
            auVar24[4] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 8);
            auVar24[3] = uVar34;
            auVar24[2] = uVar34;
            auVar24[0] = (undefined1)uVar1;
            auVar24[1] = auVar24[0];
            uVar12 = uVar12 + 0x20;
            uVar34 = (undefined1)(uVar2 >> 0x38);
            auVar44._8_6_ = 0;
            auVar44._0_8_ = uVar2;
            auVar44[0xe] = uVar34;
            auVar44[0xf] = uVar34;
            uVar34 = (undefined1)(uVar2 >> 0x30);
            auVar43._14_2_ = auVar44._14_2_;
            auVar43._8_5_ = 0;
            auVar43._0_8_ = uVar2;
            auVar43[0xd] = uVar34;
            auVar42._13_3_ = auVar43._13_3_;
            auVar42._8_4_ = 0;
            auVar42._0_8_ = uVar2;
            auVar42[0xc] = uVar34;
            uVar34 = (undefined1)(uVar2 >> 0x28);
            auVar41._12_4_ = auVar42._12_4_;
            auVar41._8_3_ = 0;
            auVar41._0_8_ = uVar2;
            auVar41[0xb] = uVar34;
            auVar40._11_5_ = auVar41._11_5_;
            auVar40._8_2_ = 0;
            auVar40._0_8_ = uVar2;
            auVar40[10] = uVar34;
            uVar34 = (undefined1)(uVar2 >> 0x20);
            auVar39._10_6_ = auVar40._10_6_;
            auVar39[8] = 0;
            auVar39._0_8_ = uVar2;
            auVar39[9] = uVar34;
            auVar38._9_7_ = auVar39._9_7_;
            auVar38[8] = uVar34;
            auVar38._0_8_ = uVar2;
            uVar34 = (undefined1)(uVar2 >> 0x18);
            auVar37._8_8_ = auVar38._8_8_;
            auVar37[7] = uVar34;
            auVar37[6] = uVar34;
            uVar34 = (undefined1)(uVar2 >> 0x10);
            auVar37[5] = uVar34;
            auVar37[4] = uVar34;
            uVar34 = (undefined1)(uVar2 >> 8);
            auVar37[3] = uVar34;
            auVar37[2] = uVar34;
            auVar37[0] = (undefined1)uVar2;
            auVar37[1] = auVar37[0];
            auVar24 = psraw(auVar24,8);
            auVar45 = psraw(auVar37,8);
            pauVar16[-2] = auVar24;
            uVar1 = *(ulonglong *)pwVar11;
            uVar34 = (undefined1)(uVar1 >> 0x38);
            auVar32._8_6_ = 0;
            auVar32._0_8_ = uVar1;
            auVar32[0xe] = uVar34;
            auVar32[0xf] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x30);
            auVar31._14_2_ = auVar32._14_2_;
            auVar31._8_5_ = 0;
            auVar31._0_8_ = uVar1;
            auVar31[0xd] = uVar34;
            auVar30._13_3_ = auVar31._13_3_;
            auVar30._8_4_ = 0;
            auVar30._0_8_ = uVar1;
            auVar30[0xc] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x28);
            auVar29._12_4_ = auVar30._12_4_;
            auVar29._8_3_ = 0;
            auVar29._0_8_ = uVar1;
            auVar29[0xb] = uVar34;
            auVar28._11_5_ = auVar29._11_5_;
            auVar28._8_2_ = 0;
            auVar28._0_8_ = uVar1;
            auVar28[10] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x20);
            auVar27._10_6_ = auVar28._10_6_;
            auVar27[8] = 0;
            auVar27._0_8_ = uVar1;
            auVar27[9] = uVar34;
            auVar26._9_7_ = auVar27._9_7_;
            auVar26[8] = uVar34;
            auVar26._0_8_ = uVar1;
            uVar34 = (undefined1)(uVar1 >> 0x18);
            auVar25._8_8_ = auVar26._8_8_;
            auVar25[7] = uVar34;
            auVar25[6] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x10);
            auVar25[5] = uVar34;
            auVar25[4] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 8);
            auVar25[3] = uVar34;
            auVar25[2] = uVar34;
            auVar25[0] = (undefined1)uVar1;
            auVar25[1] = auVar25[0];
            auVar24 = psraw(auVar25,8);
            pauVar16[-1] = auVar45;
            uVar1 = *(ulonglong *)(pwVar11 + 4);
            uVar34 = (undefined1)(uVar1 >> 0x38);
            auVar53._8_6_ = 0;
            auVar53._0_8_ = uVar1;
            auVar53[0xe] = uVar34;
            auVar53[0xf] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x30);
            auVar52._14_2_ = auVar53._14_2_;
            auVar52._8_5_ = 0;
            auVar52._0_8_ = uVar1;
            auVar52[0xd] = uVar34;
            auVar51._13_3_ = auVar52._13_3_;
            auVar51._8_4_ = 0;
            auVar51._0_8_ = uVar1;
            auVar51[0xc] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x28);
            auVar50._12_4_ = auVar51._12_4_;
            auVar50._8_3_ = 0;
            auVar50._0_8_ = uVar1;
            auVar50[0xb] = uVar34;
            auVar49._11_5_ = auVar50._11_5_;
            auVar49._8_2_ = 0;
            auVar49._0_8_ = uVar1;
            auVar49[10] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x20);
            auVar48._10_6_ = auVar49._10_6_;
            auVar48[8] = 0;
            auVar48._0_8_ = uVar1;
            auVar48[9] = uVar34;
            auVar47._9_7_ = auVar48._9_7_;
            auVar47[8] = uVar34;
            auVar47._0_8_ = uVar1;
            uVar34 = (undefined1)(uVar1 >> 0x18);
            auVar46._8_8_ = auVar47._8_8_;
            auVar46[7] = uVar34;
            auVar46[6] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 0x10);
            auVar46[5] = uVar34;
            auVar46[4] = uVar34;
            uVar34 = (undefined1)(uVar1 >> 8);
            auVar46[3] = uVar34;
            auVar46[2] = uVar34;
            auVar46[0] = (undefined1)uVar1;
            auVar46[1] = auVar46[0];
            auVar45 = psraw(auVar46,8);
            *pauVar16 = auVar24;
            pauVar16[1] = auVar45;
            pwVar11 = pwVar11 + 0x10;
            pauVar16 = pauVar16 + 4;
          } while (uVar12 < uVar13 - (cbMultiByte & 0x1f));
          if (3 < (ulonglong)(cbMultiByte & 0x1f)) goto LAB_140bcf797;
        }
        if (uVar13 <= uVar12) goto LAB_140bcf7f5;
      }
      do {
        pwVar14[uVar12] = (short)*(char *)((longlong)param_1 + uVar12);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
    }
    else {
LAB_140bcf7f5:
      if (uVar13 == 0) goto LAB_140bcf86b;
    }
    do {
      if (pwVar14[uVar10] == L'%') {
        puVar17 = (undefined2 *)((longlong)&local_258 + uVar10 * 2 + lVar4 + 2);
        do {
          switch(*puVar17) {
          case 0x2a:
          case 0x2d:
          case 0x2e:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            uVar10 = uVar10 + 1;
            puVar17 = puVar17 + 1;
            break;
          default:
            goto switchD_140bcf836_caseD_2b;
          case 0x43:
            *(undefined2 *)((longlong)&local_258 + uVar10 * 2 + lVar4 + 2) = 99;
            goto switchD_140bcf836_caseD_2b;
          case 0x53:
            *(undefined2 *)((longlong)&local_258 + uVar10 * 2 + lVar4 + 2) = 0x73;
            goto switchD_140bcf836_caseD_2b;
          case 99:
            *(undefined2 *)((longlong)&local_258 + uVar10 * 2 + lVar4 + 2) = 0x43;
            goto switchD_140bcf836_caseD_2b;
          case 0x73:
            *(undefined2 *)((longlong)&local_258 + uVar10 * 2 + lVar4 + 2) = 0x53;
            goto switchD_140bcf836_caseD_2b;
          }
        } while( true );
      }
switchD_140bcf836_caseD_2b:
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar13);
  }
LAB_140bcf86b:
  *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x140bcf877;
  puVar8 = (ulonglong *)FUN_14002c1a0();
  *(undefined8 **)((longlong)local_278 + lVar4 + -8) = &local_res10;
  *(undefined8 *)((longlong)local_270 + lVar4 + -0x18) = 0;
  uVar13 = *puVar8;
  *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x140bcf89a;
  __stdio_common_vswprintf(uVar13 | 1,local_248,0xff,pwVar14);
  local_4a = 0;
  *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x140bcf8a6;
  iVar6 = openssl_isservice();
  if (iVar6 < 1) {
    *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x140bcf91d;
    MessageBoxW((HWND)0x0,local_248,L"OpenSSL: FATAL",0x10);
  }
  else {
    *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x140bcf8b9;
    pvVar7 = RegisterEventSourceW((LPCWSTR)0x0,L"OpenSSL");
    puVar15 = auStackY_2a8 + lVar4;
    if (pvVar7 != (HANDLE)0x0) {
      *(undefined8 *)((longlong)local_270 + lVar4 + 8) = 0;
      local_258 = local_248;
      *(undefined8 **)((longlong)local_270 + lVar4) = &local_258;
      *(undefined4 *)((longlong)local_278 + lVar4) = 0;
      *(undefined2 *)((longlong)local_278 + lVar4 + -8) = 1;
      *(undefined8 *)((longlong)local_270 + lVar4 + -0x18) = 0;
      *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x140bcf8fb;
      ReportEventW(pvVar7,1,0,0,*(PSID *)((longlong)local_270 + lVar4 + -0x18),
                   *(WORD *)((longlong)local_278 + lVar4 + -8),
                   *(DWORD *)((longlong)local_278 + lVar4),
                   *(LPCWSTR **)((longlong)local_270 + lVar4),
                   *(LPVOID *)((longlong)local_270 + lVar4 + 8));
      *(undefined8 *)(auStackY_2a8 + lVar4 + -8) = 0x140bcf904;
      DeregisterEventSource(pvVar7);
      puVar15 = auStackY_2a8 + lVar4;
    }
  }
LAB_140bcf91d:
  uVar13 = local_48 ^ (ulonglong)&local_258;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_140bcf92c;
  FUN_140b65db0(uVar13);
}

