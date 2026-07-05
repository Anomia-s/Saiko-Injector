/**
 * Function: initial_position_is_a_continuation_byte
 * Address:  1406b1350
 * Signature: undefined initial_position_is_a_continuation_byte(void)
 * Body size: 489 bytes
 */


undefined8 initial_position_is_a_continuation_byte(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_68 [40];
  uint local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  lVar4 = FUN_1406b7610(param_1,1,&local_40);
  uVar2 = FUN_1406b7830(param_1,2);
  uVar7 = CONCAT44(uStack_3c,local_40);
  iVar10 = local_40 + 1;
  iVar8 = 1;
  if ((int)uVar2 < 0) {
    iVar8 = iVar10;
  }
  uVar3 = FUN_1406b78a0(param_1,3,iVar8);
  if ((int)uVar3 < 0) {
    if (uVar7 < (ulonglong)-(longlong)(int)uVar3) goto LAB_1406b150e;
    uVar3 = iVar10 + uVar3;
  }
  if ((int)uVar3 < 1) {
LAB_1406b150e:
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,3,"position out of range");
  }
  uVar6 = uVar3 - 1;
  uVar7 = (ulonglong)uVar6;
  if ((int)local_40 < (int)uVar6) goto LAB_1406b150e;
  if (uVar2 == 0) {
    if (uVar3 != 1) {
      do {
        uVar6 = uVar3 - 1;
        if (-0x41 < *(char *)(lVar4 + (ulonglong)uVar6)) goto LAB_1406b14d5;
        uVar3 = uVar3 - 1;
      } while (1 < (int)uVar3);
    }
    uVar6 = 0;
  }
  else {
    if (*(char *)(lVar4 + (ulonglong)uVar6) < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"initial position is a continuation byte");
    }
    if ((int)uVar2 < 0) {
      if (uVar6 != 0) {
        do {
          uVar7 = uVar7 & 0xffffffff;
          do {
            if (uVar7 < 2) {
              uVar7 = 0;
              uVar9 = uVar2 + 1;
              if ((int)uVar2 < -1) goto LAB_1406b14ba;
              goto LAB_1406b14c0;
            }
            uVar7 = uVar7 - 1;
          } while (*(char *)(lVar4 + (uVar7 & 0xffffffff)) < -0x40);
          uVar9 = uVar2 + 1;
          if (-2 < (int)uVar2) break;
LAB_1406b14ba:
          uVar9 = uVar2 + 1;
          uVar2 = uVar9;
        } while ((int)uVar7 != 0);
LAB_1406b14c0:
        uVar6 = (uint)uVar7;
        goto joined_r0x0001406b14c2;
      }
LAB_1406b14c4:
      FUN_140474110(param_1);
      goto LAB_1406b14df;
    }
    uVar9 = uVar2 - 1;
    if (uVar2 != 1) {
      if (uVar3 <= local_40) {
        uVar2 = uVar9;
        do {
          pcVar5 = (char *)(uVar7 + lVar4 + 1);
          do {
            uVar3 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar3;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 < -0x40);
          uVar9 = uVar2 - 1;
        } while ((1 < uVar2) && (uVar2 = uVar9, (int)uVar3 < (int)local_40));
        goto LAB_1406b14c0;
      }
joined_r0x0001406b14c2:
      if (uVar9 != 0) goto LAB_1406b14c4;
    }
  }
LAB_1406b14d5:
  FUN_140474150(param_1,uVar6 + 1);
LAB_1406b14df:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_68)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_68);
}

