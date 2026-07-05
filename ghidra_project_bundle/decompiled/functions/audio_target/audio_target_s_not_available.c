/**
 * Function: audio_target_s_not_available
 * Address:  14012fbd0
 * Signature: undefined audio_target_s_not_available(void)
 * Body size: 3147 bytes
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong audio_target_s_not_available(char *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char *_Str;
  char *pcVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulonglong uVar10;
  char *pcVar11;
  byte bVar12;
  undefined1 auStack_d8 [32];
  code *local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  char *local_98;
  char *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  if (DAT_1415256a0 != (undefined *)0x0) {
    FUN_140130840();
  }
  uVar10 = 0;
  FUN_140106120(&DAT_141525770,0,2);
  FUN_14044edb0();
  FUN_140451420();
  lVar5 = initializesrwlock();
  if (lVar5 == 0) goto LAB_1401307ff;
  local_b8 = httplib::ClientImpl::vfunction4;
  local_a8 = 0;
  local_b0 = 0;
  lVar6 = num_buckets_must_be_a_power_of_two(0,8,&LAB_140130a30,&LAB_140100270);
  if (lVar6 == 0) {
    FUN_140157ff0(lVar5);
LAB_1401307fd:
    uVar10 = 0;
    goto LAB_1401307ff;
  }
  if ((param_1 == (char *)0x0) &&
     (param_1 = (char *)FUN_140110550("SDL_AUDIO_DRIVER"), param_1 == (char *)0x0)) {
    bVar2 = true;
    param_1 = (char *)0x0;
    bVar12 = DAT_141503c50;
    if (DAT_141503c50 != 0) {
LAB_140130123:
      if (DAT_141503c70 == '\0') {
        DAT_141525750 = 0;
        _DAT_141525720 = 0;
        DAT_141525738 = 0;
        _DAT_141525760 = 0;
        _DAT_141525768 = 0;
        _DAT_141525740 = 0;
        _DAT_141525748 = 0;
        DAT_141525710 = (code *)0x0;
        DAT_141525718 = (code *)0x0;
        DAT_141525700 = (code *)0x0;
        DAT_141525708 = (code *)0x0;
        DAT_1415256f0 = (code *)0x0;
        DAT_1415256f8 = (code *)0x0;
        DAT_1415256e0 = (undefined1 *)0x0;
        DAT_1415256e8 = (code *)0x0;
        DAT_1415256d0 = (code *)0x0;
        DAT_1415256d8 = (code *)0x0;
        DAT_1415256c0 = (undefined1 *)0x0;
        DAT_1415256c8 = (code *)0x0;
        DAT_1415256b0 = (code *)0x0;
        DAT_1415256b8 = (code *)0x0;
        DAT_1415256a0 = (undefined *)0x0;
        _DAT_1415256a8 = (undefined *)0x0;
        DAT_141525758 = &DAT_141525748;
        DAT_141525728 = lVar5;
        DAT_141525730 = lVar6;
        cVar3 = (*(code *)PTR_directsound_failed_to_load_dsounddll_141503c68)(&DAT_1415256b0);
        bVar12 = 1;
        if (cVar3 != '\0') {
          ppuVar8 = &PTR_s_directsound_141503c58;
          goto LAB_140130338;
        }
      }
      else {
        bVar12 = bVar12 ^ 1;
      }
      if (DAT_141503c90 == '\0') {
        DAT_141525750 = 0;
        _DAT_141525720 = 0;
        DAT_141525738 = 0;
        _DAT_141525760 = 0;
        _DAT_141525768 = 0;
        _DAT_141525740 = 0;
        _DAT_141525748 = 0;
        DAT_141525710 = (code *)0x0;
        DAT_141525718 = (code *)0x0;
        DAT_141525700 = (code *)0x0;
        DAT_141525708 = (code *)0x0;
        DAT_1415256f0 = (code *)0x0;
        DAT_1415256f8 = (code *)0x0;
        DAT_1415256e0 = (undefined1 *)0x0;
        DAT_1415256e8 = (code *)0x0;
        DAT_1415256d0 = (code *)0x0;
        DAT_1415256d8 = (code *)0x0;
        DAT_1415256c0 = (undefined1 *)0x0;
        DAT_1415256c8 = (code *)0x0;
        DAT_1415256b0 = (code *)0x0;
        DAT_1415256b8 = (code *)0x0;
        DAT_1415256a0 = (undefined *)0x0;
        _DAT_1415256a8 = (undefined *)0x0;
        DAT_141525758 = &DAT_141525748;
        DAT_141525728 = lVar5;
        DAT_141525730 = lVar6;
        cVar3 = (*(code *)PTR_FUN_141503c88)(&DAT_1415256b0);
        bVar12 = 1;
        if (cVar3 != '\0') {
          ppuVar8 = &PTR_DAT_141503c78;
          goto LAB_140130338;
        }
      }
      if (DAT_141503cb0 == '\0') {
        DAT_141525750 = 0;
        _DAT_141525720 = 0;
        DAT_141525738 = 0;
        _DAT_141525760 = 0;
        _DAT_141525768 = 0;
        _DAT_141525740 = 0;
        _DAT_141525748 = 0;
        DAT_141525710 = (code *)0x0;
        DAT_141525718 = (code *)0x0;
        DAT_141525700 = (code *)0x0;
        DAT_141525708 = (code *)0x0;
        DAT_1415256f0 = (code *)0x0;
        DAT_1415256f8 = (code *)0x0;
        DAT_1415256e0 = (undefined1 *)0x0;
        DAT_1415256e8 = (code *)0x0;
        DAT_1415256d0 = (code *)0x0;
        DAT_1415256d8 = (code *)0x0;
        DAT_1415256c0 = (undefined1 *)0x0;
        DAT_1415256c8 = (code *)0x0;
        DAT_1415256b0 = (code *)0x0;
        DAT_1415256b8 = (code *)0x0;
        DAT_1415256a0 = (undefined *)0x0;
        _DAT_1415256a8 = (undefined *)0x0;
        DAT_141525758 = &DAT_141525748;
        DAT_141525728 = lVar5;
        DAT_141525730 = lVar6;
        cVar3 = (*(code *)PTR_FUN_141503ca8)(&DAT_1415256b0);
        if (cVar3 != '\0') {
          ppuVar8 = &PTR_s_dummy_141503c98;
          goto LAB_140130338;
        }
      }
      else {
LAB_14013027f:
        if ((bVar12 & 1) == 0) {
          if (bVar2) {
            FUN_1400fbed0("No available audio device");
          }
          else {
            FUN_1400fbed0("Audio target \'%s\' not available",param_1);
          }
        }
      }
      FUN_140157ff0(lVar5);
      FUN_1403d81d0(lVar6);
      _DAT_141525760 = 0;
      _DAT_141525768 = 0;
      DAT_141525750 = 0;
      DAT_141525758 = (undefined *)0x0;
      _DAT_141525740 = 0;
      _DAT_141525748 = 0;
      DAT_141525730 = 0;
      DAT_141525738 = 0;
      _DAT_141525720 = 0;
      DAT_141525728 = 0;
      DAT_141525710 = (code *)0x0;
      DAT_141525718 = (code *)0x0;
      DAT_141525700 = (code *)0x0;
      DAT_141525708 = (code *)0x0;
      DAT_1415256f0 = (code *)0x0;
      DAT_1415256f8 = (code *)0x0;
      DAT_1415256e0 = (undefined1 *)0x0;
      DAT_1415256e8 = (code *)0x0;
      DAT_1415256d0 = (code *)0x0;
      DAT_1415256d8 = (code *)0x0;
      DAT_1415256c0 = (undefined1 *)0x0;
      DAT_1415256c8 = (code *)0x0;
      DAT_1415256b0 = (code *)0x0;
      DAT_1415256b8 = (code *)0x0;
      DAT_1415256a0 = (undefined *)0x0;
      _DAT_1415256a8 = (undefined *)0x0;
      goto LAB_1401307fd;
    }
LAB_14013008c:
    bVar12 = DAT_141503c50;
    DAT_141525750 = 0;
    _DAT_141525720 = 0;
    DAT_141525738 = 0;
    _DAT_141525760 = 0;
    _DAT_141525768 = 0;
    _DAT_141525740 = 0;
    _DAT_141525748 = 0;
    DAT_141525710 = (code *)0x0;
    DAT_141525718 = (code *)0x0;
    DAT_141525700 = (code *)0x0;
    DAT_141525708 = (code *)0x0;
    DAT_1415256f0 = (code *)0x0;
    DAT_1415256f8 = (code *)0x0;
    DAT_1415256e0 = (undefined1 *)0x0;
    DAT_1415256e8 = (code *)0x0;
    DAT_1415256d0 = (code *)0x0;
    DAT_1415256d8 = (code *)0x0;
    DAT_1415256c0 = (undefined1 *)0x0;
    DAT_1415256c8 = (code *)0x0;
    DAT_1415256b0 = (code *)0x0;
    DAT_1415256b8 = (code *)0x0;
    DAT_1415256a0 = (undefined *)0x0;
    _DAT_1415256a8 = (undefined *)0x0;
    DAT_141525758 = &DAT_141525748;
    DAT_141525728 = lVar5;
    DAT_141525730 = lVar6;
    cVar3 = (*(code *)PTR_sdlwasapimgmt_141503c48)(&DAT_1415256b0);
    if (cVar3 == '\0') goto LAB_140130123;
    ppuVar8 = &PTR_s_wasapi_141503c38;
LAB_140130338:
    DAT_1415256a0 = *ppuVar8;
    _DAT_1415256a8 = ppuVar8[1];
  }
  else {
    if (*param_1 == '\0') {
      bVar2 = false;
      bVar12 = DAT_141503c50;
      if (DAT_141503c50 == 0) goto LAB_14013008c;
      goto LAB_140130123;
    }
    _Str = (char *)FUN_1400fcda0(param_1);
    if (_Str == (char *)0x0) {
      FUN_140157ff0(lVar5);
      FUN_1403d81d0(lVar6);
      goto LAB_1401307fd;
    }
    bVar12 = 0;
    bVar2 = false;
    local_98 = param_1;
    local_90 = _Str;
    do {
      while( true ) {
        if ((*_Str == '\0') || (bVar2)) {
          FUN_140160cf0(local_90);
          param_1 = local_98;
          bVar1 = bVar2;
          goto joined_r0x000140130064;
        }
        pcVar7 = strchr(_Str,0x2c);
        if (pcVar7 != (char *)0x0) {
          *pcVar7 = '\0';
        }
        iVar4 = FUN_1400fd200(_Str,"dsound");
        pcVar11 = "directsound";
        if ((iVar4 != 0) && (iVar4 = FUN_1400fd200(_Str,"pulse"), pcVar11 = _Str, iVar4 == 0)) {
          pcVar11 = "pulseaudio";
        }
        iVar4 = FUN_1400fd210(PTR_s_wasapi_141503c38,pcVar11);
        if (iVar4 != 0) break;
        DAT_141525750 = 0;
        _DAT_141525720 = 0;
        DAT_141525738 = 0;
        _DAT_141525760 = 0;
        _DAT_141525768 = 0;
        _DAT_141525740 = 0;
        _DAT_141525748 = 0;
        DAT_141525710 = (code *)0x0;
        DAT_141525718 = (code *)0x0;
        DAT_141525700 = (code *)0x0;
        DAT_141525708 = (code *)0x0;
        DAT_1415256f0 = (code *)0x0;
        DAT_1415256f8 = (code *)0x0;
        DAT_1415256e0 = (undefined1 *)0x0;
        DAT_1415256e8 = (code *)0x0;
        DAT_1415256d0 = (code *)0x0;
        DAT_1415256d8 = (code *)0x0;
        DAT_1415256c0 = (undefined1 *)0x0;
        DAT_1415256c8 = (code *)0x0;
        DAT_1415256b0 = (code *)0x0;
        DAT_1415256b8 = (code *)0x0;
        DAT_1415256a0 = (undefined *)0x0;
        _DAT_1415256a8 = (undefined *)0x0;
        DAT_141525758 = &DAT_141525748;
        DAT_141525728 = lVar5;
        DAT_141525730 = lVar6;
        cVar3 = (*(code *)PTR_sdlwasapimgmt_141503c48)(&DAT_1415256b0);
        bVar12 = 1;
        ppuVar8 = &PTR_s_wasapi_141503c38;
        if (cVar3 == '\0') break;
LAB_14012fce0:
        DAT_1415256a0 = *ppuVar8;
        _DAT_1415256a8 = ppuVar8[1];
        bVar2 = true;
        bVar1 = true;
joined_r0x000140130006:
        bVar12 = 1;
        _Str = pcVar7 + 1;
        if (pcVar7 == (char *)0x0) goto LAB_14013000c;
      }
      iVar4 = FUN_1400fd210(PTR_s_directsound_141503c58,pcVar11);
      if (iVar4 == 0) {
        DAT_141525750 = 0;
        _DAT_141525720 = 0;
        DAT_141525738 = 0;
        _DAT_141525760 = 0;
        _DAT_141525768 = 0;
        _DAT_141525740 = 0;
        _DAT_141525748 = 0;
        DAT_141525710 = (code *)0x0;
        DAT_141525718 = (code *)0x0;
        DAT_141525700 = (code *)0x0;
        DAT_141525708 = (code *)0x0;
        DAT_1415256f0 = (code *)0x0;
        DAT_1415256f8 = (code *)0x0;
        DAT_1415256e0 = (undefined1 *)0x0;
        DAT_1415256e8 = (code *)0x0;
        DAT_1415256d0 = (code *)0x0;
        DAT_1415256d8 = (code *)0x0;
        DAT_1415256c0 = (undefined1 *)0x0;
        DAT_1415256c8 = (code *)0x0;
        DAT_1415256b0 = (code *)0x0;
        DAT_1415256b8 = (code *)0x0;
        DAT_1415256a0 = (undefined *)0x0;
        _DAT_1415256a8 = (undefined *)0x0;
        DAT_141525758 = &DAT_141525748;
        DAT_141525728 = lVar5;
        DAT_141525730 = lVar6;
        cVar3 = (*(code *)PTR_directsound_failed_to_load_dsounddll_141503c68)(&DAT_1415256b0);
        bVar12 = 1;
        ppuVar8 = &PTR_s_directsound_141503c58;
        if (cVar3 != '\0') goto LAB_14012fce0;
      }
      iVar4 = FUN_1400fd210(PTR_DAT_141503c78,pcVar11);
      if (iVar4 == 0) {
        DAT_141525750 = 0;
        _DAT_141525720 = 0;
        DAT_141525738 = 0;
        _DAT_141525760 = 0;
        _DAT_141525768 = 0;
        _DAT_141525740 = 0;
        _DAT_141525748 = 0;
        DAT_141525710 = (code *)0x0;
        DAT_141525718 = (code *)0x0;
        DAT_141525700 = (code *)0x0;
        DAT_141525708 = (code *)0x0;
        DAT_1415256f0 = (code *)0x0;
        DAT_1415256f8 = (code *)0x0;
        DAT_1415256e0 = (undefined1 *)0x0;
        DAT_1415256e8 = (code *)0x0;
        DAT_1415256d0 = (code *)0x0;
        DAT_1415256d8 = (code *)0x0;
        DAT_1415256c0 = (undefined1 *)0x0;
        DAT_1415256c8 = (code *)0x0;
        DAT_1415256b0 = (code *)0x0;
        DAT_1415256b8 = (code *)0x0;
        DAT_1415256a0 = (undefined *)0x0;
        _DAT_1415256a8 = (undefined *)0x0;
        DAT_141525758 = &DAT_141525748;
        DAT_141525728 = lVar5;
        DAT_141525730 = lVar6;
        cVar3 = (*(code *)PTR_FUN_141503c88)(&DAT_1415256b0);
        bVar12 = 1;
        ppuVar8 = &PTR_DAT_141503c78;
        if (cVar3 != '\0') goto LAB_14012fce0;
      }
      iVar4 = FUN_1400fd210(PTR_s_dummy_141503c98,pcVar11);
      if (iVar4 == 0) {
        DAT_141525750 = 0;
        _DAT_141525720 = 0;
        DAT_141525738 = 0;
        _DAT_141525760 = 0;
        _DAT_141525768 = 0;
        _DAT_141525740 = 0;
        _DAT_141525748 = 0;
        DAT_141525710 = (code *)0x0;
        DAT_141525718 = (code *)0x0;
        DAT_141525700 = (code *)0x0;
        DAT_141525708 = (code *)0x0;
        DAT_1415256f0 = (code *)0x0;
        DAT_1415256f8 = (code *)0x0;
        DAT_1415256e0 = (undefined1 *)0x0;
        DAT_1415256e8 = (code *)0x0;
        DAT_1415256d0 = (code *)0x0;
        DAT_1415256d8 = (code *)0x0;
        DAT_1415256c0 = (undefined1 *)0x0;
        DAT_1415256c8 = (code *)0x0;
        DAT_1415256b0 = (code *)0x0;
        DAT_1415256b8 = (code *)0x0;
        DAT_1415256a0 = (undefined *)0x0;
        _DAT_1415256a8 = (undefined *)0x0;
        DAT_141525758 = &DAT_141525748;
        DAT_141525728 = lVar5;
        DAT_141525730 = lVar6;
        cVar3 = (*(code *)PTR_FUN_141503ca8)(&DAT_1415256b0);
        ppuVar8 = &PTR_s_dummy_141503c98;
        if (cVar3 != '\0') goto LAB_14012fce0;
        bVar2 = false;
        bVar1 = false;
        goto joined_r0x000140130006;
      }
      bVar2 = false;
      bVar1 = false;
      _Str = pcVar7 + 1;
    } while (pcVar7 != (char *)0x0);
LAB_14013000c:
    FUN_140160cf0(local_90);
    param_1 = local_98;
joined_r0x000140130064:
    local_98 = param_1;
    if (!bVar1) {
      bVar2 = false;
      goto LAB_14013027f;
    }
  }
  if (DAT_1415256b0 == (code *)0x0) {
    DAT_1415256b0 = system_audio_playback_device;
  }
  if (DAT_1415256b8 == (code *)0x0) {
    DAT_1415256b8 = that_operation_is_not_supported;
  }
  if (DAT_1415256c0 == (undefined1 *)0x0) {
    DAT_1415256c0 = &LAB_140134070;
  }
  if (DAT_1415256c8 == (code *)0x0) {
    DAT_1415256c8 = httplib::ClientImpl::vfunction4;
  }
  if (DAT_1415256d0 == (code *)0x0) {
    DAT_1415256d0 = httplib::ClientImpl::vfunction2;
  }
  if (DAT_1415256d8 == (code *)0x0) {
    DAT_1415256d8 = httplib::ClientImpl::vfunction2;
  }
  if (DAT_1415256e0 == (undefined1 *)0x0) {
    DAT_1415256e0 = &LAB_140134080;
  }
  if (DAT_1415256e8 == (code *)0x0) {
    DAT_1415256e8 = httplib::ClientImpl::vfunction2;
  }
  if (DAT_1415256f0 == (code *)0x0) {
    DAT_1415256f0 = that_operation_is_not_supported;
  }
  if (DAT_1415256f8 == (code *)0x0) {
    DAT_1415256f8 = httplib::ClientImpl::vfunction4;
  }
  if (DAT_141525700 == (code *)0x0) {
    DAT_141525700 = httplib::ClientImpl::vfunction4;
  }
  if (DAT_141525708 == (code *)0x0) {
    DAT_141525708 = httplib::ClientImpl::vfunction4;
  }
  if (DAT_141525710 == (code *)0x0) {
    DAT_141525710 = httplib::ClientImpl::vfunction4;
  }
  if (DAT_141525718 == (code *)0x0) {
    DAT_141525718 = httplib::ClientImpl::vfunction4;
  }
  local_80 = 0;
  local_88 = 0;
  (*DAT_1415256b0)(&local_80,&local_88);
  if (local_80 == 0) {
    FUN_140158000(DAT_141525728);
    local_78 = 0;
    cVar3 = FUN_1403d8c20(DAT_141525730,&local_68,&local_70,&local_78);
    if (cVar3 == '\0') {
      lVar5 = 0;
    }
    else {
      uVar9 = 0xffffffff;
      lVar5 = 0;
      do {
        if (((byte)((local_68 & 0xffffffff) >> 1) & 0x7f & (byte)local_68 & (uint)local_68 < uVar9)
            != 0) {
          lVar5 = local_70;
          uVar9 = (uint)local_68;
        }
        cVar3 = FUN_1403d8c20(DAT_141525730,&local_68,&local_70,&local_78);
      } while (cVar3 != '\0');
    }
    FUN_140158040(DAT_141525728);
    local_80 = lVar5;
    if (local_88 == 0) goto LAB_1401306c7;
LAB_14013044d:
    lVar5 = 0;
    if (local_80 != 0) {
LAB_140130452:
      _DAT_141525740 = CONCAT44(DAT_141525744,*(undefined4 *)(local_80 + 0x50));
      lVar5 = local_80 + 0x10;
      FUN_140106160(lVar5,1);
    }
  }
  else {
    if (local_88 != 0) goto LAB_14013044d;
LAB_1401306c7:
    FUN_140158000(DAT_141525728);
    local_78 = 0;
    cVar3 = FUN_1403d8c20(DAT_141525730,&local_68,&local_70,&local_78);
    if (cVar3 == '\0') {
      lVar5 = 0;
    }
    else {
      uVar9 = 0xffffffff;
      lVar5 = 0;
      do {
        if ((~(byte)local_68 & (byte)((local_68 & 0xffffffff) >> 1) & 0x7f & (uint)local_68 < uVar9)
            != 0) {
          lVar5 = local_70;
          uVar9 = (uint)local_68;
        }
        cVar3 = FUN_1403d8c20(DAT_141525730,&local_68,&local_70,&local_78);
      } while (cVar3 != '\0');
    }
    FUN_140158040(DAT_141525728);
    local_88 = lVar5;
    if (local_80 != 0) goto LAB_140130452;
    lVar5 = 0;
  }
  if (local_88 != 0) {
    _DAT_141525740 = CONCAT44(*(undefined4 *)(local_88 + 0x50),DAT_141525740);
    FUN_140106160(local_88 + 0x10,1);
  }
  uVar10 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
LAB_1401307ff:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_d8)) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_d8);
}

