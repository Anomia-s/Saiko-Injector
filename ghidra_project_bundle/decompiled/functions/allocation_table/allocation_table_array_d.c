/**
 * Function: allocation_table_array_d
 * Address:  1406d0760
 * Signature: undefined allocation_table_array_d(void)
 * Body size: 2790 bytes
 */


void allocation_table_array_d(undefined8 *param_1,longlong param_2,char param_3,ulonglong param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  ulonglong in_stack_fffffffffffffe38;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  char cStack_1a1;
  double dStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  uint local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 *local_108;
  undefined4 local_100;
  ulonglong local_f8;
  undefined4 local_ec;
  longlong local_e8;
  int *local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  char local_c1;
  undefined8 local_c0;
  
  local_c0 = 0xfffffffffffffffe;
  uVar15 = *(ulonglong *)(param_2 + 0x28);
  local_120 = param_2;
  local_d0 = param_1;
  local_c1 = param_3;
  if (uVar15 == 0) {
    puVar8 = (undefined4 *)FUN_1406d2ba0(param_1 + 0x2a,&local_120);
    uVar7 = *puVar8;
    uVar13 = puVar8[1];
    FUN_1407ab880(*param_1,"allocation: table hash %d",uVar13);
    iVar6 = 0;
    do {
      bVar9 = (byte)iVar6;
      iVar6 = iVar6 + 1;
    } while ((uint)(1 << (bVar9 & 0x1f)) < uVar13);
    if (uVar13 == 0) {
      iVar6 = 0;
    }
    FUN_1407aacf0(*param_1,0x35,local_c1,iVar6,in_stack_fffffffffffffe38 & 0xffffffffffffff00);
    FUN_1407aae60(*local_d0,uVar7);
    return;
  }
  local_e0 = *(int **)(param_2 + 0x20);
  if (uVar15 < 9) {
    uVar17 = 0;
    uVar13 = 0;
    uVar11 = 0;
    uVar22 = 0;
  }
  else {
    uVar11 = 8;
    if ((uVar15 & 7) != 0) {
      uVar11 = (ulonglong)((uint)uVar15 & 7);
    }
    uVar11 = uVar15 - uVar11;
    iVar42 = 0;
    iVar43 = 0;
    iVar44 = 0;
    iVar45 = 0;
    iVar38 = 0;
    iVar39 = 0;
    iVar40 = 0;
    iVar41 = 0;
    iVar34 = 0;
    iVar35 = 0;
    iVar36 = 0;
    iVar37 = 0;
    iVar30 = 0;
    iVar31 = 0;
    iVar32 = 0;
    iVar33 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar6 = 0;
    iVar20 = 0;
    iVar24 = 0;
    iVar25 = 0;
    uVar17 = uVar11;
    piVar12 = local_e0;
    do {
      uVar13 = (uint)(*piVar12 == 0);
      uVar16 = (uint)(piVar12[6] == 0);
      uVar5 = (uint)(piVar12[0xc] == 0);
      uVar3 = (uint)(piVar12[0x12] == 0);
      iVar26 = iVar26 + uVar13;
      iVar27 = iVar27 + uVar16;
      iVar28 = iVar28 + uVar5;
      iVar29 = iVar29 + uVar3;
      uVar22 = (uint)(piVar12[0x18] == 0);
      uVar23 = (uint)(piVar12[0x1e] == 0);
      uVar2 = (uint)(piVar12[0x24] == 0);
      uVar4 = (uint)(piVar12[0x2a] == 0);
      iVar6 = iVar6 + uVar22;
      iVar20 = iVar20 + uVar23;
      iVar24 = iVar24 + uVar2;
      iVar25 = iVar25 + uVar4;
      iVar42 = (iVar42 - uVar13) + 1;
      iVar43 = (iVar43 - uVar16) + 1;
      iVar44 = (iVar44 - uVar5) + 1;
      iVar45 = (iVar45 - uVar3) + 1;
      iVar38 = (iVar38 - uVar22) + 1;
      iVar39 = (iVar39 - uVar23) + 1;
      iVar40 = (iVar40 - uVar2) + 1;
      iVar41 = (iVar41 - uVar4) + 1;
      iVar34 = iVar34 + (uint)(*piVar12 == 1);
      iVar35 = iVar35 + (uint)(piVar12[6] == 1);
      iVar36 = iVar36 + (uint)(piVar12[0xc] == 1);
      iVar37 = iVar37 + (uint)(piVar12[0x12] == 1);
      iVar30 = iVar30 + (uint)(piVar12[0x18] == 1);
      iVar31 = iVar31 + (uint)(piVar12[0x1e] == 1);
      iVar32 = iVar32 + (uint)(piVar12[0x24] == 1);
      iVar33 = iVar33 + (uint)(piVar12[0x2a] == 1);
      piVar12 = piVar12 + 0x30;
      uVar17 = uVar17 - 8;
    } while (uVar17 != 0);
    uVar17 = (ulonglong)
             (uint)(iVar41 + iVar45 + iVar39 + iVar43 + iVar40 + iVar44 + iVar38 + iVar42);
    uVar13 = iVar33 + iVar37 + iVar31 + iVar35 + iVar32 + iVar36 + iVar30 + iVar34;
    uVar22 = iVar25 + iVar29 + iVar20 + iVar27 + iVar24 + iVar28 + iVar6 + iVar26;
  }
  piVar12 = local_e0 + uVar11 * 6;
  do {
    iVar6 = *piVar12;
    uVar22 = uVar22 + (iVar6 == 0);
    uVar16 = (int)uVar17 + (uint)(iVar6 != 0);
    uVar17 = (ulonglong)uVar16;
    uVar13 = uVar13 + (iVar6 == 1);
    uVar11 = uVar11 + 1;
    piVar12 = piVar12 + 6;
  } while (uVar15 != uVar11);
  uVar23 = 0;
  if (uVar22 == 0) {
    if (uVar16 == 0) {
      iVar6 = 0;
    }
    else {
      local_f8 = CONCAT71(local_f8._1_7_,(char)param_4);
      iVar20 = 0;
      if (param_1[0x22] != 0) {
        iVar20 = 0;
        uVar11 = 0;
        do {
          uVar17 = *(ulonglong *)(local_e0 + uVar11 * 6 + 2);
          uVar23 = 0;
          if (uVar17 != param_1[0x23]) {
            uVar21 = uVar17 >> 9 ^ uVar17 >> 4;
            uVar18 = 0;
            do {
              uVar21 = uVar21 & param_1[0x21] - 1;
              lVar14 = uVar21 * 0x20;
              uVar1 = *(ulonglong *)(param_1[0x20] + lVar14);
              if (uVar1 == uVar17) {
                lVar14 = lVar14 + param_1[0x20];
                uVar23 = 0;
                if (*(int *)(lVar14 + 8) == 3) {
                  uVar23 = -(uint)((double)(iVar20 + 1) == *(double *)(lVar14 + 0x10)) & 1;
                }
                goto LAB_1406d0a8a;
              }
              if (uVar1 == param_1[0x23]) break;
              uVar21 = uVar21 + uVar18 + 1;
              uVar18 = uVar18 + 1;
            } while (uVar18 <= param_1[0x21] - 1);
            uVar23 = 0;
          }
LAB_1406d0a8a:
          iVar20 = uVar23 + iVar20;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar15);
      }
      iVar6 = 0;
      if (uVar16 == iVar20 + uVar13) {
        uVar16 = uVar13;
        iVar6 = iVar20;
      }
      uVar17 = (ulonglong)uVar16;
      param_4 = param_4 & 0xff;
      uVar23 = 0;
      local_d8 = uVar15;
    }
  }
  else {
    iVar6 = 0;
  }
  do {
    bVar9 = (byte)uVar23;
    uVar23 = uVar23 + 1;
    uVar16 = (uint)uVar17;
  } while ((uint)(1 << (bVar9 & 0x1f)) < uVar16);
  uVar15 = (ulonglong)uVar23;
  if (uVar16 == 0) {
    uVar15 = uVar17;
  }
  uVar23 = *(uint *)((longlong)param_1 + 0x4fc);
  local_110 = (ulonglong)uVar23;
  local_d8 = CONCAT71(local_d8._1_7_,param_3);
  local_e8 = param_2;
  if ((char)param_4 == '\0') {
    uVar5 = uVar23 + 1;
    if (0xff < uVar5) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)(param_2 + 0xc),
                 "Out of registers when trying to allocate %d registers: exceeded limit %d",1,0xff);
    }
    *(uint *)((longlong)param_1 + 0x4fc) = uVar5;
    if (uVar5 < *(uint *)(param_1 + 0xa0)) {
      uVar5 = *(uint *)(param_1 + 0xa0);
    }
    *(uint *)(param_1 + 0xa0) = uVar5;
    local_d8 = CONCAT71(local_d8._1_7_,(char)uVar23);
  }
  if (((uVar22 == 0 && iVar6 == 0) && (uVar13 - 1 < 0x20)) && (uVar16 == uVar13)) {
    local_128 = 0;
    uVar11 = 0;
    if (*(longlong *)(param_2 + 0x28) != 0) {
      do {
        lVar14 = *(longlong *)(*(longlong *)(local_e8 + 0x20) + 8 + uVar11 * 0x18);
        local_1b8 = *(undefined8 *)(lVar14 + 0x20);
        uStack_1b0 = *(undefined8 *)(lVar14 + 0x28);
        iVar6 = FUN_1407aa500(*local_d0,&local_1b8);
        if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          Luau::CompileError::CompileError_Constructor_or_Destructor
                    ((undefined8 *)(lVar14 + 0xc),
                     "Exceeded constant limit; simplify the code to compile",uVar17,param_4);
        }
        uVar18 = (ulonglong)local_128;
        local_128 = local_128 + 1;
        (&local_1a8)[uVar18] = iVar6;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ulonglong *)(local_e8 + 0x28));
    }
    uVar16 = FUN_1407aa6b0(*local_d0,&local_1a8);
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      Luau::CompileError::CompileError_Constructor_or_Destructor
                ((undefined8 *)(local_e8 + 0xc),
                 "Exceeded constant limit; simplify the code to compile",uVar17,param_4);
    }
    FUN_1407ab880(*local_d0,"allocation: table template %d",uVar13);
    if (uVar16 < 0x8000) {
      FUN_1407aadb0(*local_d0,0x36,local_d8 & 0xff,uVar16);
    }
    else {
      in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffffffffff00;
      FUN_1407aacf0(*local_d0,0x35,local_d8 & 0xff,uVar15,in_stack_fffffffffffffe38);
      FUN_1407aae60(*local_d0,0);
    }
    goto LAB_1406d0da4;
  }
  if (*(longlong *)(param_2 + 0x28) == 0) {
LAB_1406d0ce2:
    iVar6 = iVar6 + uVar22;
    if (uVar16 != 0) goto LAB_1406d0cec;
LAB_1406d0d5d:
    FUN_1407ab880(*param_1,"allocation: table array %d",iVar6);
  }
  else {
    lVar14 = *(longlong *)(param_2 + 0x28) * 0x18 + *(longlong *)(param_2 + 0x20);
    piVar12 = (int *)(lVar14 + -0x18);
    if ((piVar12 == (int *)0x0) || (*piVar12 != 0)) goto LAB_1406d0ce2;
    iVar6 = (iVar6 + uVar22) - (uint)(*(int *)(*(longlong *)(lVar14 + -8) + 8) == DAT_1416f23e0);
    if (uVar16 == 0) goto LAB_1406d0d5d;
LAB_1406d0cec:
    if (iVar6 == 0) {
      FUN_1407ab880(*param_1,"allocation: table hash %d");
    }
    else {
      FUN_1407ab880(*param_1,"allocation: table hash %d array %d",uVar17,iVar6);
    }
  }
  in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffffffffff00;
  FUN_1407aacf0(*local_d0,0x35,local_d8 & 0xff,uVar15,in_stack_fffffffffffffe38);
  FUN_1407aae60(*local_d0,iVar6);
