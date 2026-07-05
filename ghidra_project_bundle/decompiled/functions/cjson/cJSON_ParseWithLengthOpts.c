/**
 * Function: cJSON_ParseWithLengthOpts
 * Address:  1405813a0
 * Signature: undefined cJSON_ParseWithLengthOpts(void)
 * Body size: 547 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
cJSON_ParseWithLengthOpts(char *param_1,ulonglong param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  char *local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined *local_38;
  ulonglong local_28;
  
                    /* 0x5813a0  64  cJSON_ParseWithLengthOpts */
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (char *)0x0;
  uStack_60 = 0;
  local_38 = (undefined *)0x0;
  DAT_1416f29d0 = (char *)0x0;
  _DAT_1416f29d8 = 0;
  if (param_2 == 0 || param_1 == (char *)0x0) {
LAB_140581548:
    if (param_1 != (char *)0x0) {
      _DAT_1416f29d8 = local_58;
      param_2 = uStack_60;
      if (uStack_60 <= local_58) goto LAB_14058155c;
      goto LAB_140581566;
    }
  }
  else {
    local_48 = CONCAT44(PTR_malloc_14150b218._4_4_,PTR_malloc_14150b218._0_4_);
    uStack_40 = CONCAT44(PTR_free_14150b220._4_4_,PTR_free_14150b220._0_4_);
    local_38 = PTR_realloc_14150b228;
    local_68 = param_1;
    uStack_60 = param_2;
    puVar3 = (undefined8 *)
             (*(code *)CONCAT44(PTR_malloc_14150b218._4_4_,PTR_malloc_14150b218._0_4_))();
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      if ((((param_2 < 5) || (*param_1 != -0x11)) || (param_1[1] != -0x45)) || (param_1[2] != -0x41)
         ) {
        uVar4 = 0;
        if (param_2 != 0) goto LAB_14058147f;
      }
      else {
        local_58 = 3;
        uVar4 = 3;
        if (3 < param_2) {
LAB_14058147f:
          local_58 = uVar4;
          if ((byte)param_1[uVar4] < 0x21) {
            do {
              local_58 = param_2 - 1;
              if (param_2 - 1 == uVar4) break;
              local_58 = uVar4 + 1;
              lVar1 = uVar4 + 1;
              uVar4 = local_58;
            } while ((byte)param_1[lVar1] < 0x21);
          }
        }
      }
      iVar2 = FUN_1405815d0(puVar3,&local_68);
      if (iVar2 != 0) {
        if (param_4 != 0) {
          if ((local_58 < uStack_60 && local_68 != (char *)0x0) && ((byte)local_68[local_58] < 0x21)
             ) {
            uVar4 = local_58;
            do {
              local_58 = uStack_60 - 1;
              if (uStack_60 - 1 == uVar4) break;
              local_58 = uVar4 + 1;
              lVar1 = uVar4 + 1;
              uVar4 = local_58;
            } while ((byte)local_68[lVar1] < 0x21);
          }
          if ((uStack_60 <= local_58) || (local_68[local_58] != '\0')) goto LAB_140581540;
        }
        if (param_3 != (longlong *)0x0) {
          *param_3 = (longlong)(local_68 + local_58);
        }
        goto LAB_140581582;
      }
LAB_140581540:
      cJSON_Delete(puVar3);
      goto LAB_140581548;
    }
    _DAT_1416f29d8 = 0;
    if (param_2 == 0) {
LAB_14058155c:
      _DAT_1416f29d8 = 0;
      if (param_2 != 0) {
        _DAT_1416f29d8 = param_2 - 1;
      }
    }
LAB_140581566:
    DAT_1416f29d0 = param_1;
    if (param_3 != (longlong *)0x0) {
      *param_3 = (longlong)(param_1 + _DAT_1416f29d8);
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_140581582:
  if (DAT_1414ef3c0 != (local_28 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_28 ^ (ulonglong)auStack_88);
  }
  return puVar3;
}

