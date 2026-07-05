/**
 * Function: lexerpropsallowinitialspaces
 * Address:  1409cf230
 * Signature: undefined lexerpropsallowinitialspaces(void)
 * Body size: 1203 bytes
 */


void lexerpropsallowinitialspaces
               (ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_4a8 [32];
  undefined8 *local_488;
  undefined1 local_480;
  int local_46c;
  undefined8 *local_468;
  ulonglong local_460;
  ulonglong local_458;
  longlong local_450;
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_4a8;
  (**(code **)(*(longlong *)*param_5 + 0x58))((longlong *)*param_5,param_1,0xff);
  param_5[0x3f0] = param_1;
  param_5[0x3ef] = param_1;
  local_46c = FUN_140a8c980(param_5,"lexer.props.allow.initial.spaces",1);
  local_450 = param_2;
  if (param_1 < param_2 + param_1) {
    local_468 = param_5 + 1;
    lVar6 = 0;
    uVar8 = 0;
    local_460 = param_1;
    local_458 = param_2 + param_1;
    do {
      while( true ) {
        lVar1 = param_1 + lVar6;
        lVar2 = param_5[0x1f6];
        lVar10 = param_5[0x1f7];
        if (lVar1 < lVar2 || lVar10 <= lVar1) {
          lVar7 = param_1 + lVar6 + -500;
          param_5[0x1f6] = lVar7;
          lVar4 = param_1 + lVar6 + 0xdac;
          lVar10 = param_5[0x1f9];
          lVar2 = lVar10 + -4000;
          if (lVar4 <= lVar10) {
            lVar2 = lVar7;
          }
          if (lVar10 < lVar4 || lVar2 < 0) {
            if (lVar2 < 1) {
              lVar2 = 0;
            }
            param_5[0x1f6] = lVar2;
            lVar7 = lVar2;
          }
          if (lVar7 + 4000 < lVar10) {
            lVar10 = lVar7 + 4000;
          }
          param_5[0x1f7] = lVar10;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,local_468,lVar7,lVar10 - lVar7);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar2 = param_5[0x1f6];
          lVar10 = param_5[0x1f7];
        }
        cVar3 = *(char *)((longlong)param_5 + lVar6 + (param_1 - lVar2) + 8);
        local_448[uVar8] = cVar3;
        if ((lVar1 < lVar2) || (lVar10 <= lVar1)) {
          lVar7 = param_1 + lVar6 + -500;
          param_5[0x1f6] = lVar7;
          lVar4 = param_1 + lVar6 + 0xdac;
          lVar10 = param_5[0x1f9];
          lVar2 = lVar10 + -4000;
          if (lVar4 <= lVar10) {
            lVar2 = lVar7;
          }
          if (lVar10 < lVar4 || lVar2 < 0) {
            if (lVar2 < 1) {
              lVar2 = 0;
            }
            param_5[0x1f6] = lVar2;
            lVar7 = lVar2;
          }
          if (lVar7 + 4000 < lVar10) {
            lVar10 = lVar7 + 4000;
          }
          param_5[0x1f7] = lVar10;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,local_468,lVar7,lVar10 - lVar7);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar2 = param_5[0x1f6];
          cVar3 = *(char *)((longlong)param_5 + lVar6 + (param_1 - lVar2) + 8);
        }
        uVar9 = uVar8 + 1;
        if (cVar3 == '\n') break;
        if ((lVar1 < lVar2) || ((longlong)param_5[0x1f7] <= lVar1)) {
          lVar7 = param_1 + lVar6 + -500;
          param_5[0x1f6] = lVar7;
          lVar4 = param_1 + lVar6 + 0xdac;
          lVar10 = param_5[0x1f9];
          lVar2 = lVar10 + -4000;
          if (lVar4 <= lVar10) {
            lVar2 = lVar7;
          }
          if (lVar10 < lVar4 || lVar2 < 0) {
            if (lVar2 < 1) {
              lVar2 = 0;
            }
            param_5[0x1f6] = lVar2;
            lVar7 = lVar2;
          }
          if (lVar7 + 4000 < lVar10) {
            lVar10 = lVar7 + 4000;
          }
          param_5[0x1f7] = lVar10;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,local_468,lVar7,lVar10 - lVar7);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar2 = param_5[0x1f6];
          if (*(char *)((longlong)param_5 + lVar6 + (param_1 - lVar2) + 8) == '\r')
          goto LAB_1409cf4c7;
LAB_1409cf659:
          if (0x3fe < uVar9) break;
        }
        else {
          if (cVar3 != '\r') goto LAB_1409cf659;
LAB_1409cf4c7:
          lVar10 = param_1 + lVar6 + 1;
          if ((lVar10 < lVar2) || ((longlong)param_5[0x1f7] <= lVar10)) {
            lVar4 = param_1 + lVar6 + -499;
            param_5[0x1f6] = lVar4;
            lVar5 = param_1 + lVar6 + 0xdad;
            lVar2 = param_5[0x1f9];
            lVar7 = lVar2 + -4000;
            if (lVar5 <= lVar2) {
              lVar7 = lVar4;
            }
            if (lVar2 < lVar5 || lVar7 < 0) {
              if (lVar7 < 1) {
                lVar7 = 0;
              }
              param_5[0x1f6] = lVar7;
              lVar4 = lVar7;
            }
            if (lVar4 + 4000 < lVar2) {
              lVar2 = lVar4 + 4000;
            }
            param_5[0x1f7] = lVar2;
            (**(code **)(*(longlong *)*param_5 + 0x18))
                      ((longlong *)*param_5,local_468,lVar4,lVar2 - lVar4);
            *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
            lVar2 = param_5[0x1f6];
            if ((lVar10 < lVar2) || ((longlong)param_5[0x1f7] <= lVar10)) break;
          }
          if (0x3fe < uVar9 || *(char *)((longlong)param_5 + lVar6 + (param_1 - lVar2) + 9) != '\n')
          break;
        }
        lVar6 = lVar6 + 1;
        uVar8 = uVar9;
        if (local_450 == lVar6) goto LAB_1409cf67e;
      }
      local_448[uVar8 + 1] = '\0';
      local_480 = local_46c != 0;
      local_488 = param_5;
      FUN_1409cf700(local_448,uVar9,local_460,lVar1);
      local_460 = param_1 + lVar6 + 1;
      uVar8 = 0;
      lVar6 = lVar6 + 1;
    } while (local_450 != lVar6);
LAB_1409cf67e:
    if (uVar8 != 0) {
      local_480 = local_46c != 0;
      local_488 = param_5;
      FUN_1409cf700(local_448,uVar8,local_460,local_458 - 1);
    }
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_4a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_4a8);
  }
  return;
}

