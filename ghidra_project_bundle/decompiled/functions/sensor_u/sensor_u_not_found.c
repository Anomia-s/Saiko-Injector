/**
 * Function: sensor_u_not_found
 * Address:  140151fc0
 * Signature: undefined sensor_u_not_found(void)
 * Body size: 734 bytes
 */


int * sensor_u_not_found(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  FUN_140106160(&DAT_141525a0c,1);
  FUN_1401552a0(DAT_141525a10);
  FUN_140106160(&DAT_141525a0c,0xffffffff);
  DAT_141525a18 = DAT_141525a18 + 1;
  if ((param_1 != 0) && (iVar2 = (*(code *)PTR_FUN_141503d08)(), 0 < iVar2)) {
    iVar7 = 0;
    do {
      iVar3 = (*(code *)PTR_FUN_141503d30)(iVar7);
      piVar4 = DAT_141525a20;
      if (iVar3 == param_1) goto joined_r0x000140152081;
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  FUN_1400fbed0("Sensor %u not found",param_1);
LAB_140152030:
  DAT_141525a18 = DAT_141525a18 + -1;
  if ((DAT_141525a18 == 0 && (DAT_141525a08 & 1) == 0) &&
     (iVar2 = FUN_140106170(&DAT_141525a0c), uVar6 = DAT_141525a10, iVar2 == 0)) {
    FUN_1401552a0(DAT_141525a10);
    FUN_1401552c0(DAT_141525a10);
    DAT_141525a10 = 0;
    FUN_1401552c0(uVar6);
    FUN_140155290(uVar6);
  }
  else {
    FUN_1401552c0(DAT_141525a10);
  }
  return (int *)0x0;
joined_r0x000140152081:
  for (; piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 0x1c)) {
    if (param_1 == *piVar4) {
      piVar4[0x1b] = piVar4[0x1b] + 1;
      DAT_141525a18 = DAT_141525a18 + -1;
      if ((DAT_141525a18 == 0 && (DAT_141525a08 & 1) == 0) &&
         (iVar2 = FUN_140106170(&DAT_141525a0c), uVar6 = DAT_141525a10, iVar2 == 0)) {
        FUN_1401552a0(DAT_141525a10);
        FUN_1401552c0(DAT_141525a10);
        DAT_141525a10 = 0;
        FUN_1401552c0(uVar6);
        FUN_140155290(uVar6);
        return piVar4;
      }
      FUN_1401552c0(DAT_141525a10);
      return piVar4;
    }
  }
  piVar4 = (int *)FUN_140160c70(1,0x78);
  if (piVar4 != (int *)0x0) {
    FUN_1403d8ef0(piVar4,7,1);
    *(undefined ***)(piVar4 + 0x16) = &PTR_couldnt_set_the_sensor_manager_event_sink_141503d00;
    *piVar4 = param_1;
    iVar2 = (*(code *)PTR_FUN_141503d20)(iVar7);
    piVar4[4] = iVar2;
    iVar2 = (*(code *)PTR_vfunction21_141503d28)(iVar7);
    piVar4[5] = iVar2;
    cVar1 = (*(code *)PTR_FUN_141503d38)(piVar4,iVar7);
    if (cVar1 != '\0') {
      lVar5 = (*(code *)PTR_FUN_141503d18)(iVar7);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1400fcda0(lVar5);
      }
      *(undefined8 *)(piVar4 + 2) = uVar6;
      piVar4[0x1b] = piVar4[0x1b] + 1;
      *(int **)(piVar4 + 0x1c) = DAT_141525a20;
      DAT_141525a20 = piVar4;
      (*(code *)PTR_vfunction4_141503d40)(piVar4);
      DAT_141525a18 = DAT_141525a18 + -1;
      if ((DAT_141525a18 == 0 && (DAT_141525a08 & 1) == 0) &&
         (iVar2 = FUN_140106170(&DAT_141525a0c), uVar6 = DAT_141525a10, iVar2 == 0)) {
        FUN_1401552a0(DAT_141525a10);
        FUN_1401552c0(DAT_141525a10);
        DAT_141525a10 = 0;
        FUN_1401552c0(uVar6);
        FUN_140155290(uVar6);
        return piVar4;
      }
      FUN_1401552c0(DAT_141525a10);
      return piVar4;
    }
    FUN_1403d8ef0(piVar4,7,0);
    FUN_140160cf0(piVar4);
  }
  goto LAB_140152030;
}

