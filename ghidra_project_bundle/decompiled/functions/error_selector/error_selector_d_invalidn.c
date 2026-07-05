/**
 * Function: error_selector_d_invalidn
 * Address:  140c28c10
 * Signature: undefined error_selector_d_invalidn(void)
 * Body size: 987 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool error_selector_d_invalidn
               (undefined8 param_1,longlong *param_2,int param_3,char *param_4,longlong param_5,
               longlong param_6,int param_7,byte *param_8)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  longlong lVar9;
  code *local_res20;
  undefined8 local_48;
  int local_40;
  byte *local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140c28c28;
  local_res20 = (code *)0x0;
  lVar9 = *(longlong *)(param_4 + 0x18);
  if (lVar9 != 0) {
    local_38 = param_8;
    lVar5 = 0x28;
    if ((*(byte *)(lVar9 + 8) & 8) == 0) {
      lVar5 = 0x18;
    }
    local_res20 = *(code **)(lVar5 + lVar9);
    local_48 = param_1;
    local_40 = param_3;
  }
  cVar1 = *param_4;
  if (((cVar1 == '\0') && (*(int *)(param_4 + 4) == 1)) || (*param_2 != 0)) {
    switch(cVar1) {
    case '\0':
      lVar9 = *(longlong *)(param_4 + 8);
      if (lVar9 == 0) goto switchD_140c28d1e_caseD_5;
LAB_140c28e4b:
      iVar3 = ss_of_s_n(param_1,param_2,param_3,lVar9,param_8);
      break;
    case '\x01':
    case '\x06':
      if ((param_7 == 0) &&
         (iVar3 = FUN_140c29620(param_1,param_3,param_5,param_6,param_8), iVar3 == 0)) {
        return false;
      }
      if ((param_5 != 0) || (param_6 != 0)) {
        puVar8 = &DAT_1413a7204;
        if ((*param_8 & 2) == 0) {
          puVar8 = &DAT_1413a7288;
        }
        iVar3 = FUN_140b73bf0(param_1,puVar8);
        if (iVar3 < 1) {
          return false;
        }
      }
      if (local_res20 != (code *)0x0) {
        iVar3 = (*local_res20)(8,param_2,param_4,&local_48);
        if (iVar3 == 0) {
          return false;
        }
        if (iVar3 == 2) {
          return true;
        }
      }
      lVar9 = *(longlong *)(param_4 + 8);
      iVar3 = 0;
      if (0 < *(int *)(param_4 + 0x10)) {
        do {
          lVar5 = FUN_140c62bf0(*param_2,lVar9,1);
          if (lVar5 == 0) {
            return false;
          }
          uVar6 = FUN_140c62be0(param_2,lVar5);
          iVar4 = ss_of_s_n(param_1,uVar6,param_3 + 2,lVar5,param_8);
          if (iVar4 == 0) {
            return false;
          }
          iVar3 = iVar3 + 1;
          lVar9 = lVar9 + 0x20;
        } while (iVar3 < *(int *)(param_4 + 0x10));
      }
      if (((*param_8 & 2) != 0) &&
         (iVar3 = FUN_140c078a0(param_1,"%*s}\n",param_3,&DAT_1413a2ad6), iVar3 < 0)) {
        return false;
      }
      if (local_res20 == (code *)0x0) {
        return true;
      }
      iVar3 = (*local_res20)(9,param_2,param_4,&local_48);
      return iVar3 != 0;
    case '\x02':
      iVar3 = FUN_140c62bb0(param_2,param_4);
      if ((-1 < iVar3) && (iVar3 < *(int *)(param_4 + 0x10))) {
        lVar9 = *(longlong *)(param_4 + 8) + (longlong)iVar3 * 0x20;
        param_2 = (longlong *)FUN_140c62be0(param_2,lVar9);
        goto LAB_140c28e4b;
      }
      iVar3 = FUN_140c078a0(param_1,"ERROR: selector [%d] invalid\n",iVar3);
      goto LAB_140c28cef;
    default:
      FUN_140c078a0(param_1,"Unprocessed type %d\n",(longlong)cVar1);
      return false;
    case '\x04':
      if ((param_7 == 0) &&
         (iVar3 = FUN_140c29620(param_1,param_3,param_5,param_6,param_8), iVar3 == 0)) {
        return false;
      }
      if ((*(longlong *)(param_4 + 0x18) == 0) ||
         (pcVar2 = *(code **)(*(longlong *)(param_4 + 0x18) + 0x30), pcVar2 == (code *)0x0)) {
        if (param_6 == 0) {
          return true;
        }
        iVar3 = FUN_140c078a0(param_1,":EXTERNAL TYPE %s\n",param_6);
        if (iVar3 < 1) {
          return false;
        }
        return true;
      }
      iVar3 = (*pcVar2)(param_1,param_2,param_3,&DAT_1413a2ad6,param_8);
      if (iVar3 == 0) {
        return false;
      }
      if (iVar3 != 2) {
        return true;
      }
      pcVar7 = "\n";
      goto LAB_140c28ce7;
    case '\x05':
switchD_140c28d1e_caseD_5:
      iVar3 = ld_unused_bitsn(param_1,param_2,param_4,param_3,param_5,param_6,param_8);
    }
    if (iVar3 != 0) {
      return true;
    }
  }
  else {
    if ((*param_8 & 1) == 0) {
      return true;
    }
    if ((param_7 == 0) &&
       (iVar3 = FUN_140c29620(param_1,param_3,param_5,param_6,param_8), iVar3 == 0)) {
      return false;
    }
    pcVar7 = "<ABSENT>\n";
LAB_140c28ce7:
    iVar3 = FUN_140b73bf0(param_1,pcVar7);
LAB_140c28cef:
    if (0 < iVar3) {
      return true;
    }
  }
  return false;
}

