/**
 * Function: couldnt_parse_name_from_s
 * Address:  14010bf10
 * Signature: undefined couldnt_parse_name_from_s(void)
 * Body size: 985 bytes
 */


undefined4 *
couldnt_parse_name_from_s(undefined4 *param_1,char *param_2,undefined1 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  void *_Dst;
  longlong lVar9;
  char *_Str;
  char *pcVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  size_t _Size;
  undefined *puVar14;
  undefined1 auStack_98 [32];
  ushort *local_78;
  uint local_70;
  char *local_68;
  ushort local_5a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  httplib::ClientImpl::vfunction4();
  pcVar7 = strchr(param_2,0x2c);
  if (pcVar7 == (char *)0x0) {
LAB_14010c02e:
    pcVar7 = "Couldn\'t parse name from %s";
LAB_14010c035:
    FUN_1400fbed0(pcVar7,param_2);
  }
  else {
    pcVar8 = strchr(pcVar7 + 1,0x2c);
    if (pcVar8 == (char *)0x0) goto LAB_14010c02e;
    _Size = (longlong)pcVar8 - (longlong)pcVar7;
    _Dst = (void *)FUN_140160c40(_Size);
    if (_Dst == (void *)0x0) goto LAB_14010c02e;
    memcpy(_Dst,pcVar7 + 1,_Size);
    *(undefined1 *)((longlong)_Dst + (_Size - 1)) = 0;
    pcVar7 = strchr(param_2,0x2c);
    if ((pcVar7 == (char *)0x0) || (pcVar7 = strchr(pcVar7 + 1,0x2c), pcVar7 == (char *)0x0)) {
      FUN_140160cf0(_Dst);
      pcVar7 = "Couldn\'t parse %s";
      goto LAB_14010c035;
    }
    do {
      pcVar8 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      iVar5 = FUN_14016e5a0((int)*pcVar8);
    } while (iVar5 != 0);
    pcVar7 = (char *)FUN_1400fcda0(pcVar7);
    lVar9 = FUN_1400fc570(pcVar7);
    if (lVar9 == 0) {
      *pcVar7 = '\0';
    }
    else {
      do {
        iVar5 = FUN_14016e5a0((int)pcVar7[lVar9 + -1]);
        if (iVar5 == 0) goto LAB_14010c027;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      lVar9 = 0;
LAB_14010c027:
      pcVar7[lVar9] = '\0';
    }
    local_58 = *param_1;
    uStack_54 = param_1[1];
    uStack_50 = param_1[2];
    uStack_4c = param_1[3];
    local_78 = &local_5a;
    FUN_14012c7b0(&local_58,0,0,0);
    if (local_5a == 0) {
      pcVar8 = strstr(pcVar7,"crc:");
      if (pcVar8 != (char *)0x0) {
        lVar6 = strtol(pcVar8 + 4,(char **)0x0,0x10);
        local_5a = (ushort)lVar6;
        if (local_5a != 0) {
          FUN_14012d0f0(param_1,lVar6);
        }
      }
    }
    else {
      _Str = strstr(pcVar7,"crc:");
      puVar14 = &DAT_1413a2ad6;
      pcVar8 = "";
      if (_Str != (char *)0x0) {
        pcVar10 = strchr(_Str,0x2c);
        pcVar8 = "";
        if (pcVar10 != (char *)0x0) {
          pcVar8 = pcVar10 + 1;
        }
        *_Str = '\0';
      }
      lVar9 = FUN_1400fc570(pcVar7);
      if ((lVar9 != 0) && (puVar14 = &DAT_1413944a3, pcVar7[lVar9 + -1] == ',')) {
        puVar14 = &DAT_1413a2ad6;
      }
      local_70 = (uint)local_5a;
      local_78 = (ushort *)&DAT_14136c4ed;
      local_68 = pcVar8;
      iVar5 = FUN_1400fd7b0(&local_58,"%s%s%s%.4x,%s",pcVar7,puVar14);
      if (-1 < iVar5) {
        FUN_140160cf0(pcVar7);
        pcVar7 = (char *)CONCAT44(uStack_54,local_58);
      }
    }
    FUN_14010a8e0();
    local_58 = *param_1;
    uStack_54 = param_1[1];
    uStack_50 = param_1[2];
    uStack_4c = param_1[3];
    puVar11 = (undefined4 *)FUN_14010f740(&local_58,1,1);
    if (puVar11 != (undefined4 *)0x0) {
      if (param_4 < (int)puVar11[8]) {
        FUN_140160cf0(_Dst);
        FUN_140160cf0(pcVar7);
      }
      else {
        FUN_140160cf0(*(undefined8 *)(puVar11 + 4));
        *(void **)(puVar11 + 4) = _Dst;
        FUN_140160cf0(*(undefined8 *)(puVar11 + 6));
        *(char **)(puVar11 + 6) = pcVar7;
        puVar11[8] = param_4;
      }
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      httplib::ClientImpl::vfunction4();
      lVar9 = DAT_141525528;
      iVar5 = *(int *)(DAT_141525528 + 0x18);
      lVar12 = FUN_140160cc0(*(undefined8 *)(DAT_141525528 + 0x20),(longlong)iVar5 * 8 + 8);
      if (lVar12 != 0) {
        *(longlong *)(lVar9 + 0x20) = lVar12;
        *(undefined4 **)(lVar12 + (longlong)iVar5 * 8) = puVar11;
        *(int *)(lVar9 + 0x18) = iVar5 + 1;
      }
LAB_14010c2cf:
      FUN_14010aa30();
      goto LAB_14010c03f;
    }
    puVar11 = (undefined4 *)FUN_140160c40(0x30);
    if (puVar11 != (undefined4 *)0x0) {
      if (local_5a != 0) {
        FUN_14012d0f0(param_1,0);
      }
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *puVar11 = *param_1;
      puVar11[1] = uVar2;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
      *(void **)(puVar11 + 4) = _Dst;
      *(char **)(puVar11 + 6) = pcVar7;
      *(undefined8 *)(puVar11 + 10) = 0;
      puVar11[8] = param_4;
      puVar1 = DAT_141525500;
      puVar13 = puVar11;
      if (DAT_141525500 != (undefined4 *)0x0) {
        do {
          puVar13 = puVar1;
          puVar1 = *(undefined4 **)(puVar13 + 10);
        } while (puVar1 != (undefined4 *)0x0);
        *(undefined4 **)(puVar13 + 10) = puVar11;
        puVar13 = DAT_141525500;
      }
      DAT_141525500 = puVar13;
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 0;
      }
      goto LAB_14010c2cf;
    }
    FUN_14010aa30();
    FUN_140160cf0(_Dst);
    FUN_140160cf0(pcVar7);
  }
  puVar11 = (undefined4 *)0x0;
LAB_14010c03f:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_98);
  }
  return puVar11;
}

