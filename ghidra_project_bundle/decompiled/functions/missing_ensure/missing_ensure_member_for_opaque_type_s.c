/**
 * Function: missing_ensure_member_for_opaque_type_s
 * Address:  140757d20
 * Signature: undefined missing_ensure_member_for_opaque_type_s(void)
 * Body size: 464 bytes
 */


undefined8
missing_ensure_member_for_opaque_type_s(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  short sVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  lVar3 = (longlong)*(short *)(param_1 + 0x101);
  if (lVar3 == 0) {
    uVar6 = 0xffffffff;
    if (param_3 != '\0') {
      return 0xffffffff;
    }
    pcVar7 = "cannot move to member in root scope (push first)";
    uVar5 = 0x174;
  }
  else {
    sVar2 = *(short *)((longlong)param_1 + lVar3 * 0x40 + 0x1c);
    if ((longlong)sVar2 != 0) {
      *(short *)(param_1 + 0x101) = sVar2;
      lVar3 = (longlong)sVar2;
    }
    puVar1 = param_1 + lVar3 * 8 + 1;
    uVar5 = *param_1;
    if (param_1[lVar3 * 8 + 6] == 0) {
      uVar6 = 0xffffffff;
      if (param_3 != '\0') {
        return 0xffffffff;
      }
      uVar5 = FUN_1403ae340(uVar5,0,*puVar1,".",0);
      FUN_1403d2d90(uVar5);
      pcVar7 = "cannot move to member \'%s\' for non-struct type \'%s\'";
      uVar5 = 0x180;
    }
    else {
      puVar4 = (undefined2 *)FUN_140391ae0(param_1[lVar3 * 8 + 6],param_2,0,0);
      if (puVar4 == (undefined2 *)0x0) {
        uVar6 = 0xffffffff;
        if (param_3 != '\0') {
          return 0xffffffff;
        }
        uVar5 = FUN_1403ae340(uVar5,0,*puVar1,".",0);
        FUN_1403d2d90(uVar5);
        pcVar7 = "unknown member \'%s\' for type \'%s\'";
        uVar5 = 0x187;
      }
      else {
        *(undefined2 *)((longlong)puVar1 + 0x12) = *puVar4;
        if (puVar1[4] == 0) {
          return 0;
        }
        if (param_3 != '\0') {
          return 0;
        }
        if (*(longlong *)(puVar1[4] + 0x78) != 0) {
          return 0;
        }
        uVar6 = 0;
        uVar5 = FUN_1403ae340(uVar5,0,*puVar1,".",0);
        FUN_1403d2d90(uVar5);
        pcVar7 = "missing ensure_member for opaque type %s";
        uVar5 = 0x191;
      }
    }
  }
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                ,uVar5,pcVar7);
  return uVar6;
}

