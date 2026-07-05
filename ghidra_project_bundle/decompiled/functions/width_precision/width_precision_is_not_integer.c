/**
 * Function: width_precision_is_not_integer
 * Address:  14001c4b0
 * Signature: undefined width_precision_is_not_integer(void)
 * Body size: 578 bytes
 */


/* WARNING: Removing unreachable block (ram,0x00014001c657) */

void width_precision_is_not_integer(int param_1,undefined4 *param_2,uint *param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  void *_Buf2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  char *pcVar6;
  uint *puVar7;
  ulonglong _Size;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 *local_68;
  void *local_48;
  
  local_48 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_98);
  if (param_1 == 0) goto LAB_14001c65b;
  local_68 = param_2;
  if (param_1 != 1) {
    uVar9 = *(ulonglong *)(param_4 + 8);
    if ((uVar9 >> 0x3e & 1) != 0) {
      lVar2 = *(longlong *)(param_4 + 0x10);
      lVar10 = *(longlong *)(lVar2 + -0x10 + (ulonglong)(-1 < (longlong)uVar9) * 8);
      if (lVar10 != 0) {
        _Buf2 = *(void **)param_3;
        uVar5 = *(ulonglong *)(param_3 + 2);
        puVar7 = (uint *)(*(longlong *)(lVar2 + (ulonglong)(-1 < (longlong)uVar9) * 8 + -0x18) + 8);
        do {
          pcVar6 = *(char **)(puVar7 + -2);
          sVar4 = strlen(pcVar6);
          _Size = uVar5;
          if (sVar4 < uVar5) {
            _Size = sVar4;
          }
          iVar3 = memcmp(pcVar6,_Buf2,_Size);
          if ((sVar4 == uVar5) && (iVar3 == 0)) {
            uVar1 = *puVar7;
            if (-1 < (int)uVar1) {
              if ((longlong)uVar9 < 0) {
                if ((int)uVar1 < (int)uVar9) {
                  puVar11 = (ulonglong *)(lVar2 + (ulonglong)uVar1 * 0x18);
                  uVar8 = (uint)puVar11[2];
                  goto joined_r0x00014001c630;
                }
              }
              else if ((uVar1 < 0xf) &&
                      (uVar9 = uVar9 >> ((char)uVar1 * '\x04' & 0x3fU), uVar8 = (uint)uVar9 & 0xf,
                      (uVar9 & 0xf) != 0)) {
                puVar11 = (ulonglong *)(lVar2 + (ulonglong)uVar1 * 0x10);
                goto LAB_14001c5e5;
              }
            }
            break;
          }
          puVar7 = puVar7 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
LAB_14001c632:
    pcVar6 = "argument not found";
    goto LAB_14001c6da;
  }
  uVar1 = *param_3;
  uVar9 = *(ulonglong *)(param_4 + 8);
  if ((longlong)uVar9 < 0) {
    if ((int)uVar1 < (int)uVar9) {
      puVar11 = (ulonglong *)((longlong)(int)uVar1 * 0x18 + *(longlong *)(param_4 + 0x10));
      uVar8 = (uint)puVar11[2];
joined_r0x00014001c630:
      if (uVar8 != 0) goto LAB_14001c5e5;
    }
    goto LAB_14001c632;
  }
  if ((0xe < uVar1) ||
     (uVar9 = uVar9 >> ((byte)(uVar1 << 2) & 0x3f), uVar8 = (uint)uVar9 & 0xf, (uVar9 & 0xf) == 0))
  goto LAB_14001c632;
  puVar11 = (ulonglong *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(param_4 + 0x10));
LAB_14001c5e5:
  if (0xe < uVar8 - 1) {
LAB_14001c6ca:
    pcVar6 = "width/precision is not integer";
    goto LAB_14001c6da;
  }
  uVar9 = *puVar11;
  switch(uVar8) {
  case 1:
    if (-1 < (int)uVar9) {
      uVar5 = uVar9 & 0xffffffff;
      break;
    }
    goto code_r0x00014001c6b4;
  case 2:
    uVar5 = uVar9 & 0xffffffff;
    break;
  case 3:
    uVar5 = 0xffffffffffffffff;
    if (-1 < (longlong)uVar9) {
      uVar5 = uVar9;
    }
    break;
  case 4:
    uVar5 = uVar9;
    break;
  default:
    goto LAB_14001c6ca;
  }
  if (uVar5 >> 0x1f == 0) {
    *local_68 = (int)uVar5;
LAB_14001c65b:
    if (DAT_1414ef3c0 == ((ulonglong)local_48 ^ (ulonglong)auStack_98)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0((ulonglong)local_48 ^ (ulonglong)auStack_98);
  }
code_r0x00014001c6b4:
  pcVar6 = "width/precision is out of range";
LAB_14001c6da:
  local_69 = 1;
  fmtquill::v12::format_error::format_error((format_error *)&stack0xffffffffffffffa0,pcVar6);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((format_error *)&stack0xffffffffffffffa0,(ThrowInfo *)&DAT_141412540);
}

