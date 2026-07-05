/**
 * Function: wgl_arb_create_context_robustness
 * Address:  140462f10
 * Signature: undefined wgl_arb_create_context_robustness(void)
 * Body size: 2005 bytes
 */


void wgl_arb_create_context_robustness(longlong param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int format;
  HWND hWnd;
  HDC hdc;
  longlong lVar3;
  code *pcVar4;
  byte *_Str;
  char *pcVar5;
  byte *pbVar6;
  longlong lVar7;
  FARPROC pFVar8;
  char cVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 auStackY_f8 [32];
  PIXELFORMATDESCRIPTOR local_88;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStackY_f8;
  if ((*(longlong *)(param_1 + 0x680) == 0) ||
     (hWnd = CreateWindowExW(0,DAT_141526118,DAT_141526118,0x88000000,0,0,10,10,(HWND)0x0,(HMENU)0x0
                             ,DAT_141526128,(LPVOID)0x0), hWnd == (HWND)0x0)) goto LAB_1404636b7;
  FUN_14016d260(param_1);
  hdc = GetDC(hWnd);
  local_88.dwVisibleMask = 0;
  local_88.dwDamageMask = 0;
  local_88.nSize = 0x28;
  local_88.nVersion = 1;
  local_88.dwFlags = 0x25 - (*(int *)(param_1 + 0x3b4) == 0);
  if (*(int *)(param_1 + 0x3c8) != 0) {
    local_88.dwFlags = local_88.dwFlags | 2;
  }
  local_88._8_4_ = (uint)*(byte *)(param_1 + 0x398) << 0x10;
  local_88.cGreenBits = *(char *)(param_1 + 0x39c);
  local_88.cGreenShift = '\0';
  local_88.cBlueBits = *(BYTE *)(param_1 + 0x3a0);
  bVar10 = (byte)*(undefined4 *)(param_1 + 0x3a4);
  cVar9 = *(char *)(param_1 + 0x39c) + *(byte *)(param_1 + 0x398) + *(BYTE *)(param_1 + 0x3a0);
  if (*(int *)(param_1 + 0x3ac) != 0) {
    cVar9 = (char)*(int *)(param_1 + 0x3ac) - bVar10;
  }
  local_88._8_8_ = (ulonglong)CONCAT51(local_88._10_5_,cVar9) << 8;
  local_88._16_4_ = *(int *)(param_1 + 0x3b8) << 0x18;
  local_88.cAccumGreenBits = (BYTE)*(undefined4 *)(param_1 + 0x3bc);
  local_88.cAccumBlueBits = (BYTE)*(undefined4 *)(param_1 + 0x3c0);
  local_88.cAccumAlphaBits = (BYTE)*(undefined4 *)(param_1 + 0x3c4);
  uVar2 = local_88._19_4_;
  local_88.cAlphaShift = '\0';
  local_88.cAlphaBits = bVar10;
  local_88.cAccumBits =
       local_88.cAccumBlueBits + local_88.cAccumAlphaBits +
       local_88.cAccumGreenBits + (char)*(int *)(param_1 + 0x3b8);
  local_88.cAccumRedBits = (char)uVar2;
  local_88.cAccumGreenBits = (char)((uint)uVar2 >> 8);
  local_88.cAccumBlueBits = (char)((uint)uVar2 >> 0x10);
  local_88.cAccumAlphaBits = (char)((uint)uVar2 >> 0x18);
  local_88.cDepthBits = *(BYTE *)(param_1 + 0x3a8);
  local_88.cAuxBuffers = '\0';
  local_88.iLayerType = '\0';
  local_88.bReserved = '\0';
  local_88.dwLayerMask = 0;
  local_88.cStencilBits = *(byte *)(param_1 + 0x3b0);
  format = ChoosePixelFormat(hdc,&local_88);
  SetPixelFormat(hdc,format,&local_88);
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x680) + 0x18))(hdc);
  if (lVar3 == 0) goto LAB_1404636b7;
  (**(code **)(*(longlong *)(param_1 + 0x680) + 0x28))(hdc,lVar3);
  pcVar4 = (code *)(**(code **)(*(longlong *)(param_1 + 0x680) + 0x10))("wglGetExtensionsStringARB")
  ;
  if (pcVar4 == (code *)0x0) {
    _Str = (byte *)0x0;
  }
  else {
    _Str = (byte *)(*pcVar4)(hdc);
  }
  **(undefined1 **)(param_1 + 0x680) = 0;
  pcVar5 = strchr("WGL_ARB_pixel_format",0x20);
  if ((pcVar5 == (char *)0x0) && (_Str != (byte *)0x0)) {
    pbVar6 = (byte *)strstr((char *)_Str,"WGL_ARB_pixel_format");
    pbVar12 = _Str;
    while (pbVar6 != (byte *)0x0) {
      lVar7 = FUN_1400fc570("WGL_ARB_pixel_format");
      pbVar11 = pbVar6 + lVar7;
      if (((pbVar6 == pbVar12) || (pbVar6[-1] == 0x20)) && ((*pbVar11 & 0xdf) == 0)) {
        pFVar8 = (FARPROC)(**(code **)(*(longlong *)(param_1 + 0x680) + 0x10))
                                    ("wglChoosePixelFormatARB");
        if (pFVar8 == (FARPROC)0x0) {
          pFVar8 = GetProcAddress(*(HMODULE *)(param_1 + 0x510),"wglChoosePixelFormatARB");
        }
        *(FARPROC *)(*(longlong *)(param_1 + 0x680) + 0x38) = pFVar8;
        pFVar8 = (FARPROC)(**(code **)(*(longlong *)(param_1 + 0x680) + 0x10))
                                    ("wglGetPixelFormatAttribivARB");
        if (pFVar8 == (FARPROC)0x0) {
          pFVar8 = GetProcAddress(*(HMODULE *)(param_1 + 0x510),"wglGetPixelFormatAttribivARB");
        }
        *(FARPROC *)(*(longlong *)(param_1 + 0x680) + 0x40) = pFVar8;
        puVar1 = *(undefined1 **)(param_1 + 0x680);
        if ((*(longlong *)(puVar1 + 0x38) != 0) && (*(longlong *)(puVar1 + 0x40) != 0)) {
          *puVar1 = 1;
        }
        break;
      }
      pbVar6 = (byte *)strstr((char *)pbVar11,"WGL_ARB_pixel_format");
      pbVar12 = pbVar11;
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x680) + 1) = 0;
  pcVar5 = strchr("WGL_EXT_swap_control",0x20);
  if ((pcVar5 == (char *)0x0) && (_Str != (byte *)0x0)) {
    pbVar6 = (byte *)strstr((char *)_Str,"WGL_EXT_swap_control");
    pbVar12 = _Str;
    while (pbVar6 != (byte *)0x0) {
      lVar7 = FUN_1400fc570("WGL_EXT_swap_control");
      pbVar11 = pbVar6 + lVar7;
      if (((pbVar6 == pbVar12) || (pbVar6[-1] == 0x20)) && ((*pbVar11 & 0xdf) == 0)) {
        pFVar8 = (FARPROC)(**(code **)(*(longlong *)(param_1 + 0x680) + 0x10))("wglSwapIntervalEXT")
        ;
        if (pFVar8 == (FARPROC)0x0) {
          pFVar8 = GetProcAddress(*(HMODULE *)(param_1 + 0x510),"wglSwapIntervalEXT");
        }
        *(FARPROC *)(*(longlong *)(param_1 + 0x680) + 0x48) = pFVar8;
        pFVar8 = (FARPROC)(**(code **)(*(longlong *)(param_1 + 0x680) + 0x10))
                                    ("wglGetSwapIntervalEXT");
        if (pFVar8 == (FARPROC)0x0) {
          pFVar8 = GetProcAddress(*(HMODULE *)(param_1 + 0x510),"wglGetSwapIntervalEXT");
        }
        *(FARPROC *)(*(longlong *)(param_1 + 0x680) + 0x50) = pFVar8;
        pcVar5 = strchr("WGL_EXT_swap_control_tear",0x20);
        if ((pcVar5 != (char *)0x0) ||
           (pbVar12 = (byte *)strstr((char *)_Str,"WGL_EXT_swap_control_tear"), pbVar6 = _Str,
           pbVar12 == (byte *)0x0)) goto LAB_1404632ec;
        goto LAB_140463451;
      }
      pbVar6 = (byte *)strstr((char *)pbVar11,"WGL_EXT_swap_control");
      pbVar12 = pbVar11;
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x48) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x50) = 0;
  goto LAB_1404632ec;
  while (pbVar12 = (byte *)strstr((char *)pbVar11,"WGL_EXT_swap_control_tear"), pbVar6 = pbVar11,
        pbVar12 != (byte *)0x0) {
LAB_140463451:
    lVar7 = FUN_1400fc570("WGL_EXT_swap_control_tear");
    pbVar11 = pbVar12 + lVar7;
    if (((pbVar12 == pbVar6) || (pbVar12[-1] == 0x20)) && ((*pbVar11 & 0xdf) == 0)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x680) + 1) = 1;
      break;
    }
  }
