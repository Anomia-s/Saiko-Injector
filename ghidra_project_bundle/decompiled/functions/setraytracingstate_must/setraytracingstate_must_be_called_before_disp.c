/**
 * Function: setraytracingstate_must_be_called_before_disp
 * Address:  14073de40
 * Signature: void __thiscall setraytracingstate_must_be_called_before_disp(void * this, undefined8 * param_1)
 * Body size: 359 bytes
 */


void __thiscall setraytracingstate_must_be_called_before_disp(void *this,undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  nvrhi::d3d12::CommandList::vfunction68(this);
  if (*(char *)((longlong)this + 0xa7b) == '\0') {
    uVar2 = *(undefined8 *)((longlong)this + 0x10);
    uStack_80 = 0;
    local_88 = (char *)FUN_140b65d30(0x40);
    local_78 = 0x35;
    uStack_70 = 0x3f;
    builtin_strncpy(local_88,"setRayTracingState must be called before dispatchRays",0x36);
    FUN_14053e350(uVar2,&local_88);
    if (0xf < uStack_70) {
      uVar4 = uStack_70 + 1;
      pcVar5 = local_88;
      if (0xfff < uVar4) {
        pcVar5 = *(char **)(local_88 + -8);
        if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar5)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = uStack_70 + 0x28;
      }
      thunk_FUN_140b68ba8(pcVar5,uVar4);
    }
  }
  else {
    lVar3 = FUN_14073d440(this,*(undefined8 *)((longlong)this + 0xa28));
    local_38 = *(undefined8 *)(lVar3 + 0x68);
    local_48 = *(undefined8 *)(lVar3 + 0x58);
    uStack_40 = *(undefined8 *)(lVar3 + 0x60);
    local_88 = *(char **)(lVar3 + 0x18);
    uStack_80 = *(undefined8 *)(lVar3 + 0x20);
    local_78 = *(undefined8 *)(lVar3 + 0x28);
    uStack_70 = *(undefined8 *)(lVar3 + 0x30);
    local_68 = *(undefined4 *)(lVar3 + 0x38);
    uStack_64 = *(undefined4 *)(lVar3 + 0x3c);
    uStack_60 = *(undefined4 *)(lVar3 + 0x40);
    uStack_5c = *(undefined4 *)(lVar3 + 0x44);
    local_58 = *(undefined4 *)(lVar3 + 0x48);
    uStack_54 = *(undefined4 *)(lVar3 + 0x4c);
    uStack_50 = *(undefined4 *)(lVar3 + 0x50);
    uStack_4c = *(undefined4 *)(lVar3 + 0x54);
    uStack_30 = *param_1;
    _local_28 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar3 + 0x78) >> 0x20),
                         *(undefined4 *)(param_1 + 1));
    plVar1 = *(longlong **)(*(longlong *)((longlong)this + 0x1e8) + 0x10);
    (**(code **)(*plVar1 + 0x260))(plVar1,&local_88);
  }
  return;
}

