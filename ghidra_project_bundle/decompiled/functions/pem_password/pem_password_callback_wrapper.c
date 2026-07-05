/**
 * Function: pem_password_callback_wrapper
 * Address:  140ce12f0
 * Signature: undefined pem_password_callback_wrapper(void)
 * Body size: 321 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong pem_password_callback_wrapper(code *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  
  lVar4 = 0;
  puVar3 = (undefined8 *)FUN_140b8da80(0x10,"crypto\\ui\\ui_util.c",0x97);
  if (((((puVar3 != (undefined8 *)0x0) &&
        (lVar4 = ui_create_method("PEM password callback wrapper"), lVar4 != 0)) &&
       (iVar1 = FUN_140ce03f0(lVar4,FUN_140b69250), -1 < iVar1)) &&
      ((iVar1 = FUN_140ce0430(lVar4,FUN_140ce1510), -1 < iVar1 &&
       (iVar1 = FUN_140ce0410(lVar4,FUN_140b69250), -1 < iVar1)))) &&
     (iVar1 = FUN_140ce0450(lVar4,FUN_140b69250), -1 < iVar1)) {
    iVar2 = FUN_140b8b890(&DAT_141701e10,FUN_140ce14c0);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = DAT_141701e14;
    }
    if ((iVar1 != 0) && (iVar1 = FUN_140ce0470(lVar4,DAT_141519760,puVar3), iVar1 != 0)) {
      *(undefined4 *)(puVar3 + 1) = param_2;
      pcVar5 = enter_pem_pass_phrase;
      if (param_1 != (code *)0x0) {
        pcVar5 = param_1;
      }
      *puVar3 = pcVar5;
      return lVar4;
    }
  }
  FUN_140ce0390(lVar4);
  FUN_140b8d990(puVar3,"crypto\\ui\\ui_util.c",0xa0);
  return 0;
}