LAB_1406d0da4:
  local_f8 = 0x10;
  if (uVar22 < 0x10) {
    local_f8 = (ulonglong)uVar22;
  }
  local_e0 = (int *)(ulonglong)*(uint *)((longlong)local_d0 + 0x4fc);
  uVar13 = *(uint *)((longlong)local_d0 + 0x4fc) + (int)local_f8;
  if (0xff < uVar13) {
                    /* WARNING: Subroutine does not return */
    Luau::CompileError::CompileError_Constructor_or_Destructor
              ((undefined8 *)(local_e8 + 0xc),
               "Out of registers when trying to allocate %d registers: exceeded limit %d",local_f8,
               0xff);
  }
  *(uint *)((longlong)local_d0 + 0x4fc) = uVar13;
  if (uVar13 < *(uint *)(local_d0 + 0xa0)) {
    uVar13 = *(uint *)(local_d0 + 0xa0);
  }
  *(uint *)(local_d0 + 0xa0) = uVar13;
  iVar20 = 1;
  local_118 = 0;
  iVar6 = 0;
  uVar15 = 0;
  if (*(longlong *)(local_e8 + 0x28) != 0) {
    do {
      while( true ) {
        uVar11 = *(ulonglong *)(*(longlong *)(local_e8 + 0x20) + 8 + uVar15 * 0x18);
        lVar14 = *(longlong *)(*(longlong *)(local_e8 + 0x20) + 0x10 + uVar15 * 0x18);
        if (0 < *(int *)((longlong)local_d0 + 0xc)) {
          FUN_1407ab600(*local_d0,*(int *)(lVar14 + 0xc) + 1);
        }
        if (1 < *(int *)((longlong)local_d0 + 0x14)) {
          in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffffffffff00;
          FUN_1407aacf0(*local_d0,0x45,0,0,in_stack_fffffffffffffe38);
        }
        if (iVar6 == 0) break;
        if ((uVar11 != 0) || (iVar6 == (int)local_f8)) {
          in_stack_fffffffffffffe38 =
               CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),(char)iVar6 + '\x01');
          FUN_1407aacf0(*local_d0,0x37,local_d8 & 0xff,local_e0,in_stack_fffffffffffffe38);
          FUN_1407aae60(*local_d0,iVar20);
          iVar20 = iVar20 + iVar6;
          break;
        }
LAB_1406d0ef9:
        uVar15 = uVar15 + 1;
        if (uVar15 == *(ulonglong *)(local_e8 + 0x28)) {
          local_118 = FUN_1406d2e10(local_d0,lVar14);
        }
        else {
          local_ec = *(undefined4 *)((longlong)local_d0 + 0x4fc);
          *(uint *)((longlong)local_d0 + 0x4fc) = (iVar6 + (int)local_e0 & 0xffU) + 1;
          exceeded_constant_limit_simplify_the_code_to(local_d0,lVar14);
          *(undefined4 *)((longlong)local_d0 + 0x4fc) = local_ec;
        }
        iVar6 = iVar6 + 1;
        if (*(ulonglong *)(local_e8 + 0x28) <= uVar15) goto LAB_1406d111b;
      }
      if (uVar11 == 0) {
        iVar6 = 0;
        goto LAB_1406d0ef9;
      }
      local_108 = local_d0;
      local_100 = *(undefined4 *)((longlong)local_d0 + 0x4fc);
      if ((local_d0[0x22] != 0) && (uVar11 != local_d0[0x23])) {
        uVar17 = uVar11 >> 9 ^ uVar11 >> 4;
        uVar18 = 0;
        do {
          uVar17 = uVar17 & local_d0[0x21] - 1;
          lVar19 = uVar17 * 0x20;
          uVar21 = *(ulonglong *)(local_d0[0x20] + lVar19);
          if (uVar21 == uVar11) {
            lVar19 = local_d0[0x20] + lVar19;
            uStack_198 = *(undefined4 *)(lVar19 + 0xc);
            dStack_1a0 = *(double *)(lVar19 + 0x10);
            if (((*(int *)(lVar19 + 8) != 3) || (dStack_1a0 < 1.0)) || (256.0 < dStack_1a0)) {
              if (*(int *)(lVar19 + 8) == 5) {
                local_1a8 = 3;
                uStack_1a3 = 0;
                uStack_1a2 = 0;
                cStack_1a1 = '\0';
                uStack_1a4 = (char)local_d8;
                uStack_194 = 0;
                goto LAB_1406d10b7;
              }
            }
            else if ((dStack_1a0 == (double)(int)dStack_1a0) &&
                    (!NAN(dStack_1a0) && !NAN((double)(int)dStack_1a0))) {
              iVar6 = (int)dStack_1a0;
              local_1a8 = 4;
              uStack_1a3 = 0;
              uStack_1a2 = 0;
              dStack_1a0 = 0.0;
              uStack_198 = 0;
              uStack_194 = 0;
              uStack_1a4 = (char)local_d8;
              cStack_1a1 = (char)iVar6 + -1;
              goto LAB_1406d10b7;
            }
            break;
          }
          if (uVar21 == local_d0[0x23]) break;
          uVar17 = uVar17 + uVar18 + 1;
          uVar18 = uVar18 + 1;
        } while (uVar18 <= local_d0[0x21] - 1);
      }
      local_1a8 = 5;
      uStack_1a3 = 0;
      uStack_1a2 = 0;
      cStack_1a1 = '\0';
      dStack_1a0 = 0.0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_1a4 = (char)local_d8;
      uStack_1a2 = out_of_registers_when_trying_to_allocate_d_re(local_d0,uVar11,&local_108);
