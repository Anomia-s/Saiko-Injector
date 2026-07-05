/**
 * Function: udevice_with_requested_vid_pid_serialnumber_n
 * Address:  140175050
 * Signature: undefined udevice_with_requested_vid_pid_serialnumber_n(void)
 * Body size: 321 bytes
 */


undefined8
udevice_with_requested_vid_pid_serialnumber_n(short param_1,short param_2,wchar_t *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  size_t sVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar3 = (longlong *)ufailed_to_get_hid_device_interface_list();
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  plVar7 = plVar3;
  if (param_3 == (wchar_t *)0x0) {
    do {
      if (((short)plVar7[1] == param_1) && (*(short *)((longlong)plVar7 + 10) == param_2))
      goto LAB_1401750c7;
      plVar1 = plVar7 + 7;
      plVar7 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
  }
  else {
    do {
      if (((((short)plVar7[1] == param_1) && (*(short *)((longlong)plVar7 + 10) == param_2)) &&
          ((wchar_t *)plVar7[2] != (wchar_t *)0x0)) &&
         (iVar2 = wcscmp(param_3,(wchar_t *)plVar7[2]), iVar2 == 0)) goto LAB_1401750c7;
      plVar7 = (longlong *)plVar7[7];
    } while (plVar7 != (longlong *)0x0);
  }
LAB_1401750d9:
  FUN_140160cf0(DAT_1415261b0);
  DAT_1415261b0 = 0;
  sVar5 = wcslen(L"Device with requested VID/PID/(SerialNumber) not found");
  lVar6 = FUN_14017b9c0("UTF-8","WCHAR_T",L"Device with requested VID/PID/(SerialNumber) not found",
                        sVar5 * 2 + 2);
  if (lVar6 == 0) {
    FUN_1400fc040();
  }
  else {
    FUN_1400fbed0(&DAT_141339891,lVar6);
    FUN_140160cf0(lVar6);
  }
  uVar4 = 0;
LAB_140175150:
  do {
    plVar7 = (longlong *)plVar3[7];
    FUN_140160cf0(*plVar3);
    FUN_140160cf0(plVar3[2]);
    FUN_140160cf0(plVar3[4]);
    FUN_140160cf0(plVar3[5]);
    FUN_140160cf0(plVar3);
    plVar3 = plVar7;
  } while (plVar7 != (longlong *)0x0);
  return uVar4;
LAB_1401750c7:
  if (*plVar7 != 0) {
    uVar4 = uhid_device_allocation_error();
    goto LAB_140175150;
  }
  goto LAB_1401750d9;
}

