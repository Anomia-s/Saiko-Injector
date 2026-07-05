/**
 * Function: s_algorithm_s_unsupportedn
 * Address:  140b816f0
 * Signature: undefined s_algorithm_s_unsupportedn(void)
 * Body size: 474 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int s_algorithm_s_unsupportedn
              (undefined4 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
              undefined8 param_5,code *param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0x140b81712;
  iVar4 = -2;
  bVar1 = false;
  iVar2 = 0;
  if (0 < param_3) {
    iVar2 = FUN_140b74190(param_2,0x51,0,0);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    iVar3 = FUN_140b74190(param_2,0x50,param_3,0);
    if (iVar3 < 1) {
      uVar5 = FUN_140c07890();
      lVar6 = FUN_140b73040(uVar5);
      if (lVar6 == 0) {
        return 0;
      }
      param_2 = FUN_140b744f0(lVar6,param_2);
      bVar1 = true;
    }
    iVar3 = FUN_140b74190(param_2,0x50,param_3,0);
    if (iVar3 < 1) {
      FUN_140b74190(param_2,0x50,iVar2,0);
      if (bVar1) {
        FUN_140b74560(param_2);
        FUN_140b73150(param_2);
      }
      return 0;
    }
  }
  uVar7 = save_parameters(param_1,param_4,&DAT_1413a667c,0,param_5,uVar7);
  iVar3 = FUN_140c116c0(uVar7);
  if (iVar3 != 0) {
    iVar4 = no_encoders_were_found_for_standard_encoders(uVar7,param_2);
  }
  FUN_140c10990(uVar7);
  if (iVar4 == -2) {
    if (param_6 == (code *)0x0) {
      iVar4 = FUN_140b73ea0(param_2,0,0x80);
      if (iVar4 != 0) {
        uVar7 = FUN_140b96460(*param_1);
        iVar3 = FUN_140c078a0(param_2,"%s algorithm \"%s\" unsupported\n","Public Key",uVar7);
        iVar4 = 1;
        if (0 < iVar3) goto LAB_140b81883;
      }
      iVar4 = 0;
    }
    else {
      iVar4 = (*param_6)(param_2,param_1,0,param_7);
    }
  }
LAB_140b81883:
  FUN_140b74190(param_2,0x50,iVar2,0);
  if (bVar1) {
    FUN_140b74560(param_2);
    FUN_140b73150(param_2);
  }
  return iVar4;
}

