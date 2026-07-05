/**
 * Function: couldnt_find_mapping_for_device_u
 * Address:  14010d500
 * Signature: undefined couldnt_find_mapping_for_device_u(void)
 * Body size: 305 bytes
 */


longlong * couldnt_find_mapping_for_device_u(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1401264f0();
  for (plVar2 = DAT_1415254f8; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[10]) {
    if (param_1 == *(int *)*plVar2) {
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      goto LAB_14010d621;
    }
  }
  lVar1 = nones(param_1,1);
  if (lVar1 == 0) {
    FUN_1400fbed0("Couldn\'t find mapping for device (%u)",param_1);
  }
  else {
    plVar2 = (longlong *)FUN_140160c70(1,0x58);
    if (plVar2 != (longlong *)0x0) {
      FUN_1403d8ef0(plVar2,5,1);
      lVar3 = sensor_bmi320_gyr(param_1);
      *plVar2 = lVar3;
      if (lVar3 != 0) {
        if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
          lVar4 = FUN_140160c70((longlong)*(int *)(lVar3 + 0x40),8);
          plVar2[7] = lVar4;
          lVar3 = *plVar2;
          if (lVar4 == 0) {
            parameter_s_is_invalid(lVar3);
            goto LAB_14010d617;
          }
        }
        if ((longlong)*(int *)(lVar3 + 0x60) != 0) {
          lVar3 = FUN_140160c70((longlong)*(int *)(lVar3 + 0x60),1);
          plVar2[8] = lVar3;
          if (lVar3 == 0) {
            parameter_s_is_invalid(*plVar2);
            FUN_140160cf0(plVar2[7]);
            goto LAB_14010d617;
          }
        }
        joystick_button_name_too_large_s(plVar2,lVar1);
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        plVar2[10] = (longlong)DAT_1415254f8;
        DAT_1415254f8 = plVar2;
        goto LAB_14010d621;
      }
LAB_14010d617:
      FUN_140160cf0(plVar2);
    }
  }
  plVar2 = (longlong *)0x0;
LAB_14010d621:
  FUN_140126530();
  return plVar2;
}

