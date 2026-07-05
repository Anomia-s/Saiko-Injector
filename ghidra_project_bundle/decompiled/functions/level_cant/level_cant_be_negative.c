/**
 * Function: level_cant_be_negative
 * Address:  1406b0fd0
 * Signature: undefined level_cant_be_negative(void)
 * Body size: 731 bytes
 */


undefined8 level_cant_be_negative(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_3e8 [63];
  byte local_3a9 [9];
  char *local_3a0;
  char *local_398;
  longlong local_390;
  char *local_388;
  uint local_37c;
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_3e8;
  iVar2 = FUN_140473550(param_1,1);
  bVar9 = iVar2 == 9;
  lVar4 = param_1;
  if (bVar9) {
    lVar4 = FUN_140473f90(param_1,1);
  }
  pcVar5 = (char *)FUN_1406b75a0(param_1,bVar9 + '\x01',0,0);
  iVar2 = FUN_1406b78a0(param_1,bVar9 | 2U,param_1 == lVar4);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,bVar9 | 2U,"level can\'t be negative");
  }
  if (DAT_1416fe1b8 == '\x01') {
    FUN_1406b7dc0(param_1,lVar4,pcVar5,iVar2);
  }
  else {
    FUN_1406b80b0(param_1,&local_268);
    if (pcVar5 != (char *)0x0) {
      sVar6 = strlen(pcVar5);
      buffer_too_large(&local_268,pcVar5,sVar6);
      buffer_too_large(&local_268,"\n",1);
    }
    iVar3 = FUN_1406c0cc0(lVar4,iVar2,&DAT_1413415bf,&local_3a0);
    if (iVar3 != 0) {
      do {
        pcVar5 = local_388;
        if ((*local_398 != 'C') || (local_398[1] != '\0')) {
          if (local_390 != 0) {
            sVar6 = strlen(local_388);
            buffer_too_large(&local_268,pcVar5,sVar6);
          }
          if (0 < (int)local_37c) {
            lVar1 = 0;
            uVar7 = local_37c;
            do {
              lVar8 = lVar1;
              local_3a9[lVar8] = (byte)(uVar7 % 10) | 0x30;
              bVar9 = 9 < uVar7;
              uVar7 = uVar7 / 10;
              lVar1 = lVar8 + -1;
            } while (bVar9);
            if (local_260 <= local_268) {
              buffer_too_large(&local_268,1);
            }
            *local_268 = 0x3a;
            local_268 = local_268 + 1;
            buffer_too_large(&local_268,local_3a9 + lVar8,-(lVar8 + -1));
          }
          if (local_3a0 != (char *)0x0) {
            buffer_too_large(&local_268," function ",10);
            pcVar5 = local_3a0;
            sVar6 = strlen(local_3a0);
            buffer_too_large(&local_268,pcVar5,sVar6);
          }
          if (local_260 <= local_268) {
            buffer_too_large(&local_268,1);
          }
          *local_268 = 10;
          local_268 = local_268 + 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_1406c0cc0(lVar4,iVar2,&DAT_1413415bf,&local_3a0);
      } while (iVar3 != 0);
    }
    FUN_1406b82d0(&local_268);
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_3e8)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_3e8);
}

