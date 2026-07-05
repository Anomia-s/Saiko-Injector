/**
 * Function: software_renderer_doesnt_have_an_output_surfa
 * Address:  1404157f0
 * Signature: undefined software_renderer_doesnt_have_an_output_surfa(void)
 * Body size: 93 bytes
 */


undefined8
software_renderer_doesnt_have_an_output_surfa
          (longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x2c0);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(lVar2 + 8);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(*plVar1 + 0xc);
    }
    return 1;
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    video_subsystem_has_not_been_initialized();
    return 1;
  }
  uVar3 = FUN_1400fbed0("Software renderer doesn\'t have an output surface");
  return uVar3;
}

