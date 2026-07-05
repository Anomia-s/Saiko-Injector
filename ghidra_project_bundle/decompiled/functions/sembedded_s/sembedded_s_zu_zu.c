/**
 * Function: sembedded_s_zu_zu
 * Address:  1406dc2d0
 * Signature: undefined sembedded_s_zu_zu(void)
 * Body size: 837 bytes
 */


undefined8
sembedded_s_zu_zu(code *param_1,undefined8 param_2,char *param_3,longlong param_4,undefined1 param_5
                 )

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  char *_Str;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong _Size;
  undefined1 auStack_2a8 [32];
  char *local_288;
  longlong local_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  code *local_270;
  char *local_268;
  undefined1 *puStack_260;
  longlong local_258;
  ulonglong uStack_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_2a8;
  uVar7 = 0xffffffff;
  if ((param_4 == 0) || (puVar2 = *(undefined8 **)(param_4 + 8), puVar2 == (undefined8 *)0x0))
  goto LAB_1406dc54e;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = (char *)0x0;
  puStack_260 = (undefined1 *)0x0;
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    lVar3 = puVar2[2];
    if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
       (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x18), lVar4 == 0)) goto LAB_1406dc54e;
    local_258 = lVar4 + *(longlong *)(lVar3 + 0x10);
    uStack_250 = (ulonglong)*(uint *)(puVar2[2] + 0x18);
    pcVar10 = "unnamed";
    if ((char *)*puVar2 != (char *)0x0) {
      pcVar10 = (char *)*puVar2;
    }
    local_270 = param_1;
    _Str = malloc(0x1000);
    if (_Str != (char *)0x0) {
      pcVar9 = (char *)FUN_140221650();
      sVar8 = strlen(pcVar9);
      iVar6 = strncmp(param_3,pcVar9,sVar8);
      if (iVar6 == 0) {
        for (param_3 = param_3 + sVar8; (*param_3 == '\\' || (*param_3 == '/'));
            param_3 = param_3 + 1) {
        }
      }
      sVar8 = strlen(param_3);
      if (sVar8 < 0x1000) {
        memcpy(_Str,param_3,sVar8 + 1);
        lVar3 = puVar2[2];
        local_280 = *(longlong *)(lVar3 + 0x10);
        uStack_278 = *(undefined4 *)(lVar3 + 0x18);
        uStack_274 = *(undefined4 *)(lVar3 + 0x1c);
        local_288 = pcVar10;
        FUN_1400a3c00(local_248,0x200,"%s#embedded:%s:%zu:%zu",_Str);
        free(_Str);
        puStack_260 = local_248;
        uVar7 = (*local_270)(param_2,&local_268,param_5);
        goto LAB_1406dc54e;
      }
      goto LAB_1406dc543;
    }
  }
  else {
    _Str = malloc(0x3000);
    if (_Str != (char *)0x0) {
      pcVar9 = (char *)0x0;
      for (pcVar10 = param_3;
          ((cVar1 = *pcVar10, pcVar11 = pcVar10, cVar1 == '/' || (cVar1 == '\\')) ||
          (pcVar11 = pcVar9, cVar1 != '\0')); pcVar10 = pcVar10 + 1) {
        pcVar9 = pcVar11;
      }
      if (pcVar9 == (char *)0x0) {
        *_Str = '.';
        _Size = 1;
      }
      else {
        _Size = (longlong)pcVar9 - (longlong)param_3;
        if (0xfff < _Size) goto LAB_1406dc543;
        memcpy(_Str,param_3,_Size);
      }
      pcVar10 = _Str + 0x1000;
      _Str[_Size] = '\0';
      sVar8 = strlen(_Str);
      local_288 = "";
      if (((sVar8 != 0) && (_Str[sVar8 - 1] != '/')) && (local_288 = "/", _Str[sVar8 - 1] == '\\'))
      {
        local_288 = "";
      }
      local_280 = lVar3;
      uVar5 = FUN_1400a3c00(pcVar10,0x1000,"%s%s%s",_Str);
      if (uVar5 < 0x1000) {
        pcVar9 = (char *)FUN_140221650();
        sVar8 = strlen(pcVar9);
        iVar6 = strncmp(pcVar10,pcVar9,sVar8);
        if (iVar6 == 0) {
          for (pcVar10 = pcVar10 + sVar8; (*pcVar10 == '\\' || (*pcVar10 == '/'));
              pcVar10 = pcVar10 + 1) {
          }
        }
        sVar8 = strlen(pcVar10);
        if (sVar8 < 0x1000) {
          memcpy(_Str + 0x2000,pcVar10,sVar8 + 1);
          local_268 = _Str + 0x2000;
          uVar7 = (*param_1)(param_2,&local_268,param_5);
          free(_Str);
          goto LAB_1406dc54e;
        }
      }
LAB_1406dc543:
      free(_Str);
    }
  }
  uVar7 = 0xffffffff;
LAB_1406dc54e:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_2a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_2a8);
  }
  return uVar7;
}