LAB_1404632ec:
  pcVar5 = strchr("WGL_EXT_create_context_es2_profile",0x20);
  if ((pcVar5 == (char *)0x0) && (_Str != (byte *)0x0)) {
    pbVar6 = (byte *)strstr((char *)_Str,"WGL_EXT_create_context_es2_profile");
    pbVar12 = _Str;
    while (pbVar6 != (byte *)0x0) {
      lVar7 = FUN_1400fc570("WGL_EXT_create_context_es2_profile");
      pbVar11 = pbVar6 + lVar7;
      if (((pbVar6 == pbVar12) || (pbVar6[-1] == 0x20)) && ((*pbVar11 & 0xdf) == 0)) {
        FUN_14014c8a0(*(longlong *)(param_1 + 0x680) + 8,*(longlong *)(param_1 + 0x680) + 0xc);
        break;
      }
      pbVar6 = (byte *)strstr((char *)pbVar11,"WGL_EXT_create_context_es2_profile");
      pbVar12 = pbVar11;
    }
  }
  pcVar5 = strchr("WGL_ARB_context_flush_control",0x20);
  if (pcVar5 == (char *)0x0) {
    if (_Str != (byte *)0x0) {
      pbVar6 = (byte *)strstr((char *)_Str,"WGL_ARB_context_flush_control");
      pbVar12 = _Str;
      while (pbVar6 != (byte *)0x0) {
        lVar7 = FUN_1400fc570("WGL_ARB_context_flush_control");
        pbVar11 = pbVar6 + lVar7;
        if (((pbVar6 == pbVar12) || (pbVar6[-1] == 0x20)) && ((*pbVar11 & 0xdf) == 0)) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x680) + 2) = 1;
          break;
        }
        pbVar6 = (byte *)strstr((char *)pbVar11,"WGL_ARB_context_flush_control");
        pbVar12 = pbVar11;
      }
      goto LAB_14046349d;
    }
    strchr("WGL_ARB_create_context_robustness",0x20);
    strchr("WGL_ARB_create_context_no_error",0x20);
  }
  else {
LAB_14046349d:
    pcVar5 = strchr("WGL_ARB_create_context_robustness",0x20);
    if ((pcVar5 == (char *)0x0) && (_Str != (byte *)0x0)) {
      pbVar6 = (byte *)strstr((char *)_Str,"WGL_ARB_create_context_robustness");
      pbVar12 = _Str;
      while (pbVar6 != (byte *)0x0) {
        lVar7 = FUN_1400fc570("WGL_ARB_create_context_robustness");
        pbVar11 = pbVar6 + lVar7;
        if (((pbVar6 == pbVar12) || (pbVar6[-1] == 0x20)) && ((*pbVar11 & 0xdf) == 0)) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x680) + 3) = 1;
          break;
        }
        pbVar6 = (byte *)strstr((char *)pbVar11,"WGL_ARB_create_context_robustness");
        pbVar12 = pbVar11;
      }
    }
    pcVar5 = strchr("WGL_ARB_create_context_no_error",0x20);
    if ((pcVar5 == (char *)0x0) && (_Str != (byte *)0x0)) {
      pbVar6 = (byte *)strstr((char *)_Str,"WGL_ARB_create_context_no_error");
      while (pbVar6 != (byte *)0x0) {
        lVar7 = FUN_1400fc570("WGL_ARB_create_context_no_error");
        pbVar12 = pbVar6 + lVar7;
        if (((pbVar6 == _Str) || (pbVar6[-1] == 0x20)) && ((*pbVar12 & 0xdf) == 0)) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x680) + 4) = 1;
          break;
        }
        pbVar6 = (byte *)strstr((char *)pbVar12,"WGL_ARB_create_context_no_error");
        _Str = pbVar12;
      }
    }
  }
  (**(code **)(*(longlong *)(param_1 + 0x680) + 0x28))(hdc,0);
  (**(code **)(*(longlong *)(param_1 + 0x680) + 0x20))(lVar3);
  ReleaseDC(hWnd,hdc);
  DestroyWindow(hWnd);
  FUN_14016d260(param_1);
LAB_1404636b7:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStackY_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStackY_f8);
}

