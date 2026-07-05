/**
 * Function: no_available_camera_driver
 * Address:  1400ffe60
 * Signature: undefined no_available_camera_driver(void)
 * Body size: 1014 bytes
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 no_available_camera_driver(char *param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  char *_Str;
  undefined **ppuVar10;
  
  if (DAT_141524bc0 != (undefined *)0x0) {
    FUN_1400ffc90();
  }
  lVar5 = initializesrwlock();
  if (lVar5 == 0) {
    return 0;
  }
  lVar6 = num_buckets_must_be_a_power_of_two
                    (0,8,&LAB_140100280,&LAB_140100270,httplib::ClientImpl::vfunction4,0,0);
  if (lVar6 == 0) {
    FUN_140157ff0(lVar5);
    return 0;
  }
  if ((param_1 == (char *)0x0) &&
     (param_1 = (char *)FUN_140110550("SDL_CAMERA_DRIVER"), param_1 == (char *)0x0)) {
    bVar9 = true;
    bVar1 = true;
    param_1 = (char *)0x0;
    bVar2 = DAT_141503540;
joined_r0x0001401000a7:
    DAT_141503540 = bVar2;
    if (bVar2 == 0) {
      DAT_141524c30 = 0;
      _DAT_141524c10 = 0;
      _DAT_141524c28 = 0;
      DAT_141524c00 = 0;
      DAT_141524c08 = 0;
      DAT_141524bf0 = 0;
      DAT_141524bf8 = 0;
      DAT_141524be0 = 0;
      DAT_141524be8 = 0;
      DAT_141524bd0 = (code *)0x0;
      DAT_141524bd8 = 0;
      DAT_141524bc0 = (undefined *)0x0;
      _DAT_141524bc8 = (undefined *)0x0;
      _DAT_141524c40 = 0;
      DAT_141524c38 = &DAT_141524c28;
      DAT_141524c18 = lVar5;
      DAT_141524c20 = lVar6;
      cVar3 = (*(code *)PTR_mfcreateattributes_141503538)(&DAT_141524bd0);
      bVar1 = bVar9;
      if (cVar3 == '\0') goto LAB_140100128;
      ppuVar10 = &PTR_s_mediafoundation_141503528;
LAB_1401001d3:
      DAT_141524bc0 = *ppuVar10;
      _DAT_141524bc8 = ppuVar10[1];
LAB_1401001e8:
      (*DAT_141524bd0)();
      return 1;
    }
LAB_140100128:
    if (DAT_141503560 == '\0') {
      DAT_141524c30 = 0;
      _DAT_141524c10 = 0;
      _DAT_141524c28 = 0;
      DAT_141524c00 = 0;
      DAT_141524c08 = 0;
      DAT_141524bf0 = 0;
      DAT_141524bf8 = 0;
      DAT_141524be0 = 0;
      DAT_141524be8 = 0;
      DAT_141524bd0 = (code *)0x0;
      DAT_141524bd8 = 0;
      DAT_141524bc0 = (undefined *)0x0;
      _DAT_141524bc8 = (undefined *)0x0;
      _DAT_141524c40 = 0;
      DAT_141524c38 = &DAT_141524c28;
      DAT_141524c18 = lVar5;
      DAT_141524c20 = lVar6;
      cVar3 = (*(code *)PTR_FUN_141503558)(&DAT_141524bd0);
      if (cVar3 != '\0') {
        ppuVar10 = &PTR_s_dummy_141503548;
        goto LAB_1401001d3;
      }
    }
    else if (((bVar2 ^ 1) & 1) == 0) {
LAB_14010013f:
      if (bVar1) {
        FUN_1400fbed0("No available camera driver");
      }
      else {
        FUN_1400fbed0("Camera driver \'%s\' not available",param_1);
      }
    }
  }
  else {
    if (*param_1 == '\0') {
      bVar9 = false;
      bVar1 = false;
      bVar2 = DAT_141503540;
      goto joined_r0x0001401000a7;
    }
    pcVar7 = (char *)FUN_1400fcda0(param_1);
    if (pcVar7 == (char *)0x0) goto LAB_140100247;
    bVar9 = false;
    bVar1 = false;
    _Str = pcVar7;
    do {
      if ((*_Str == '\0') || (bVar1)) {
        FUN_140160cf0(pcVar7);
        goto joined_r0x00014010006c;
      }
      pcVar8 = strchr(_Str,0x2c);
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = '\0';
      }
      iVar4 = FUN_1400fd210(PTR_s_mediafoundation_141503528,_Str);
      ppuVar10 = &PTR_s_mediafoundation_141503528;
      if (iVar4 == 0) {
LAB_1400fffc0:
        DAT_141524c30 = 0;
        _DAT_141524c10 = 0;
        _DAT_141524c28 = 0;
        DAT_141524c00 = 0;
        DAT_141524c08 = 0;
        DAT_141524bf0 = 0;
        DAT_141524bf8 = 0;
        DAT_141524be0 = 0;
        DAT_141524be8 = 0;
        DAT_141524bd0 = (code *)0x0;
        DAT_141524bd8 = 0;
        DAT_141524bc0 = (undefined *)0x0;
        _DAT_141524bc8 = (undefined *)0x0;
        _DAT_141524c40 = 0;
        DAT_141524c38 = &DAT_141524c28;
        DAT_141524c18 = lVar5;
        DAT_141524c20 = lVar6;
        cVar3 = (*(code *)ppuVar10[2])(&DAT_141524bd0);
        if (cVar3 == '\0') {
          bVar9 = true;
          bVar1 = false;
        }
        else {
          DAT_141524bc0 = *ppuVar10;
          _DAT_141524bc8 = ppuVar10[1];
          bVar1 = true;
          bVar9 = true;
        }
      }
      else {
        iVar4 = FUN_1400fd210(PTR_s_dummy_141503548,_Str);
        ppuVar10 = &PTR_s_dummy_141503548;
        if (iVar4 == 0) goto LAB_1400fffc0;
        bVar1 = false;
      }
      _Str = pcVar8 + 1;
    } while (pcVar8 != (char *)0x0);
    FUN_140160cf0(pcVar7);
joined_r0x00014010006c:
    if (bVar1) goto LAB_1401001e8;
    bVar1 = false;
    if (!bVar9) goto LAB_14010013f;
  }
  DAT_141524c30 = 0;
  DAT_141524c38 = (undefined *)0x0;
  DAT_141524c20 = 0;
  _DAT_141524c28 = 0;
  _DAT_141524c10 = 0;
  DAT_141524c18 = 0;
  DAT_141524c00 = 0;
  DAT_141524c08 = 0;
  DAT_141524bf0 = 0;
  DAT_141524bf8 = 0;
  DAT_141524be0 = 0;
  DAT_141524be8 = 0;
  DAT_141524bd0 = (code *)0x0;
  DAT_141524bd8 = 0;
  DAT_141524bc0 = (undefined *)0x0;
  _DAT_141524bc8 = (undefined *)0x0;
  _DAT_141524c40 = 0;
LAB_140100247:
  FUN_140157ff0(lVar5);
  FUN_1403d81d0(lVar6);
  return 0;
}

