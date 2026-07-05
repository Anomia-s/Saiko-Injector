/**
 * Function: this_version_of_nvrhi_does_not_support_nvidia
 * Address:  140735c40
 * Signature: undefined this_version_of_nvrhi_does_not_support_nvidia(void)
 * Body size: 238 bytes
 */


undefined8 this_version_of_nvrhi_does_not_support_nvidia(longlong param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = 0;
  local_38 = (char *)FUN_140b65d30(0x60);
  local_28 = 0x59;
  local_20 = 0x5f;
  builtin_strncpy(local_38,
                  "This version of NVRHI does not support NVIDIA HLSL extensions, please rebuild with NVAPI."
                  ,0x5a);
  FUN_14053e350(param_1 + 0x10,&local_38);
  if (0xf < local_20) {
    uVar1 = local_20 + 1;
    pcVar2 = local_38;
    if (0xfff < uVar1) {
      pcVar2 = *(char **)(local_38 + -8);
      if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar2)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar1 = local_20 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar2,uVar1);
  }
  return 0;
}

