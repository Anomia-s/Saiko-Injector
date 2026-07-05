/**
 * Function: cannot_use_volatile_cbs_in_a_shader_binding_t
 * Address:  14073d270
 * Signature: undefined cannot_use_volatile_cbs_in_a_shader_binding_t(void)
 * Body size: 400 bytes
 */


void cannot_use_volatile_cbs_in_a_shader_binding_t(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  char *pcVar12;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)param_1[3];
  puVar4 = (undefined8 *)*param_2;
  uVar8 = *puVar4;
  uVar9 = puVar4[1];
  uVar10 = puVar4[3];
  puVar3[2] = puVar4[2];
  puVar3[3] = uVar10;
  *puVar3 = uVar8;
  puVar3[1] = uVar9;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    if (0 < *(int *)(lVar6 + 0x5c)) {
      lVar7 = *(longlong *)param_1[3];
      uVar1 = *(uint *)(lVar6 + 0x54);
      nvrhi::d3d12::StaticDescriptorHeap::vfunction8
                ((StaticDescriptorHeap *)(param_1[1] + 0x240),(longlong *)&local_60,
                 *(int *)(lVar5 + 0x3c));
      *(char **)(lVar7 + 0x20 + (ulonglong)uVar1 * 8) = local_60;
    }
    if (0 < *(int *)(lVar6 + 0x58)) {
      lVar7 = *(longlong *)param_1[3];
      uVar1 = *(uint *)(lVar6 + 0x50);
      nvrhi::d3d12::StaticDescriptorHeap::vfunction8
                ((StaticDescriptorHeap *)(param_1[1] + 0x180),(longlong *)&local_60,
                 *(int *)(lVar5 + 0x38));
      *(char **)(lVar7 + 0x20 + (ulonglong)uVar1 * 8) = local_60;
    }
    if (*(longlong *)(lVar6 + 0x108) != 0) {
      uVar8 = *(undefined8 *)(lVar2 + 0x100);
      local_58 = 0;
      local_60 = (char *)FUN_140b65d30(0x40);
      local_50 = 0x31;
      local_48 = 0x3f;
      builtin_strncpy(local_60,"Cannot use Volatile CBs in a shader binding table",0x32);
      FUN_14053e350(uVar8,&local_60);
      if (local_48 < 0x10) {
        return;
      }
      uVar11 = local_48 + 1;
      pcVar12 = local_60;
      if (0xfff < uVar11) {
        pcVar12 = *(char **)(local_60 + -8);
        if ((char *)0x1f < local_60 + (-8 - (longlong)pcVar12)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar11 = local_48 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar12,uVar11);
      return;
    }
  }
  *(longlong *)param_1[3] = *(longlong *)param_1[3] + (ulonglong)*(uint *)(param_1 + 2);
  *(longlong *)param_1[4] = *(longlong *)param_1[4] + (ulonglong)*(uint *)(param_1 + 2);
  return;
}

