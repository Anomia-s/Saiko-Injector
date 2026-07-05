/**
 * Function: tls_client_version
 * Address:  140d4faa0
 * Signature: undefined tls_client_version(void)
 * Body size: 921 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls_client_version(undefined8 *param_1,longlong *param_2)

{
  char *_Str1;
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined1 local_180 [56];
  undefined1 local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140d4fabf;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_1b8;
  memset(local_148,0,0x100);
  uVar6 = 0;
  local_190 = (undefined1 *)0x0;
  if (((param_1 == (undefined8 *)0x0) || (param_2 == (longlong *)0x0)) || (*param_2 == 0))
  goto LAB_140d4fd0c;
  lVar5 = FUN_140b93540(param_2,"digest");
  if (lVar5 != 0) {
    local_190 = local_180;
    iVar4 = FUN_140b94f00(lVar5,&local_190,0x32);
    if (iVar4 == 0) goto LAB_140d4fd0c;
    lVar5 = FUN_140b93540(param_2,"digest-props");
    if (lVar5 != 0) {
      local_190 = local_148;
      iVar4 = FUN_140b94f00(lVar5,&local_190,0x100);
      if (iVar4 == 0) goto LAB_140d4fd0c;
    }
    FUN_140b719e0(param_1[3]);
    lVar5 = FUN_140b71980(*param_1,local_180,local_148);
    param_1[3] = lVar5;
    if (lVar5 == 0) goto LAB_140d4fd0c;
  }
  lVar5 = FUN_140b93540(param_2,"pad-mode");
  if (lVar5 != 0) {
    local_198 = local_198 & 0xffffffff00000000;
    if (*(int *)(lVar5 + 8) == 1) {
      iVar4 = FUN_140b93920(lVar5,&local_198);
      if (iVar4 == 0) goto LAB_140d4fd0c;
      iVar4 = (int)local_198;
LAB_140d4fc60:
      if (iVar4 == 6) goto LAB_140d4fd0c;
      if ((iVar4 == 4) && (param_1[3] == 0)) {
        lVar5 = FUN_140b71980(*param_1,&DAT_1413a6ffc,local_148);
        param_1[3] = lVar5;
        if (lVar5 == 0) goto LAB_140d4fd0c;
        iVar4 = (int)local_198;
      }
    }
    else {
      if ((*(int *)(lVar5 + 8) != 4) ||
         (_Str1 = *(char **)(lVar5 + 0x10), uVar1 = uVar6, uVar2 = uVar6, iVar3 = DAT_14151d2f0,
         _Str1 == (char *)0x0)) goto LAB_140d4fd0c;
      while (iVar4 = 0, iVar3 != 0) {
        iVar4 = strcmp(_Str1,*(char **)((longlong)&PTR_s_pkcs1_14151d2f8 + uVar1));
        if (iVar4 == 0) {
          local_198 = CONCAT44(local_198._4_4_,(&DAT_14151d2f0)[(longlong)(int)uVar2 * 4]);
          iVar4 = (&DAT_14151d2f0)[(longlong)(int)uVar2 * 4];
          goto LAB_140d4fc60;
        }
        uVar6 = uVar6 + 1;
        uVar1 = uVar6 * 0x10;
        uVar2 = (ulonglong)((int)uVar2 + 1);
        iVar3 = (&DAT_14151d2f0)[uVar6 * 4];
      }
    }
    *(int *)(param_1 + 2) = iVar4;
  }
  lVar5 = FUN_140b93540(param_2,"mgf1-digest");
  if (lVar5 != 0) {
    local_190 = local_180;
    iVar4 = FUN_140b94f00(lVar5,&local_190,0x32);
    if (iVar4 == 0) goto LAB_140d4fd0c;
    lVar5 = FUN_140b93540(param_2,"mgf1-properties");
    if (lVar5 == 0) {
      local_190 = (undefined1 *)0x0;
    }
    else {
      local_190 = local_148;
      iVar4 = FUN_140b94f00(lVar5,&local_190,0x100);
      if (iVar4 == 0) goto LAB_140d4fd0c;
    }
    FUN_140b719e0(param_1[4]);
    lVar5 = FUN_140b71980(*param_1,local_180,local_190);
    param_1[4] = lVar5;
    if (lVar5 == 0) goto LAB_140d4fd0c;
  }
  lVar5 = FUN_140b93540(param_2,"oaep-label");
  if (lVar5 != 0) {
    local_198 = 0;
    iVar4 = FUN_140b95120(lVar5,&local_198,0,&local_188);
    if (iVar4 == 0) goto LAB_140d4fd0c;
    FUN_140b8d990(param_1[5],"providers\\implementations\\asymciphers\\rsa_enc.c",0x241);
    param_1[5] = local_198;
    param_1[6] = local_188;
  }
  lVar5 = FUN_140b93540(param_2,"tls-client-version");
  if (lVar5 != 0) {
    iVar4 = FUN_140b93940(lVar5,&local_198);
    if (iVar4 == 0) goto LAB_140d4fd0c;
    *(int *)(param_1 + 7) = (int)local_198;
  }
  lVar5 = FUN_140b93540(param_2,"tls-negotiated-version");
  if (lVar5 != 0) {
    iVar4 = FUN_140b93940(lVar5,&local_198);
    if (iVar4 == 0) goto LAB_140d4fd0c;
    *(int *)((longlong)param_1 + 0x3c) = (int)local_198;
  }
  lVar5 = FUN_140b93540(param_2,"implicit-rejection");
  if ((lVar5 != 0) && (iVar4 = FUN_140b93940(lVar5,&local_198), iVar4 != 0)) {
    *(int *)(param_1 + 8) = (int)local_198;
  }
LAB_140d4fd0c:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_1b8);
}

