/**
 * Function: removing_hidapi_device_s_vid_0x4x_pid_0x4x_bl
 * Address:  140442470
 * Signature: undefined removing_hidapi_device_s_vid_0x4x_pid_0x4x_bl(void)
 * Body size: 577 bytes
 */


void removing_hidapi_device_s_vid_0x4x_pid_0x4x_bl(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  
  httplib::ClientImpl::vfunction4();
  puVar1 = (undefined8 *)param_1[0xd];
  if (puVar1 == (undefined8 *)0x0) {
    pcVar6 = "DISABLED";
    puVar8 = &DAT_1413699c5;
  }
  else {
    pcVar6 = "DISABLED";
    if (*(char *)(puVar1 + 1) != '\0') {
      pcVar6 = "ENABLED";
    }
    puVar8 = (undefined *)*puVar1;
  }
  puVar4 = &DAT_1413699c5;
  if ((undefined *)param_1[5] != (undefined *)0x0) {
    puVar4 = (undefined *)param_1[5];
  }
  FUN_1400fb830(7,
                "Removing HIDAPI device \'%s\' VID 0x%.4x, PID 0x%.4x, bluetooth %d, version %d, serial %s, interface %d, interface_class %d, interface_subclass %d, interface_protocol %d, usage page 0x%.4x, usage 0x%.4x, path = %s, driver = %s (%s)"
                ,*param_1,*(undefined2 *)(param_1 + 4),*(undefined2 *)((longlong)param_1 + 0x22),
                *(undefined1 *)((longlong)param_1 + 0x54),*(undefined2 *)((longlong)param_1 + 0x24),
                puVar4,*(undefined4 *)(param_1 + 8),*(undefined4 *)((longlong)param_1 + 0x44),
                *(undefined4 *)(param_1 + 9),*(undefined4 *)((longlong)param_1 + 0x4c),
                *(undefined2 *)(param_1 + 10),*(undefined2 *)((longlong)param_1 + 0x52),param_1[3],
                puVar8,pcVar6);
  if (DAT_1416f1750 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = DAT_1416f1750;
  if (DAT_1416f1750 == param_1) {
    puVar2 = (undefined8 *)DAT_1416f1750[0x17];
  }
  else {
    do {
      puVar7 = puVar1;
      puVar1 = (undefined8 *)puVar7[0x17];
      if (puVar1 == (undefined8 *)0x0) {
        return;
      }
    } while (puVar1 != param_1);
    puVar2 = (undefined8 *)puVar1[0x17];
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[0x17] = (undefined8 *)puVar1[0x17];
      puVar2 = DAT_1416f1750;
    }
  }
  DAT_1416f1750 = puVar2;
  FUN_140442810(param_1);
  iVar3 = FUN_140106170(param_1 + 0x11);
  while (0 < iVar3) {
    FUN_140118490(10);
    iVar3 = FUN_140106170(param_1 + 0x11);
  }
  if (0 < *(int *)(param_1 + 0x15)) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_1[0x16] + lVar5 * 8) + 0xa0) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x15));
  }
  FUN_1403d8ef0(param_1,9,0);
  FUN_140155290(param_1[0xf]);
  FUN_140160cf0(param_1[1]);
  FUN_140160cf0(param_1[2]);
  FUN_140160cf0(param_1[5]);
  FUN_140160cf0(*param_1);
  FUN_140160cf0(param_1[3]);
  FUN_140160cf0(param_1[0x16]);
  FUN_140160cf0(param_1);
  return;
}

