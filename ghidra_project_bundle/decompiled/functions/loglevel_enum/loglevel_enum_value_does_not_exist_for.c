/**
 * Function: loglevel_enum_value_does_not_exist_for
 * Address:  14003aed0
 * Signature: ulonglong __fastcall loglevel_enum_value_does_not_exist_for(longlong * param_1)
 * Body size: 760 bytes
 */


ulonglong loglevel_enum_value_does_not_exist_for(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  QuillError_vftable *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = param_1[2];
  plVar5 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    plVar5 = (longlong *)*param_1;
  }
  uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
  if (lVar1 == 0) {
LAB_14003af98:
    cVar3 = FUN_140035950(param_1,"debug");
    uVar8 = CONCAT71(uVar9,3);
    if (cVar3 == '\0') {
      cVar3 = FUN_140035950(param_1,"info");
      uVar8 = CONCAT71(uVar9,4);
      if (cVar3 == '\0') {
        cVar3 = FUN_140035950(param_1,"notice");
        uVar8 = CONCAT71(uVar9,5);
        if (cVar3 == '\0') {
          cVar3 = FUN_140035950(param_1,"warning");
          uVar8 = CONCAT71(uVar9,6);
          if (cVar3 == '\0') {
            cVar3 = FUN_140035950(param_1,"error");
            uVar8 = CONCAT71(uVar9,7);
            if (cVar3 == '\0') {
              cVar3 = FUN_140035950(param_1,"critical");
              uVar8 = CONCAT71(uVar9,8);
              if (cVar3 == '\0') {
                cVar3 = FUN_140035950(param_1,"backtrace");
                uVar8 = CONCAT71(uVar9,9);
                if (cVar3 == '\0') {
                  cVar3 = FUN_140035950(param_1,"none");
                  uVar8 = CONCAT71(uVar9,10);
                  if (cVar3 == '\0') {
                    local_40 = param_1;
                    FUN_1400119b0(local_80,"LogLevel enum value does not exist for \"",param_1);
                    FUN_140008840(local_a0,local_80,&DAT_14139efde);
                    FUN_140004b30(local_80);
                    FUN_14000f430(local_60,local_a0);
                    local_d0 = 0;
                    uStack_c8 = 0;
                    local_d8 = &quill::v11::QuillError::vftable;
                    uStack_b8 = uStack_58;
                    local_b0 = local_50;
                    uStack_a8 = uStack_48;
                    local_50 = 0;
                    uStack_48 = 0xf;
                    local_60[0] = 0;
                    /* WARNING: Subroutine does not return */
                    _CxxThrowException(&local_d8,(ThrowInfo *)&DAT_14140fa50);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar7 = 0;
    do {
      iVar4 = tolower((uint)*(byte *)((longlong)plVar5 + lVar7));
      *(char *)((longlong)plVar5 + lVar7) = (char)iVar4;
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    if (param_1[2] != 8) {
      if (param_1[2] == 7) {
        if (*(int *)((longlong)plVar5 + 3) == 0x336c6563 && (int)*plVar5 == 0x63617274)
        goto LAB_14003b12f;
        if (*(int *)((longlong)plVar5 + 3) == 0x326c6563 && (int)*plVar5 == 0x63617274) {
          uVar8 = CONCAT71(uVar9,1);
          uVar2 = param_1[3];
          goto joined_r0x00014003b148;
        }
        if (*(int *)((longlong)plVar5 + 3) == 0x316c6563 && (int)*plVar5 == 0x63617274)
        goto LAB_14003b120;
      }
      goto LAB_14003af98;
    }
    if (*plVar5 == 0x336c5f6563617274) {
LAB_14003b12f:
      uVar8 = 0;
      uVar2 = param_1[3];
      goto joined_r0x00014003b148;
    }
    if (*plVar5 != 0x326c5f6563617274) {
      if (*plVar5 == 0x316c5f6563617274) {
LAB_14003b120:
        uVar8 = CONCAT71(uVar9,2);
        uVar2 = param_1[3];
        goto joined_r0x00014003b148;
      }
      goto LAB_14003af98;
    }
    uVar8 = CONCAT71(uVar9,1);
  }
  uVar2 = param_1[3];
joined_r0x00014003b148:
  if (0xf < uVar2) {
    lVar1 = *param_1;
    uVar6 = uVar2 + 1;
    lVar7 = lVar1;
    if (0xfff < uVar6) {
      lVar7 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar7)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar6 = uVar2 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar7,uVar6);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return uVar8 & 0xffffffff;
}

