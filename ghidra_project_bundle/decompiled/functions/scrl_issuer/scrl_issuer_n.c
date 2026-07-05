/**
 * Function: scrl_issuer_n
 * Address:  140be4820
 * Signature: undefined scrl_issuer_n(void)
 * Body size: 239 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
scrl_issuer_n(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_140b77980(param_2);
  if (0 < iVar1) {
    do {
      if (0 < iVar3) {
        FUN_140b73bf0(param_3,&DAT_1413a7288);
      }
      plVar2 = (longlong *)FUN_140b77990(param_2,iVar3);
      if (*plVar2 != 0) {
        srelative_name_ns(param_3,*plVar2,param_4);
      }
      if (plVar2[1] != 0) {
        ss_ns(param_3,"Reasons",plVar2[1],param_4);
      }
      if (plVar2[2] != 0) {
        FUN_140c078a0(param_3,"%*sCRL Issuer:\n",param_4,&DAT_1413a2ad6);
        FUN_140bc77e0(param_3,plVar2[2],param_4);
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_140b77980(param_2);
    } while (iVar3 < iVar1);
  }
  return 1;
}

