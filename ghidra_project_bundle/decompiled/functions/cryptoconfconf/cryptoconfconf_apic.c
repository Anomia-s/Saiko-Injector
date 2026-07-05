/**
 * Function: cryptoconfconf_apic
 * Address:  140caf8b0
 * Signature: undefined cryptoconfconf_apic(void)
 * Body size: 218 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cryptoconfconf_apic(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    uVar1 = param_1[2];
    iVar2 = FUN_140b77980(uVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      lVar3 = FUN_140b77990(uVar1,iVar2);
      FUN_140b8d990(*(undefined8 *)(lVar3 + 0x10),"crypto\\conf\\conf_api.c",0xb0);
      FUN_140b8d990(*(undefined8 *)(lVar3 + 8),"crypto\\conf\\conf_api.c",0xb1);
      FUN_140b8d990(lVar3,"crypto\\conf\\conf_api.c",0xb2);
    }
    FUN_140b77c10(uVar1);
    FUN_140b8d990(*param_1,"crypto\\conf\\conf_api.c",0xb5);
    FUN_140b8d990(param_1,"crypto\\conf\\conf_api.c",0xb6);
  }
  return;
}

