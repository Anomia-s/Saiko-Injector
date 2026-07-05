/**
 * Function: couldnt_get_sensor_type
 * Address:  140458ed0
 * Signature: undefined couldnt_get_sensor_type(void)
 * Body size: 527 bytes
 */


undefined8 couldnt_get_sensor_type(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  local_58 = (BSTR)0x0;
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_40);
  if (iVar2 < 0) {
    pcVar7 = "Couldn\'t get sensor ID";
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2,local_50);
    if (-1 < iVar2) {
      iVar2 = FUN_1403d7fa0(local_50,&DAT_140e18984);
      uVar8 = 1;
      if (iVar2 == 0) {
        iVar2 = FUN_1403d7fa0(local_50,&DAT_140e18994);
        uVar8 = 2;
        if (iVar2 == 0) {
          FUN_1400fbed0("Unknown sensor type");
          goto LAB_140458fc9;
        }
      }
      iVar2 = (**(code **)(*param_2 + 0x30))(param_2,&local_58);
      if (local_58 == (wchar_t *)0x0 || iVar2 < 0) {
        lVar5 = FUN_1400fcda0("Unknown Sensor");
      }
      else {
        sVar4 = wcslen(local_58);
        lVar5 = FUN_14017b9c0("UTF-8","UTF-16LE",local_58,sVar4 * 2 + 2);
      }
      if (local_58 != (BSTR)0x0) {
        SysFreeString(local_58);
      }
      if (lVar5 != 0) {
        FUN_1401517f0();
        lVar6 = FUN_140160cc0(DAT_1416f2170,(longlong)DAT_1416f2168 * 0x38 + 0x38);
        if (lVar6 == 0) {
          FUN_140151830();
          FUN_140160cf0(lVar5);
        }
        else {
          (**(code **)(*param_2 + 8))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2,&PTR_PTR_141503d80);
          lVar9 = (longlong)DAT_1416f2168 * 0x38;
          DAT_1416f2168 = DAT_1416f2168 + 1;
          DAT_1416f2170 = lVar6;
          *(undefined8 *)(lVar6 + lVar9) = 0;
          ((undefined8 *)(lVar6 + lVar9))[1] = 0;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar9);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar6 + 0x30 + lVar9) = 0;
          uVar3 = FUN_1403d8eb0();
          *(undefined4 *)(lVar6 + lVar9) = uVar3;
          *(longlong **)(lVar6 + 8 + lVar9) = param_2;
          *(undefined4 *)(lVar6 + 0x28 + lVar9) = uVar8;
          *(longlong *)(lVar6 + 0x20 + lVar9) = lVar5;
          FUN_140151830();
        }
      }
      goto LAB_140458fc9;
    }
    pcVar7 = "Couldn\'t get sensor type";
  }
  FUN_1403d7600(pcVar7,iVar2);
LAB_140458fc9:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_78)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_78);
}

