/**
 * Function: cJSON_PrintPreallocated
 * Address:  140582570
 * Signature: undefined cJSON_PrintPreallocated(void)
 * Body size: 156 bytes
 */


undefined8
cJSON_PrintPreallocated(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined *local_10;
  ulonglong local_8;
  
                    /* 0x582570  68  cJSON_PrintPreallocated */
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  local_30 = 0;
  uVar1 = 0;
  if (param_2 != 0 && -1 < (int)param_3) {
    local_40 = (ulonglong)param_3;
    local_38 = 0;
    local_28 = 1;
    local_20 = PTR_malloc_14150b218._0_4_;
    uStack_1c = PTR_malloc_14150b218._4_4_;
    uStack_18 = PTR_free_14150b220._0_4_;
    uStack_14 = PTR_free_14150b220._4_4_;
    local_10 = PTR_realloc_14150b228;
    local_48 = param_2;
    local_24 = param_4;
    uVar1 = FUN_140581c80(PTR_malloc_14150b218._0_4_,&local_48);
  }
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_68)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_68);
}

