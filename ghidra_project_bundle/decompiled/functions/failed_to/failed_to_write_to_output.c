/**
 * Function: failed_to_write_to_output
 * Address:  140764db0
 * Signature: undefined failed_to_write_to_output(void)
 * Body size: 504 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
failed_to_write_to_output(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_30c8 [32];
  undefined8 *local_30a8;
  undefined8 local_30a0;
  longlong local_3098;
  undefined1 *local_3090;
  undefined4 local_3088;
  undefined4 uStack_3084;
  undefined4 uStack_3080;
  undefined4 uStack_307c;
  undefined8 local_3078;
  undefined1 local_3070;
  undefined4 local_306f;
  undefined3 uStack_306b;
  undefined1 local_3060 [12320];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_30c8;
  if ((param_3 == 0) || (*(longlong *)(param_3 + 0x38) == 0)) {
    puVar4 = local_3060;
    FUN_1405f5280(puVar4);
  }
  else {
    puVar4 = (undefined1 *)(*(longlong *)(param_3 + 0x38) + 0x60);
  }
  FUN_1405f5340(puVar4);
  if (((*param_4 == 0) || (*param_4 != *(longlong *)(param_2 + 8))) || (param_4[1] == 0)) {
    puVar2 = (undefined4 *)FUN_1405f52c0(puVar4,param_2);
  }
  else {
    local_3088 = (undefined4)*param_4;
    uStack_3084 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_3080 = (undefined4)param_4[1];
    uStack_307c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_3078 = FUN_1403a5610(*param_1);
    local_306f = 0;
    uStack_306b = 0;
    local_3070 = 0;
    puVar2 = &local_3088;
  }
  uVar5 = *param_1;
  local_30a8 = param_1;
  local_30a0 = uVar5;
  local_3098 = param_3;
  local_3090 = puVar4;
  iVar1 = entity_s_does_not_have_component_s(&local_30a8,param_2,puVar2);
  if (iVar1 == 0) {
    lVar3 = *param_4;
    if (param_3 == 0) {
LAB_140764ea7:
      if ((lVar3 != 0) || (lVar3 = *(longlong *)(param_2 + 8), *param_4 = lVar3, lVar3 != 0))
      goto LAB_140764eb8;
LAB_140764ebf:
      if (puVar2 != &local_3088) goto LAB_140764ef0;
LAB_140764ee1:
      if (param_4[1] != *(longlong *)(puVar2 + 2)) goto LAB_140764ef0;
    }
    else {
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_3 + 0x18);
        *param_4 = lVar3;
        goto LAB_140764ea7;
      }
LAB_140764eb8:
      if (param_4[1] != 0) goto LAB_140764ebf;
      lVar3 = FUN_140762b10(uVar5);
      param_4[1] = lVar3;
      if (puVar2 == &local_3088) goto LAB_140764ee1;
LAB_140764ef0:
      if (*(char *)(puVar2 + 6) == '\x01') {
        iVar1 = FUN_14075a800(uVar5,param_4,puVar2);
      }
      else {
        iVar1 = FUN_14075a760(uVar5,param_4,puVar2);
      }
      if (iVar1 != 0) {
        FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                      "failed to write to output");
        goto LAB_140764f25;
      }
    }
    FUN_1405f53a0(puVar4);
    uVar5 = 0;
  }
  else {
LAB_140764f25:
    FUN_1405f53a0(puVar4);
    uVar5 = 0xffffffff;
  }
  if (puVar4 == local_3060) {
    FUN_1405f52b0(puVar4);
  }
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_30c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_30c8);
  }
  return uVar5;
}

