/**
 * Function: sinvalid_private_keyn
 * Address:  140bfa6b0
 * Signature: undefined sinvalid_private_keyn(void)
 * Body size: 455 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool sinvalid_private_keyn
               (undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  
  uVar7 = 0x140bfa6d4;
  lVar1 = *(longlong *)(param_2 + 0x20);
  uVar3 = FUN_140b96460(**(undefined4 **)(param_2 + 8));
  cVar5 = ' ';
  if (param_5 == 1) {
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x50) == 0)) {
      pcVar4 = "%*s<INVALID PRIVATE KEY>\n";
LAB_140bfa7cd:
      iVar2 = FUN_140c078a0(param_1,pcVar4,param_3,&DAT_1413a2ad6);
      if (iVar2 < 1) {
        return false;
      }
      return true;
    }
    iVar2 = FUN_140c078a0(param_1,"%*s%s Private-Key:\n",param_3,&DAT_1413a2ad6,uVar3,uVar7);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = FUN_140c078a0(param_1,"%*spriv:\n",param_3,&DAT_1413a2ad6,uVar3,uVar7);
    if (iVar2 < 1) {
      return false;
    }
    iVar2 = **(int **)(param_2 + 8);
    if ((iVar2 == 0x40a) || (iVar2 == 0x43f)) {
      cVar6 = ' ';
    }
    else {
      cVar6 = (iVar2 != 0x40b) + '8';
    }
    iVar2 = FUN_140c7f510(param_1,*(undefined8 *)(lVar1 + 0x50),cVar6,param_3 + 4);
    if (iVar2 == 0) {
      return false;
    }
  }
  else {
    if (lVar1 == 0) {
      pcVar4 = "%*s<INVALID PUBLIC KEY>\n";
      goto LAB_140bfa7cd;
    }
    iVar2 = FUN_140c078a0(param_1,"%*s%s Public-Key:\n",param_3,&DAT_1413a2ad6,uVar3,uVar7);
    if (iVar2 < 1) {
      return false;
    }
  }
  iVar2 = FUN_140c078a0(param_1,"%*spub:\n",param_3,&DAT_1413a2ad6,uVar3,uVar7);
  if (iVar2 < 1) {
    return false;
  }
  iVar2 = **(int **)(param_2 + 8);
  if ((iVar2 != 0x40a) && (iVar2 != 0x43f)) {
    cVar5 = (iVar2 != 0x40b) + '8';
  }
  iVar2 = FUN_140c7f510(param_1,lVar1 + 0x14,cVar5,param_3 + 4);
  return iVar2 != 0;
}

