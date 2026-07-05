/**
 * Function: vececs_type_info_t
 * Address:  1403cb070
 * Signature: undefined vececs_type_info_t(void)
 * Body size: 253 bytes
 */


longlong vececs_type_info_t(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140396390(param_1,0x65637373);
  if (cVar1 == '\0') {
    param_1 = **(longlong **)(param_1 + 0x9d0);
  }
  lVar2 = *(longlong *)(param_1 + 0x240);
  if (lVar2 == 0) {
    lVar2 = (*DAT_1415033a8)(0x30d8);
    FUN_1405f5280(lVar2 + 0x60);
    FUN_1403911c0(lVar2);
    FUN_1403d31a0(lVar2 + 0x3080);
    FUN_1403b2710(lVar2,lVar2 + 0x3098,8,0,"vec<ecs_entity_t>");
    FUN_1403b2710(lVar2,lVar2 + 0x30a8,0x10,0,"vec<ecs_value_t>");
    FUN_1403b2710(lVar2,lVar2 + 0x30b8,8,0,"vec<ecs_type_info_t*>");
    FUN_1403b2710(lVar2,lVar2 + 0x30c8,8,0,"vec<ecs_script_annot_t*>");
    *(longlong *)(param_1 + 0x240) = lVar2;
  }
  return lVar2;
}

