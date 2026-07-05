/**
 * Function: cJSON_PrintBuffered
 * Address:  140581bc0
 * Signature: undefined cJSON_PrintBuffered(void)
 * Body size: 190 bytes
 */


longlong cJSON_PrintBuffered(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *local_28;
  ulonglong local_20;
  
                    /* 0x581bc0  67  cJSON_PrintBuffered */
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  local_48 = 0;
  if (-1 < (int)param_2) {
    local_60 = (*(code *)CONCAT44(PTR_malloc_14150b218._4_4_,PTR_malloc_14150b218._0_4_))
                         ((ulonglong)param_2);
    if (local_60 != 0) {
      local_50 = 0;
      local_40 = 0;
      local_38 = PTR_malloc_14150b218._0_4_;
      uStack_34 = PTR_malloc_14150b218._4_4_;
      uStack_30 = PTR_free_14150b220._0_4_;
      uStack_2c = PTR_free_14150b220._4_4_;
      local_28 = PTR_realloc_14150b228;
      local_58 = (ulonglong)param_2;
      local_3c = param_3;
      iVar1 = FUN_140581c80(param_1,&local_60);
      lVar2 = local_60;
      if (iVar1 != 0) goto LAB_140581c55;
      (*(code *)CONCAT44(PTR_free_14150b220._4_4_,PTR_free_14150b220._0_4_))(local_60);
    }
  }
  lVar2 = 0;
LAB_140581c55:
  if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_20 ^ (ulonglong)auStack_88);
  }
  return lVar2;
}

