/**
 * Function: tried_to_read_outside_of_surface_bounds
 * Address:  140417d10
 * Signature: undefined tried_to_read_outside_of_surface_bounds(void)
 * Body size: 212 bytes
 */


undefined8 tried_to_read_outside_of_surface_bounds(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  lVar5 = *plVar3;
  if (lVar5 == 0) {
    lVar5 = plVar3[1];
    *plVar3 = lVar5;
    if (lVar5 == 0) {
      lVar5 = window_framebuffer_support_not_available(*(undefined8 *)(param_1 + 0x100));
      if (lVar5 == 0) {
        lVar5 = *plVar3;
        cVar4 = FUN_140110960(lVar5);
        goto joined_r0x000140417d5a;
      }
      plVar3[1] = lVar5;
      *plVar3 = lVar5;
    }
  }
  cVar4 = FUN_140110960(lVar5);
joined_r0x000140417d5a:
  if (cVar4 != '\0') {
    iVar1 = *param_2;
    if ((((-1 < iVar1) && (param_2[2] + iVar1 <= *(int *)(lVar5 + 8))) &&
        (iVar2 = param_2[1], -1 < iVar2)) && (param_2[3] + iVar2 <= *(int *)(lVar5 + 0xc))) {
      uVar6 = parameter_s_is_invalid
                        (param_2[2],param_2[3],*(undefined4 *)(lVar5 + 4),0x120005a0,
                         (ulonglong)(iVar1 * (uint)*(byte *)(*(longlong *)(lVar5 + 0x38) + 5)) +
                         (longlong)(iVar2 * *(int *)(lVar5 + 0x10)) + *(longlong *)(lVar5 + 0x18),
                         *(int *)(lVar5 + 0x10));
      return uVar6;
    }
    FUN_1400fbed0("Tried to read outside of surface bounds");
  }
  return 0;
}

