/**
 * Function: graphics_apisn
 * Address:  1401860e0
 * Signature: undefined graphics_apisn(void)
 * Body size: 429 bytes
 */


void graphics_apisn(longlong param_1,char *param_2)

{
  FILE *_File;
  
  _File = fopen(param_2,"w");
  if (_File != (FILE *)0x0) {
    FUN_14002b100(_File,"quality=%d\n",*(undefined4 *)(param_1 + 0x270));
    FUN_14002b100(_File,"graphics_api=%s\n",
                  (&PTR_s_Vulkan_141341ea1_0x10_140dee5e0)[0 < *(int *)(param_1 + 0x274)]);
    FUN_14002b100(_File,"aa_method=%d\n",*(undefined4 *)(param_1 + 0x278));
    FUN_14002b100(_File,"aa_quality=%d\n",*(undefined4 *)(param_1 + 0x27c));
    FUN_14002b100(_File,"bloom=%d\n",*(undefined1 *)(param_1 + 0x280));
    FUN_14002b100(_File,"saturation=%.2f\n",(double)*(float *)(param_1 + 0x284));
    FUN_14002b100(_File,"fov=%.0f\n",(double)*(float *)(param_1 + 0x288));
    FUN_14002b100(_File,"sensitivity=%d\n",*(undefined4 *)(param_1 + 0x28c));
    FUN_14002b100(_File,"volume=%d\n",*(undefined4 *)(param_1 + 0x290));
    FUN_14002b100(_File,"fullscreen=%d\n",*(undefined1 *)(param_1 + 0x294));
    FUN_14002b100(_File,"vsync=%d\n",*(undefined1 *)(param_1 + 0x295));
    FUN_14002b100(_File,"ui_scale=%.1f\n",(double)*(float *)(param_1 + 0x298));
    FUN_14002b100(_File,"show_fps=%d\n",*(undefined1 *)(param_1 + 0x29c));
    FUN_14002b100(_File,"shift_lock=%d\n",*(undefined1 *)(param_1 + 0x29d));
                    /* WARNING: Could not recover jumptable at 0x00014018627e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fclose(_File);
    return;
  }
  return;
}

