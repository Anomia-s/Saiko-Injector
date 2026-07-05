/**
 * Function: cant_fopen
 * Address:  14047ffd0
 * Signature: undefined cant_fopen(void)
 * Body size: 426 bytes
 */


longlong cant_fopen(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  errno_t eVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  FILE *local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  code *local_f8;
  FILE *local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [128];
  int local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  eVar1 = fopen_s(local_118,param_1,"rb");
  if (local_118[0] == (FILE *)0x0 || eVar1 != 0) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x220) = "can\'t fopen";
    lVar3 = 0;
  }
  else {
    local_f8 = FUN_140483220;
    local_108 = 0x404831c0;
    uStack_104 = 1;
    uStack_100 = 0x404831e0;
    uStack_fc = 1;
    local_f0 = local_118[0];
    local_e8 = 0x8000000001;
    local_60 = 0;
    local_58 = local_e0;
    local_48 = local_e0;
    iVar2 = (*(code *)&LAB_1404831c0)(local_118[0],local_e0,0x80);
    local_60 = local_60 + ((int)local_58 - (int)local_48);
    if (iVar2 == 0) {
      local_e8 = local_e8 & 0xffffffff00000000;
      local_50 = local_e0 + 1;
      local_e0[0] = 0;
    }
    else {
      local_50 = local_e0 + iVar2;
    }
    local_128 = param_5;
    local_58 = local_e0;
    local_40 = local_50;
    lVar3 = FUN_140480180(local_118,param_2,param_3,param_4);
    if (lVar3 != 0) {
      fseek(local_118[0],(int)local_58 - (int)local_50,1);
    }
    fclose(local_118[0]);
  }
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_148)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_148);
}

