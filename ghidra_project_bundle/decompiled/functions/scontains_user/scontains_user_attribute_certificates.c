/**
 * Function: scontains_user_attribute_certificates
 * Address:  140be4f50
 * Signature: undefined scontains_user_attribute_certificates(void)
 * Body size: 495 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool scontains_user_attribute_certificates
               (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((*param_2 != 0) && (iVar1 = srelative_name_ns(param_3,*param_2,param_4), iVar1 < 1)) {
    return false;
  }
  if ((param_2[1] != 0) && (iVar1 = ss_ns(param_3,"Reasons",param_2[1],param_4), iVar1 < 1)) {
    return false;
  }
  pcVar3 = "FALSE";
  if (*(int *)((longlong)param_2 + 0x14) != 0) {
    iVar1 = FUN_140c078a0(param_3,"%*sIndirect CRL: ",param_4,&DAT_1413a2ad6);
    if (iVar1 < 1) {
      return false;
    }
    pcVar2 = "FALSE";
    if (*(int *)((longlong)param_2 + 0x14) != 0) {
      pcVar2 = "TRUE";
    }
    iVar1 = FUN_140b73bf0(param_3,pcVar2);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = FUN_140b73bf0(param_3,&DAT_1413a7288);
    if (iVar1 < 1) {
      return false;
    }
  }
  if ((int)param_2[3] != 0) {
    iVar1 = FUN_140c078a0(param_3,"%*sContains User Attribute Certificates: ",param_4,&DAT_1413a2ad6
                         );
    if (iVar1 < 1) {
      return false;
    }
    pcVar2 = "FALSE";
    if ((int)param_2[3] != 0) {
      pcVar2 = "TRUE";
    }
    iVar1 = FUN_140b73bf0(param_3,pcVar2);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = FUN_140b73bf0(param_3,&DAT_1413a7288);
    if (iVar1 < 1) {
      return false;
    }
  }
  if (*(int *)((longlong)param_2 + 0x1c) != 0) {
    iVar1 = FUN_140c078a0(param_3,"%*sContains Attribute Authority (AA) Certificates: ",param_4,
                          &DAT_1413a2ad6);
    if (iVar1 < 1) {
      return false;
    }
    pcVar2 = "FALSE";
    if (*(int *)((longlong)param_2 + 0x1c) != 0) {
      pcVar2 = "TRUE";
    }
    iVar1 = FUN_140b73bf0(param_3,pcVar2);
    if (iVar1 < 1) {
      return false;
    }
    iVar1 = FUN_140b73bf0(param_3,&DAT_1413a7288);
    if (iVar1 < 1) {
      return false;
    }
  }
  if ((int)param_2[4] == 0) {
    return true;
  }
  iVar1 = FUN_140c078a0(param_3,"%*sContains Source Of Authority (SOA) Public Key Certificates: ",
                        param_4,&DAT_1413a2ad6);
  if (0 < iVar1) {
    if ((int)param_2[4] != 0) {
      pcVar3 = "TRUE";
    }
    iVar1 = FUN_140b73bf0(param_3,pcVar3);
    if (0 < iVar1) {
      iVar1 = FUN_140b73bf0(param_3,&DAT_1413a7288);
      return 0 < iVar1;
    }
  }
  return false;
}

