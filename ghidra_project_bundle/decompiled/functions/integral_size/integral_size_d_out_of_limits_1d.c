/**
 * Function: integral_size_d_out_of_limits_1d
 * Address:  1406af4f0
 * Signature: undefined integral_size_d_out_of_limits_1d(void)
 * Body size: 1017 bytes
 */


undefined8 integral_size_d_out_of_limits_1d(undefined8 *param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar2 = (char *)*param_2;
  *param_2 = (longlong)(pcVar2 + 1);
  cVar1 = *pcVar2;
  *param_3 = 0;
  switch(cVar1) {
  case ' ':
    return 8;
  case '!':
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(*param_1,"invalid format option \'%c\'",(int)cVar1);
  case '<':
  case '=':
    *(undefined4 *)(param_1 + 1) = 1;
    return 8;
  case '>':
    *(undefined4 *)(param_1 + 1) = 0;
    return 8;
  case 'B':
    *param_3 = 1;
    return 1;
  case 'H':
    *param_3 = 2;
    return 1;
  case 'I':
    iVar4 = 4;
    if (0xfffffff5 < (int)*(char *)*param_2 - 0x3aU) {
      iVar4 = 0;
      pcVar2 = (char *)*param_2;
      do {
        pcVar5 = pcVar2 + 1;
        *param_2 = (longlong)pcVar5;
        iVar3 = (int)*pcVar2 + iVar4 * 10;
        iVar4 = iVar3 + -0x30;
        if (9 < (int)*pcVar5 - 0x30U) break;
        pcVar2 = pcVar5;
      } while (iVar4 < 0xccccccc);
      if ((0x40000000 < iVar4) || ((int)*pcVar5 - 0x30U < 10)) goto LAB_1406af86c;
      if (iVar3 - 0x41U < 0xfffffff0) {
LAB_1406af891:
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(*param_1,"integral size (%d) out of limits [1,%d]",iVar4,0x10);
      }
    }
    *param_3 = iVar4;
    return 1;
  case 'J':
  case 'T':
    *param_3 = 4;
    return 1;
  case 'L':
    *param_3 = 8;
    return 1;
  case 'X':
    return 7;
  case 'b':
    *param_3 = 1;
    return 0;
  case 'c':
    if ((int)*(char *)*param_2 - 0x3aU < 0xfffffff6) {
      *param_3 = -1;
    }
    else {
      iVar4 = 0;
      pcVar2 = (char *)*param_2;
      do {
        pcVar5 = pcVar2 + 1;
        *param_2 = (longlong)pcVar5;
        iVar4 = (int)*pcVar2 + iVar4 * 10 + -0x30;
        if (9 < (int)*pcVar5 - 0x30U) break;
        pcVar2 = pcVar5;
      } while (iVar4 < 0xccccccc);
      if ((0x40000000 < iVar4) || ((int)*pcVar5 - 0x30U < 10)) goto LAB_1406af86c;
      *param_3 = iVar4;
      if (iVar4 != -1) {
        return 3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(*param_1,"missing size for format option \'c\'");
  case 'd':
  case 'n':
    *param_3 = 8;
    return 2;
  case 'f':
    *param_3 = 4;
    return 2;
  case 'h':
    *param_3 = 2;
    return 0;
  case 'i':
    iVar4 = 4;
    if (0xfffffff5 < (int)*(char *)*param_2 - 0x3aU) {
      iVar4 = 0;
      pcVar2 = (char *)*param_2;
      do {
        pcVar5 = pcVar2 + 1;
        *param_2 = (longlong)pcVar5;
        iVar3 = (int)*pcVar2 + iVar4 * 10;
        iVar4 = iVar3 + -0x30;
        if (9 < (int)*pcVar5 - 0x30U) break;
        pcVar2 = pcVar5;
      } while (iVar4 < 0xccccccc);
      if ((0x40000000 < iVar4) || ((int)*pcVar5 - 0x30U < 10)) goto LAB_1406af86c;
      if (iVar3 - 0x41U < 0xfffffff0) goto LAB_1406af891;
    }
    *param_3 = iVar4;
    return 0;
  case 'j':
    *param_3 = 4;
    return 0;
  case 'l':
    *param_3 = 8;
    return 0;
  case 's':
    iVar4 = 4;
    if (0xfffffff5 < (int)*(char *)*param_2 - 0x3aU) {
      iVar4 = 0;
      pcVar2 = (char *)*param_2;
      do {
        pcVar5 = pcVar2 + 1;
        *param_2 = (longlong)pcVar5;
        iVar3 = (int)*pcVar2 + iVar4 * 10;
        iVar4 = iVar3 + -0x30;
        if (9 < (int)*pcVar5 - 0x30U) break;
        pcVar2 = pcVar5;
      } while (iVar4 < 0xccccccc);
      if ((0x40000000 < iVar4) || ((int)*pcVar5 - 0x30U < 10)) goto LAB_1406af86c;
      if (iVar3 - 0x41U < 0xfffffff0) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(*param_1,"integral size (%d) out of limits [1,%d]",iVar4,0x10);
      }
    }
    *param_3 = iVar4;
    return 4;
  case 'x':
    *param_3 = 1;
    return 6;
  case 'z':
    return 5;
  }
  iVar4 = 8;
  if (0xfffffff5 < (int)*(char *)*param_2 - 0x3aU) {
    iVar4 = 0;
    pcVar2 = (char *)*param_2;
    do {
      pcVar5 = pcVar2 + 1;
      *param_2 = (longlong)pcVar5;
      iVar3 = (int)*pcVar2 + iVar4 * 10;
      iVar4 = iVar3 + -0x30;
      if (9 < (int)*pcVar5 - 0x30U) break;
      pcVar2 = pcVar5;
    } while (iVar4 < 0xccccccc);
    if ((0x40000000 < iVar4) || ((int)*pcVar5 - 0x30U < 10)) {
LAB_1406af86c:
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(*param_1,"size specifier is too large");
    }
    if (iVar3 - 0x41U < 0xfffffff0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(*param_1,"integral size (%d) out of limits [1,%d]",iVar4,0x10);
    }
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return 8;
}

