/**
 * Function: expected_end_of_argument_list
 * Address:  140763fa0
 * Signature: undefined expected_end_of_argument_list(void)
 * Body size: 172 bytes
 */


char * expected_end_of_argument_list(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140761850();
  *(longlong *)(lVar1 + 0x20) = *param_3;
  pcVar2 = (char *)unexpected_ss(param_1,param_2,0x29,(longlong *)(lVar1 + 0x28));
  if (pcVar2 != (char *)0x0) {
    *param_3 = lVar1;
    if (*pcVar2 == ')') {
      return pcVar2 + 1;
    }
    FUN_140399a50(*param_1,param_1[1],pcVar2 + ~param_1[1],"expected end of argument list");
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    ecs_expr_initializer_t(param_1[8]);
  }
  uVar3 = FUN_140391250(param_1[8] + 0x18,0x60);
  FUN_140391740(uVar3,lVar1,"ecs_expr_function_t");
  return (char *)0x0;
}

