/**
 * Function: pss_parameter_restrictions
 * Address:  140c91fa0
 * Signature: undefined pss_parameter_restrictions(void)
 * Body size: 743 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
pss_parameter_restrictions(undefined8 param_1,int param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar3 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x0;
  iVar1 = FUN_140b73ea0(param_1,param_4,0x80);
  puVar5 = puVar3;
  puVar8 = puVar3;
  if (iVar1 == 0) goto LAB_140c92264;
  if (param_2 == 0) {
    if (param_3 == (longlong *)0x0) {
      iVar1 = FUN_140b73bf0(param_1,"(INVALID PSS PARAMETERS)\n");
      return (undefined8 *)(ulonglong)(0 < iVar1);
    }
  }
  else {
    if (param_3 == (longlong *)0x0) {
      iVar1 = FUN_140b73bf0(param_1,"No PSS parameter restrictions\n");
      if (iVar1 < 1) {
        return (undefined8 *)0x0;
      }
      return (undefined8 *)0x1;
    }
    iVar1 = FUN_140b73bf0(param_1,"PSS parameter restrictions:");
    if (iVar1 < 1) {
      return (undefined8 *)0x0;
    }
  }
  iVar1 = FUN_140b73bf0(param_1,&DAT_1413a7288);
  puVar8 = puVar7;
  if (iVar1 < 1) goto LAB_140c92264;
  iVar1 = param_4 + 2;
  if (param_2 == 0) {
    iVar1 = param_4;
  }
  iVar2 = FUN_140b73ea0(param_1,iVar1,0x80);
  puVar8 = puVar3;
  if ((iVar2 == 0) ||
     (iVar2 = FUN_140b73bf0(param_1,"Hash Algorithm: "), puVar8 = puVar7, iVar2 < 1))
  goto LAB_140c92264;
  if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    iVar2 = FUN_140b73bf0(param_1,"sha1 (default)");
  }
  else {
    iVar2 = FUN_140bde8c0(param_1,*(undefined8 *)*param_3);
  }
  if ((((iVar2 < 1) || (iVar2 = FUN_140b73bf0(param_1,&DAT_1413a7288), puVar5 = puVar4, iVar2 < 1))
      || (iVar2 = FUN_140b73ea0(param_1,iVar1,0x80), iVar2 == 0)) ||
     (iVar2 = FUN_140b73bf0(param_1,"Mask Algorithm: "), iVar2 < 1)) goto LAB_140c92264;
  if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
    pcVar6 = "mgf1 with sha1 (default)";
LAB_140c9216d:
    iVar2 = FUN_140b73bf0(param_1,pcVar6);
  }
  else {
    iVar2 = FUN_140bde8c0(param_1,*(undefined8 *)param_3[1]);
    if ((iVar2 < 1) || (iVar2 = FUN_140b73bf0(param_1," with "), iVar2 < 1)) goto LAB_140c92264;
    puVar3 = (undefined8 *)FUN_140bdfb80(param_3[1]);
    if (puVar3 == (undefined8 *)0x0) {
      pcVar6 = "INVALID";
      goto LAB_140c9216d;
    }
    iVar2 = FUN_140bde8c0(param_1,*puVar3);
  }
  puVar8 = puVar3;
  if (0 < iVar2) {
    FUN_140b73bf0(param_1,&DAT_1413a7288);
    iVar2 = FUN_140b73ea0(param_1,iVar1,0x80);
    if (iVar2 != 0) {
      pcVar6 = "";
      if (param_2 != 0) {
        pcVar6 = "Minimum";
      }
      iVar2 = FUN_140c078a0(param_1,"%s Salt Length: 0x",pcVar6);
      if (0 < iVar2) {
        if (param_3[2] == 0) {
          iVar2 = FUN_140b73bf0(param_1,"14 (default)");
        }
        else {
          iVar2 = FUN_140cdc130();
        }
        if (0 < iVar2) {
          FUN_140b73bf0(param_1,&DAT_1413a7288);
          iVar1 = FUN_140b73ea0(param_1,iVar1,0x80);
          if ((iVar1 != 0) && (iVar1 = FUN_140b73bf0(param_1,"Trailer Field: 0x"), 0 < iVar1)) {
            if (param_3[3] == 0) {
              iVar1 = FUN_140b73bf0(param_1,"01 (default)");
            }
            else {
              iVar1 = FUN_140cdc130();
            }
            if (0 < iVar1) {
              FUN_140b73bf0(param_1,&DAT_1413a7288);
              puVar5 = (undefined8 *)0x1;
            }
          }
        }
      }
    }
  }
LAB_140c92264:
  FUN_140bdf9b0(puVar8);
  return puVar5;
}

