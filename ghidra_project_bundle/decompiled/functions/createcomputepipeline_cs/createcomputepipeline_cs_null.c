/**
 * Function: createcomputepipeline_cs_null
 * Address:  14051dd60
 * Signature: undefined8 * __thiscall createcomputepipeline_cs_null(void * this, undefined8 * param_1, longlong * param_2)
 * Body size: 293 bytes
 */


undefined8 * __thiscall
createcomputepipeline_cs_null(void *this,undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    local_50 = (longlong *)0x0;
    plVar3 = (longlong *)FUN_140b65d30(0x30);
    local_48 = (longlong *)0x20;
    local_40 = 0x2f;
    *plVar3 = 0x6f43657461657263;
    plVar3[1] = 0x706950657475706d;
    *(undefined4 *)(plVar3 + 2) = 0x6e696c65;
    builtin_strncpy((char *)((longlong)plVar3 + 0x14),"e: C",4);
    *(undefined4 *)(plVar3 + 3) = 0x203d2053;
    builtin_strncpy((char *)((longlong)plVar3 + 0x1c),"NULL",4);
    *(char *)(plVar3 + 4) = '\0';
    local_58 = plVar3;
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,plVar3);
    thunk_FUN_140b68ba8(plVar3,0x30);
    *param_1 = 0;
    return param_1;
  }
  plVar3 = (longlong *)FUN_140b65d30(8);
  local_50 = plVar3 + 1;
  *plVar3 = lVar1;
  local_58 = plVar3;
  local_48 = local_50;
  cVar2 = binding_layout_contains_more_than_one(this,param_2 + 1,&local_58);
  if (cVar2 != '\0') {
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    cVar2 = unexpected_shader_type_used_in(this,0x20,uVar4,"createComputePipeline");
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x148))
                (*(longlong **)((longlong)this + 0x10),param_1,param_2);
      goto LAB_14051de01;
    }
  }
  *param_1 = 0;
LAB_14051de01:
  thunk_FUN_140b68ba8(plVar3,8);
  return param_1;
}

