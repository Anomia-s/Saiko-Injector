/**
 * Function: invalid_storage_container
 * Address:  140153b40
 * Signature: undefined invalid_storage_container(void)
 * Body size: 119 bytes
 */


undefined8
invalid_storage_container
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  
  if (param_4 == 0) {
    pcVar3 = "Invalid storage container";
  }
  else {
    puVar4 = &DAT_1413a2ad6;
    if (param_1 != (undefined1 *)0x0) {
      puVar4 = param_1;
    }
    cVar1 = relative_paths_not_permitted(puVar4);
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(code **)(param_4 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140153b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_4 + 0x18))(*(undefined8 *)(param_4 + 0x60),puVar4,param_2,param_3);
      return uVar2;
    }
    pcVar3 = "That operation is not supported";
  }
  uVar2 = FUN_1400fbed0(pcVar3);
  return uVar2;
}

