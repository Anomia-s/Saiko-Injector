/**
 * Function: no_object_to_assign
 * Address:  140758e70
 * Signature: undefined no_object_to_assign(void)
 * Body size: 211 bytes
 */


undefined8 no_object_to_assign(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  
  lVar2 = (longlong)*(short *)(param_1 + 0x101);
  puVar4 = (uint *)((longlong)*(short *)((longlong)param_1 + lVar2 * 0x40 + 0x1a) * 0x38 +
                   param_1[lVar2 * 8 + 2]);
  puVar3 = (undefined8 *)missing_ensure_element_for_opaque_type_s(*param_1,param_1 + lVar2 * 8 + 1);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,0x72f,"no object to assign");
  }
  else {
    uVar1 = *puVar4;
    if (0x1e < uVar1) {
      return 0;
    }
    if ((0x6ffffdffU >> (uVar1 & 0x1f) & 1) == 0) {
      if (uVar1 != 9) {
        (*DAT_1415033b0)(*puVar3);
        *puVar3 = 0;
        return 0;
      }
      lVar2 = FUN_1400ba4f0(*param_1,*(undefined8 *)(puVar4 + 8),0x16c);
      if ((lVar2 != 0) && (*(code **)(lVar2 + 0x60) != (code *)0x0)) {
        (**(code **)(lVar2 + 0x60))(puVar3);
        return 0;
      }
    }
    unsupported_conversion_from_s_to_s_for_s(param_1,puVar4,"null");
  }
  return 0xffffffff;
}

