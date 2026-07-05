/**
 * Function: too_many_captures
 * Address:  1406ae240
 * Signature: undefined too_many_captures(void)
 * Body size: 938 bytes
 */


int too_many_captures(undefined8 param_1,int param_2)

{
  void *_Buf1;
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  void *_Buf;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  int local_28c;
  ulonglong local_288;
  int local_280;
  undefined4 uStack_27c;
  undefined4 local_278 [2];
  longlong local_270;
  ulonglong local_268;
  char *local_260;
  undefined8 local_258;
  int local_250;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_2b8;
  lVar5 = FUN_1406b7610(param_1,1,&local_280);
  pcVar6 = (char *)FUN_1406b7610(param_1,2,&local_288);
  iVar4 = local_280;
  iVar3 = FUN_1406b78a0(param_1,3,1);
  uVar10 = iVar3 >> 0x1f & iVar4 + 1U;
  uVar11 = uVar10 + iVar3;
  uVar14 = 1;
  if ((uVar11 == 0 || SCARRY4(uVar10,iVar3) != (int)uVar11 < 0) ||
     (uVar14 = uVar11, (int)uVar11 <= local_280 + 1)) {
    if (param_2 == 0) {
      lVar9 = (ulonglong)uVar14 + lVar5;
      cVar1 = *pcVar6;
      uVar2 = local_288;
joined_r0x0001406ae3d5:
      uVar15 = lVar9 - 1;
      local_270 = lVar5;
      local_258 = param_1;
      if (cVar1 == '^') {
        local_288 = uVar2 - 1;
        local_278[0] = 200;
        local_268 = CONCAT44(uStack_27c,local_280) + lVar5;
        local_260 = pcVar6 + uVar2;
        local_250 = 0;
        lVar9 = malformed_pattern_missing_arguments_to_b(local_278,uVar15,pcVar6 + 1);
        if (lVar9 != 0) {
LAB_1406ae42d:
          iVar4 = local_250;
          if (param_2 == 0) {
            iVar3 = local_250 + (uint)(local_250 == 0);
            stack_overflow_s(local_258,iVar3,"too many captures");
            if (0 < iVar3) {
              iVar12 = 0;
              do {
                invalid_capture_index(local_278,iVar12,uVar15,lVar9);
                iVar12 = iVar12 + 1;
                iVar4 = iVar3;
              } while (iVar3 != iVar12);
            }
          }
          else {
            FUN_140474150(param_1,((int)uVar15 - (int)lVar5) + 1);
            FUN_140474150(param_1,(int)lVar9 - (int)lVar5);
            iVar4 = local_250;
            stack_overflow_s(local_258,local_250,"too many captures");
            if (0 < iVar4) {
              iVar3 = 0;
              do {
                invalid_capture_index(local_278,iVar3,0,0);
                iVar3 = iVar3 + 1;
              } while (iVar4 != iVar3);
            }
            iVar4 = iVar4 + 2;
          }
          goto LAB_1406ae527;
        }
      }
      else {
        local_278[0] = 200;
        local_268 = CONCAT44(uStack_27c,local_280) + lVar5;
        local_260 = pcVar6 + uVar2;
        do {
          local_250 = 0;
          lVar9 = malformed_pattern_missing_arguments_to_b(local_278,uVar15,pcVar6);
          if (lVar9 != 0) goto LAB_1406ae42d;
          bVar16 = uVar15 < local_268;
          uVar15 = uVar15 + 1;
        } while (bVar16);
      }
    }
    else {
      local_298 = lVar5;
      local_28c = param_2;
      iVar4 = FUN_140473af0(param_1,4);
      uVar2 = local_288;
      if (iVar4 == 0) {
        uVar15 = 0;
        do {
          pcVar7 = strpbrk(pcVar6 + uVar15,"^$*+?.([%-");
          if (pcVar7 != (char *)0x0) {
            lVar9 = (ulonglong)uVar14 + local_298;
            cVar1 = *pcVar6;
            lVar5 = local_298;
            param_2 = local_28c;
            goto joined_r0x0001406ae3d5;
          }
          sVar8 = strlen(pcVar6 + uVar15);
          uVar15 = uVar15 + sVar8 + 1;
        } while (uVar15 <= uVar2);
      }
      pvVar13 = (void *)(local_298 + (ulonglong)uVar14 + -1);
      if (uVar2 == 0) {
LAB_1406ae5b5:
        iVar4 = (int)pvVar13 - (int)local_298;
        FUN_140474150(param_1,iVar4 + 1);
        FUN_140474150(param_1,iVar4 + (int)local_288);
        iVar4 = 2;
        goto LAB_1406ae527;
      }
      uVar15 = (CONCAT44(uStack_27c,local_280) - (ulonglong)uVar14) + 1;
      if (uVar2 <= uVar15) {
        sVar8 = uVar15 - (uVar2 - 1);
        if (sVar8 != 0) {
          cVar1 = *pcVar6;
          _Buf = pvVar13;
          do {
            pvVar13 = memchr(_Buf,(int)cVar1,sVar8);
            if (pvVar13 == (void *)0x0) break;
            _Buf1 = (void *)((longlong)pvVar13 + 1);
            iVar4 = memcmp(_Buf1,pcVar6 + 1,uVar2 - 1);
            if (iVar4 == 0) goto LAB_1406ae5b5;
            sVar8 = (longlong)_Buf + (sVar8 - (longlong)_Buf1);
            _Buf = _Buf1;
          } while (sVar8 != 0);
        }
      }
    }
  }
  FUN_140474110(param_1);
  iVar4 = 1;
LAB_1406ae527:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_2b8)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_2b8);
}

