/**
 * Function: sissuer_names_nonen
 * Address:  140c6a000
 * Signature: undefined sissuer_names_nonen(void)
 * Body size: 402 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sissuer_names_nonen(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_140b77980(param_2);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_140c078a0(param_3,"%*sIssuer-Serials:\n",param_4,&DAT_1413a2ad6);
      if (iVar1 < 1) {
        return 0;
      }
      plVar2 = (longlong *)FUN_140b77990(param_2,iVar3);
      if (*plVar2 == 0) {
        FUN_140c078a0(param_3,"%*sIssuer Names: <none>\n",param_4 + 4,&DAT_1413a2ad6);
      }
      else {
        FUN_140c078a0(param_3,"%*sIssuer Names:\n",param_4 + 4,&DAT_1413a2ad6);
        FUN_140bc77e0(param_3,*plVar2,param_4 + 4);
        FUN_140b73bf0(param_3,&DAT_1413a7288);
      }
      FUN_140c078a0(param_3,"%*sIssuer Serial: ",param_4 + 4,&DAT_1413a2ad6);
      iVar1 = FUN_140cdc130(param_3,plVar2 + 1);
      if (iVar1 < 1) {
        return 0;
      }
      FUN_140b73bf0(param_3,&DAT_1413a7288);
      if (plVar2[4] == 0) {
        FUN_140c078a0(param_3,"%*sIssuer UID: <none>\n",param_4 + 4,&DAT_1413a2ad6);
      }
      else {
        FUN_140c078a0(param_3,"%*sIssuer UID: ",param_4 + 4,&DAT_1413a2ad6);
        iVar1 = FUN_140cdc250(param_3,plVar2[4],3);
        if (iVar1 < 1) {
          return 0;
        }
        FUN_140b73bf0(param_3,&DAT_1413a7288);
      }
      iVar1 = FUN_140b73bf0(param_3,&DAT_1413a7288);
      if (iVar1 < 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_140b77980(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}

