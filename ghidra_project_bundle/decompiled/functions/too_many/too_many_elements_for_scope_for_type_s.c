/**
 * Function: too_many_elements_for_scope_for_type_s
 * Address:  140757bb0
 * Signature: undefined too_many_elements_for_scope_for_type_s(void)
 * Body size: 340 bytes
 */


undefined8 too_many_elements_for_scope_for_type_s(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  short sVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  sVar6 = *(short *)((longlong)param_1 + (longlong)*(short *)(param_1 + 0x101) * 0x40 + 0x1c);
  lVar7 = (longlong)*(short *)(param_1 + 0x101);
  if ((longlong)sVar6 != 0) {
    *(short *)(param_1 + 0x101) = sVar6;
    lVar7 = (longlong)sVar6;
  }
  puVar2 = param_1 + lVar7 * 8 + 1;
  lVar4 = param_1[lVar7 * 8 + 2];
  if (*(char *)(param_1 + lVar7 * 8 + 7) == '\x01') {
    iVar3 = *(int *)((longlong)puVar2 + -0xc);
    iVar1 = iVar3 + 1;
    *(int *)((longlong)puVar2 + -0xc) = iVar1;
    *(undefined2 *)((longlong)puVar2 + 0x12) = 0;
    if ((((puVar2[4] == 0) && (puVar2[-5] != 0)) && (*(int *)(lVar4 + -0x38) != 2)) &&
       ((iVar3 < -1 || (*(int *)(puVar2 + -1) <= iVar1)))) {
      uVar5 = FUN_1403ae340(*param_1,0,puVar2[-8],".",0);
      pcVar9 = "out of collection bounds for type \'%s\' (%d elements vs. size %d)";
      uVar8 = 0x127;
LAB_140757c71:
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                    ,uVar8,pcVar9,uVar5);
      (*DAT_1415033b0)(uVar5);
      return 0xffffffff;
    }
  }
  else {
    sVar6 = *(short *)(lVar4 + 0x1c + (longlong)*(short *)((longlong)puVar2 + 0x12) * 0x38) +
            *(short *)((longlong)puVar2 + 0x12);
    *(short *)((longlong)puVar2 + 0x12) = sVar6;
    if (*(short *)(puVar2 + 2) <= sVar6) {
      uVar5 = FUN_1403ae340(*param_1,0,*puVar2,".",0);
      pcVar9 = "too many elements for scope for type %s";
      uVar8 = 0x14d;
      goto LAB_140757c71;
    }
  }
  return 0;
}

