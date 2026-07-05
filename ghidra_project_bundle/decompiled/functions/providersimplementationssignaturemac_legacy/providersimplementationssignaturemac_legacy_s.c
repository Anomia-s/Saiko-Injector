/**
 * Function: providersimplementationssignaturemac_legacy_s
 * Address:  140d4c2c0
 * Signature: undefined providersimplementationssignaturemac_legacy_s(void)
 * Body size: 272 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
providersimplementationssignaturemac_legacy_s
          (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)
           FUN_140b8da80(0x20,"providers\\implementations\\signature\\mac_legacy_sig.c",0x3a);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar3 = FUN_140b76070(param_1);
  *puVar2 = uVar3;
  if (param_2 != 0) {
    lVar4 = FUN_140b8c830(param_2,"providers\\implementations\\signature\\mac_legacy_sig.c",0x3f);
    puVar2[1] = lVar4;
    if (lVar4 == 0) goto LAB_140d4c380;
  }
  lVar5 = FUN_140c452b0(*puVar2,param_3,param_2);
  if (lVar5 != 0) {
    lVar4 = FUN_140c45730(lVar5);
    puVar2[3] = lVar4;
    if (lVar4 != 0) {
      FUN_140c45300(lVar5);
      return puVar2;
    }
  }
LAB_140d4c380:
  FUN_140b8d990(puVar2[1],"providers\\implementations\\signature\\mac_legacy_sig.c",0x4f);
  FUN_140b8d990(puVar2,"providers\\implementations\\signature\\mac_legacy_sig.c",0x50);
  FUN_140c45300(lVar5);
  return (undefined8 *)0x0;
}

