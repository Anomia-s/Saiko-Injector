/**
 * Function: magentaimportreset_s
 * Address:  1403c73e0
 * Signature: undefined magentaimportreset_s(void)
 * Body size: 183 bytes
 */


longlong magentaimportreset_s(longlong param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = FUN_1403aeb80(param_1,0);
  uVar1 = *(undefined8 *)(param_1 + 0xbb0);
  uVar3 = FUN_1403c72a0(param_3);
  lVar4 = FUN_1403ae4f0(param_1,uVar3);
  (*DAT_1415033b0)(uVar3);
  if (lVar4 == 0) {
    FUN_140399630(0,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/module.c"
                  ,0x32,"#[magenta]import#[reset] %s",param_3);
    FUN_140399740(0);
    (*param_2)(param_1);
    lVar4 = FUN_1403ae4f0(param_1,param_3);
    FUN_140399750(0);
  }
  FUN_1403aeb80(param_1,uVar2);
  *(undefined8 *)(param_1 + 0xbb0) = uVar1;
  return lVar4;
}

