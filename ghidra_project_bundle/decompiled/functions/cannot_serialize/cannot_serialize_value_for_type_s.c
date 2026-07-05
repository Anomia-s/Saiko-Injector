/**
 * Function: cannot_serialize_value_for_type_s
 * Address:  14083ee40
 * Signature: undefined cannot_serialize_value_for_type_s(void)
 * Body size: 194 bytes
 */


undefined8
cannot_serialize_value_for_type_s
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_1400ba4f0(param_1,param_2,0x16d);
  if (lVar3 == 0) {
    uVar4 = FUN_1403ae340(param_1,0,param_2,".",0);
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/serialize.c"
                  ,0x1c3,"cannot serialize value for type \'%s\'",uVar4);
    (*DAT_1415033b0)(uVar4);
  }
  else {
    uVar4 = FUN_140106180((Decoration<__int64> *)(lVar3 + 8));
    uVar1 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(lVar3 + 8));
    iVar2 = unknown_serializer_operation_kind_d(param_1,uVar4,uVar1,param_3,param_4,0);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 0xffffffff;
}

