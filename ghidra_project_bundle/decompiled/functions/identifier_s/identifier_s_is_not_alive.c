/**
 * Function: identifier_s_is_not_alive
 * Address:  140395370
 * Signature: undefined identifier_s_is_not_alive(void)
 * Body size: 569 bytes
 */


undefined8
identifier_s_is_not_alive(undefined8 param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *_Str1;
  
  _Str1 = (char *)param_3[1];
  if (_Str1 == (char *)0x0) {
    return 0;
  }
  uVar3 = *param_3;
  if ((uVar3 >> 0x3a & 1) != 0) {
    iVar2 = strcmp(_Str1,"this");
    if (iVar2 == 0) {
      *param_3 = uVar3 & 0xff00000000000000 | 0x110;
      param_3[1] = 0;
      return 0;
    }
    return 0;
  }
  if ((uVar3 & 0x100000000000000) != 0) {
    return 0;
  }
  if (((*_Str1 == '#') && (_Str1[1] == '0')) && (_Str1[2] == '\0')) {
    if ((uVar3 & 0xffffffffffffff) == 0) {
      param_3[1] = 0;
      return 0;
    }
    FUN_140392c00(param_4,"name \'0\' does not match entity id");
  }
  else {
    if (((param_2 == 0) || (uVar3 = FUN_1403ae3f0(param_1,param_2,_Str1), uVar3 == 0)) &&
       ((uVar3 = FUN_1403ae4f0(param_1,_Str1), uVar3 == 0 &&
        (uVar3 = FUN_1403ae830(param_1,_Str1,0,0), uVar3 == 0)))) {
      if ((*(longlong *)(param_4 + 0x10) != 0) &&
         ((*(byte *)(*(longlong *)(param_4 + 0x10) + 0x30) & 0x40) != 0)) {
        *param_3 = (*param_3 & 0xfcffffffffffffff) + 0x100000000000000;
        return 0;
      }
      pcVar5 = "unresolved identifier \'%s\'";
    }
    else {
      uVar6 = *param_3 & 0xffffffffffffff;
      if (uVar6 != uVar3 && uVar6 != 0) {
        uVar4 = FUN_1403ae340(param_1,0,uVar6,".",0);
        FUN_140392c00(param_4,"name \'%s\' does not match term.id \'%s\'",_Str1,uVar4);
        (*DAT_1415033b0)(uVar4);
        return 0xffffffff;
      }
      uVar6 = *param_3 & 0xff00000000000000 | uVar3;
      *param_3 = uVar6;
      cVar1 = *_Str1;
      if ((((cVar1 == '$') || (cVar1 == '_')) || (cVar1 == '*')) && (_Str1[1] == '\0')) {
        uVar6 = uVar6 & 0xf9ffffffffffffff | 0x400000000000000;
        *param_3 = uVar6;
      }
      if ((uVar3 & 0xffffffffffffff) == 0) {
        return 0;
      }
      if ((uVar6 & 0x100000000000000) != 0) {
        return 0;
      }
      cVar1 = FUN_1400b8670(param_1,uVar3 & 0xffffffffffffff);
      if (cVar1 != '\0') {
        param_3[1] = 0;
        return 0;
      }
      _Str1 = (char *)param_3[1];
      pcVar5 = "identifier \'%s\' is not alive";
    }
    FUN_140392c00(param_4,pcVar5,_Str1);
  }
  return 0xffffffff;
}

