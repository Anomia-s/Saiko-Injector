/**
 * Function: d3d12_could_not_create_dxgifactory
 * Address:  1403f4490
 * Signature: undefined d3d12_could_not_create_dxgifactory(void)
 * Body size: 600 bytes
 */


undefined8 d3d12_could_not_create_dxgifactory(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 auStack_78 [32];
  longlong **local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  lVar2 = parameter_s_is_invalid("d3d12.dll");
  if (lVar2 == 0) {
    pcVar7 = "D3D12: Could not find d3d12.dll";
LAB_1403f462d:
    FUN_1400fb8f0(9,pcVar7);
  }
  else {
    pcVar3 = (code *)failed_loading_s(lVar2,"D3D12CreateDevice");
    if (pcVar3 == (code *)0x0) {
      FUN_1400fb8f0(9,"D3D12: Could not find function D3D12CreateDevice in d3d12.dll");
      lVar4 = lVar2;
    }
    else {
      lVar4 = parameter_s_is_invalid("dxgi.dll");
      if (lVar4 == 0) {
        pcVar7 = "D3D12: Could not find dxgi.dll";
        goto LAB_1403f462d;
      }
      pcVar5 = (code *)failed_loading_s(lVar4,"CreateDXGIFactory1");
      if (pcVar5 == (code *)0x0) {
        FUN_1400fb8f0(9,"D3D12: Could not find function CreateDXGIFactory1 in dxgi.dll");
        goto LAB_1403f467c;
      }
      iVar1 = (*pcVar5)(&DAT_140e14714,&local_38);
      if (iVar1 < 0) {
        pcVar7 = "D3D12: Could not create DXGIFactory";
LAB_1403f4667:
        FUN_1400fb8f0(9,pcVar7);
      }
      else {
        iVar1 = (**(code **)*local_38)(local_38,&DAT_140e14724,&local_40);
        if (iVar1 < 0) {
          (**(code **)(*local_38 + 0x10))();
          pcVar7 = "D3D12: Failed to find DXGI1.4 support, required for DX12";
          goto LAB_1403f4667;
        }
        (**(code **)(*local_40 + 0x10))();
        iVar1 = (**(code **)*local_38)(local_38,&DAT_140e14734,&local_48);
        if (iVar1 < 0) {
          iVar1 = (**(code **)(*local_38 + 0x60))(local_38,0,&local_50);
        }
        else {
          local_58 = &local_50;
          iVar1 = (**(code **)(*local_48 + 0xe8))(local_48,0,2,&DAT_140e14744);
          (**(code **)(*local_48 + 0x10))();
        }
        if (-1 < iVar1) {
          iVar1 = (*pcVar3)(local_50,0xb100,&DAT_140e14754,&local_30);
          if (-1 < iVar1) {
            (**(code **)(*local_30 + 0x10))();
          }
          (**(code **)(*local_50 + 0x10))();
          (**(code **)(*local_38 + 0x10))();
          FUN_140165790(lVar2);
          FUN_140165790(lVar4);
          uVar6 = 1;
          if (-1 < iVar1) goto LAB_1403f4683;
          pcVar7 = "D3D12: Could not create D3D12Device with feature level 11_1";
          goto LAB_1403f462d;
        }
        FUN_1400fb8f0(9,"D3D12: Failed to find adapter for D3D12Device");
        (**(code **)(*local_38 + 0x10))();
      }
      FUN_140165790(lVar2);
    }
LAB_1403f467c:
    FUN_140165790(lVar4);
  }
  uVar6 = 0;
LAB_1403f4683:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_78)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_78);
}

