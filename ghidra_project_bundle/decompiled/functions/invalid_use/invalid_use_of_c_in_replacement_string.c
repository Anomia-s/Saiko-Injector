/**
 * Function: invalid_use_of_c_in_replacement_string
 * Address:  1406abe40
 * Signature: undefined invalid_use_of_c_in_replacement_string(void)
 * Body size: 1561 bytes
 */


undefined8 invalid_use_of_c_in_replacement_string(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulonglong uVar12;
  char cVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  undefined1 auStack_4f8 [43];
  char local_4cd;
  int local_4cc;
  ulonglong local_4c8;
  undefined8 local_4c0;
  char *local_4b8;
  longlong local_4b0;
  int local_4a8;
  undefined4 uStack_4a4;
  ulonglong local_4a0;
  char *local_498;
  char *local_490;
  undefined4 local_278 [2];
  char *local_270;
  char *local_268;
  char *local_260;
  undefined8 local_258;
  uint local_250;
  int local_248;
  undefined4 uStack_244;
  longlong local_240;
  int local_238 [2];
  longlong local_230 [61];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_4f8;
  pcVar6 = (char *)FUN_1406b7610(param_1,1,&local_4a8);
  pcVar7 = (char *)FUN_1406b7610(param_1,2,&local_4b0);
  uVar3 = FUN_140473550(param_1,3);
  uVar14 = (ulonglong)uVar3;
  iVar4 = FUN_1406b78a0(param_1,4,local_4a8 + 1);
  cVar13 = *pcVar7;
  if ((2 < uVar3 - 5) && (uVar3 != 3)) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s_expected_got_s(param_1,3,"string/function/table");
  }
  FUN_1406b80b0(param_1,&local_498);
  if (cVar13 == '^') {
    pcVar7 = pcVar7 + 1;
    local_4b0 = local_4b0 + -1;
  }
  local_278[0] = 200;
  local_268 = pcVar6 + CONCAT44(uStack_4a4,local_4a8);
  local_260 = pcVar7 + local_4b0;
  iVar16 = 0;
  local_4cd = cVar13;
  local_4cc = iVar4;
  local_4c8 = uVar14;
  local_4c0 = param_1;
  local_4b8 = pcVar7;
  local_270 = pcVar6;
  local_258 = param_1;
  do {
    if (iVar4 <= iVar16) break;
    local_250 = 0;
    pcVar8 = (char *)malformed_pattern_missing_arguments_to_b(local_278,pcVar6,pcVar7);
    uVar2 = local_258;
    if (pcVar8 == (char *)0x0) {
LAB_1406ac36c:
      if (local_268 <= pcVar6) break;
      if (local_490 <= local_498) {
        buffer_too_large(&local_498,1);
      }
      pcVar8 = pcVar6 + 1;
      *local_498 = *pcVar6;
      local_498 = local_498 + 1;
    }
    else {
      if ((int)uVar14 == 6) {
        if ((int)local_250 < 1) {
          lVar9 = (longlong)pcVar8 - (longlong)pcVar6;
          pcVar11 = pcVar6;
LAB_1406ac1f7:
          FUN_1404741b0(local_258,pcVar11,lVar9);
        }
        else {
          if (local_240 != -2) {
            if (local_240 == -1) {
                    /* WARNING: Subroutine does not return */
              FUN_1406b7390(local_258,"unfinished capture");
            }
            pcVar11 = (char *)CONCAT44(uStack_244,local_248);
            lVar9 = local_240;
            goto LAB_1406ac1f7;
          }
          FUN_140474150(local_258,(local_248 - (int)local_270) + 1);
        }
        FUN_140474560(uVar2,3);
LAB_1406ac314:
        iVar5 = FUN_140473af0(uVar2,0xffffffff);
        if (iVar5 == 0) {
          FUN_1404731f0(uVar2,0xfffffffe);
          FUN_1404741b0(uVar2,pcVar6,(longlong)pcVar8 - (longlong)pcVar6);
        }
        else {
          iVar5 = FUN_140473710(uVar2,0xffffffff);
          if (iVar5 == 0) {
            uVar10 = FUN_1406b7d90(uVar2,0xffffffff);
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(uVar2,"invalid replacement value (a %s)",uVar10);
          }
        }
        buffer_too_large(&local_498);
      }
      else {
        if ((int)uVar14 == 7) {
          FUN_1404734c0(local_258,3);
          uVar3 = local_250;
          if (local_250 == 0) {
            uVar3 = 1;
          }
          if (pcVar6 == (char *)0x0) {
            uVar3 = local_250;
          }
          uVar14 = (ulonglong)uVar3;
          stack_overflow_s(local_258,uVar14,"too many captures");
          if (0 < (int)uVar3) {
            if ((int)local_250 < 1) {
              FUN_1404741b0(local_258,pcVar6,(longlong)pcVar8 - (longlong)pcVar6);
            }
            else if (local_240 == -2) {
              FUN_140474150(local_258,(local_248 - (int)local_270) + 1);
            }
            else {
              if (local_240 == -1) {
LAB_1406ac416:
                    /* WARNING: Subroutine does not return */
                FUN_1406b7390(local_258,"unfinished capture");
              }
              FUN_1404741b0(local_258,CONCAT44(uStack_244,local_248));
            }
            if (uVar3 != 1) {
              uVar12 = 1;
              piVar15 = local_238;
              do {
                while( true ) {
                  if ((longlong)(int)local_250 <= (longlong)uVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_1406b7390(local_258,"invalid capture index");
                  }
                  if (*(longlong *)(piVar15 + 2) == -2) break;
                  if (*(longlong *)(piVar15 + 2) == -1) goto LAB_1406ac416;
                  FUN_1404741b0(local_258,*(undefined8 *)piVar15);
                  uVar12 = uVar12 + 1;
                  piVar15 = piVar15 + 4;
                  if (uVar14 == uVar12) goto LAB_1406ac2f0;
                }
                FUN_140474150(local_258,(*piVar15 - (int)local_270) + 1);
                uVar12 = uVar12 + 1;
                piVar15 = piVar15 + 4;
              } while (uVar14 != uVar12);
            }
          }
LAB_1406ac2f0:
          FUN_140475090(uVar2,uVar14,1);
          pcVar7 = local_4b8;
          uVar14 = local_4c8;
          cVar13 = local_4cd;
          iVar4 = local_4cc;
          goto LAB_1406ac314;
        }
        lVar9 = FUN_140473b70(local_258,3,&local_4a0);
        buffer_too_large(&local_498,local_4a0);
        uVar14 = local_4c8;
        cVar13 = local_4cd;
        if (local_4a0 != 0) {
          uVar12 = 0;
          do {
            cVar13 = *(char *)(lVar9 + uVar12);
            if (cVar13 == '%') {
              bVar1 = *(byte *)(lVar9 + 1 + uVar12);
              uVar12 = uVar12 + 1;
              uVar3 = (uint)bVar1;
              if ((byte)(bVar1 - 0x30) < 10) {
                if (uVar3 == 0x30) {
                  buffer_too_large(&local_498,pcVar6,(longlong)pcVar8 - (longlong)pcVar6);
                }
                else {
                  invalid_capture_index(local_278,uVar3 - 0x31,pcVar6,pcVar8);
                  buffer_too_large(&local_498);
                }
              }
              else {
                if (uVar3 != 0x25) {
                    /* WARNING: Subroutine does not return */
                  FUN_1406b7390(local_258,"invalid use of \'%c\' in replacement string",0x25);
                }
                cVar13 = '%';
                if (local_490 <= local_498) {
                  buffer_too_large(&local_498,1);
                  cVar13 = *(char *)(lVar9 + uVar12);
                }
                *local_498 = cVar13;
                local_498 = local_498 + 1;
              }
            }
            else {
              if (local_490 <= local_498) {
                buffer_too_large(&local_498,1);
                cVar13 = *(char *)(lVar9 + uVar12);
              }
              *local_498 = cVar13;
              local_498 = local_498 + 1;
            }
            uVar12 = uVar12 + 1;
            uVar14 = local_4c8;
            cVar13 = local_4cd;
          } while (uVar12 < local_4a0);
        }
      }
      iVar16 = iVar16 + 1;
      if (pcVar8 <= pcVar6) goto LAB_1406ac36c;
    }
    pcVar6 = pcVar8;
  } while (cVar13 != '^');
  buffer_too_large(&local_498,pcVar6,(longlong)local_268 - (longlong)pcVar6);
  FUN_1406b82d0(&local_498);
  FUN_140474150(local_4c0,iVar16);
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_4f8)) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_4f8);
}

