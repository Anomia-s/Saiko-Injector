/**
 * Function: cannot_serialize_to_json_s_is_not_a_component
 * Address:  1405fb450
 * Signature: undefined cannot_serialize_to_json_s_is_not_a_component(void)
 * Body size: 426 bytes
 */


undefined8
cannot_serialize_to_json_s_is_not_a_component
          (undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  piVar4 = (int *)FUN_1400ba4f0(param_1,param_2,1);
  if (piVar4 == (int *)0x0) {
    uVar6 = FUN_1403ae340(param_1,0,param_2,".",0);
    pcVar8 = "cannot serialize to JSON, \'%s\' is not a component";
    uVar7 = 0x1bf;
  }
  else {
    lVar5 = FUN_1400ba4f0(param_1,param_2,0x16d);
    if (lVar5 != 0) {
      if (param_4 == 0) {
        uVar6 = FUN_140106180((Decoration<__int64> *)(lVar5 + 8));
        uVar1 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(lVar5 + 8));
        iVar3 = missing_type_serializer_for_s(param_1,uVar6,uVar1,param_3,param_5);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
      }
      else {
        iVar3 = *piVar4;
        FUN_1405fc330(param_5);
        do {
          FUN_1403b8d70(param_5);
          uVar6 = FUN_140106180((Decoration<__int64> *)(lVar5 + 8));
          uVar1 = _anon_C953E3F2::Decoration<__int64>::vfunction3
                            ((Decoration<__int64> *)(lVar5 + 8));
          iVar2 = missing_type_serializer_for_s(param_1,uVar6,uVar1,param_3,param_5);
          if (iVar2 != 0) {
            return 0xffffffff;
          }
          param_3 = param_3 + iVar3;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        FUN_1405fc350(param_5);
      }
      return 0;
    }
    uVar6 = FUN_1403ae340(param_1,0,param_2,".",0);
    pcVar8 = "cannot serialize to JSON, \'%s\' has no reflection data";
    uVar7 = 0x1c8;
  }
  FUN_140399630(0xfffffffd,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/json/serialize_value.c"
                ,uVar7,pcVar8,uVar6);
  (*DAT_1415033b0)(uVar6);
  return 0xffffffff;
}

