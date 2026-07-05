/**
 * Function: sdltexturecreateheight
 * Address:  14011b160
 * Signature: undefined sdltexturecreateheight(void)
 * Body size: 143 bytes
 */


undefined8
sdltexturecreateheight(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14014f270();
  FUN_14014fc70(uVar1,"SDL.texture.create.format",(longlong)param_2);
  FUN_14014fc70(uVar1,"SDL.texture.create.access",(longlong)param_3);
  FUN_14014fc70(uVar1,"SDL.texture.create.width",(longlong)param_4);
  FUN_14014fc70(uVar1,"SDL.texture.create.height",(longlong)param_5);
  uVar2 = texture_dimensions_are_limited_to_dxd(param_1,uVar1);
  FUN_14014f0d0(uVar1);
  return uVar2;
}

