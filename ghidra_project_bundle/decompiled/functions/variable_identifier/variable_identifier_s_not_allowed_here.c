/**
 * Function: variable_identifier_s_not_allowed_here
 * Address:  1405f10e0
 * Signature: undefined variable_identifier_s_not_allowed_here(void)
 * Body size: 733 bytes
 */


undefined8
variable_identifier_s_not_allowed_here
          (longlong param_1,longlong param_2,char *param_3,longlong *param_4,int *param_5,
          longlong *param_6,undefined1 *param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char cVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  
  if (param_3 == (char *)0x0) {
    return 0xffffffff;
  }
  cVar8 = *param_3;
  if (cVar8 != '$') {
    iVar1 = 0;
    pcVar9 = param_3;
    do {
      pcVar9 = pcVar9 + 1;
      if (cVar8 == '<') {
        iVar1 = iVar1 + 1;
      }
      else if (cVar8 == '>') {
        if (iVar1 < 1) {
          bVar10 = false;
          goto joined_r0x0001405f119b;
        }
        iVar1 = iVar1 + -1;
      }
      else if (cVar8 == '\0') goto LAB_1405f1188;
      cVar8 = *pcVar9;
    } while( true );
  }
  if (param_5 == (int *)0x0) {
    pcVar9 = "variable identifier \'%s\' not allowed here";
    goto LAB_1405f125c;
  }
  param_3 = param_3 + 1;
LAB_1405f112a:
  if (*(char *)(param_1 + 0x48d) == '\x01') {
    lVar3 = FUN_140761f00(*(undefined8 *)(param_1 + 0x490),param_3);
joined_r0x0001405f11fb:
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    lVar5 = *(longlong *)(lVar3 + 8);
  }
  else {
    if (*param_5 != -1) {
      lVar3 = FUN_140761f90();
      goto joined_r0x0001405f11fb;
    }
    lVar3 = FUN_140761f00(*(undefined8 *)(param_1 + 0x490),param_3);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    *param_5 = *(int *)(lVar3 + 0x20);
    lVar5 = *(longlong *)(lVar3 + 8);
  }
  if (lVar5 != 0x161) {
    uVar6 = FUN_1403b36e0(*(undefined8 *)(param_1 + 0x448));
    FUN_1405f0f70(param_1,0,"variable \'%s\' must be of type entity, got \'%s\'",param_3,uVar6);
    (*DAT_1415033b0)(uVar6);
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    return 0;
  }
  if (*(longlong **)(lVar3 + 0x10) == (longlong *)0x0) {
    pcVar9 = "variable \'%s\' is not initialized";
  }
  else {
    lVar3 = **(longlong **)(lVar3 + 0x10);
    if (lVar3 != 0) {
      *param_6 = lVar3;
      if (param_7 == (undefined1 *)0x0) {
        return 0;
      }
      *param_7 = 1;
      return 0;
    }
    pcVar9 = "variable \'%s\' contains invalid entity id (0)";
  }
LAB_1405f125c:
  FUN_1405f0f70(param_1,0,pcVar9,param_3);
  return 0xffffffff;
LAB_1405f1188:
  bVar10 = iVar1 == 0;
joined_r0x0001405f119b:
  if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
    lVar5 = failed_to_evaluate_entity_name(param_1,0,param_4,1);
    if (lVar5 == 0) {
      return 0xffffffff;
    }
    goto LAB_1405f132e;
  }
  if ((bool)(param_2 != 0 & bVar10)) {
    uVar6 = *(undefined8 *)(param_1 + 0x448);
    uVar11 = 0;
LAB_1405f1312:
    lVar5 = FUN_1403ae520(uVar6,param_2,param_3,0,0,uVar11);
  }
  else {
    uVar2 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                      ((Decoration<__int64> *)(*(longlong *)(param_1 + 0x450) + 0x3098));
    if (((bool)(uVar2 != 0 & bVar10)) &&
       (lVar3 = FUN_140106180(*(longlong *)(param_1 + 0x450) + 0x3098), 0 < (int)uVar2)) {
      uVar7 = (ulonglong)uVar2 + 1;
      lVar5 = 0;
      do {
        lVar4 = FUN_1403ae520(*(undefined8 *)(param_1 + 0x448),
                              *(undefined8 *)(lVar3 + -0x10 + uVar7 * 8),param_3,0,0,0);
        if (lVar4 != 0) {
          lVar5 = lVar4;
        }
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
    else {
      lVar5 = 0;
    }
    if ((bool)(lVar5 == 0 & bVar10)) {
      uVar6 = *(undefined8 *)(param_1 + 0x448);
      param_2 = *(longlong *)(param_1 + 0x470);
      uVar11 = 1;
      goto LAB_1405f1312;
    }
  }
  if (lVar5 != 0) {
LAB_1405f132e:
    *param_6 = lVar5;
    return 0;
  }
  if (param_5 == (int *)0x0) {
    return 0xffffffff;
  }
  goto LAB_1405f112a;
}

