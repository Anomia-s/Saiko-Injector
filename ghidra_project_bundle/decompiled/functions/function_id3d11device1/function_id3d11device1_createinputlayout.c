/**
 * Function: function_id3d11device1_createinputlayout
 * Address:  140635100
 * Signature: undefined function_id3d11device1_createinputlayout(void)
 * Body size: 295 bytes
 */


undefined8
function_id3d11device1_createinputlayout(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  local_28 = 0x1000000000;
  uStack_20 = 0;
  local_38 = "COLOR";
  uStack_30 = 0x200000000;
  local_48 = 0x800000000;
  uStack_40 = 0;
  local_58 = "TEXCOORD";
  uStack_50 = 0x1000000000;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0x41366ec6;
  uStack_74 = 1;
  uStack_70 = 0;
  uStack_6c = 0x10;
  local_88 = param_2;
  iVar1 = (**(code **)(*param_1 + 0x60))(0x41366ec6,&DAT_1411fb140,0x58c,0);
  if (iVar1 < 0) {
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_a8)) {
      uVar2 = FUN_1403d7600("__FUNCTION__, ID3D11Device1::CreateVertexShader",iVar1);
      return uVar2;
    }
  }
  else {
    local_88 = 0x58c;
    local_80 = param_3;
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,&local_78,3,&DAT_1411fb140);
    uVar2 = 1;
    if (iVar1 < 0) {
      uVar2 = FUN_1403d7600("__FUNCTION__, ID3D11Device1::CreateInputLayout");
    }
    if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_a8)) {
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_a8);
}

