/**
 * Function: function_id3d12device_createcommandlist
 * Address:  140420330
 * Signature: undefined function_id3d12device_createcommandlist(void)
 * Body size: 2775 bytes
 */


int function_id3d12device_createcommandlist(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  HMODULE hModule;
  FARPROC pFVar6;
  longlong lVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  INT_PTR IVar11;
  undefined8 uVar12;
  longlong *plVar13;
  char *pcVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_108;
  undefined8 uStack_100;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_148;
  plVar1 = *(longlong **)(param_1 + 0x2c0);
  local_f0 = (longlong *)0x0;
  cVar2 = FUN_1401106d0("SDL_RENDER_DIRECT3D11_DEBUG",0);
  hModule = GetModuleHandleW(L"kernel32.dll");
  iVar15 = -0x7fffbffb;
  iVar3 = iVar15;
  if ((hModule == (HMODULE)0x0) ||
     (pFVar6 = GetProcAddress(hModule,"CreateEventExW"), pFVar6 == (FARPROC)0x0))
  goto joined_r0x000140420df3;
  lVar7 = parameter_s_is_invalid("dxgi.dll");
  *plVar1 = lVar7;
  if ((lVar7 == 0) ||
     (pcVar8 = (code *)failed_loading_s(lVar7,"CreateDXGIFactory2"), pcVar8 == (code *)0x0))
  goto joined_r0x000140420df3;
  lVar7 = parameter_s_is_invalid("D3D12.dll");
  plVar1[1] = lVar7;
  if ((lVar7 == 0) ||
     (pcVar9 = (code *)failed_loading_s(lVar7,"D3D12CreateDevice"), pcVar9 == (code *)0x0))
  goto joined_r0x000140420df3;
  uVar12 = 0;
  if (cVar2 == '\0') {
LAB_14042051b:
    iVar3 = (*pcVar8)(uVar12,&DAT_140e155f0,plVar1 + 2);
    if (iVar3 < 0) {
      pcVar14 = "__FUNCTION__, CreateDXGIFactory";
    }
    else {
      local_128 = plVar1 + 3;
      iVar3 = (**(code **)(*(longlong *)plVar1[2] + 0xe8))((longlong *)plVar1[2],0,2,&DAT_140e15600)
      ;
      if (iVar3 < 0) {
        pcVar14 = "__FUNCTION__, IDXGIFactory6::EnumAdapterByGPUPreference";
      }
      else {
        iVar3 = (*pcVar9)(plVar1[3],0xb000,&DAT_140e15610,&local_f0);
        if (iVar3 < 0) {
          pcVar14 = "__FUNCTION__, D3D12CreateDevice";
        }
        else {
          if (cVar2 != '\0') {
            local_108 = (longlong *)0x0;
            local_e8 = CONCAT44(local_e8._4_4_,3);
            iVar3 = (**(code **)*local_f0)(local_f0,&DAT_140e15620,&local_108);
            if (iVar3 < 0) {
              pcVar14 = "__FUNCTION__, ID3D12Device to ID3D12InfoQueue";
              goto LAB_140420d70;
            }
            local_88 = 0;
            uStack_80 = 0;
            uStack_a8 = 0;
            uStack_a4 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            uStack_ac = 0;
            local_c8 = 0;
            uStack_c4 = 0;
            uStack_c0 = 0;
            uStack_bc = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            local_98 = 1;
            puStack_90 = &local_e8;
            (**(code **)(*local_108 + 0x88))(local_108,&local_d8);
            (**(code **)(*local_108 + 0xf8))(local_108,1,1);
            (**(code **)(*local_108 + 0xf8))(local_108,0,1);
            if (local_108 != (longlong *)0x0) {
              (**(code **)(*local_108 + 0x10))();
            }
          }
          iVar3 = (**(code **)*local_f0)(local_f0,&DAT_140e15610,plVar1 + 6);
          if (iVar3 < 0) {
            pcVar14 = "__FUNCTION__, ID3D12Device to ID3D12Device1";
          }
          else {
            local_108 = (longlong *)0x0;
            uStack_100 = 0;
            iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x40))
                              ((longlong *)plVar1[6],&local_108,&DAT_140e15630,plVar1 + 8);
            if (iVar3 < 0) {
              pcVar14 = "__FUNCTION__, ID3D12Device::CreateCommandQueue";
            }
            else {
              uStack_e0 = 0;
              local_e8 = 0x200000002;
              iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x70))
                                ((longlong *)plVar1[6],&local_e8,&DAT_140e15640,plVar1 + 0xd);
              if (iVar3 < 0) {
                pcVar14 = "__FUNCTION__, ID3D12Device::CreateDescriptorHeap [rtv]";
              }
              else {
                uVar4 = (**(code **)(*local_f0 + 0x78))(local_f0,2);
                *(undefined4 *)(plVar1 + 0xe) = uVar4;
                local_e8 = CONCAT44(0x4000,(undefined4)local_e8);
                iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x70))
                                  ((longlong *)plVar1[6],&local_e8,&DAT_140e15640,plVar1 + 0xf);
                if (iVar3 < 0) {
                  pcVar14 = "__FUNCTION__, ID3D12Device::CreateDescriptorHeap [texture rtv]";
                }
                else {
                  local_e8 = 0x400000000000;
                  uStack_e0 = 1;
                  iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x70))
                                    ((longlong *)plVar1[6],&local_e8,&DAT_140e15640,plVar1 + 0x10);
                  if (iVar3 < 0) {
                    pcVar14 = "__FUNCTION__, ID3D12Device::CreateDescriptorHeap  [srv]";
                  }
                  else {
                    local_78 = plVar1[0x10];
                    uVar4 = (**(code **)(*local_f0 + 0x78))(local_f0,0);
                    *(undefined4 *)(plVar1 + 0x11) = uVar4;
                    local_e8 = 0x400000001;
                    uStack_e0 = 1;
                    iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x70))
                                      ((longlong *)plVar1[6],&local_e8,&DAT_140e15640,plVar1 + 0x12)
                    ;
                    if (iVar3 < 0) {
                      pcVar14 = "__FUNCTION__, ID3D12Device::CreateDescriptorHeap  [sampler]";
                    }
                    else {
                      local_70 = plVar1[0x12];
                      uVar4 = (**(code **)(*local_f0 + 0x78))(local_f0,1);
                      *(undefined4 *)(plVar1 + 0x13) = uVar4;
                      iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x48))
                                        ((longlong *)plVar1[6],0,&DAT_140e15650,plVar1 + 0x14);
                      if ((iVar3 < 0) ||
                         (iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x48))
                                            ((longlong *)plVar1[6],0,&DAT_140e15650,plVar1 + 0x15),
                         iVar3 < 0)) {
                        FUN_1403d7600("__FUNCTION__, ID3D12Device::CreateCommandAllocator",iVar3);
                        goto joined_r0x000140420df3;
                      }
                      local_118 = plVar1 + 9;
                      local_120 = (longlong *)&DAT_140e15660;
                      local_128 = (longlong *)0x0;
                      iVar3 = (**(code **)(*(longlong *)plVar1[6] + 0x60))
                                        ((longlong *)plVar1[6],0,0,plVar1[0x14]);
                      if (-1 < iVar3) {
                        (**(code **)(*(longlong *)plVar1[9] + 0xe0))
                                  ((longlong *)plVar1[9],2,&local_78);
                        local_128 = plVar1 + 0x1a;
                        iVar5 = (**(code **)(*(longlong *)plVar1[6] + 0x120))
                                          ((longlong *)plVar1[6],plVar1[0x18],0,&DAT_140e15670);
                        if (iVar5 < 0) {
                          pcVar14 = "__FUNCTION__, ID3D12Device::CreateFence";
                        }
                        else {
                          plVar1[0x18] = plVar1[0x18] + 1;
                          IVar11 = (*pFVar6)(0,0,0,0x100002);
                          plVar1[0x1b] = IVar11;
                          if (IVar11 == 0) {
                            pcVar14 = "__FUNCTION__, CreateEventEx";
                          }
                          else {
                            FUN_1406352e0(0,&local_d8);
                            local_128 = (longlong *)&DAT_140e15680;
                            local_120 = plVar1 + 0x1c;
                            iVar5 = (**(code **)(*(longlong *)plVar1[6] + 0x80))
                                              ((longlong *)plVar1[6],0,local_d8,
                                               CONCAT44(uStack_cc,uStack_d0));
                            if (-1 < iVar5) {
                              FUN_1406352e0(1,&local_d8);
                              local_120 = plVar1 + 0x1d;
                              local_128 = (longlong *)&DAT_140e15680;
                              iVar5 = (**(code **)(*(longlong *)plVar1[6] + 0x80))
                                                ((longlong *)plVar1[6],0,local_d8,
                                                 CONCAT44(uStack_cc,uStack_d0));
                              if (-1 < iVar5) {
                                FUN_1406352e0(2,&local_d8);
                                local_120 = plVar1 + 0x1e;
                                local_128 = (longlong *)&DAT_140e15680;
                                iVar5 = (**(code **)(*(longlong *)plVar1[6] + 0x80))
                                                  ((longlong *)plVar1[6],0,local_d8,
                                                   CONCAT44(uStack_cc,uStack_d0));
                                if (-1 < iVar5) {
                                  local_128 = (longlong *)CONCAT44(local_128._4_4_,0x57);
                                  lVar7 = function_id3d12device_creategraphicspipelines
                                                    (*(undefined8 *)(param_1 + 0x2c0),0,1,1);
                                  iVar3 = iVar15;
                                  if (lVar7 != 0) {
                                    local_128 = (longlong *)CONCAT44(local_128._4_4_,0x57);
                                    lVar7 = function_id3d12device_creategraphicspipelines
                                                      (*(undefined8 *)(param_1 + 0x2c0),0,1,2);
                                    if (lVar7 != 0) {
                                      local_128 = (longlong *)CONCAT44(local_128._4_4_,0x57);
                                      lVar7 = function_id3d12device_creategraphicspipelines
                                                        (*(undefined8 *)(param_1 + 0x2c0),0,1,3);
                                      if (lVar7 != 0) {
                                        local_128 = (longlong *)CONCAT44(local_128._4_4_,0x57);
                                        lVar7 = function_id3d12device_creategraphicspipelines
                                                          (*(undefined8 *)(param_1 + 0x2c0),1,1,1);
                                        if (lVar7 != 0) {
                                          local_128 = (longlong *)CONCAT44(local_128._4_4_,0x57);
                                          lVar7 = function_id3d12device_creategraphicspipelines
                                                            (*(undefined8 *)(param_1 + 0x2c0),1,1,2)
                                          ;
                                          if (lVar7 != 0) {
                                            local_128 = (longlong *)CONCAT44(local_128._4_4_,0x57);
                                            lVar7 = function_id3d12device_creategraphicspipelines
                                                              (*(undefined8 *)(param_1 + 0x2c0),1,1,
                                                               3);
                                            if (lVar7 != 0) {
                                              local_128 = (longlong *)CONCAT44(local_128._4_4_,0x57)
                                              ;
                                              lVar7 = function_id3d12device_creategraphicspipelines
                                                                (*(undefined8 *)(param_1 + 0x2c0),2,
                                                                 1,1);
                                              if (lVar7 != 0) {
                                                local_128 = (longlong *)
                                                            CONCAT44(local_128._4_4_,0x57);
                                                lVar7 = 
                                                  function_id3d12device_creategraphicspipelines
                                                            (*(undefined8 *)(param_1 + 0x2c0),2,1,2)
                                                ;
                                                if (lVar7 != 0) {
                                                  local_128 = (longlong *)
                                                              CONCAT44(local_128._4_4_,0x57);
                                                  lVar7 = 
                                                  function_id3d12device_creategraphicspipelines
                                                            (*(undefined8 *)(param_1 + 0x2c0),2,1,3)
                                                  ;
                                                  if (lVar7 != 0) {
                                                    lVar7 = 0;
                                                    do {
                                                      function_id3d12device_createplacedresource_ve
                                                                (plVar1,lVar7,0x10000);
                                                      lVar7 = lVar7 + 1;
                                                    } while (lVar7 != 0x100);
                                                    uStack_bc = 0;
                                                    local_b8 = 0;
                                                    uStack_b4 = 0;
                                                    uStack_b0 = 0;
                                                    uStack_cc = 3;
                                                    local_c8 = 0;
                                                    uStack_c4 = 1;
                                                    uStack_c0 = 8;
                                                    uStack_ac = 0;
                                                    uStack_a8 = 0x7f7fffff;
                                                    (**(code **)(*(longlong *)plVar1[0x12] + 0x48))
                                                              ((longlong *)plVar1[0x12],
                                                               plVar1 + 0x422);
                                                    local_d8 = 0x300000000;
                                                    uStack_d0 = 3;
                                                    (**(code **)(*(longlong *)plVar1[6] + 0xb0))
                                                              ((longlong *)plVar1[6],&local_d8,
                                                               plVar1[0x422]);
                                                    local_d8 = 0x100000000;
                                                    uStack_d0 = 1;
                                                    plVar1[0x423] =
                                                         (ulonglong)*(uint *)(plVar1 + 0x13) +
                                                         plVar1[0x422];
                                                    (**(code **)(*(longlong *)plVar1[6] + 0xb0))
                                                              ((longlong *)plVar1[6],&local_d8);
                                                    local_d8 = 0x300000015;
                                                    uStack_d0 = 3;
                                                    plVar1[0x424] =
                                                         (ulonglong)(uint)((int)plVar1[0x13] * 2) +
                                                         plVar1[0x422];
                                                    (**(code **)(*(longlong *)plVar1[6] + 0xb0))
                                                              ((longlong *)plVar1[6],&local_d8);
                                                    local_d8 = 0x100000015;
                                                    uStack_d0 = 1;
                                                    plVar1[0x425] =
                                                         (ulonglong)(uint)((int)plVar1[0x13] * 3) +
                                                         plVar1[0x422];
                                                    (**(code **)(*(longlong *)plVar1[6] + 0xb0))();
                                                    plVar13 = plVar1 + 0x44e;
                                                    lVar7 = 0;
                                                    do {
                                                      plVar13[-6] = lVar7;
                                                      plVar13[-5] = (longlong)(plVar13 + -4);
                                                      plVar13[-4] = lVar7 + 1;
                                                      plVar13[-3] = (longlong)(plVar13 + -2);
                                                      plVar13[-2] = lVar7 + 2;
                                                      plVar13[-1] = (longlong)plVar13;
                                                      plVar13 = plVar13 + 6;
                                                      lVar7 = lVar7 + 3;
                                                    } while (lVar7 != 0x3fff);
                                                    plVar1[0x8446] = 0x3fff;
                                                    plVar1[0x447] = (longlong)(plVar1 + 0x448);
                                                    uVar4 = parameter_s_is_invalid(param_1);
                                                    FUN_14014faf0(uVar4,"SDL.renderer.d3d12.device",
                                                                  plVar1[6]);
                                                    FUN_14014faf0(uVar4,
                                                  "SDL.renderer.d3d12.command_queue",plVar1[8]);
                                                  iVar3 = iVar5;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto joined_r0x000140420df3;
                                }
                              }
                            }
                            pcVar14 = "__FUNCTION__, ID3D12Device::CreateRootSignature";
                          }
                        }
                        FUN_1403d7600(pcVar14,iVar5);
                        iVar3 = iVar5;
                        goto joined_r0x000140420df3;
                      }
                      pcVar14 = "__FUNCTION__, ID3D12Device::CreateCommandList";
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pcVar10 = (code *)failed_loading_s(plVar1[1],"D3D12GetDebugInterface");
    if (pcVar10 == (code *)0x0) goto joined_r0x000140420df3;
    iVar3 = (*pcVar10)(&DAT_140e155c0,plVar1 + 7);
    if (-1 < iVar3) {
      (**(code **)(*(longlong *)plVar1[7] + 0x18))();
    }
    local_108 = (longlong *)0x0;
    pcVar10 = (code *)failed_loading_s(*plVar1,"DXGIGetDebugInterface1");
    if (pcVar10 == (code *)0x0) {
      iVar3 = -0x7fffbffb;
      goto joined_r0x000140420df3;
    }
    iVar3 = (*pcVar10)(0,&DAT_140e155d0,plVar1 + 4);
    if ((-1 < iVar3) && (iVar3 = (*pcVar10)(0,&DAT_140e155e0,&local_108), -1 < iVar3)) {
      local_d8 = 0x490bda80e48ae283;
      uStack_d0 = 0xe943e687;
      uStack_cc = 0x8dacfa9;
      (**(code **)(*local_108 + 0x108))(local_108,&local_d8,1,1);
      local_d8 = 0x490bda80e48ae283;
      uStack_d0 = 0xe943e687;
      uStack_cc = 0x8dacfa9;
      (**(code **)(*local_108 + 0x108))(local_108,&local_d8,0,1);
      if (local_108 != (longlong *)0x0) {
        (**(code **)(*local_108 + 0x10))();
      }
      uVar12 = 1;
      goto LAB_14042051b;
    }
    pcVar14 = "__FUNCTION__, DXGIGetDebugInterface1";
  }
LAB_140420d70:
  FUN_1403d7600(pcVar14,iVar3);
joined_r0x000140420df3:
  if (local_f0 != (longlong *)0x0) {
    (**(code **)(*local_f0 + 0x10))();
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_148)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_148);
}

