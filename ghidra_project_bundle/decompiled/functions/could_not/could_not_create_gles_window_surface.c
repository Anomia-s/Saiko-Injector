/**
 * Function: could_not_create_gles_window_surface
 * Address:  140464910
 * Signature: undefined could_not_create_gles_window_surface(void)
 * Body size: 192 bytes
 */


undefined8 could_not_create_gles_window_surface(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x180);
  lVar3 = video_subsystem_has_not_been_initialized();
  uVar4 = video_subsystem_has_not_been_initialized();
  if (*(longlong *)(param_1 + 0x688) == 0) {
    cVar2 = could_not_parse_egl_version_string_s(param_1,0,0,*(undefined4 *)(param_1 + 0x404));
    if (cVar2 == '\0') {
      FUN_140456690(param_1);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x408) = 1;
  }
  lVar5 = unable_to_create_an_egl_window_surface(param_1,param_2,*(undefined8 *)(lVar1 + 8));
  *(longlong *)(lVar1 + 200) = lVar5;
  if (lVar5 == 0) {
    uVar4 = FUN_1400fbed0("Could not create GLES window surface");
    return uVar4;
  }
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 0x180) + 200);
  }
  uVar4 = unable_to_make_egl_context_current(param_1,uVar6,uVar4);
  return uVar4;
}

