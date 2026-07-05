/**
 * Function: cannot_open_scope_for_type_s
 * Address:  1407581d0
 * Signature: undefined cannot_open_scope_for_type_s(void)
 * Body size: 606 bytes
 */


undefined8 cannot_open_scope_for_type_s(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  
  lVar10 = (longlong)*(short *)(param_1 + 0x101);
  lVar4 = lVar10 * 0x40;
  piVar11 = (int *)((longlong)*(short *)((longlong)param_1 + lVar4 + 0x1a) * 0x38 +
                   param_1[lVar10 * 8 + 2]);
  uVar9 = *param_1;
  if (((lVar10 == 0) && (*(char *)((longlong)param_1 + 0x80b) == '\0')) && (8 < *piVar11)) {
    *(undefined1 *)((longlong)param_1 + 0x80b) = 1;
    return 0;
  }
  puVar5 = (undefined8 *)missing_ensure_element_for_opaque_type_s(uVar9,param_1 + lVar10 * 8 + 1);
  sVar3 = (short)*(undefined4 *)(param_1 + 0x101) + 1;
  *(short *)(param_1 + 0x101) = sVar3;
  lVar6 = (longlong)sVar3;
  puVar1 = param_1 + lVar6 * 8 + 1;
  param_1[lVar6 * 8 + 7] = 0;
  (param_1 + lVar6 * 8 + 7)[1] = 0;
  param_1[lVar6 * 8 + 5] = 0;
  (param_1 + lVar6 * 8 + 5)[1] = 0;
  param_1[lVar6 * 8 + 3] = 0;
  (param_1 + lVar6 * 8 + 3)[1] = 0;
  param_1[lVar6 * 8 + 1] = 0;
  (param_1 + lVar6 * 8 + 1)[1] = 0;
  iVar2 = *piVar11;
  if (iVar2 - 5U < 2) {
    puVar7 = (undefined8 *)FUN_1400ba4f0(uVar9,*(undefined8 *)(piVar11 + 8),0x16c);
    puVar1[4] = puVar7;
    lVar6 = FUN_1400ba4f0(uVar9,*puVar7,0x16d);
    piVar11 = (int *)FUN_140106180(lVar6 + 8);
    *(undefined2 *)(puVar1 + 6) = 0x101;
    *(undefined1 *)((longlong)puVar1 + 0x32) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + 0x3c) = 0;
  }
  else {
    if (iVar2 == 4) {
      puVar7 = (undefined8 *)FUN_1400ba4f0(uVar9,*(undefined8 *)(piVar11 + 8),0x16c);
      puVar1[4] = puVar7;
      uVar8 = *puVar7;
    }
    else {
      if (iVar2 != 7) goto LAB_14075831b;
      uVar8 = *(undefined8 *)(piVar11 + 8);
    }
    lVar6 = FUN_1400ba4f0(uVar9,uVar8,0x16d);
    piVar11 = (int *)FUN_140106180(lVar6 + 8);
  }
LAB_14075831b:
  puVar1[1] = piVar11 + 0xe;
  *(short *)(puVar1 + 2) = (short)piVar11[7] + -1;
  puVar1[3] = puVar5;
  *puVar1 = *(undefined8 *)(piVar11 + 8);
  puVar1[5] = *(undefined8 *)(piVar11 + 0xc);
  uVar8 = 0;
  if (puVar1[4] == 0) {
    iVar2 = *piVar11;
    if (iVar2 == 0) {
      uVar8 = 0;
    }
    else if (iVar2 == 2) {
      uVar8 = 0;
      if (puVar5 == (undefined8 *)0x0) {
        puVar1[3] = 0;
        *(undefined2 *)(puVar1 + 6) = 0x101;
        *(undefined1 *)((longlong)puVar1 + 0x32) = 0;
        *(undefined4 *)((longlong)param_1 + lVar4 + 0x3c) = 0;
        *(undefined4 *)(param_1 + lVar10 * 8 + 8) = 0;
      }
      else {
        puVar1[3] = *puVar5;
        *(undefined2 *)(puVar1 + 6) = 0x101;
        *(undefined1 *)((longlong)puVar1 + 0x32) = 0;
        *(undefined4 *)((longlong)param_1 + lVar4 + 0x3c) = 0;
        *(undefined4 *)(param_1 + lVar10 * 8 + 8) = *(undefined4 *)(puVar5 + 1);
      }
    }
    else if (iVar2 == 1) {
      *(undefined1 *)(puVar1 + 6) = 1;
      iVar2 = piVar11[7];
      *(undefined4 *)((longlong)param_1 + lVar4 + 0x3c) = 0;
      *(int *)(param_1 + lVar10 * 8 + 8) = piVar11[(longlong)(short)iVar2 * 0xe + -8];
    }
    else {
      uVar9 = FUN_1403ae340(uVar9,0,param_1[lVar10 * 8 + 1],".",0);
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                    ,0x251,"cannot open scope for type \'%s\'",uVar9);
      (*DAT_1415033b0)(uVar9);
      uVar8 = 0xffffffff;
    }
  }
  return uVar8;
}

