/**
 * Function: _Node_class<char,std::regex_traits<char>_>_Constructor_or_Destructor
 * Address:  1401d4050
 * Signature: undefined8 __fastcall _Node_class<char,std::regex_traits<char>_>_Constructor_or_Destructor(undefined8 * param_1, byte param_2)
 * Body size: 458 bytes
 */


undefined8
std::_Node_class<char,std::regex_traits<char>_>::
_Node_class<char,std::regex_traits<char>_>_Constructor_or_Destructor
          (undefined8 *param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  longlong lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined7 in_register_00000011;
  byte bVar13;
  ulonglong uVar14;
  ushort uVar15;
  longlong lVar16;
  
  puVar3 = (undefined1 *)*param_1;
  if (puVar3 != (undefined1 *)param_1[2]) {
    uVar14 = CONCAT71(in_register_00000011,param_2) & 0xffffffff;
    lVar10 = param_1[0xd];
    uVar2 = *(uint *)(param_1 + 0xe);
    pcVar8 = "alnum";
    lVar16 = 0x18;
    do {
      if (*(int *)((longlong)
                   &_Node_back::RTTI_Base_Class_Descriptor_at__0__1_0_64_.pClassHierarchyDescriptor
                  + lVar16) == 1) {
        cVar6 = *pcVar8;
        plVar4 = *(longlong **)(lVar10 + 8);
        cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,*puVar3);
        plVar4 = *(longlong **)(lVar10 + 8);
        cVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,cVar6);
        if (cVar5 == cVar6) {
          uVar7 = *(ushort *)(&UNK_140df100c + lVar16);
          goto LAB_1401d40ea;
        }
      }
      pcVar8 = *(char **)((longlong)&PTR_s_alnum_140df1010 + lVar16);
      lVar16 = lVar16 + 0x18;
    } while (lVar16 != 0x180);
    uVar7 = 0;
LAB_1401d40ea:
    uVar15 = uVar7 | 3;
    if ((uVar7 & 3) == 0) {
      uVar15 = uVar7;
    }
    if ((uVar2 & 0x100) == 0) {
      uVar15 = uVar7;
    }
    if (uVar15 != 0) {
      uVar7 = *(ushort *)
               (*(longlong *)(*(longlong *)(param_1[0xd] + 8) + 0x18) +
               (ulonglong)*(byte *)(param_1 + 0xf) * 2);
      bVar13 = (byte)uVar14;
      if (bVar13 == 0) {
        puVar9 = (undefined8 *)param_1[9];
      }
      else {
        puVar9 = (undefined8 *)FUN_140b65d30(0x50);
        *(undefined4 *)(puVar9 + 1) = 7;
        *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
        *puVar9 = &vftable;
        puVar9[9] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        *(undefined2 *)(puVar9 + 8) = 0;
        lVar10 = param_1[9];
        puVar9[3] = lVar10;
        lVar16 = *(longlong *)(lVar10 + 0x10);
        if (lVar16 != 0) {
          puVar9[2] = lVar16;
          *(undefined8 **)(lVar16 + 0x18) = puVar9;
          lVar10 = param_1[9];
        }
        *(undefined8 **)(lVar10 + 0x10) = puVar9;
        param_1[9] = puVar9;
        if ((uVar7 & 1) != 0) {
          *(byte *)((longlong)puVar9 + 0xc) = *(byte *)((longlong)puVar9 + 0xc) ^ 1;
        }
      }
      FUN_1401d4510(param_1 + 8,puVar9,uVar15,
                    CONCAT71((int7)(uVar14 >> 8),(bVar13 ^ 1) & (byte)uVar7));
      pbVar11 = (byte *)*param_1;
      if (pbVar11 != (byte *)param_1[2]) {
        if (((*pbVar11 == 0x5c) && (pbVar1 = pbVar11 + 1, pbVar1 != (byte *)param_1[2])) &&
           ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((*pbVar1 & 0xfe) == 0x28)) ||
            (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*pbVar1 == 0x7d || (*pbVar1 == 0x7b))))))
           )) {
          pbVar11 = pbVar1;
        }
        *param_1 = pbVar11 + 1;
      }
      uVar12 = FUN_1401d2730(param_1);
      return CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
    }
  }
  return 0;
}

