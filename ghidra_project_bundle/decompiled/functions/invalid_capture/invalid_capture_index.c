/**
 * Function: invalid_capture_index
 * Address:  1406af190
 * Signature: undefined invalid_capture_index(void)
 * Body size: 603 bytes
 */


uint invalid_capture_index(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined1 auStack_2a8 [40];
  longlong local_280;
  ulonglong local_278;
  undefined4 local_270 [2];
  longlong local_268;
  ulonglong local_260;
  longlong local_258;
  undefined8 local_250;
  uint local_248;
  int local_240;
  undefined4 uStack_23c;
  longlong local_238;
  int local_230 [2];
  longlong local_228 [61];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_2a8;
  lVar2 = FUN_140473b70(param_1,0xffffd8ed,&local_278);
  lVar3 = FUN_140473b70(param_1,0xffffd8ec,&local_280);
  local_270[0] = 200;
  local_260 = lVar2 + local_278;
  local_258 = local_280 + lVar3;
  local_268 = lVar2;
  local_250 = param_1;
  iVar1 = FUN_140473950(param_1,0xffffd8eb,0);
  uVar6 = 0;
  if ((ulonglong)(longlong)iVar1 <= local_278) {
    uVar7 = iVar1 + lVar2;
    uVar8 = uVar7;
    do {
      local_248 = 0;
      uVar4 = malformed_pattern_missing_arguments_to_b(local_270,uVar7,lVar3);
      if (uVar4 != 0) {
        FUN_140474150(param_1,(uint)(uVar7 == uVar4) + ((int)uVar4 - (int)lVar2));
        FUN_1404733a0(param_1,0xffffd8eb);
        uVar6 = local_248;
        uVar5 = 1;
        if (local_248 != 0) {
          uVar5 = local_248;
        }
        if (uVar7 == 0) {
          uVar5 = local_248;
        }
        stack_overflow_s(local_250,uVar5,"too many captures");
        if (0 < (int)uVar5) {
          if ((int)local_248 < 1) {
            local_238 = uVar4 - uVar8;
LAB_1406af2f9:
            FUN_1404741b0(local_250,uVar7,local_238);
          }
          else {
            if (local_238 != -2) {
              if (local_238 != -1) {
                uVar7 = CONCAT44(uStack_23c,local_240);
                goto LAB_1406af2f9;
              }
              goto LAB_1406af3d1;
            }
            FUN_140474150(local_250,(local_240 - (int)local_268) + 1);
          }
          uVar6 = 1;
          if (uVar5 != 1) {
            uVar7 = 1;
            piVar9 = local_230;
            do {
              if ((longlong)(int)local_248 <= (longlong)uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_1406b7390(local_250,"invalid capture index");
              }
              if (*(longlong *)(piVar9 + 2) == -2) {
                FUN_140474150(local_250,(*piVar9 - (int)local_268) + 1);
              }
              else {
                if (*(longlong *)(piVar9 + 2) == -1) {
LAB_1406af3d1:
                    /* WARNING: Subroutine does not return */
                  FUN_1406b7390(local_250,"unfinished capture");
                }
                FUN_1404741b0(local_250,*(undefined8 *)piVar9);
              }
              piVar9 = piVar9 + 4;
              uVar7 = uVar7 + 1;
              uVar6 = uVar5;
            } while (uVar5 != uVar7);
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar8 + 1;
      uVar6 = 0;
    } while (uVar7 <= local_260);
  }
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_2a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_2a8);
  }
  return uVar6;
}

