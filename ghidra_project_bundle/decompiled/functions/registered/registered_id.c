/**
 * Function: registered_id
 * Address:  140c4c090
 * Signature: undefined registered_id(void)
 * Body size: 777 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 registered_id(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  switch(*param_2) {
  case 0:
    break;
  case 1:
    FUN_140c078a0(param_1,"email:");
    FUN_140bdf280(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 2:
    FUN_140c078a0(param_1,&DAT_1413a6c50);
    FUN_140bdf280(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 3:
    FUN_140c078a0(param_1,"X400Name:<unsupported>");
    return 1;
  case 4:
    FUN_140c078a0(param_1,"DirName:");
    FUN_140c27030(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    return 1;
  case 5:
    FUN_140c078a0(param_1,"EdiPartyName:<unsupported>");
    return 1;
  case 6:
    FUN_140c078a0(param_1,&DAT_1413a6c58);
    FUN_140bdf280(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 7:
    lVar3 = invalid_lengthd(*(undefined8 *)(*(undefined4 **)(param_2 + 2) + 2),
                            **(undefined4 **)(param_2 + 2));
    if (lVar3 != 0) {
      FUN_140c078a0(param_1,"IP Address:%s",lVar3);
      FUN_140b8d990(lVar3,"crypto\\x509\\v3_san.c",0x122);
      return 1;
    }
    return 0;
  case 8:
    FUN_140c078a0(param_1,"Registered ID:");
    FUN_140bde8c0(param_1,*(undefined8 *)(param_2 + 2));
  default:
    return 1;
  }
  iVar2 = FUN_140b964c0(**(undefined8 **)(param_2 + 2));
  piVar1 = *(int **)(*(longlong *)(param_2 + 2) + 8);
  if (iVar2 == 0x4ba) {
    if (*piVar1 != 0x16) {
LAB_140c4c11c:
      FUN_140c078a0(param_1,"othername:<unsupported>");
      return 1;
    }
  }
  else {
    if (*piVar1 != 0xc) goto LAB_140c4c11c;
    if (iVar2 == 0x289) {
      FUN_140c078a0(param_1,"othername:UPN:%.*s",**(undefined4 **)(piVar1 + 2),
                    *(undefined8 *)(*(undefined4 **)(piVar1 + 2) + 2));
      return 1;
    }
    if (iVar2 == 0x4b8) {
      FUN_140c078a0(param_1,"othername:SmtpUTF8Mailbox:%.*s",**(undefined4 **)(piVar1 + 2),
                    *(undefined8 *)(*(undefined4 **)(piVar1 + 2) + 2));
      return 1;
    }
    if (iVar2 == 0x4b9) {
      FUN_140c078a0(param_1,"othername:XmppAddr:%.*s",**(undefined4 **)(piVar1 + 2),
                    *(undefined8 *)(*(undefined4 **)(piVar1 + 2) + 2));
      return 1;
    }
    if (iVar2 != 0x4ba) {
      if (iVar2 == 0x4bb) {
        FUN_140c078a0(param_1,"othername:NAIRealm:%.*s",**(undefined4 **)(piVar1 + 2),
                      *(undefined8 *)(*(undefined4 **)(piVar1 + 2) + 2));
        return 1;
      }
      FUN_140c078a0(param_1,"othername:<unsupported>");
      return 1;
    }
  }
  FUN_140c078a0(param_1,"othername:SRVName:%.*s",**(undefined4 **)(piVar1 + 2),
                *(undefined8 *)(*(undefined4 **)(piVar1 + 2) + 2));
  return 1;
}

