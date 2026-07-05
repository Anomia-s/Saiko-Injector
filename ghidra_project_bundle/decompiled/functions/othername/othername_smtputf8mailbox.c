/**
 * Function: othername_smtputf8mailbox
 * Address:  140c4bcd0
 * Signature: undefined othername_smtputf8mailbox(void)
 * Body size: 893 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void othername_smtputf8mailbox(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_278 [32];
  undefined8 local_258 [2];
  undefined1 local_248 [256];
  undefined1 local_148 [304];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140c4bced;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_278;
  local_258[0] = param_3;
  switch(*param_2) {
  case 0:
    puVar1 = *(undefined8 **)(param_2 + 2);
    iVar3 = FUN_140b964c0(*puVar1);
    if (iVar3 == 0x289) {
      if (*(int *)puVar1[1] != 0xc) break;
      piVar2 = *(int **)((int *)puVar1[1] + 2);
      pcVar5 = "othername: UPN";
      lVar4 = (longlong)*piVar2;
      uVar6 = *(undefined8 *)(piVar2 + 2);
    }
    else if (iVar3 == 0x4b8) {
      if (*(int *)puVar1[1] != 0xc) break;
      piVar2 = *(int **)((int *)puVar1[1] + 2);
      pcVar5 = "othername: SmtpUTF8Mailbox";
      lVar4 = (longlong)*piVar2;
      uVar6 = *(undefined8 *)(piVar2 + 2);
    }
    else if (iVar3 == 0x4b9) {
      if (*(int *)puVar1[1] != 0xc) break;
      piVar2 = *(int **)((int *)puVar1[1] + 2);
      pcVar5 = "othername: XmppAddr";
      lVar4 = (longlong)*piVar2;
      uVar6 = *(undefined8 *)(piVar2 + 2);
    }
    else if (iVar3 == 0x4ba) {
      if (*(int *)puVar1[1] != 0x16) break;
      piVar2 = *(int **)((int *)puVar1[1] + 2);
      pcVar5 = "othername: SRVName";
      lVar4 = (longlong)*piVar2;
      uVar6 = *(undefined8 *)(piVar2 + 2);
    }
    else {
      if (iVar3 != 0x4bb) {
        iVar3 = FUN_140b96640(local_248,0x100,*puVar1,0);
        if (iVar3 < 1) {
          FUN_140b8c190(local_148,"othername",300);
        }
        else {
          FUN_140c07aa0(local_148,300,"othername: %s",local_248);
        }
        if (((**(int **)(*(longlong *)(param_2 + 2) + 8) != 0x16) ||
            (piVar2 = *(int **)(*(int **)(*(longlong *)(param_2 + 2) + 8) + 2),
            iVar3 = FUN_140bc7a00(local_148,*(undefined8 *)(piVar2 + 2),(longlong)*piVar2,local_258)
            , iVar3 == 0)) &&
           ((**(int **)(*(longlong *)(param_2 + 2) + 8) != 0xc ||
            (piVar2 = *(int **)(*(int **)(*(longlong *)(param_2 + 2) + 8) + 2),
            iVar3 = FUN_140bc7a00(local_148,*(undefined8 *)(piVar2 + 2),(longlong)*piVar2,local_258)
            , iVar3 == 0)))) {
          FUN_140bc66d0(local_148,"<unsupported>",local_258);
        }
        break;
      }
      if (*(int *)puVar1[1] != 0xc) break;
      piVar2 = *(int **)((int *)puVar1[1] + 2);
      pcVar5 = "othername: NAIRealm";
      lVar4 = (longlong)*piVar2;
      uVar6 = *(undefined8 *)(piVar2 + 2);
    }
    goto LAB_140c4be3b;
  case 1:
    pcVar5 = "email";
    lVar4 = (longlong)**(int **)(param_2 + 2);
    uVar6 = *(undefined8 *)(*(int **)(param_2 + 2) + 2);
    goto LAB_140c4be3b;
  case 2:
    pcVar5 = "DNS";
    lVar4 = (longlong)**(int **)(param_2 + 2);
    uVar6 = *(undefined8 *)(*(int **)(param_2 + 2) + 2);
    goto LAB_140c4be3b;
  case 3:
    FUN_140bc66d0("X400Name","<unsupported>",local_258);
    break;
  case 4:
    lVar4 = FUN_140bde320(*(undefined8 *)(param_2 + 2),local_248,0x100);
    if (lVar4 != 0) {
      FUN_140bc66d0("DirName",local_248,local_258);
    }
    break;
  case 5:
    FUN_140bc66d0("EdiPartyName","<unsupported>",local_258);
    break;
  case 6:
    pcVar5 = "URI";
    lVar4 = (longlong)**(int **)(param_2 + 2);
    uVar6 = *(undefined8 *)(*(int **)(param_2 + 2) + 2);
LAB_140c4be3b:
    FUN_140bc7a00(pcVar5,uVar6,lVar4,local_258);
    break;
  case 7:
    lVar4 = invalid_lengthd(*(undefined8 *)(*(undefined4 **)(param_2 + 2) + 2),
                            **(undefined4 **)(param_2 + 2));
    if ((lVar4 == 0) || (iVar3 = FUN_140bc66d0("IP Address",lVar4,local_258), iVar3 == 0)) {
      local_258[0] = 0;
    }
    FUN_140b8d990(lVar4,"crypto\\x509\\v3_san.c",0xc3);
    break;
  case 8:
    FUN_140bdea40(local_248,0x100,*(undefined8 *)(param_2 + 2));
    FUN_140bc66d0("Registered ID",local_248,local_258);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_278);
}

