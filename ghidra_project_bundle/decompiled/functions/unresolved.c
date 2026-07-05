/**
 * Function: unresolved
 * Address:  1401b5250
 * Signature: undefined unresolved(void)
 * Body size: 405 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void unresolved(longlong *param_1,char *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  HANDLE pvVar4;
  char *_Str1;
  longlong lVar5;
  ulonglong _Size;
  longlong lVar6;
  byte bVar7;
  undefined1 auStack_20d8 [40];
  longlong local_20b0;
  undefined4 local_20a8 [19];
  uint local_205c;
  undefined4 local_2058;
  undefined1 local_2054 [8204];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_20d8;
  lVar6 = *param_1;
  if (lVar6 != 0) {
    if (DAT_141527828 == 0) {
      lVar5 = 1;
      bVar7 = 0;
      local_20b0 = lVar6;
      do {
        _Str1 = "[unresolved]";
        bVar2 = bVar7 & 1;
        bVar7 = 1;
        if (bVar2 == 0) {
          lVar1 = param_1[lVar5];
          pvVar4 = GetCurrentProcess();
          local_20a8[0] = 0x58;
          local_2058 = 0x2000;
          iVar3 = SymFromAddr(pvVar4,lVar1,0,local_20a8);
          bVar7 = DAT_141527828;
          if (iVar3 == 0) {
            DAT_141527830 = 0;
          }
          else {
            _Size = (ulonglong)local_205c;
            memcpy(&DAT_141527830,local_2054,_Size);
            (&DAT_141527830)[_Size] = 0;
          }
          _Str1 = &DAT_141527830;
        }
        iVar3 = strcmp(_Str1,param_2);
        if (iVar3 == 0) {
          lVar6 = local_20b0 - lVar5;
          goto joined_r0x0001401b5390;
        }
        lVar1 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar1 - lVar6 != 1);
    }
    else {
      iVar3 = strcmp("[unresolved]",param_2);
      if (iVar3 == 0) {
        lVar5 = 1;
        lVar6 = lVar6 + -1;
joined_r0x0001401b5390:
        if (lVar6 != 0) {
          memmove(param_1 + 1,param_1 + 1 + lVar5,lVar6 * 8);
          *param_1 = lVar6;
        }
      }
    }
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_20d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_20d8);
  }
  return;
}

