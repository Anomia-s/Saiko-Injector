/**
 * Function: starget_group
 * Address:  140c69370
 * Signature: undefined starget_group(void)
 * Body size: 386 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 starget_group(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = FUN_140b77980(param_2);
  if (0 < iVar1) {
    do {
      FUN_140c078a0(param_3,"%*sTargets:\n",param_4,&DAT_1413a2ad6);
      uVar2 = FUN_140b77990(param_2,iVar6);
      iVar5 = 0;
      iVar1 = FUN_140b77980(uVar2);
      if (0 < iVar1) {
        do {
          FUN_140c078a0(param_3,"%*sTarget:\n",param_4 + 2,&DAT_1413a2ad6);
          piVar3 = (int *)FUN_140b77990(uVar2,iVar5);
          iVar1 = *piVar3;
          if (iVar1 == 0) {
            pcVar4 = "%*sTarget Name: ";
LAB_140c69475:
            FUN_140c078a0(param_3,pcVar4,param_4 + 4,&DAT_1413a2ad6);
            registered_id(param_3,*(undefined8 *)(piVar3 + 2));
            FUN_140b73bf0(param_3,&DAT_1413a7288);
          }
          else {
            if (iVar1 == 1) {
              pcVar4 = "%*sTarget Group: ";
              goto LAB_140c69475;
            }
            if (iVar1 == 2) {
              FUN_140c078a0(param_3,"%*sTarget Cert:\n",param_4 + 4,&DAT_1413a2ad6);
              sissuer_names_nonen(param_1,*(undefined8 *)(piVar3 + 2),param_3,param_4 + 6);
            }
          }
          iVar5 = iVar5 + 1;
          iVar1 = FUN_140b77980(uVar2);
        } while (iVar5 < iVar1);
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_140b77980(param_2);
    } while (iVar6 < iVar1);
  }
  return 1;
}

