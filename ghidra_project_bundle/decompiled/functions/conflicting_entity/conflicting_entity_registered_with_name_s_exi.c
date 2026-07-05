/**
 * Function: conflicting_entity_registered_with_name_s_exi
 * Address:  140391d20
 * Signature: undefined conflicting_entity_registered_with_name_s_exi(void)
 * Body size: 307 bytes
 */


void conflicting_entity_registered_with_name_s_exi
               (undefined8 param_1,longlong param_2,char *param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  char *local_48;
  uint local_40;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  uVar3 = (ulonglong)param_4;
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  if (param_4 == 0) {
    uVar3 = strlen(param_3);
    param_4 = (uint)uVar3;
  }
  if (param_5 == 0) {
    param_4 = (uint)uVar3;
    param_5 = FUN_1405d7c50(param_3,uVar3 & 0xffffffff);
  }
  local_3c = 0;
  local_48 = param_3;
  local_40 = param_4;
  local_38 = param_5;
  plVar2 = (longlong *)FUN_140391ae0(param_1,param_3,param_4,param_5);
  if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != param_2 && lVar1 != 0)) {
    local_68 = (undefined4)param_2;
    local_70 = (undefined4)lVar1;
    local_78 = param_3;
    redabortreset_bluesreset
              (8,
               "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/datastructures/name_index.c"
               ,0xe5,"conflicting entity registered with name \'%s\' (existing = %u, new = %u)");
    (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,8);
  FUN_1403d15b0(local_60,param_1,0x18,&local_48);
  *local_58 = param_2;
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_98);
}

