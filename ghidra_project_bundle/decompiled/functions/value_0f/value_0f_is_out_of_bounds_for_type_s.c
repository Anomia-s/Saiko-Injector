/**
 * Function: value_0f_is_out_of_bounds_for_type_s
 * Address:  1407594c0
 * Signature: undefined value_0f_is_out_of_bounds_for_type_s(void)
 * Body size: 1397 bytes
 */


undefined8 value_0f_is_out_of_bounds_for_type_s(undefined8 *param_1,double param_2)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  char *pcVar5;
  double dVar6;
  ulonglong uVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  
  lVar2 = (longlong)*(short *)(param_1 + 0x101);
  lVar8 = param_1[lVar2 * 8 + 2];
  lVar10 = (longlong)*(short *)((longlong)param_1 + lVar2 * 0x40 + 0x1a) * 0x38;
  pdVar3 = (double *)missing_ensure_element_for_opaque_type_s(*param_1,param_1 + lVar2 * 8 + 1);
  uVar1 = *(uint *)(lVar8 + lVar10);
  uVar4 = 0;
  if (0x1e < uVar1) {
    return 0;
  }
  lVar8 = lVar8 + lVar10;
  switch(uVar1) {
  default:
switchD_140759524_caseD_0:
    unsupported_conversion_from_s_to_s_for_s(param_1,lVar8,"float");
    goto LAB_1407598e6;
  case 9:
    lVar2 = FUN_1400ba4f0(*param_1,*(undefined8 *)(lVar8 + 0x20),0x16c);
    if (*(code **)(lVar2 + 0x40) != (code *)0x0) {
      (**(code **)(lVar2 + 0x40))(pdVar3,param_2);
      return 0;
    }
    if ((9.223372036854776e+18 < ABS(param_2)) ||
       (pcVar9 = *(code **)(lVar2 + 0x30), pcVar9 == (code *)0x0)) {
      if ((param_2 < 0.0) || (pcVar9 = *(code **)(lVar2 + 0x38), pcVar9 == (code *)0x0)) {
        if ((0.0 <= param_2) && (*(code **)(lVar2 + 0x50) != (code *)0x0)) {
          (**(code **)(lVar2 + 0x50))
                    (pdVar3,*param_1,
                     (longlong)(param_2 - 9.223372036854776e+18) & (longlong)param_2 >> 0x3f |
                     (longlong)param_2);
          return 0;
        }
        goto switchD_140759524_caseD_0;
      }
      uVar7 = (longlong)(param_2 - 9.223372036854776e+18) & (longlong)param_2 >> 0x3f |
              (longlong)param_2;
    }
    else {
      uVar7 = (ulonglong)param_2;
    }
    (*pcVar9)(pdVar3,uVar7);
    uVar4 = 0;
    break;
  case 10:
    switch(*(undefined4 *)(lVar8 + 4)) {
    case 0x10:
      if ((0.0 <= param_2) && (param_2 <= 255.0)) goto LAB_140759794;
      pcVar5 = "U8";
      break;
    case 0x11:
      if ((0.0 <= param_2) && (param_2 <= 65535.0)) goto LAB_140759717;
      pcVar5 = "U16";
      break;
    case 0x12:
      if ((0.0 <= param_2) && (param_2 <= 4294967295.0)) goto LAB_1407597ea;
      pcVar5 = "U32";
      break;
    case 0x13:
      if ((0.0 <= param_2) && (param_2 <= 1.8446744073709552e+19)) goto LAB_140759839;
      pcVar5 = "U64";
      break;
    case 0x14:
      goto switchD_140759524_caseD_14;
    case 0x15:
      goto switchD_140759524_caseD_15;
    case 0x16:
      goto switchD_140759524_caseD_16;
    case 0x17:
      goto switchD_140759524_caseD_17;
    default:
      goto switchD_1407596d1_caseD_18;
    case 0x1a:
      if ((0.0 <= param_2) && (param_2 <= 1.8446744073709552e+19)) goto LAB_140759839;
      pcVar5 = "UPtr";
      break;
    case 0x1b:
      goto switchD_140759524_caseD_1b;
    }
    goto LAB_140759882;
  case 0xb:
    if ((0.0 <= param_2) && (param_2 <= 4294967295.0)) goto LAB_1407597ea;
    pcVar5 = "Bitmask";
LAB_1407598bd:
    uVar4 = 0x4a0;
    goto LAB_1407598e1;
  case 0xd:
    if (param_2 == 0.0) {
      *(undefined1 *)pdVar3 = 0;
    }
    else {
      *(undefined1 *)pdVar3 = 1;
    }
    break;
  case 0xe:
    if ((param_2 < -128.0) || (127.0 < param_2)) {
      pcVar5 = "Char";
      goto LAB_140759882;
    }
    goto LAB_140759794;
  case 0xf:
    if ((param_2 < 0.0) || (255.0 < param_2)) {
      pcVar5 = "Byte";
      goto LAB_1407598bd;
    }
    goto LAB_140759794;
  case 0x10:
    if ((param_2 < 0.0) || (255.0 < param_2)) {
      pcVar5 = "U8";
      goto LAB_1407598bd;
    }
LAB_140759794:
    *(char *)pdVar3 = (char)(int)param_2;
    break;
  case 0x11:
    if ((param_2 < 0.0) || (65535.0 < param_2)) {
      pcVar5 = "U16";
      goto LAB_1407598bd;
    }
LAB_140759717:
    *(short *)pdVar3 = (short)(int)param_2;
    break;
  case 0x12:
    if ((param_2 < 0.0) || (4294967295.0 < param_2)) {
      pcVar5 = "U32";
      goto LAB_1407598bd;
    }
LAB_1407597ea:
    *(float *)pdVar3 = (float)(longlong)param_2;
    break;
  case 0x13:
    if ((param_2 < 0.0) || (1.8446744073709552e+19 < param_2)) {
      pcVar5 = "U64";
      goto LAB_1407598bd;
    }
    goto LAB_140759839;
  case 0x14:
switchD_140759524_caseD_14:
    if ((-128.0 <= param_2) && (param_2 <= 127.0)) goto LAB_140759794;
    pcVar5 = "I8";
    goto LAB_140759882;
  case 0x15:
switchD_140759524_caseD_15:
    if ((-32768.0 <= param_2) && (param_2 <= 32767.0)) goto LAB_140759717;
    pcVar5 = "I16";
    goto LAB_140759882;
  case 0x16:
switchD_140759524_caseD_16:
    if ((-2147483648.0 <= param_2) && (param_2 <= 2147483647.0)) {
      *(int *)pdVar3 = (int)param_2;
      return 0;
    }
    pcVar5 = "I32";
LAB_140759882:
    uVar4 = 0x49f;
LAB_1407598e1:
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,uVar4,"value %.0f is out of bounds for type %s",param_2,pcVar5);
LAB_1407598e6:
    uVar4 = 0xffffffff;
    break;
  case 0x17:
switchD_140759524_caseD_17:
    if (9.223372036854776e+18 < ABS(param_2)) {
      pcVar5 = "I64";
      goto LAB_140759882;
    }
    goto LAB_1407597c1;
  case 0x18:
    *(float *)pdVar3 = (float)param_2;
    break;
  case 0x19:
    *pdVar3 = param_2;
    break;
  case 0x1a:
    if ((param_2 < 0.0) || (1.8446744073709552e+19 < param_2)) {
      pcVar5 = "UPtr";
      goto LAB_1407598bd;
    }
    goto LAB_140759839;
  case 0x1b:
switchD_140759524_caseD_1b:
    if (9.223372036854776e+18 < ABS(param_2)) {
      pcVar5 = "IPtr";
      goto LAB_140759882;
    }
LAB_1407597c1:
    *pdVar3 = (double)(longlong)param_2;
    break;
  case 0x1c:
    dVar6 = (double)FUN_1403d2690(&DAT_14134951f,param_2);
    (*DAT_1415033b0)(*pdVar3);
    uVar4 = 0;
    *pdVar3 = dVar6;
    break;
  case 0x1d:
    if ((param_2 < 0.0) || (1.8446744073709552e+19 < param_2)) {
      pcVar5 = "Entity";
      goto LAB_1407598bd;
    }
    goto LAB_140759839;
  case 0x1e:
    if ((param_2 < 0.0) || (1.8446744073709552e+19 < param_2)) {
      pcVar5 = "Id";
      goto LAB_1407598bd;
    }
LAB_140759839:
    *pdVar3 = (double)((longlong)(param_2 - 9.223372036854776e+18) & (longlong)param_2 >> 0x3f |
                      (longlong)param_2);
    uVar4 = 0;
  }
switchD_1407596d1_caseD_18:
  return uVar4;
}