LAB_1406d10b7:
      local_190 = *(undefined8 *)(uVar11 + 0xc);
      uStack_188 = *(undefined8 *)(uVar11 + 0x14);
      uVar7 = out_of_registers_when_trying_to_allocate_d_re(local_d0,lVar14,&local_108);
      in_stack_fffffffffffffe38 = 0;
      exceeded_constant_limit_simplify_the_code_to(local_d0,&local_1a8,uVar7,1,0);
      *(undefined4 *)((longlong)local_108 + 0x4fc) = local_100;
      uVar15 = uVar15 + 1;
      iVar6 = 0;
    } while (uVar15 < *(ulonglong *)(local_e8 + 0x28));
  }
LAB_1406d111b:
  if (iVar6 != 0) {
    cVar10 = '\0';
    if ((local_118 & 1) == 0) {
      cVar10 = (char)iVar6 + '\x01';
    }
    in_stack_fffffffffffffe38 = CONCAT71((int7)(in_stack_fffffffffffffe38 >> 8),cVar10);
    FUN_1407aacf0(*local_d0,0x37,local_d8 & 0xff,local_e0,in_stack_fffffffffffffe38);
    FUN_1407aae60(*local_d0,iVar20);
  }
  if (local_c1 != (char)local_d8) {
    FUN_1407aacf0(*local_d0,6,local_c1,local_d8 & 0xff,
                  in_stack_fffffffffffffe38 & 0xffffffffffffff00);
  }
  *(int *)((longlong)local_d0 + 0x4fc) = (int)local_110;
  return;
}

