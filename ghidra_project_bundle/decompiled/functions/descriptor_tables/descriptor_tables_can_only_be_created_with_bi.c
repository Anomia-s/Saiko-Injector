/**
 * Function: descriptor_tables_can_only_be_created_with_bi
 * Address:  140521080
 * Signature: undefined8 * __thiscall descriptor_tables_can_only_be_created_with_bi(void * this, undefined8 * param_1, longlong * param_2, undefined8 param_3)
 * Body size: 200 bytes
 */


undefined8 * __thiscall
descriptor_tables_can_only_be_created_with_bi
          (void *this,undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (lVar1 == 0) {
    pcVar2 = (char *)FUN_140b65d30(0x40);
    builtin_strncpy(pcVar2,"Descriptor tables can only be created with bindless layouts",0x3c);
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar2);
    thunk_FUN_140b68ba8(pcVar2,0x40);
    *param_1 = 0;
  }
  else {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x180))
              (*(longlong **)((longlong)this + 0x10),param_1,param_2);
  }
  return param_1;
}

