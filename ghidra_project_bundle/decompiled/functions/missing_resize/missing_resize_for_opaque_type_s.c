/**
 * Function: missing_resize_for_opaque_type_s
 * Address:  140758430
 * Signature: undefined missing_resize_for_opaque_type_s(void)
 * Body size: 519 bytes
 */


undefined8 missing_resize_for_opaque_type_s(undefined8 *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  short sVar6;
  
  if (*(char *)((longlong)param_1 + 0x80b) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x80b) = 0;
    return 0;
  }
  sVar6 = *(short *)(param_1 + 0x101);
  lVar7 = (longlong)sVar6;
  sVar1 = *(short *)((longlong)param_1 + lVar7 * 0x40 + 0x1c);
  if ((longlong)sVar1 != 0) {
    sVar6 = sVar1;
    lVar7 = (longlong)sVar1;
  }
  uVar5 = sVar6 - 1;
  *(ushort *)(param_1 + 0x101) = uVar5;
  if ((short)uVar5 < 0) {
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,0x263,"unexpected end of scope");
  }
  else {
    lVar8 = (ulonglong)uVar5 * 0x40;
    sVar6 = *(short *)((longlong)param_1 + lVar8 + 0x1a);
    uVar2 = *(uint *)(param_1[(ulonglong)uVar5 * 8 + 2] + (longlong)sVar6 * 0x38);
    if (7 < uVar2) {
      return 0;
    }
    piVar9 = (int *)(param_1[(ulonglong)uVar5 * 8 + 2] + (longlong)sVar6 * 0x38);
    if ((7U >> (uVar2 & 0x1f) & 1) != 0) {
      *(short *)((longlong)param_1 + lVar8 + 0x1a) = sVar6 + (short)piVar9[7] + -1;
      if (*piVar9 != 2) {
        return 0;
      }
      if (*(char *)((longlong)param_1 + lVar7 * 0x40 + 0x3a) != '\0') {
        return 0;
      }
      lVar8 = param_1[lVar7 * 8 + -4];
      if (lVar8 == 0) {
        return 0;
      }
      uVar3 = **(undefined4 **)(param_1[lVar7 * 8 + 2] + 0x28);
      httplib::ClientImpl::vfunction4();
      if (*(char *)((longlong)param_1 + lVar7 * 0x40 + 0x39) == '\x01') {
        FUN_1403b2bf0(0,lVar8,uVar3,0,*(undefined8 *)(param_1[lVar7 * 8 + 2] + 0x28));
        return 0;
      }
      FUN_1403b2bf0(0,lVar8,uVar3,*(int *)((longlong)param_1 + lVar7 * 0x40 + -4) + 1,
                    *(undefined8 *)(param_1[lVar7 * 8 + 2] + 0x28));
      return 0;
    }
    if ((0xb0U >> (uVar2 & 0x1f) & 1) != 0) {
      *(short *)((longlong)param_1 + lVar8 + 0x1a) = sVar6 + (short)piVar9[7] + -1;
      return 0;
    }
    if (uVar2 != 6) {
      return 0;
    }
    if (*(code **)(param_1[lVar7 * 8 + 5] + 0x88) != (code *)0x0) {
      if (param_1[lVar7 * 8 + 4] == 0) {
        return 0;
      }
      if (*(char *)((longlong)param_1 + lVar7 * 0x40 + 0x39) == '\x01') {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)*(int *)((longlong)param_1 + lVar8 + 0x3c) + 1;
      }
      (**(code **)(param_1[lVar7 * 8 + 5] + 0x88))(param_1[lVar7 * 8 + 4],lVar8);
      return 0;
    }
    uVar4 = FUN_1403ae340(*param_1,0,param_1[lVar7 * 8 + 1],".",0);
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,0x29a,"missing resize for opaque type %s",uVar4);
    (*DAT_1415033b0)(uVar4);
  }
  return 0xffffffff;
}

