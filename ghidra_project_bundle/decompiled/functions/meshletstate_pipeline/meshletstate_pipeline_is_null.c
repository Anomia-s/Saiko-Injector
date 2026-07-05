/**
 * Function: meshletstate_pipeline_is_null
 * Address:  1406e6040
 * Signature: void __thiscall meshletstate_pipeline_is_null(void * this, longlong * param_1)
 * Body size: 422 bytes
 */


void __thiscall meshletstate_pipeline_is_null(void *this,longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  cVar1 = a_command_list_must_be_opened_before_any_rend();
  if ((cVar1 != '\0') &&
     (cVar1 = operation_requires_at_least(this,0,"setMeshletState"), cVar1 != '\0')) {
    if ((longlong *)*param_1 == (longlong *)0x0) {
      pcVar5 = (char *)FUN_140b65d30(0x20);
      builtin_strncpy(pcVar5,"MeshletState::pipeline is NULL",0x1f);
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pcVar5);
      thunk_FUN_140b68ba8(pcVar5,0x20);
    }
    else {
      lVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
      cVar1 = number_of_binding_sets_provided(this,lVar2 + 0xb0,param_1 + 0x57);
      if (cVar1 != '\0') {
        lVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))();
        *(undefined8 *)((longlong)this + 0x890) = 0;
        lVar2 = *(longlong *)(lVar3 + 0xf0);
        if (lVar2 != 0) {
          puVar7 = (undefined8 *)(lVar3 + 0xb0);
          do {
            lVar4 = (**(code **)(*(longlong *)*puVar7 + 0x28))();
            if (lVar4 != 0) {
              for (lVar6 = *(longlong *)(lVar4 + 0x10); lVar6 != *(longlong *)(lVar4 + 0x18);
                  lVar6 = lVar6 + 8) {
                if (*(char *)(lVar6 + 4) == '\r') {
                  *(ulonglong *)((longlong)this + 0x890) = (ulonglong)*(ushort *)(lVar6 + 6);
                  goto LAB_1406e61a6;
                }
              }
            }
            puVar7 = puVar7 + 1;
          } while (puVar7 != (undefined8 *)(lVar3 + lVar2 * 8 + 0xb0));
        }
LAB_1406e61a6:
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x100))
                  (*(longlong **)((longlong)this + 0x10),param_1);
        *(undefined4 *)((longlong)this + 0x30) = 0x10000;
        *(undefined1 *)((longlong)this + 0x898) = 0;
        memcpy((void *)((longlong)this + 0x538),param_1,0x308);
        return;
      }
    }
  }
  return;
}

