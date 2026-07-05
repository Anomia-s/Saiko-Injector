/**
 * Function: _Node_class<wchar_t,std::regex_traits<wchar_t>_>_Constructor_or_Destructor
 * Address:  140812750
 * Signature: undefined8 __fastcall _Node_class<wchar_t,std::regex_traits<wchar_t>_>_Constructor_or_Destructor(undefined8 * param_1, char param_2)
 * Body size: 490 bytes
 */


undefined8
std::_Node_class<wchar_t,std::regex_traits<wchar_t>_>::
_Node_class<wchar_t,std::regex_traits<wchar_t>_>_Constructor_or_Destructor
          (undefined8 *param_1,char param_2)

{
  ushort *puVar1;
  wchar_t wVar2;
  uint uVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  undefined4 uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ushort *puVar13;
  undefined8 uVar14;
  ushort uVar15;
  longlong lVar16;
  
  puVar4 = (undefined2 *)*param_1;
  if (puVar4 == (undefined2 *)param_1[2]) {
    return 0;
  }
  lVar12 = param_1[0xd];
  uVar3 = *(uint *)(param_1 + 0xe);
  pwVar10 = L"alnum";
  lVar16 = 0x20;
  do {
    if (*(int *)((longlong)&_Node_back::RTTI_Base_Class_Descriptor_at__0__1_0_64_.where.vdisp +
                lVar16) == 1) {
      wVar2 = *pwVar10;
      plVar5 = *(longlong **)(lVar12 + 8);
      sVar6 = (**(code **)(*plVar5 + 0x40))(plVar5,*puVar4);
      plVar5 = *(longlong **)(lVar12 + 8);
      sVar7 = (**(code **)(*plVar5 + 0x40))(plVar5,wVar2);
      if (sVar6 == sVar7) {
        uVar8 = *(ushort *)
                 ((longlong)&_Node_back::RTTI_Base_Class_Descriptor_at__0__1_0_64_.attributes +
                 lVar16);
        goto LAB_1408127ea;
      }
    }
    pwVar10 = *(wchar_t **)((longlong)&PTR_s_alnum_140df1010 + lVar16);
    lVar16 = lVar16 + 0x18;
  } while (lVar16 != 0x188);
  uVar8 = 0;
LAB_1408127ea:
  uVar15 = uVar8 | 3;
  if ((uVar8 & 3) == 0) {
    uVar15 = uVar8;
  }
  if ((uVar3 & 0x100) == 0) {
    uVar15 = uVar8;
  }
  if (uVar15 == 0) {
    return 0;
  }
  uVar9 = (**(code **)(**(longlong **)(param_1[0xd] + 8) + 0x20))
                    (*(longlong **)(param_1[0xd] + 8),1,*(undefined2 *)(param_1 + 0xf));
  if (param_2 == '\0') {
    puVar11 = (undefined8 *)param_1[9];
    FUN_140812c30(param_1 + 8,puVar11,uVar15,uVar9);
    if ((char)uVar9 != '\0') goto LAB_1408128dc;
  }
  else {
    puVar11 = (undefined8 *)FUN_140b65d30(0x50);
    *(undefined4 *)(puVar11 + 1) = 7;
    *(undefined8 *)((longlong)puVar11 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
    *puVar11 = &vftable;
    puVar11[9] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    *(undefined2 *)(puVar11 + 8) = 0;
    lVar12 = param_1[9];
    puVar11[3] = lVar12;
    lVar16 = *(longlong *)(lVar12 + 0x10);
    if (lVar16 != 0) {
      puVar11[2] = lVar16;
      *(undefined8 **)(lVar16 + 0x18) = puVar11;
      lVar12 = param_1[9];
    }
    *(undefined8 **)(lVar12 + 0x10) = puVar11;
    param_1[9] = puVar11;
    if ((char)uVar9 != '\0') {
      *(byte *)((longlong)puVar11 + 0xc) = *(byte *)((longlong)puVar11 + 0xc) ^ 1;
    }
    FUN_140812c30(param_1 + 8,puVar11,uVar15,0);
  }
  *(ushort *)(puVar11 + 8) = *(ushort *)(puVar11 + 8) | uVar15;
LAB_1408128dc:
  puVar13 = (ushort *)*param_1;
  if (puVar13 != (ushort *)param_1[2]) {
    if (((*puVar13 == 0x5c) && (puVar1 = puVar13 + 1, puVar1 != (ushort *)param_1[2])) &&
       ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((*puVar1 & 0xfffe) == 0x28)) ||
        (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*puVar1 == 0x7d || (*puVar1 == 0x7b)))))))) {
      puVar13 = puVar1;
    }
    *param_1 = puVar13 + 1;
  }
  uVar14 = FUN_140810f80(param_1);
  return CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
}

