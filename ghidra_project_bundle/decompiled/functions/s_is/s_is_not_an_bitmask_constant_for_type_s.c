/**
 * Function: s_is_not_an_bitmask_constant_for_type_s
 * Address:  14075a640
 * Signature: undefined s_is_not_an_bitmask_constant_for_type_s(void)
 * Body size: 275 bytes
 */


undefined8
s_is_not_an_bitmask_constant_for_type_s
          (undefined8 *param_1,longlong param_2,uint *param_3,char *param_4)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if ((*param_4 == '0') && (param_4[1] == '\0')) {
LAB_14075a6a5:
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_1403ae3f0(*param_1,*(undefined8 *)(param_2 + 0x20),param_4);
    if (lVar1 == 0) {
      uVar3 = FUN_1403ae340(*param_1,0,*(undefined8 *)(param_2 + 0x20),".",0);
      pcVar5 = "unresolved bitmask constant \'%s\' for type \'%s\'";
      uVar4 = 0x529;
    }
    else {
      puVar2 = (uint *)FUN_1400ba4f0(*param_1,lVar1,0x8000017200000156);
      if (puVar2 != (uint *)0x0) {
        *param_3 = *param_3 | *puVar2;
        goto LAB_14075a6a5;
      }
      uVar3 = FUN_1403ae340(*param_1,0,*(undefined8 *)(param_2 + 0x20),".",0);
      pcVar5 = "\'%s\' is not an bitmask constant for type \'%s\'";
      uVar4 = 0x532;
    }
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                  ,uVar4,pcVar5,param_4,uVar3);
    (*DAT_1415033b0)(uVar3);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

