/**
 * Function: could_not_allocate_space_to_read_db_into_memo
 * Address:  14010a730
 * Signature: undefined could_not_allocate_space_to_read_db_into_memo(void)
 * Body size: 411 bytes
 */


int could_not_allocate_space_to_read_db_into_memo(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  char *_Str;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  local_98 = FUN_14015baf0();
  pcVar2 = (char *)parameter_s_is_invalid(param_1,&local_90,param_2);
  if (pcVar2 == (char *)0x0) {
    FUN_1400fbed0("Could not allocate space to read DB into memory");
    iVar7 = -1;
  }
  else {
    FUN_1401264f0();
    FUN_14010a8e0();
    if (local_90 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      _Str = pcVar2;
      do {
        pcVar3 = strchr(_Str,10);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = pcVar2 + local_90;
        }
        else {
          *pcVar3 = '\0';
        }
        pcVar4 = strstr(_Str,"platform:");
        if (pcVar4 != (char *)0x0) {
          lVar5 = FUN_1400fc570("platform:");
          pcVar4 = pcVar4 + lVar5;
          pcVar6 = strchr(pcVar4,0x2c);
          if ((pcVar6 != (char *)0x0) && (pcVar6 + (2 - (longlong)pcVar4) < (char *)0x40)) {
            FUN_1400fcb10(local_88,pcVar4,pcVar6 + (1 - (longlong)pcVar4));
            iVar1 = FUN_1400fcff0(local_88,local_98,pcVar6 + (1 - (longlong)pcVar4));
            if (iVar1 == 0) {
              FUN_1401264f0();
              iVar1 = couldnt_parse_guid_from_s(_Str,1);
              FUN_140126530();
              iVar7 = iVar7 + (uint)(0 < iVar1);
            }
          }
        }
        _Str = pcVar3 + 1;
      } while (_Str < pcVar2 + local_90);
    }
    FUN_14010aa30();
    FUN_140126530();
    FUN_140160cf0(pcVar2);
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b8)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_b8);
}

