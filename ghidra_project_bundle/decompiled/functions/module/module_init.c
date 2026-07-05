/**
 * Function: module_init
 * Address:  140c1b230
 * Signature: undefined module_init(void)
 * Body size: 596 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int module_init(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong local_38 [2];
  
  local_38[1] = 0x140c1b252;
  iVar1 = 1;
  plVar4 = (longlong *)FUN_140b8d8d0(0x28,"crypto\\conf\\conf_mod.c",0x1b7);
  iVar7 = 0;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = param_1;
    lVar5 = FUN_140b8c830(param_2,"crypto\\conf\\conf_mod.c",0x1bc);
    plVar4[1] = lVar5;
    lVar5 = FUN_140b8c830(param_3,"crypto\\conf\\conf_mod.c",0x1bd);
    plVar4[2] = lVar5;
    plVar4[4] = 0;
    if ((plVar4[1] == 0) || (lVar5 == 0)) goto LAB_140c1b3ab;
    iVar3 = 0;
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0x10))(plVar4,param_4);
      iVar7 = 1;
      iVar3 = 1;
      if (iVar1 < 1) goto LAB_140c1b393;
    }
    iVar7 = iVar3;
    iVar2 = FUN_140b8b890(&DAT_141700340,do_init_module_list_lock);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = DAT_141700360;
    }
    if (iVar3 != 0) {
      FUN_140b8bde0(DAT_141700348);
      lVar5 = FUN_140b8c100(&DAT_141700358);
      if (lVar5 == 0) {
        local_38[0] = FUN_140b77ab0();
      }
      else {
        local_38[0] = FUN_140b78410(lVar5);
      }
      if (local_38[0] == 0) {
        FUN_140b8be00(DAT_141700348);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = 0x1da;
      }
      else {
        iVar3 = FUN_140b78340(local_38[0],plVar4);
        if (iVar3 != 0) {
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          FUN_140b8c110(&DAT_141700358,local_38);
          FUN_140b8be00(DAT_141700348);
          cryptothreads_winc(DAT_141700348);
          FUN_140b77c10(lVar5);
          return iVar1;
        }
        FUN_140b8be00(DAT_141700348);
        FUN_140b77c10(local_38[0]);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = 0x1e1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_mod.c",uVar6,"module_init");
      FUN_140b91cc0(0xe,0x8000f,0);
    }
  }
LAB_140c1b393:
  if ((*(code **)(param_1 + 0x18) != (code *)0x0) && (iVar7 != 0)) {
    (**(code **)(param_1 + 0x18))(plVar4);
  }
  if (plVar4 == (longlong *)0x0) {
    return -1;
  }
LAB_140c1b3ab:
  FUN_140b8d990(plVar4[1],"crypto\\conf\\conf_mod.c",0x1f5);
  FUN_140b8d990(plVar4[2],"crypto\\conf\\conf_mod.c",0x1f6);
  FUN_140b8d990(plVar4,"crypto\\conf\\conf_mod.c",0x1f7);
  return -1;
}

