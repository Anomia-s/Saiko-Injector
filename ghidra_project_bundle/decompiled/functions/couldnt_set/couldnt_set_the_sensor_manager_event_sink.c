/**
 * Function: couldnt_set_the_sensor_manager_event_sink
 * Address:  140458b40
 * Signature: undefined couldnt_set_the_sensor_manager_event_sink(void)
 * Body size: 379 bytes
 */


undefined8 couldnt_set_the_sensor_manager_event_sink(void)

{
  int iVar1;
  HRESULT HVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStackY_68 [32];
  undefined1 local_3c [4];
  longlong *local_38;
  uint local_2c;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStackY_68;
  local_28 = (longlong *)0x0;
  iVar1 = FUN_1403d7730();
  if (iVar1 == 0) {
    DAT_1416f2158 = 1;
  }
  HVar2 = CoCreateInstance((IID *)&DAT_140e189e0,(LPUNKNOWN)0x0,1,(IID *)&DAT_140e189f0,
                           &DAT_1416f2160);
  if (-1 < HVar2) {
    iVar1 = (**(code **)(*DAT_1416f2160 + 0x30))(DAT_1416f2160,&PTR_PTR_141503d58);
    if (iVar1 < 0) {
      (**(code **)(*DAT_1416f2160 + 0x10))();
      DAT_1416f2160 = (longlong *)0x0;
      if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStackY_68)) {
        uVar3 = FUN_1403d7600("Couldn\'t set the sensor manager event sink",iVar1);
        return uVar3;
      }
      goto LAB_140458cb8;
    }
    iVar1 = (**(code **)(*DAT_1416f2160 + 0x18))(DAT_1416f2160,&DAT_140e18974,&local_28);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*local_28 + 0x20))(local_28,&local_2c);
      if ((-1 < iVar1) && (local_2c != 0)) {
        uVar4 = 0;
        do {
          iVar1 = (**(code **)(*local_28 + 0x18))(local_28,uVar4,&local_38);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*local_38 + 0x60))(local_38,local_3c);
            if (-1 < iVar1) {
              couldnt_get_sensor_type();
            }
            (**(code **)(*local_38 + 0x10))();
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_2c);
      }
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStackY_68)) {
    return CONCAT71((int7)((local_20 ^ (ulonglong)auStackY_68) >> 8),1);
  }
LAB_140458cb8:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStackY_68);
}

