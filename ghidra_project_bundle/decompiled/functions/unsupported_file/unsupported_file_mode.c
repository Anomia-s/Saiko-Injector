/**
 * Function: unsupported_file_mode
 * Address:  14017c160
 * Signature: undefined unsupported_file_mode(void)
 * Body size: 357 bytes
 */


/* WARNING: Removing unreachable block (ram,0x00014017c1eb) */
/* WARNING: Removing unreachable block (ram,0x00014017c230) */

longlong unsupported_file_mode(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  
  if (param_1 == 0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","file");
    return 0;
  }
  if (param_2 == 0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","mode");
    return 0;
  }
  iVar2 = FUN_1400fd200(param_2,&DAT_14133ddce);
  if (iVar2 == 0) {
    puVar5 = &DAT_14135eecf;
  }
  else {
    iVar2 = FUN_1400fd200(param_2,&DAT_1413285b5);
    if (iVar2 == 0) {
      puVar5 = &DAT_14135eea8;
    }
    else {
      iVar2 = FUN_1400fd200(param_2,&DAT_1413944a8);
      if (iVar2 == 0) {
        puVar5 = &DAT_14135eff4;
      }
      else {
        iVar2 = FUN_1400fd200(param_2,&DAT_1413944a5);
        if (iVar2 != 0) {
          FUN_1400fbed0("Unsupported file mode");
          return 0;
        }
        puVar5 = &DAT_14135eff0;
      }
    }
  }
  lVar3 = FUN_140160c70(1,0xd0);
  if (lVar3 != 0) {
    lVar4 = initializesrwlock();
    *(longlong *)(lVar3 + 0x30) = lVar4;
    if (lVar4 == 0) goto LAB_14017c2b6;
  }
  cVar1 = thunk_FUN_14046d4b0(param_1,puVar5,lVar3);
  if (cVar1 != '\0') {
    return lVar3;
  }
  FUN_140155290(*(undefined8 *)(lVar3 + 0x30));
LAB_14017c2b6:
  FUN_140160cf0(lVar3);
  return 0;
}

