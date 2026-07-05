/**
 * Function: unsupported_conversion_from_s_to_s_for_s
 * Address:  1407587e0
 * Signature: undefined unsupported_conversion_from_s_to_s_for_s(void)
 * Body size: 180 bytes
 */


void unsupported_conversion_from_s_to_s_for_s(undefined8 *param_1,uint *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (*param_2 == 3) {
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,0x395,"cursor: out of bounds");
    return;
  }
  uVar1 = FUN_1403ae340(*param_1,0,*(undefined8 *)(param_2 + 8),".",0);
  if ((ulonglong)*param_2 < 0x1f) {
    pcVar2 = (&PTR_DAT_141246270)[*param_2];
  }
  else {
    pcVar2 = "<< invalid kind >>";
  }
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                ,0x399,"unsupported conversion from %s to \'%s\' (for %s)",param_3,uVar1,pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00014075888d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1415033b0)(uVar1);
  return;
}

