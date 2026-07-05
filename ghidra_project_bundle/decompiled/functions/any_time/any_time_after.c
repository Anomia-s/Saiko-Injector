/**
 * Function: any_time_after
 * Address:  140c6b490
 * Signature: undefined any_time_after(void)
 * Body size: 487 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 any_time_after(undefined8 param_1,int *param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  
  if (*param_2 != 0) {
    if (*param_2 != 1) {
      return 0;
    }
    iVar2 = FUN_140c078a0(param_3,"%*sPeriodic:\n",param_4,&DAT_1413a2ad6);
    if (iVar2 < 1) {
      return 0;
    }
    iVar5 = 0;
    iVar2 = FUN_140b77980(*(undefined8 *)(param_2 + 2));
    if (0 < iVar2) {
      do {
        if ((0 < iVar5) && (iVar2 = FUN_140b73bf0(param_3,&DAT_1413a7288), iVar2 == 0)) {
          return 0;
        }
        uVar3 = FUN_140b77990(*(undefined8 *)(param_2 + 2),iVar5);
        iVar2 = sweeks_of_the_year(param_1,uVar3,param_3,param_4 + 4);
        if (iVar2 == 0) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_140b77980(*(undefined8 *)(param_2 + 2));
      } while (iVar5 < iVar2);
    }
    uVar3 = FUN_140b73bf0(param_3,&DAT_1413a7288);
    return uVar3;
  }
  iVar2 = FUN_140c078a0(param_3,"%*sAbsolute: ",param_4,&DAT_1413a2ad6);
  if (iVar2 < 1) {
    return 0;
  }
  plVar1 = *(longlong **)(param_2 + 2);
  if (*plVar1 == 0) {
    if (plVar1[1] == 0) {
      iVar2 = FUN_140b73bf0(param_3,"INVALID (EMPTY)");
      goto joined_r0x000140c6b661;
    }
    pcVar4 = "Any time until ";
  }
  else {
    if (plVar1[1] == 0) {
      iVar2 = FUN_140b73bf0(param_3,"Any time after ");
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = bad_time_value(param_3,*plVar1,0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_140c078a0(param_3,&DAT_1413a5cd4,*(undefined4 *)*plVar1,
                            *(undefined8 *)((undefined4 *)*plVar1 + 2));
joined_r0x000140c6b661:
      if (iVar2 < 1) {
        return 0;
      }
      goto LAB_140c6b663;
    }
    iVar2 = FUN_140b73bf0(param_3,"Any time between ");
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = bad_time_value(param_3,*plVar1,0);
    if (iVar2 == 0) {
      return 0;
    }
    pcVar4 = " and ";
  }
  iVar2 = FUN_140b73bf0(param_3,pcVar4);
  if ((iVar2 == 0) || (iVar2 = bad_time_value(param_3,plVar1[1],0), iVar2 == 0)) {
    return 0;
  }
LAB_140c6b663:
  uVar3 = FUN_140b73bf0(param_3,&DAT_1413a7288);
  return uVar3;
}

