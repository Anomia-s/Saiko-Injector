/**
 * Function: vececs_expr_initializer_element_t
 * Address:  140761680
 * Signature: undefined vececs_expr_initializer_element_t(void)
 * Body size: 107 bytes
 */


undefined4 * vececs_expr_initializer_element_t(longlong param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_140391250(*(longlong *)(param_1 + 0x40) + 0x18,0x40);
  puVar2 = (undefined4 *)FUN_140391620(uVar1,"ecs_expr_node_t");
  *puVar2 = 2;
  *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(param_1 + 0x10);
  FUN_1403b2710(*(longlong *)(param_1 + 0x40) + 0x18,puVar2 + 8,0x20,0,
                "vec<ecs_expr_initializer_element_t>");
  return puVar2;
}

