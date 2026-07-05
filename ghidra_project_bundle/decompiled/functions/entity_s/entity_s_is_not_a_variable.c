/**
 * Function: entity_s_is_not_a_variable
 * Address:  1407699d0
 * Signature: undefined entity_s_is_not_a_variable(void)
 * Body size: 218 bytes
 */


undefined8
entity_s_is_not_a_variable(undefined8 *param_1,undefined4 *param_2,code *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  lVar1 = (*param_3)(uVar3,*(undefined8 *)(param_2 + 8),param_4);
  if (lVar1 == 0) {
    FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 6) - param_1[2],
                  "unresolved variable \'%s\'",*(undefined8 *)(param_2 + 8));
  }
  else {
    puVar2 = (undefined8 *)FUN_1400ba4f0(uVar3,lVar1,DAT_1416dfb90);
    if (puVar2 != (undefined8 *)0x0) {
      *param_2 = 8;
      *(undefined8 *)(param_2 + 2) = *puVar2;
      uVar3 = puVar2[1];
      *(undefined8 *)(param_2 + 10) = *puVar2;
      *(undefined8 *)(param_2 + 0xc) = uVar3;
      return 0;
    }
    uVar3 = FUN_1403ae340(uVar3,0,lVar1,".",0);
    FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 6) - param_1[2],
                  "entity \'%s\' is not a variable",*(undefined8 *)(param_2 + 8));
    (*DAT_1415033b0)(uVar3);
  }
  return 0xffffffff;
}

