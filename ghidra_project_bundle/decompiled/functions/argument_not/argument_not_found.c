/**
 * Function: argument_not_found
 * Address:  14001bba0
 * Signature: undefined argument_not_found(void)
 * Body size: 271 bytes
 */


int argument_not_found(longlong param_1,undefined8 *param_2)

{
  void *_Buf2;
  ulonglong uVar1;
  char *_Str;
  int iVar2;
  size_t sVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  void *local_38;
  
  local_38 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_78);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((*(ulonglong *)(param_1 + 0x20) >> 0x3e & 1) != 0) {
    uVar4 = (ulonglong)(-1 < (longlong)*(ulonglong *)(param_1 + 0x20));
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + -0x10 + uVar4 * 8);
    if (lVar6 != 0) {
      _Buf2 = (void *)*param_2;
      uVar1 = param_2[1];
      piVar5 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 8 + -0x18) + 8);
      do {
        _Str = *(char **)(piVar5 + -2);
        sVar3 = strlen(_Str);
        uVar4 = uVar1;
        if (sVar3 < uVar1) {
          uVar4 = sVar3;
        }
        iVar2 = memcmp(_Str,_Buf2,uVar4);
        if ((sVar3 == uVar1) && (iVar2 == 0)) {
          if (-1 < *piVar5) {
            if (DAT_1414ef3c0 == ((ulonglong)local_38 ^ (ulonglong)auStack_78)) {
              return *piVar5;
            }
                    /* WARNING: Subroutine does not return */
            FUN_140b65db0((ulonglong)local_38 ^ (ulonglong)auStack_78);
          }
          break;
        }
        piVar5 = piVar5 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  local_51 = 1;
  fmtquill::v12::format_error::format_error
            ((format_error *)&stack0xffffffffffffffb0,"argument not found");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((format_error *)&stack0xffffffffffffffb0,(ThrowInfo *)&DAT_141412540);
}

