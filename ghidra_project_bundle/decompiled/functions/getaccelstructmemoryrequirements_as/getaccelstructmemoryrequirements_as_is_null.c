/**
 * Function: getaccelstructmemoryrequirements_as_is_null
 * Address:  140521da0
 * Signature: undefined8 * __thiscall getaccelstructmemoryrequirements_as_is_null(void * this, undefined8 * param_1, longlong param_2)
 * Body size: 220 bytes
 */


undefined8 * __thiscall
getaccelstructmemoryrequirements_as_is_null(void *this,undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
    pcVar2 = (char *)FUN_140b65d30(0x30);
    builtin_strncpy(pcVar2,"getAccelStructMemoryRequirements: as is NULL",0x2d);
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar2);
    thunk_FUN_140b68ba8(pcVar2,0x30);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = __RTDynamicCast(param_2,0,&nvrhi::rt::IAccelStruct::RTTI_Type_Descriptor,
                            &nvrhi::validation::AccelStructWrapper::RTTI_Type_Descriptor,0);
    if (lVar1 != 0) {
      param_2 = *(longlong *)(lVar1 + 0x40);
    }
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1a8))
              (*(longlong **)((longlong)this + 0x10),param_1,param_2);
  }
  return param_1;
}

