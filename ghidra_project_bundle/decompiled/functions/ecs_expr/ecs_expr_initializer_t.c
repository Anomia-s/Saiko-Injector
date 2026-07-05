/**
 * Function: ecs_expr_initializer_t
 * Address:  1405f4f10
 * Signature: undefined ecs_expr_initializer_t(void)
 * Body size: 874 bytes
 */


void ecs_expr_initializer_t(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  Decoration<__int64> *pDVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  
  if ((param_2 == (uint *)0x0) || (0x11 < *param_2)) {
    return;
  }
  puVar1 = param_1 + 3;
  uVar5 = 0x40;
  switch(*param_2) {
  case 0:
    pcVar8 = "ecs_expr_value_node_t";
    if (*(uint **)(param_2 + 8) == param_2 + 10) break;
    FUN_140762ba0(*param_1,*(undefined8 *)(param_2 + 2));
    goto LAB_1405f5144;
  case 1:
    pDVar2 = (Decoration<__int64> *)(param_2 + 0x12);
    uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3(pDVar2);
    lVar4 = FUN_140106180(pDVar2);
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        ecs_expr_initializer_t(param_1,*(undefined8 *)(lVar4 + uVar7 * 8));
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    FUN_1403b2770(puVar1,param_2 + 0xe,8);
    FUN_1403b2770(puVar1,pDVar2,8);
    lVar4 = *(longlong *)(param_2 + 10);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_140391250(puVar1,param_2[0xc]);
    }
    FUN_140391740(uVar5,lVar4,"char");
    pcVar8 = "ecs_expr_interpolated_string_t";
    uVar5 = 0x58;
    break;
  default:
    pDVar2 = (Decoration<__int64> *)(param_2 + 8);
    lVar4 = FUN_140106180(pDVar2,0x40);
    uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3(pDVar2);
    if (0 < (int)uVar3) {
      lVar6 = 0;
      do {
        ecs_expr_initializer_t(param_1,*(undefined8 *)(lVar4 + 8 + lVar6));
        lVar6 = lVar6 + 0x20;
      } while ((ulonglong)uVar3 << 5 != lVar6);
    }
    FUN_1403b2770(puVar1,pDVar2,0x20);
    pcVar8 = "ecs_expr_initializer_t";
LAB_1405f5144:
    uVar5 = 0x40;
    break;
  case 4:
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 8));
    pcVar8 = "ecs_expr_unary_t";
    uVar5 = 0x30;
    break;
  case 5:
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 8));
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 10));
    pcVar8 = "ecs_expr_binary_t";
    uVar5 = 0x48;
    break;
  case 6:
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 10));
    pcVar8 = "ecs_expr_identifier_t";
    uVar5 = 0x30;
    break;
  case 7:
  case 8:
    pcVar8 = "ecs_expr_variable_t";
    break;
  case 9:
  case 10:
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 8));
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 10));
    pcVar8 = "ecs_expr_function_t";
    uVar5 = 0x60;
    break;
  case 0xb:
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 8));
    pcVar8 = "ecs_expr_member_t";
    uVar5 = 0x38;
    break;
  case 0xc:
  case 0xd:
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 8));
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 10));
    pcVar8 = "ecs_expr_element_t";
    uVar5 = 0x38;
    break;
  case 0xe:
  case 0xf:
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 8));
    pcVar8 = "ecs_expr_cast_t";
    uVar5 = 0x28;
    break;
  case 0x10:
    ecs_expr_initializer_t(param_1,*(undefined8 *)(param_2 + 8));
    pDVar2 = (Decoration<__int64> *)(param_2 + 10);
    uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3(pDVar2);
    lVar4 = FUN_140106180(pDVar2);
    if (0 < (int)uVar3) {
      lVar6 = 0;
      do {
        ecs_expr_initializer_t(param_1,*(undefined8 *)(lVar4 + lVar6));
        ecs_expr_initializer_t(param_1,*(undefined8 *)(lVar4 + 8 + lVar6));
        lVar6 = lVar6 + 0x10;
      } while ((ulonglong)uVar3 << 4 != lVar6);
    }
    if (*(longlong *)(param_2 + 0xe) != 0) {
      ecs_expr_initializer_t(param_1);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      ecs_expr_initializer_t(param_1);
    }
    FUN_1403b2770(puVar1,pDVar2,0x10);
    pcVar8 = "ecs_expr_match_t";
    uVar5 = 0x48;
    break;
  case 0x11:
    pcVar8 = "ecs_expr_new_t";
    uVar5 = 0x28;
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1405f4830(param_1,*(longlong *)(param_2 + 8));
      uVar5 = 0x28;
    }
  }
  uVar5 = FUN_140391250(puVar1,uVar5);
  FUN_140391740(uVar5,param_2,pcVar8);
  return;
}

