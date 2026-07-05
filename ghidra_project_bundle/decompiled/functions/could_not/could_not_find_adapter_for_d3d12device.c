/**
 * Function: could_not_find_adapter_for_d3d12device
 * Address:  1403f46f0
 * Signature: undefined could_not_find_adapter_for_d3d12device(void)
 * Body size: 3782 bytes
 */


undefined8 * could_not_find_adapter_for_d3d12device(char param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined1 auStack_228 [32];
  undefined8 *local_208;
  uint local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0 [4];
  int local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8 [2];
  int local_1b0;
  int local_1ac;
  uint local_1a8;
  uint local_1a4;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [312];
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_228;
  puVar3 = (undefined8 *)FUN_140160c70(1,0x208);
  lVar4 = parameter_s_is_invalid("dxgi.dll");
  puVar3[5] = lVar4;
  if (lVar4 == 0) {
    FUN_1403f55c0(puVar3);
    if (*(char *)(puVar3 + 0xf) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Could not find dxgi.dll");
    }
    pcVar8 = "Could not find dxgi.dll";
LAB_1403f4aa5:
    FUN_1400fbed0(&DAT_141339891,pcVar8);
  }
  else {
    if (param_1 != '\0') {
      lVar4 = parameter_s_is_invalid("dxgidebug.dll");
      puVar3[6] = lVar4;
      if (lVar4 == 0) {
        pcVar8 = "Could not find dxgidebug.dll";
      }
      else {
        pcVar5 = (code *)failed_loading_s(lVar4,"DXGIGetDebugInterface");
        if (pcVar5 == (code *)0x0) {
          pcVar8 = "Could not load function: DXGIGetDebugInterface";
        }
        else {
          iVar2 = (*pcVar5)(&DAT_140e147b4,puVar3 + 1);
          if (iVar2 < 0) {
            FUN_1400fb8f0(9,"Could not get IDXGIDebug interface");
          }
          iVar2 = (*pcVar5)(&DAT_140e147c4,puVar3 + 3);
          if (-1 < iVar2) goto LAB_1403f4815;
          pcVar8 = "Could not get IDXGIInfoQueue interface";
        }
      }
      FUN_1400fb8f0(9,pcVar8);
    }
LAB_1403f4815:
    pcVar5 = (code *)failed_loading_s(puVar3[5],"CreateDXGIFactory1");
    if (pcVar5 == (code *)0x0) {
      FUN_1403f55c0(puVar3);
      if (*(char *)(puVar3 + 0xf) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_1400fb950(9,&DAT_141339891,"Could not load function: CreateDXGIFactory1");
      }
      pcVar8 = "Could not load function: CreateDXGIFactory1";
      goto LAB_1403f4aa5;
    }
    iVar2 = (*pcVar5)(&DAT_140e14714,&local_190);
    if (iVar2 < 0) {
      FUN_1403f55c0(puVar3);
      pcVar8 = "Could not create DXGIFactory";
LAB_1403f4b33:
      s_error_code_s_0x08lx(puVar3,pcVar8,iVar2);
    }
    else {
      puVar7 = puVar3 + 2;
      iVar2 = (**(code **)*local_190)(local_190,&DAT_140e14724,puVar7);
      if (iVar2 < 0) {
        FUN_1403f55c0(puVar3);
        pcVar8 = "DXGI1.4 support not found, required for DX12";
        goto LAB_1403f4b33;
      }
      (**(code **)(*local_190 + 0x10))();
      iVar2 = (*(code *)**(undefined8 **)*puVar7)((undefined8 *)*puVar7,&DAT_140e14764,&local_198);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*local_198 + 0xe0))(local_198,0,puVar3 + 8,4);
        if (iVar2 < 0) {
          *(undefined4 *)(puVar3 + 8) = 0;
        }
        (**(code **)(*local_198 + 0x10))();
      }
      iVar2 = (*(code *)**(undefined8 **)puVar3[2])
                        ((undefined8 *)puVar3[2],&DAT_140e14734,&local_1a0);
      if (iVar2 < 0) {
        iVar2 = (**(code **)(*(longlong *)*puVar7 + 0x60))((longlong *)*puVar7,0);
      }
      else {
        local_208 = puVar3 + 4;
        iVar2 = (**(code **)(*local_1a0 + 0xe8))(local_1a0,0,2 - (param_2 & 0xff),&DAT_140e14744);
        (**(code **)(*local_1a0 + 0x10))();
      }
      if (iVar2 < 0) {
        FUN_1403f55c0(puVar3);
        pcVar8 = "Could not find adapter for D3D12Device";
        goto LAB_1403f4b33;
      }
      iVar2 = (**(code **)(*(longlong *)puVar3[4] + 0x50))((longlong *)puVar3[4],local_188);
      if (iVar2 < 0) {
        FUN_1403f55c0(puVar3);
        pcVar8 = "Could not get adapter description";
        goto LAB_1403f4b33;
      }
      iVar2 = (**(code **)(*(longlong *)puVar3[4] + 0x48))
                        ((longlong *)puVar3[4],&DAT_140e14774,&local_1a8);
      if (iVar2 < 0) {
        FUN_1403f55c0(puVar3);
        pcVar8 = "Could not get adapter driver version";
        goto LAB_1403f4b33;
      }
      FUN_1400fb890(9,"SDL_GPU Driver: D3D12");
      FUN_1400fb890(9,"D3D12 Adapter: %S",local_188);
      local_200 = local_1a8 & 0xffff;
      local_208 = (undefined8 *)CONCAT44(local_208._4_4_,local_1a8 >> 0x10);
      FUN_1400fb890(9,"D3D12 Driver: %d.%d.%d.%d",local_1a4 >> 0x10,local_1a4 & 0xffff);
      lVar4 = parameter_s_is_invalid("d3d12.dll");
      puVar3[9] = lVar4;
      if (lVar4 == 0) {
        FUN_1403f55c0(puVar3);
        if (*(char *)(puVar3 + 0xf) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(9,&DAT_141339891,"Could not find d3d12.dll");
        }
        pcVar8 = "Could not find d3d12.dll";
        goto LAB_1403f4aa5;
      }
      pcVar5 = (code *)failed_loading_s(lVar4,"D3D12CreateDevice");
      if (pcVar5 == (code *)0x0) {
        FUN_1403f55c0(puVar3);
        if (*(char *)(puVar3 + 0xf) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(9,&DAT_141339891,"Could not load function: D3D12CreateDevice");
        }
        pcVar8 = "Could not load function: D3D12CreateDevice";
        goto LAB_1403f4aa5;
      }
      lVar4 = failed_loading_s(puVar3[9],"D3D12SerializeRootSignature");
      puVar3[0xb] = lVar4;
      if (lVar4 == 0) {
        FUN_1403f55c0(puVar3);
        if (*(char *)(puVar3 + 0xf) == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(9,&DAT_141339891,"Could not load function: D3D12SerializeRootSignature");
        }
        pcVar8 = "Could not load function: D3D12SerializeRootSignature";
        goto LAB_1403f4aa5;
      }
      if (param_1 == '\0') {
        iVar2 = (*pcVar5)(puVar3[4],0xb100,&DAT_140e14754,puVar3 + 10);
        if (-1 < iVar2) {
LAB_1403f4c3c:
          local_1b8[0] = 0;
          iVar2 = (**(code **)(*(longlong *)puVar3[10] + 0x68))
                            ((longlong *)puVar3[10],1,local_1b8,0x10);
          if (iVar2 < 0) {
            FUN_1403f55c0(puVar3);
            pcVar8 = "Could not get device architecture";
          }
          else {
            *(bool *)((longlong)puVar3 + 0x7a) = local_1b0 != 0;
            *(bool *)((longlong)puVar3 + 0x7b) = local_1ac != 0;
            *(undefined1 *)((longlong)puVar3 + 0x79) = 0;
            iVar2 = (**(code **)(*(longlong *)puVar3[10] + 0x68))
                              ((longlong *)puVar3[10],0x2d,local_1d0,8);
            if (-1 < iVar2) {
              *(bool *)((longlong)puVar3 + 0x79) = local_1cc != 0;
            }
            local_1c8 = 0;
            uStack_1c0 = 0;
            iVar2 = (**(code **)(*(longlong *)puVar3[10] + 0x40))
                              ((longlong *)puVar3[10],&local_1c8,&DAT_140e14784,puVar3 + 0xe);
            if (iVar2 < 0) {
              FUN_1403f55c0(puVar3);
              pcVar8 = "Could not create D3D12CommandQueue";
            }
            else {
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_1d8 = 0;
              local_1e8 = 0x100000010;
              local_208 = puVar3 + 0x10;
              local_1e0 = &local_1f8;
              iVar2 = (**(code **)(*(longlong *)puVar3[10] + 0x148))
                                ((longlong *)puVar3[10],&local_1e8,0,&DAT_140e14794);
              if (iVar2 < 0) {
                FUN_1403f55c0(puVar3);
                pcVar8 = "Could not create indirect draw command signature";
              }
              else {
                local_1f8 = CONCAT44(local_1f8._4_4_,1);
                local_1e8 = CONCAT44(local_1e8._4_4_,0x14);
                local_208 = puVar3 + 0x11;
                local_1e0 = &local_1f8;
                iVar2 = (**(code **)(*(longlong *)puVar3[10] + 0x148))
                                  ((longlong *)puVar3[10],&local_1e8,0,&DAT_140e14794);
                if (iVar2 < 0) {
                  FUN_1403f55c0(puVar3);
                  pcVar8 = "Could not create indirect indexed draw command signature";
                }
                else {
                  local_1f8 = CONCAT44(local_1f8._4_4_,2);
                  local_1e8 = CONCAT44(local_1e8._4_4_,0xc);
                  local_208 = puVar3 + 0x12;
                  local_1e0 = &local_1f8;
                  iVar2 = (**(code **)(*(longlong *)puVar3[10] + 0x148))
                                    ((longlong *)puVar3[10],&local_1e8,0,&DAT_140e14794);
                  if (-1 < iVar2) {
                    puVar3[0x20] = 0x400000000;
                    lVar4 = FUN_140160c70(4,8);
                    puVar3[0x1f] = lVar4;
                    if (lVar4 != 0) {
                      puVar3[0x22] = 0x400000000;
                      lVar4 = FUN_140160c70(4,8);
                      puVar3[0x21] = lVar4;
                      if (lVar4 != 0) {
                        puVar3[0x24] = 0x400000000;
                        lVar4 = FUN_140160c70(4,8);
                        puVar3[0x23] = lVar4;
                        if (lVar4 != 0) {
                          puVar3[0x26] = 0x400000000;
                          lVar4 = FUN_140160c70(4,8);
                          puVar3[0x25] = lVar4;
                          if (lVar4 != 0) {
                            uVar9 = 0;
                            do {
                              lVar4 = FUN_1403f5fa0(puVar3,uVar9 & 0xffffffff);
                              puVar3[uVar9 + 0x27] = lVar4;
                              if (lVar4 == 0) goto LAB_1403f556d;
                              uVar9 = uVar9 + 1;
                            } while (uVar9 != 4);
                            uVar6 = initializesrwlock();
                            puVar3[0x2d] = uVar6;
                            puVar3[0x2b] = 0x400000004;
                            uVar6 = FUN_140160c70(4,8);
                            puVar3[0x2c] = uVar6;
                            if (*(int *)(puVar3 + 0x2b) != 0) {
                              uVar9 = 0;
                              do {
                                uVar6 = failed_to_create_descriptor_heap(puVar3,0,0x10000,0);
                                *(undefined8 *)(puVar3[0x2c] + uVar9 * 8) = uVar6;
                                if (*(longlong *)(puVar3[0x2c] + uVar9 * 8) == 0)
                                goto LAB_1403f556d;
                                uVar9 = uVar9 + 1;
                              } while (uVar9 < *(uint *)(puVar3 + 0x2b));
                            }
                            uVar6 = initializesrwlock();
                            puVar3[0x30] = uVar6;
                            puVar3[0x2e] = 0x400000004;
                            uVar6 = FUN_140160c70(4,8);
                            puVar3[0x2f] = uVar6;
                            if (*(int *)(puVar3 + 0x2e) != 0) {
                              uVar9 = 0;
                              do {
                                uVar6 = failed_to_create_descriptor_heap(puVar3,1,0x800,0);
                                *(undefined8 *)(puVar3[0x2f] + uVar9 * 8) = uVar6;
                                if (*(longlong *)(puVar3[0x2f] + uVar9 * 8) == 0)
                                goto LAB_1403f556d;
                                uVar9 = uVar9 + 1;
                              } while (uVar9 < *(uint *)(puVar3 + 0x2e));
                            }
                            puVar3[0x32] = 0x400000000;
                            lVar4 = FUN_140160c70(4,8);
                            puVar3[0x31] = lVar4;
                            if (lVar4 != 0) {
                              puVar3[0x34] = 0x400000000;
                              lVar4 = FUN_140160c70(4,8);
                              puVar3[0x33] = lVar4;
                              if (lVar4 != 0) {
                                puVar3[0x36] = 0x400000000;
                                lVar4 = FUN_140160c70(4,8);
                                puVar3[0x35] = lVar4;
                                if (lVar4 != 0) {
                                  puVar3[0x38] = 0x400000000;
                                  lVar4 = FUN_140160c70(4,8);
                                  puVar3[0x37] = lVar4;
                                  if (lVar4 != 0) {
                                    puVar3[0x3a] = 0x400000000;
                                    lVar4 = FUN_140160c70(4,8);
                                    puVar3[0x39] = lVar4;
                                    if (lVar4 != 0) {
                                      uVar6 = initializesrwlock();
                                      puVar3[0x3b] = uVar6;
                                      uVar6 = initializesrwlock();
                                      puVar3[0x3c] = uVar6;
                                      uVar6 = initializesrwlock();
                                      puVar3[0x3d] = uVar6;
                                      uVar6 = initializesrwlock();
                                      puVar3[0x3e] = uVar6;
                                      uVar6 = initializesrwlock();
                                      puVar3[0x3f] = uVar6;
                                      uVar6 = initializesrwlock();
                                      puVar3[0x40] = uVar6;
                                      *(char *)(puVar3 + 0xf) = param_1;
                                      *(undefined4 *)((longlong)puVar3 + 0x7c) = 2;
                                      uVar6 = FUN_14014ffe0(param_3,
                                                  "SDL.gpu.device.create.d3d12.semantic","TEXCOORD")
                                      ;
                                      puVar3[0xc] = uVar6;
                                      failed_to_compile_vertex_shader_for_blit(puVar3);
                                      puVar7 = (undefined8 *)FUN_140160c70(1,0x2a8);
                                      if (puVar7 != (undefined8 *)0x0) {
                                        *puVar7 = FUN_1403f6630;
                                        puVar7[1] = could_not_create_compute_pipeline_state;
                                        puVar7[2] = could_not_create_graphics_pipeline_state;
                                        puVar7[3] = FUN_1403f80c0;
                                        puVar7[4] = FUN_1403f8220;
                                        puVar7[5] = sdlgputexturecreatename;
                                        puVar7[6] = FUN_1403f83a0;
                                        puVar7[7] = FUN_1403f83c0;
                                        puVar7[8] = FUN_1403f83f0;
                                        puVar7[9] = FUN_1403f84d0;
                                        puVar7[10] = FUN_1403f85b0;
                                        puVar7[0xb] = FUN_1403f8620;
                                        puVar7[0xc] = &LAB_1403f8690;
                                        puVar7[0xd] = FUN_1403f86a0;
                                        puVar7[0xe] = FUN_1403f8780;
                                        puVar7[0xf] = &LAB_1403f8800;
                                        puVar7[0x10] = &LAB_1403f8800;
                                        puVar7[0x11] = FUN_1403f8810;
                                        puVar7[0x12] = FUN_1403f8840;
                                        puVar7[0x13] = FUN_1403f88c0;
                                        puVar7[0x14] = FUN_1403f8940;
                                        puVar7[0x15] = FUN_1403f8ec0;
                                        puVar7[0x16] = FUN_1403f9040;
                                        puVar7[0x17] = FUN_1403f90b0;
                                        puVar7[0x18] = FUN_1403f9120;
                                        puVar7[0x19] = &LAB_1403f9180;
                                        puVar7[0x1a] = FUN_1403f91a0;
                                        puVar7[0x1b] = FUN_1403f92d0;
                                        puVar7[0x1c] = FUN_1403f93e0;
                                        puVar7[0x1d] = FUN_1403f9590;
                                        puVar7[0x1e] = FUN_1403f9690;
                                        puVar7[0x1f] = FUN_1403f9790;
                                        puVar7[0x20] = FUN_1403f9940;
                                        puVar7[0x21] = FUN_1403f9a40;
                                        puVar7[0x22] = FUN_1403f9b40;
                                        puVar7[0x23] = FUN_1403f9c10;
                                        puVar7[0x24] = FUN_1403f9ce0;
                                        puVar7[0x25] = FUN_1403f9d20;
                                        puVar7[0x26] = FUN_1403f9d60;
                                        puVar7[0x27] = FUN_1403f9e40;
                                        puVar7[0x28] = texture_has_no_default_usage_mode;
                                        puVar7[0x29] = FUN_1403fa450;
                                        puVar7[0x2a] = FUN_1403fa660;
                                        puVar7[0x2b] = FUN_1403faaa0;
                                        puVar7[0x2c] = texture_has_no_default_usage_mode;
                                        puVar7[0x2d] = FUN_1403faef0;
                                        puVar7[0x2e] = FUN_1403fb010;
                                        puVar7[0x2f] = FUN_1403fb0e0;
                                        puVar7[0x30] = FUN_1403fb120;
                                        puVar7[0x31] = texture_has_no_default_usage_mode;
                                        puVar7[0x32] = FUN_1403fb660;
                                        puVar7[0x33] = &LAB_1403fb6f0;
                                        puVar7[0x34] = httplib::ClientImpl::vfunction4;
                                        puVar7[0x35] = texture_has_no_default_usage_mode;
                                        puVar7[0x36] = FUN_1403fc100;
                                        puVar7[0x3a] = texture_has_no_default_usage_mode;
                                        puVar7[0x3b] = FUN_1403fc930;
                                        puVar7[0x37] = texture_has_no_default_usage_mode;
                                        puVar7[0x38] = FUN_1403fcf70;
                                        puVar7[0x39] = could_not_fetch_blit_pipeline;
                                        puVar7[0x3c] = httplib::ClientImpl::vfunction4;
                                        puVar7[0x3d] = FUN_1403fd3e0;
                                        puVar7[0x3e] = must_claim_window_before_querying_swapchain_c
                                        ;
                                        puVar7[0x3f] = &LAB_1403fd560;
                                        puVar7[0x40] = window_already_claimed;
                                        puVar7[0x41] = window_already_unclaimed;
                                        puVar7[0x42] = swapchain_composition_not_supported;
                                        puVar7[0x43] = FUN_1403fdad0;
                                        puVar7[0x44] = cannot_get_swapchain_format_window_has_not_be
                                        ;
                                        puVar7[0x45] = failed_to_create_id3d12commandallocator;
                                        puVar7[0x46] = FUN_1403fdfc0;
                                        puVar7[0x47] = cannot_wait_for_a_swapchain_from_an_unclaimed
                                        ;
                                        puVar7[0x48] = FUN_1403fe090;
                                        puVar7[0x49] = failed_to_convert_command_list;
                                        puVar7[0x4a] = FUN_1403fe5c0;
                                        puVar7[0x4b] = failed_to_close_command_list;
                                        puVar7[0x4c] = setting_fence_event_failed;
                                        puVar7[0x4d] = setting_fence_event_failed;
                                        puVar7[0x4e] = FUN_1403fe9b0;
                                        puVar7[0x4f] = FUN_1403fe9d0;
                                        puVar7[0x50] = FUN_1403fea70;
                                        puVar7[0x51] = FUN_1403febc0;
                                        puVar7[0x52] = puVar3;
                                        *(char *)((longlong)puVar7 + 0x2a4) = param_1;
                                        *puVar3 = puVar7;
                                        goto LAB_1403f4b3a;
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
LAB_1403f556d:
                    FUN_1403f55c0(puVar3);
                    goto LAB_1403f4b38;
                  }
                  FUN_1403f55c0(puVar3);
                  pcVar8 = "Could not create indirect dispatch command signature";
                }
              }
            }
          }
          goto LAB_1403f4b33;
        }
LAB_1403f5515:
        FUN_1403f55c0(puVar3);
        pcVar8 = "Could not create D3D12Device";
        goto LAB_1403f4b33;
      }
      could_not_get_id3d12debug_interface(puVar3);
      iVar2 = (*pcVar5)(puVar3[4],0xb100,&DAT_140e14754,puVar3 + 10);
      if (iVar2 < 0) goto LAB_1403f5515;
      cVar1 = failed_to_convert_id3d12device_to_id3d12infoq(puVar3);
      if (cVar1 != '\0') {
        FUN_1403f5f10(puVar3[10]);
        goto LAB_1403f4c3c;
      }
    }
  }
LAB_1403f4b38:
  puVar7 = (undefined8 *)0x0;
LAB_1403f4b3a:
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_228)) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_228);
}

