/**
 * Function: conservative_rasterization_is_not_supported_o
 * Address:  14051d830
 * Signature: undefined conservative_rasterization_is_not_supported_o(void)
 * Body size: 373 bytes
 */


ulonglong conservative_rasterization_is_not_supported_o
                    (longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined7 uVar5;
  
  if ((((*(byte *)(param_2 + 0x44) | *(byte *)(param_2 + 0x41)) & 1) == 0) ||
     (*(char *)(param_3 + 0x10) != '\0')) {
    uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (*(char *)(param_2 + 0x6a) != '\x01') goto LAB_14051d92a;
    uVar4 = CONCAT71(uVar5,1);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1e8))
                      (*(longlong **)(param_1 + 0x10),1,0,0);
    if (cVar1 != '\0') goto LAB_14051d92a;
    pcVar2 = (char *)FUN_140b65d30(0x40);
    builtin_strncpy(pcVar2,"Conservative rasterization is not supported on this device",0x3b);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),1,pcVar2);
    uVar3 = 0x40;
  }
  else {
    pcVar2 = (char *)FUN_140b65d30(0x80);
    builtin_strncpy(pcVar2,
                    "The depth-stencil state indicates that depth or stencil operations are used, but the framebuffer info has no depth format."
                    ,0x7b);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),2,pcVar2);
    uVar3 = 0x80;
  }
  thunk_FUN_140b68ba8(pcVar2,uVar3);
  uVar4 = 0;
LAB_14051d92a:
  return uVar4 & 0xffffffff;
}

