/**
 * Function: ss_of_s_n
 * Address:  140c29010
 * Signature: undefined ss_of_s_n(void)
 * Body size: 592 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ss_of_s_n(undefined8 param_1,longlong *****param_2,int param_3,uint *param_4,uint *param_5
                   )

{
  longlong ****pppplVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong ****local_38;
  undefined8 uStack_30;
  
  puVar2 = param_5;
  uStack_30 = 0x140c2902d;
  uVar6 = 0;
  uVar8 = *param_4;
  if ((*param_5 & 0x80) == 0) {
    param_5 = (uint *)0x0;
  }
  else {
    lVar4 = (**(code **)(param_4 + 6))();
    param_5 = *(uint **)(lVar4 + 0x28);
  }
  uVar9 = uVar6;
  if ((*puVar2 & 0x40) == 0) {
    uVar9 = *(ulonglong *)(param_4 + 4);
  }
  if ((uVar8 >> 0xc & 1) != 0) {
    local_38 = (longlong ****)param_2;
    param_2 = &local_38;
  }
  if ((uVar8 & 6) == 0) {
    uVar5 = (**(code **)(param_4 + 6))();
    uVar6 = error_selector_d_invalidn(param_1,param_2,param_3,uVar5,uVar9,param_5,0,puVar2);
    return uVar6;
  }
  if (uVar9 == 0) {
LAB_140c2910b:
    pppplVar1 = *param_2;
    iVar3 = FUN_140b77980(pppplVar1);
    if (iVar3 < 1) {
LAB_140c291a2:
      pcVar7 = "EMPTY";
      if (pppplVar1 == (longlong ****)0x0) {
        pcVar7 = "ABSENT";
      }
      iVar3 = FUN_140c078a0(param_1,"%*s<%s>\n",param_3 + 2,&DAT_1413a2ad6,pcVar7);
      if (iVar3 < 1) goto LAB_140c2920a;
    }
    else {
      do {
        if ((0 < (int)uVar6) && (iVar3 = FUN_140b73bf0(param_1,&DAT_1413a7288), iVar3 < 1))
        goto LAB_140c2920a;
        param_5 = (uint *)FUN_140b77990(pppplVar1,uVar6);
        uVar5 = (**(code **)(param_4 + 6))();
        pcVar7 = (char *)0x0;
        iVar3 = error_selector_d_invalidn(param_1,&param_5,param_3 + 2,uVar5,0,0,1,puVar2);
        if (iVar3 == 0) goto LAB_140c2920a;
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        iVar3 = FUN_140b77980(pppplVar1);
      } while ((int)uVar8 < iVar3);
      if (uVar8 == 0) goto LAB_140c291a2;
    }
    if ((*puVar2 & 2) == 0) {
      uVar6 = 1;
    }
    else {
      iVar3 = FUN_140c078a0(param_1,"%*s}\n",param_3,&DAT_1413a2ad6,pcVar7);
      uVar6 = (ulonglong)(0 < iVar3);
    }
  }
  else {
    if ((*puVar2 & 4) == 0) {
      iVar3 = FUN_140c078a0(param_1,"%*s%s:\n",param_3,&DAT_1413a2ad6,uVar9);
    }
    else {
      pcVar7 = "SET";
      if ((uVar8 & 2) == 0) {
        pcVar7 = "SEQUENCE";
      }
      iVar3 = FUN_140c078a0(param_1,"%*s%s OF %s {\n",param_3,&DAT_1413a2ad6,pcVar7,
                            *(undefined8 *)(param_4 + 4));
    }
    if (0 < iVar3) goto LAB_140c2910b;
LAB_140c2920a:
    uVar6 = 0;
  }
  return uVar6;
}

