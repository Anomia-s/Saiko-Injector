/**
 * Function: cannot_add_wildcards
 * Address:  1403b32d0
 * Signature: undefined cannot_add_wildcards(void)
 * Body size: 341 bytes
 */


char * cannot_add_wildcards(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    pcVar2 = "components cannot be 0 (is the component registered?)";
  }
  else {
    pcVar2 = "cannot add wildcards";
    if ((param_2 != 0x10e) && (param_2 != 0x10f)) {
      uVar4 = param_2 & 0xf000000000000000;
      if (uVar4 == 0x9000000000000000 || uVar4 == 0x8000000000000000) {
        uVar3 = (uint)(param_2 >> 0x20) & 0xfffffff;
        if (uVar4 == 0x9000000000000000) {
          if (uVar3 == 0x10f || uVar3 == 0x10e) {
            return pcVar2;
          }
        }
        else {
          if ((param_2 & 0xffffffff) == 0x10f) {
            return pcVar2;
          }
          if (uVar3 == 0x10e) {
            return pcVar2;
          }
          if ((param_2 & 0xffffffff) == 0x10e) {
            return pcVar2;
          }
          if (uVar3 == 0x10f) {
            return pcVar2;
          }
        }
      }
      if ((param_2 & 0x8000000000000000) == 0) {
        if ((param_2 & 0x9000000000000000) == 0) {
          if ((0xfffffffffffffff < param_2) &&
             (cVar1 = FUN_1400bc8d0(param_1,param_2 & 0xfffffffffffffff), cVar1 == '\0')) {
            redabortreset_bluesreset
                      (7,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/id.c",
                       0x9f,0);
            (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        else if ((param_2 & 0xfffffff00000000) == 0) {
          return "invalid value pair: first element is 0 (is the relationship registered?)";
        }
      }
      else {
        if ((param_2 & 0xfffffffffffffff) == 0) {
          return "invalid pair: both elements are 0";
        }
        bVar5 = (param_2 & 0xfffffff00000000) == 0;
        pcVar2 = "invalid pair: second element is 0";
        if (bVar5) {
          pcVar2 = "invalid pair: first element is 0 (is the relationship registered?)";
        }
        if (bVar5 || (int)param_2 == 0) {
          return pcVar2;
        }
      }
      pcVar2 = (char *)0x0;
    }
  }
  return pcVar2;
}

