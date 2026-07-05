/**
 * Function: stableid_env_allocation_failedn
 * Address:  1403a5720
 * Signature: undefined stableid_env_allocation_failedn(void)
 * Body size: 816 bytes
 */


void stableid_env_allocation_failedn(undefined8 param_1)

{
  PUCHAR pbBuffer;
  NTSTATUS NVar1;
  clock_t cVar2;
  void *pvVar3;
  FILE *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_198 [32];
  void **local_178;
  void *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_198;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (code *)0x0;
  pcStack_a0 = (code *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  local_168 = (void *)0x0;
  local_118 = 0;
  uStack_160 = DAT_1416dfb40;
  uStack_130 = 1;
  pcStack_150 = "LdvStableIdEnvPtr";
  local_138 = "LdvStableIdEnvPtr";
  uStack_100 = s_is_invalid_for_ecs_entity_desc_t_add_expr(0,&local_168);
  local_f8 = 0x800000008;
  DAT_1416dfb40 = greencomponentreset_s_registered(param_1,&local_108);
  pvVar3 = calloc(1,0x50);
  if (pvVar3 == (void *)0x0) {
    pFVar4 = (FILE *)__acrt_iob_func(2);
    fwrite("[StableId] env allocation failed\n",0x21,1,pFVar4);
  }
  else {
    pbBuffer = (PUCHAR)((longlong)pvVar3 + 0x30);
    NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,pbBuffer,0x20,2);
    if (NVar1 != 0) {
      pFVar4 = (FILE *)__acrt_iob_func(2);
      fwrite("[StableId] entropy source failed, using mixed seed\n",0x33,1,pFVar4);
      uVar5 = _time64((__time64_t *)0x0);
      cVar2 = clock();
      *(ulonglong *)((longlong)pvVar3 + 0x30) =
           uVar5 ^ 0x9e3779b97f4a7c15 ^ (longlong)pbBuffer * 0x20000;
      *(ulonglong *)((longlong)pvVar3 + 0x38) = (longlong)cVar2 ^ 0xbb67ae8584c0a03e;
      *(ulonglong *)((longlong)pvVar3 + 0x40) = uVar5 * -0x61c8864680b583eb ^ 0x3c6ef372fe94f82b;
      *(ulonglong *)((longlong)pvVar3 + 0x48) =
           (longlong)pbBuffer * -0x4498517a7b3558c5 ^ 0xa54ff53b1ffd8dd1;
    }
    FUN_1403b61c0(pvVar3,0);
    FUN_1403b61c0((longlong)pvVar3 + 0x18,0);
    local_178 = &local_168;
    local_168 = pvVar3;
    FUN_1400bb430(param_1,DAT_1416dfb40,DAT_1416dfb40,8);
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_68 = 0;
    local_a8 = stableid_collision_0xllx_reassigned_from_llu;
    pcStack_a0 = FUN_1403a5bc0;
    FUN_1403a4930(param_1,DAT_14151f5f0,&local_108);
    FUN_1400be2c0(param_1,FUN_1403a5c80,0);
  }
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_198)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_198);
}

