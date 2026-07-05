/**
 * Function: lexererrorlistescapesequences
 * Address:  140938d60
 * Signature: undefined lexererrorlistescapesequences(void)
 * Body size: 1182 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void lexererrorlistescapesequences
               (ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_27a8 [32];
  undefined1 local_2788;
  undefined1 local_2780;
  int local_2770;
  int local_276c;
  ulonglong local_2768;
  longlong local_2760;
  char local_2758 [10000];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_27a8;
  (**(code **)(*(longlong *)*param_5 + 0x58))((longlong *)*param_5,param_1,0xff);
  param_5[0x3f0] = param_1;
  param_5[0x3ef] = param_1;
  local_276c = FUN_140a8c980(param_5,"lexer.errorlist.value.separate",0);
  local_2770 = FUN_140a8c980(param_5,"lexer.errorlist.escape.sequences",0);
  local_2760 = param_2;
  if (param_1 < param_2 + param_1) {
    puVar1 = param_5 + 1;
    lVar11 = 0;
    uVar9 = 0;
    local_2768 = param_2 + param_1;
    do {
      lVar2 = param_1 + lVar11;
      lVar3 = param_5[0x1f6];
      lVar7 = param_5[0x1f7];
      if (lVar2 < lVar3 || lVar7 <= lVar2) {
        lVar8 = param_1 + lVar11 + -500;
        param_5[0x1f6] = lVar8;
        lVar5 = param_1 + lVar11 + 0xdac;
        lVar7 = param_5[0x1f9];
        lVar3 = lVar7 + -4000;
        if (lVar5 <= lVar7) {
          lVar3 = lVar8;
        }
        if (lVar7 < lVar5 || lVar3 < 0) {
          if (lVar3 < 1) {
            lVar3 = 0;
          }
          param_5[0x1f6] = lVar3;
          lVar8 = lVar3;
        }
        if (lVar8 + 4000 < lVar7) {
          lVar7 = lVar8 + 4000;
        }
        param_5[0x1f7] = lVar7;
        (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,puVar1,lVar8,lVar7 - lVar8)
        ;
        *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
        lVar3 = param_5[0x1f6];
        lVar7 = param_5[0x1f7];
      }
      cVar4 = *(char *)((longlong)param_5 + lVar11 + (param_1 - lVar3) + 8);
      local_2758[uVar9] = cVar4;
      if ((lVar2 < lVar3) || (lVar7 <= lVar2)) {
        lVar8 = param_1 + lVar11 + -500;
        param_5[0x1f6] = lVar8;
        lVar5 = param_1 + lVar11 + 0xdac;
        lVar7 = param_5[0x1f9];
        lVar3 = lVar7 + -4000;
        if (lVar5 <= lVar7) {
          lVar3 = lVar8;
        }
        if (lVar7 < lVar5 || lVar3 < 0) {
          if (lVar3 < 1) {
            lVar3 = 0;
          }
          param_5[0x1f6] = lVar3;
          lVar8 = lVar3;
        }
        if (lVar8 + 4000 < lVar7) {
          lVar7 = lVar8 + 4000;
        }
        param_5[0x1f7] = lVar7;
        (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,puVar1,lVar8,lVar7 - lVar8)
        ;
        *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
        lVar3 = param_5[0x1f6];
        cVar4 = *(char *)((longlong)param_5 + lVar11 + (param_1 - lVar3) + 8);
      }
      uVar10 = uVar9 + 1;
      if (cVar4 == '\n') {
LAB_140938e10:
        local_2758[uVar9 + 1] = '\0';
        local_2780 = local_2770 != 0;
        local_2788 = local_276c != 0;
        in_file_included_from(local_2758,uVar10,lVar2,param_5);
        uVar10 = 0;
      }
      else {
        if ((lVar2 < lVar3) || ((longlong)param_5[0x1f7] <= lVar2)) {
          lVar8 = param_1 + lVar11 + -500;
          param_5[0x1f6] = lVar8;
          lVar5 = param_1 + lVar11 + 0xdac;
          lVar7 = param_5[0x1f9];
          lVar3 = lVar7 + -4000;
          if (lVar5 <= lVar7) {
            lVar3 = lVar8;
          }
          if (lVar7 < lVar5 || lVar3 < 0) {
            if (lVar3 < 1) {
              lVar3 = 0;
            }
            param_5[0x1f6] = lVar3;
            lVar8 = lVar3;
          }
          if (lVar8 + 4000 < lVar7) {
            lVar7 = lVar8 + 4000;
          }
          param_5[0x1f7] = lVar7;
          (**(code **)(*(longlong *)*param_5 + 0x18))
                    ((longlong *)*param_5,puVar1,lVar8,lVar7 - lVar8);
          *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
          lVar3 = param_5[0x1f6];
          if (*(char *)((longlong)param_5 + lVar11 + (param_1 - lVar3) + 8) == '\r')
          goto LAB_140938ff9;
LAB_140939178:
          bVar12 = false;
        }
        else {
          if (cVar4 != '\r') goto LAB_140939178;
LAB_140938ff9:
          lVar7 = param_1 + lVar11 + 1;
          if ((lVar7 < lVar3) || ((longlong)param_5[0x1f7] <= lVar7)) {
            lVar5 = param_1 + lVar11 + -499;
            param_5[0x1f6] = lVar5;
            lVar6 = param_1 + lVar11 + 0xdad;
            lVar3 = param_5[0x1f9];
            lVar8 = lVar3 + -4000;
            if (lVar6 <= lVar3) {
              lVar8 = lVar5;
            }
            if (lVar3 < lVar6 || lVar8 < 0) {
              if (lVar8 < 1) {
                lVar8 = 0;
              }
              param_5[0x1f6] = lVar8;
              lVar5 = lVar8;
            }
            if (lVar5 + 4000 < lVar3) {
              lVar3 = lVar5 + 4000;
            }
            param_5[0x1f7] = lVar3;
            (**(code **)(*(longlong *)*param_5 + 0x18))
                      ((longlong *)*param_5,puVar1,lVar5,lVar3 - lVar5);
            *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
            lVar3 = param_5[0x1f6];
            if ((lVar7 < lVar3) || ((longlong)param_5[0x1f7] <= lVar7)) goto LAB_140938e10;
          }
          bVar12 = *(char *)((longlong)param_5 + lVar11 + (param_1 - lVar3) + 9) != '\n';
        }
        if ((bool)(0x270e < uVar10 | bVar12)) goto LAB_140938e10;
      }
      lVar11 = lVar11 + 1;
      uVar9 = uVar10;
    } while (local_2760 != lVar11);
    if (uVar10 != 0) {
      local_2758[uVar10] = '\0';
      local_2780 = local_2770 != 0;
      local_2788 = local_276c != 0;
      in_file_included_from(local_2758,uVar10,local_2768 - 1,param_5);
    }
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_27a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_27a8);
  }
  return;
}

