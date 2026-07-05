/**
 * Function: couldnt_parse_guid_from_s
 * Address:  14010af80
 * Signature: undefined couldnt_parse_guid_from_s(void)
 * Body size: 1008 bytes
 */


undefined8 couldnt_parse_guid_from_s(char *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 *_Dst;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  size_t _Size;
  bool bVar14;
  undefined1 auStack_108 [47];
  char local_d9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_108;
  local_d9 = '\0';
  httplib::ClientImpl::vfunction4();
  if (param_1 == (char *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","mappingString");
    uVar13 = 0xffffffff;
    goto LAB_14010b1b7;
  }
  pcVar5 = strstr(param_1,"hint:");
  if (pcVar5 == (char *)0x0) {
LAB_14010b0bd:
    pcVar5 = (char *)0x0;
  }
  else {
    lVar6 = FUN_1400fc570("hint:");
    cVar1 = pcVar5[lVar6];
    lVar6 = (ulonglong)(cVar1 == '!') + lVar6;
    uVar7 = 0;
    cVar2 = pcVar5[lVar6];
    while ((((cVar2 != '\0' && (cVar2 != ',')) && (cVar2 != ':')) && (uVar7 < 0x7f))) {
      *(char *)((longlong)&local_c8 + uVar7) = cVar2;
      uVar7 = uVar7 + 1;
      cVar2 = (pcVar5 + lVar6)[uVar7];
    }
    *(undefined1 *)((longlong)&local_c8 + uVar7) = 0;
    if ((pcVar5[uVar7 + lVar6] == ':') && (pcVar5[uVar7 + 1 + lVar6] == '=')) {
      iVar3 = atoi(pcVar5 + uVar7 + lVar6 + 2);
      uVar7 = CONCAT71((int7)((ulonglong)pcVar5 >> 8),iVar3 != 0);
    }
    else {
      uVar7 = 0;
    }
    iVar3 = FUN_1400fd200(&local_c8,"SDL_GAMECONTROLLER_USE_BUTTON_LABELS");
    if (iVar3 != 0) {
      cVar2 = FUN_1401106d0(&local_c8,uVar7 & 0xffffffff);
      uVar13 = 0;
      if ((cVar1 == '!') == (bool)cVar2) goto LAB_14010b1b7;
      goto LAB_14010b0bd;
    }
    if (cVar1 == '!') goto LAB_14010b0bd;
    lVar6 = FUN_1400fc570(param_1);
    pcVar5 = (char *)FUN_140160c40(lVar6 + 2);
    if (pcVar5 == (char *)0x0) {
      uVar13 = 0xffffffff;
      goto LAB_14010b1b7;
    }
    FUN_1400fcb10(pcVar5,param_1,lVar6 + 2);
    pcVar8 = strstr(pcVar5,"a:");
    pcVar9 = strstr(pcVar5,"b:");
    pcVar10 = strstr(pcVar5,"x:");
    pcVar11 = strstr(pcVar5,"y:");
    pcVar12 = strstr(pcVar5,"hint:SDL_GAMECONTROLLER_USE_BUTTON_LABELS");
    if (pcVar8 != (char *)0x0) {
      *pcVar8 = 'b';
    }
    if (pcVar9 != (char *)0x0) {
      *pcVar9 = 'a';
    }
    if (pcVar10 != (char *)0x0) {
      *pcVar10 = 'y';
    }
    if (pcVar11 != (char *)0x0) {
      *pcVar11 = 'x';
    }
    param_1 = pcVar5;
    if (pcVar12 != (char *)0x0) {
      lVar6 = FUN_1400fc570(pcVar12 + 5);
      memmove(pcVar12 + 6,pcVar12 + 5,lVar6 + 1);
      pcVar12[5] = '!';
    }
  }
  pcVar8 = strchr(param_1,0x2c);
  if (pcVar8 == (char *)0x0) {
LAB_14010b195:
    FUN_1400fbed0("Couldn\'t parse GUID from %s",param_1);
LAB_14010b1a4:
    uVar13 = 0xffffffff;
  }
  else {
    _Size = (longlong)pcVar8 - (longlong)param_1;
    _Dst = (undefined8 *)FUN_140160c40(_Size + 1);
    if (_Dst == (undefined8 *)0x0) goto LAB_14010b195;
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
    lVar6 = FUN_1400fc570(_Dst);
    if (lVar6 == 0x20) {
      iVar3 = FUN_1400fc560((undefined8 *)((longlong)_Dst + 0x14),"504944564944",0xc);
      if (iVar3 == 0) {
        *(undefined8 *)((longlong)_Dst + 0x14) = 0x3030303030303030;
        *(undefined4 *)((longlong)_Dst + 0x1c) = 0x30303030;
        *(undefined4 *)(_Dst + 2) = *(undefined4 *)((longlong)_Dst + 4);
        *(undefined4 *)(_Dst + 1) = *(undefined4 *)_Dst;
        *_Dst = 0x3030303030303330;
      }
    }
    iVar3 = FUN_1400fd210(_Dst,"default");
    if (iVar3 == 0) {
      bVar14 = false;
    }
    else {
      iVar4 = FUN_1400fd210(_Dst,"xinput");
      bVar14 = iVar4 == 0;
    }
    FUN_14015a390(&local_c8,_Dst);
    FUN_140160cf0(_Dst);
    local_d8 = local_c8;
    uStack_d4 = uStack_c4;
    uStack_d0 = uStack_c0;
    uStack_cc = uStack_bc;
    lVar6 = couldnt_parse_name_from_s(&local_d8,param_1,&local_d9,param_2);
    if (lVar6 == 0) goto LAB_14010b1a4;
    uVar13 = 0;
    if (local_d9 == '\0') {
      if (iVar3 == 0) {
        uVar13 = 1;
        DAT_141525518 = lVar6;
      }
      else {
        uVar13 = 1;
        if (bVar14) {
          DAT_141525530 = lVar6;
        }
      }
    }
  }
  if (pcVar5 != (char *)0x0) {
    FUN_140160cf0(pcVar5);
  }
LAB_14010b1b7:
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_108)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_108);
}

