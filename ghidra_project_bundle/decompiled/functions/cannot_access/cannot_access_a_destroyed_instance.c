/**
 * Function: cannot_access_a_destroyed_instance
 * Address:  14047a570
 * Signature: undefined cannot_access_a_destroyed_instance(void)
 * Body size: 1055 bytes
 */


undefined8 cannot_access_a_destroyed_instance(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  char *_Str1;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  byte bVar19;
  undefined1 uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined1 auStack_c8 [38];
  undefined2 local_a2;
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  iVar12 = FUN_140473f10(param_1,1);
  if (iVar12 != 3) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s_expected_got_s(param_1,1,"Instance (UI)");
  }
  puVar14 = (undefined4 *)FUN_140473e90(param_1,1);
  FUN_1406b76d0(param_1,2,6);
  dVar3 = (double)FUN_1406b7730(param_1,3);
  iVar12 = FUN_140473710(param_1,4);
  uVar20 = 0;
  if ((iVar12 != 0) && (_Str1 = (char *)FUN_140473b70(param_1,4,0), _Str1 != (char *)0x0)) {
    iVar12 = strcmp(_Str1,"quad");
    if (iVar12 == 0) {
      uVar20 = 1;
    }
    else {
      iVar12 = strcmp(_Str1,"cubic");
      if (iVar12 == 0) {
        uVar20 = 2;
      }
      else {
        iVar12 = strcmp(_Str1,"sine");
        if (iVar12 == 0) {
          uVar20 = 3;
        }
        else {
          iVar12 = strcmp(_Str1,"exponential");
          if (iVar12 == 0) {
            uVar20 = 4;
          }
          else {
            iVar12 = strcmp(_Str1,"back");
            if (iVar12 == 0) {
              uVar20 = 5;
            }
            else {
              iVar12 = strcmp(_Str1,"bounce");
              if (iVar12 == 0) {
                uVar20 = 6;
              }
              else {
                iVar12 = strcmp(_Str1,"elastic");
                uVar20 = 7;
                if (iVar12 != 0) {
                  uVar20 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar12 = FUN_140473550(param_1,5);
  uVar13 = 0xffffffff;
  if (iVar12 == 7) {
    uVar13 = FUN_140475670(param_1,5);
  }
  uVar1 = *(undefined8 *)(puVar14 + 2);
  cVar11 = FUN_14005c3c0(uVar1,*puVar14);
  if (cVar11 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"Cannot access a destroyed Instance");
  }
  local_a2 = *(undefined2 *)puVar14;
  lVar15 = FUN_14005cc90(uVar1);
  FUN_140474110(param_1);
  iVar12 = FUN_140475390(param_1,2);
  if (iVar12 != 0) {
    do {
      lVar16 = FUN_140473b70(param_1,0xfffffffe,0);
      if ((lVar16 == 0) || (lVar16 = FUN_1406da020(lVar16), lVar16 == 0)) {
LAB_14047a740:
        FUN_1404731f0(param_1,0xfffffffe);
      }
      else {
        bVar19 = *(byte *)(lVar15 + 0x180);
        if (bVar19 != 0) {
          lVar21 = 0;
          do {
            if (*(char *)(lVar15 + lVar21) == *(char *)(lVar16 + 8)) {
              if (*(int *)(lVar15 + 0x2c + lVar21) != -1) {
                FUN_140475770(param_1);
                bVar19 = *(byte *)(lVar15 + 0x180);
              }
              puVar22 = (undefined4 *)(lVar21 + lVar15);
              uVar18 = (ulonglong)((uint)bVar19 * 0x30);
              puVar14 = (undefined4 *)((uVar18 - 0x30) + lVar15);
              uVar4 = *puVar14;
              uVar5 = puVar14[1];
              uVar6 = puVar14[2];
              uVar7 = puVar14[3];
              puVar17 = (undefined8 *)((uVar18 - 0x20) + lVar15);
              uVar8 = *puVar17;
              uVar9 = puVar17[1];
              puVar17 = (undefined8 *)((uVar18 - 0x10) + lVar15);
              uVar10 = puVar17[1];
              *(undefined8 *)(puVar22 + 8) = *puVar17;
              *(undefined8 *)(puVar22 + 10) = uVar10;
              *(undefined8 *)(puVar22 + 4) = uVar8;
              *(undefined8 *)(puVar22 + 6) = uVar9;
              *puVar22 = uVar4;
              puVar22[1] = uVar5;
              puVar22[2] = uVar6;
              puVar22[3] = uVar7;
              bVar19 = *(char *)(lVar15 + 0x180) - 1;
              *(byte *)(lVar15 + 0x180) = bVar19;
              break;
            }
            lVar21 = lVar21 + 0x30;
          } while ((ulonglong)bVar19 * 0x30 != lVar21);
          if (7 < bVar19) goto LAB_14047a740;
        }
        uStack_8c = 0;
        uStack_84 = 0;
        uStack_9c = 0;
        uStack_94 = 0;
        local_a0 = CONCAT22(CONCAT11(local_a0._3_1_,*(undefined1 *)(lVar16 + 9)),
                            CONCAT11(uVar20,*(undefined1 *)(lVar16 + 8)));
        local_7c = (ulonglong)(uint)(float)dVar3;
        local_74 = uVar13;
        FUN_14005da80(uVar1,local_a2,*(undefined1 *)(lVar16 + 8),&uStack_9c);
        if (*(char *)(lVar16 + 9) == '\x01') {
          dVar2 = (double)FUN_1406b7730(param_1,0xffffffff);
          uStack_8c = CONCAT44(uStack_8c._4_4_,(float)dVar2);
        }
        else {
          puVar17 = (undefined8 *)FUN_1406b7990(param_1,0xffffffff);
          uStack_8c = *puVar17;
          uStack_84 = CONCAT44(uStack_84._4_4_,*(undefined4 *)(puVar17 + 1));
        }
        bVar19 = *(byte *)(lVar15 + 0x180);
        *(byte *)(lVar15 + 0x180) = bVar19 + 1;
        uVar18 = (ulonglong)((uint)bVar19 * 0x30);
        puVar14 = (undefined4 *)(lVar15 + 0x20 + uVar18);
        *puVar14 = uStack_84._4_4_;
        puVar14[1] = (undefined4)local_7c;
        puVar14[2] = local_7c._4_4_;
        puVar14[3] = local_74;
        puVar14 = (undefined4 *)(lVar15 + 0x10 + uVar18);
        *puVar14 = uStack_94._4_4_;
        puVar14[1] = (undefined4)uStack_8c;
        puVar14[2] = uStack_8c._4_4_;
        puVar14[3] = (undefined4)uStack_84;
        puVar14 = (undefined4 *)(lVar15 + uVar18);
        *puVar14 = local_a0;
        puVar14[1] = (undefined4)uStack_9c;
        puVar14[2] = uStack_9c._4_4_;
        puVar14[3] = (undefined4)uStack_94;
        FUN_1404731f0(param_1,0xfffffffe);
        uVar13 = 0xffffffff;
      }
      iVar12 = FUN_140475390(param_1,2);
    } while (iVar12 != 0);
  }
  if (DAT_1414ef3c0 != (local_70 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_70 ^ (ulonglong)auStack_c8);
  }
  return 0;
}

