/**
 * Function: function_id3d11device1_createpixelshader
 * Address:  140635230
 * Signature: undefined function_id3d11device1_createpixelshader(void)
 * Body size: 74 bytes
 */


undefined8
function_id3d11device1_createpixelshader(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x78))
                    (param_1,*(undefined8 *)(&DAT_1411fb730 + (longlong)param_2 * 0x10),
                     *(undefined8 *)(&DAT_1411fb738 + (longlong)param_2 * 0x10),0,param_3);
  if (-1 < iVar1) {
    return 1;
  }
  uVar2 = FUN_1403d7600("__FUNCTION__, ID3D11Device1::CreatePixelShader",iVar1);
  return uVar2;
}

