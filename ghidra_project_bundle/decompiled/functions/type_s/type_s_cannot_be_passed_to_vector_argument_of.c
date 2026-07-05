/**
 * Function: type_s_cannot_be_passed_to_vector_argument_of
 * Address:  140769ec0
 * Signature: undefined type_s_cannot_be_passed_to_vector_argument_of(void)
 * Body size: 317 bytes
 */


undefined8
type_s_cannot_be_passed_to_vector_argument_of
          (undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  uVar2 = *param_1;
  piVar1 = (int *)FUN_1400ba4f0(uVar2,param_5,0x163);
  if (piVar1 == (int *)0x0) {
    uVar3 = FUN_1403ae340(uVar2,0,param_5,".",0);
    FUN_1403d2d90(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = FUN_1403ae340(uVar2,0,param_4,".",0);
    uVar2 = FUN_1403d2d90(uVar2);
    uVar4 = param_1[1];
    lVar5 = param_1[2];
    lVar6 = *(longlong *)(param_2 + 0x18) - lVar5;
    pcVar7 = 
    "type \'%s\' cannot be passed to vector argument of function \'%s\': (member) type \'%s\' is not a primitive type"
    ;
  }
  else {
    lVar5 = *(longlong *)(param_3 + 0x20 + (longlong)*piVar1 * 8);
    if (lVar5 != 0) {
      *(longlong *)(param_2 + 0x48) = lVar5;
      *(undefined4 *)(param_2 + 0x50) = param_6;
      return 0;
    }
    uVar2 = FUN_1403ae340(*param_1,0,param_5,".",0);
    uVar3 = FUN_1403d2d90(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = param_1[1];
    lVar5 = param_1[2];
    lVar6 = *(longlong *)(param_2 + 0x18) - lVar5;
    pcVar7 = "function \'%s\' does not implement matching vector operation for type \'%s\'";
  }
  FUN_140399a50(uVar4,lVar5,lVar6,pcVar7,uVar2,uVar3);
  return 0xffffffff;
}

