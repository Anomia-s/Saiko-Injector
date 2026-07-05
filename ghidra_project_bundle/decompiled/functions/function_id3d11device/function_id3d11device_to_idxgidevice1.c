/**
 * Function: function_id3d11device_to_idxgidevice1
 * Address:  14041ae80
 * Signature: undefined function_id3d11device_to_idxgidevice1(void)
 * Body size: 1945 bytes
 */


int function_id3d11device_to_idxgidevice1(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  longlong **local_150;
  longlong *local_148;
  longlong **local_140;
  longlong *local_130;
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_188;
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  local_d0 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  uStack_74 = 0x910000009200;
  local_88 = 0xb100;
  uStack_84 = 0xb000;
  uStack_80 = 0xa100;
  local_7c = 0x93000000a000;
  bVar4 = FUN_1401106d0("SDL_RENDER_DIRECT3D11_DEBUG",0);
  lVar9 = parameter_s_is_invalid("dxgi.dll");
  *plVar3 = lVar9;
  iVar7 = -0x7fffbffb;
  if (lVar9 == 0) goto LAB_14041b569;
  pcVar10 = (code *)failed_loading_s(lVar9,"CreateDXGIFactory2");
  if (pcVar10 == (code *)0x0) {
    pcVar11 = (code *)failed_loading_s(*plVar3,"CreateDXGIFactory");
    if (pcVar11 == (code *)0x0) goto LAB_14041b569;
  }
  else {
    pcVar11 = (code *)0x0;
  }
  lVar9 = parameter_s_is_invalid("d3d11.dll");
  plVar3[1] = lVar9;
  if ((lVar9 == 0) ||
     (pcVar12 = (code *)failed_loading_s(lVar9,"D3D11CreateDevice"), pcVar12 == (code *)0x0))
  goto LAB_14041b569;
  uVar14 = 0;
  if (bVar4 == 0) {
LAB_14041b063:
    if (pcVar10 == (code *)0x0) {
      iVar7 = (*pcVar11)(&DAT_140e153cc,plVar3 + 2);
    }
    else {
      iVar7 = (*pcVar10)(uVar14,&DAT_140e153cc);
    }
    if (iVar7 < 0) {
      pcVar15 = "__FUNCTION__, CreateDXGIFactory";
    }
    else {
      iVar7 = (**(code **)(*(longlong *)plVar3[2] + 0x38))((longlong *)plVar3[2],0,plVar3 + 3);
      if (-1 < iVar7) {
        bVar5 = FUN_1401106d0("SDL_RENDER_DIRECT3D_THREADSAFE",0);
        local_140 = &local_d8;
        local_150 = &local_d0;
        local_168 = &local_88;
        local_158 = 7;
        local_160 = 7;
        local_148 = plVar3 + 0x28;
        iVar7 = (*pcVar12)(plVar3[3],0,0,(uint)(bVar5 ^ 1) + (uint)bVar4 * 2 + 0x20);
        if (-1 < iVar7) {
          iVar7 = (**(code **)*local_d0)(local_d0,&DAT_140e153dc,plVar3 + 5);
          if (iVar7 < 0) {
            pcVar15 = "__FUNCTION__, ID3D11Device to ID3D11Device1";
          }
          else {
            plVar1 = plVar3 + 6;
            iVar7 = (**(code **)*local_d8)(local_d8,&DAT_140e153ec,plVar1);
            if (iVar7 < 0) {
              pcVar15 = "__FUNCTION__, ID3D11DeviceContext to ID3D11DeviceContext1";
            }
            else {
              iVar7 = (**(code **)*local_d0)(local_d0,&DAT_140e153fc,&local_e0);
              if (iVar7 < 0) {
                pcVar15 = "__FUNCTION__, ID3D11Device to IDXGIDevice1";
              }
              else {
                iVar7 = (**(code **)(*local_e0 + 0x60))(local_e0,1);
                if (iVar7 < 0) {
                  pcVar15 = "__FUNCTION__, IDXGIDevice1::SetMaximumFrameLatency";
                }
                else {
                  iVar2 = (int)plVar3[0x28];
                  if (iVar2 < 0xa000) {
                    if ((iVar2 == 0x9100) || (iVar2 == 0x9200)) {
                      uVar14 = 0x800;
                    }
                    else {
                      if (iVar2 != 0x9300) goto LAB_14041b292;
                      uVar14 = 0x1000;
                    }
                  }
                  else if (iVar2 < 0xb000) {
                    if ((iVar2 != 0xa000) && (iVar2 != 0xa100)) {
LAB_14041b292:
                      FUN_1400fbed0("%s, Unexpected feature level: %d","D3D11_CreateDeviceResources"
                                   );
                      iVar7 = -0x7fffbffb;
                      goto LAB_14041b569;
                    }
                    uVar14 = 0x2000;
                  }
                  else {
                    uVar14 = 0x4000;
                    if ((iVar2 != 0xb000) && (iVar2 != 0xb100)) goto LAB_14041b292;
                  }
                  uVar8 = parameter_s_is_invalid(param_1);
                  FUN_14014fc70(uVar8,"SDL.renderer.max_texture_size",uVar14);
                  cVar6 = function_id3d11device1_createinputlayout
                                    (plVar3[5],plVar3 + 0x1d,plVar3 + 0xc);
                  if (cVar6 == '\0') goto LAB_14041b569;
                  local_e4 = 0;
                  local_ec = 0;
                  local_f8 = 0x80;
                  local_f0 = 4;
                  iVar7 = (**(code **)(*(longlong *)plVar3[5] + 0x18))
                                    ((longlong *)plVar3[5],&local_f8,0,plVar3 + 0x3b);
                  if (iVar7 < 0) {
                    pcVar15 = "__FUNCTION__, ID3D11Device1::CreateBuffer [vertex shader constants]";
                  }
                  else {
                    local_ac = 0;
                    uStack_a4 = 0;
                    local_b8 = 0x100000000;
                    local_b0 = 8;
                    local_9c = 0x7f7fffff00000000;
                    local_c8 = 0x300000000;
                    uStack_c0 = 0x300000003;
                    local_130 = plVar3 + 0x3b;
                    iVar7 = (**(code **)(*(longlong *)plVar3[5] + 0xb8))
                                      ((longlong *)plVar3[5],&local_c8,plVar3 + 0x24);
                    if (-1 < iVar7) {
                      local_c8 = 0x100000000;
                      uStack_c0 = CONCAT44(uStack_c0._4_4_,1);
                      iVar7 = (**(code **)(*(longlong *)plVar3[5] + 0xb8))
                                        ((longlong *)plVar3[5],&local_c8,plVar3 + 0x25);
                      if (-1 < iVar7) {
                        local_c8 = 0x300000015;
                        uStack_c0 = CONCAT44(uStack_c0._4_4_,3);
                        iVar7 = (**(code **)(*(longlong *)plVar3[5] + 0xb8))
                                          ((longlong *)plVar3[5],&local_c8,plVar3 + 0x26);
                        if (-1 < iVar7) {
                          local_c8 = 0x100000015;
                          uStack_c0 = CONCAT44(uStack_c0._4_4_,1);
                          iVar7 = (**(code **)(*(longlong *)plVar3[5] + 0xb8))
                                            ((longlong *)plVar3[5],&local_c8,plVar3 + 0x27);
                          if (-1 < iVar7) {
                            local_128 = (longlong *)0x100000003;
                            uStack_120 = 0;
                            local_110 = 1;
                            uStack_108 = 0;
                            local_118 = 0;
                            iVar7 = (**(code **)(*(longlong *)plVar3[5] + 0xb0))
                                              ((longlong *)plVar3[5],&local_128,plVar3 + 0x29);
                            if (iVar7 < 0) {
                              pcVar15 = 
                              "__FUNCTION__, ID3D11Device1::CreateRasterizerState [main rasterizer]"
                              ;
                            }
                            else {
                              local_110 = CONCAT44(1,(undefined4)local_110);
                              iVar7 = (**(code **)(*(longlong *)plVar3[5] + 0xb0))
                                                ((longlong *)plVar3[5],&local_128,plVar3 + 0x2a);
                              if (-1 < iVar7) {
                                lVar9 = function_id3d11device1_createblendstate
                                                  (*(undefined8 *)(param_1 + 0x2c0),1);
                                if (lVar9 != 0) {
                                  (**(code **)(*(longlong *)*plVar1 + 0x88))
                                            ((longlong *)*plVar1,plVar3[0xc]);
                                  (**(code **)(*(longlong *)*plVar1 + 0x58))
                                            ((longlong *)*plVar1,plVar3[0x1d],0,0);
                                  (**(code **)(*(longlong *)*plVar1 + 0x38))
                                            ((longlong *)*plVar1,0,1,local_130);
                                  lVar9 = plVar3[5];
                                  uVar8 = parameter_s_is_invalid(param_1);
                                  FUN_14014faf0(uVar8,"SDL.renderer.d3d11.device",lVar9);
                                }
                                goto LAB_14041b569;
                              }
                              pcVar15 = 
                              "__FUNCTION__, ID3D11Device1::CreateRasterizerState [clipped rasterizer]"
                              ;
                            }
                            goto LAB_14041b562;
                          }
                        }
                      }
                    }
                    pcVar15 = 
                    "__FUNCTION__, ID3D11Device1::CreateSamplerState [nearest-pixel filter]";
                  }
                }
              }
            }
          }
          goto LAB_14041b562;
        }
      }
      pcVar15 = "__FUNCTION__, D3D11CreateDevice";
    }
  }
  else {
    local_128 = (longlong *)0x0;
    pcVar13 = (code *)failed_loading_s(*plVar3,"DXGIGetDebugInterface1");
    if (pcVar13 == (code *)0x0) {
      iVar7 = -0x7fffbffb;
      goto LAB_14041b569;
    }
    iVar7 = (*pcVar13)(0,&DAT_140e153ac,plVar3 + 4);
    if ((-1 < iVar7) && (iVar7 = (*pcVar13)(0,&DAT_140e153bc,&local_128), -1 < iVar7)) {
      local_c8 = 0x490bda80e48ae283;
      uStack_c0 = 0x8dacfa9e943e687;
      (**(code **)(*local_128 + 0x108))(local_128,&local_c8,1,1);
      local_c8 = 0x490bda80e48ae283;
      uStack_c0 = 0x8dacfa9e943e687;
      (**(code **)(*local_128 + 0x108))(local_128,&local_c8,0,1);
      if (local_128 != (longlong *)0x0) {
        (**(code **)(*local_128 + 0x10))();
      }
      uVar14 = 1;
      goto LAB_14041b063;
    }
    pcVar15 = "__FUNCTION__, DXGIGetDebugInterface1";
  }
LAB_14041b562:
  FUN_1403d7600(pcVar15,iVar7);
LAB_14041b569:
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
    local_d0 = (longlong *)0x0;
  }
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
    local_d8 = (longlong *)0x0;
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  if (DAT_1414ef3c0 != (local_60 ^ (ulonglong)auStack_188)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_60 ^ (ulonglong)auStack_188);
  }
  return iVar7;
}

