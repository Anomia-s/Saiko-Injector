/**
 * Function: relative_paths_not_permitted
 * Address:  140153550
 * Signature: undefined relative_paths_not_permitted(void)
 * Body size: 241 bytes
 */


undefined8 relative_paths_not_permitted(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = strchr(param_1,0x5c);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = strchr(param_1,0x2f);
    while (pcVar2 != (char *)0x0) {
      iVar1 = strncmp(param_1,"./",2);
      if ((iVar1 == 0) || (iVar1 = strncmp(param_1,"../",3), iVar1 == 0)) {
        pcVar2 = "Relative paths not permitted";
        goto LAB_14015362f;
      }
      param_1 = pcVar2 + 1;
      pcVar2 = strchr(param_1,0x2f);
    }
    iVar1 = FUN_1400fd200(param_1,".");
    pcVar2 = "Relative paths not permitted";
    if (iVar1 != 0) {
      iVar1 = FUN_1400fd200(param_1,"..");
      pcVar2 = "Relative paths not permitted";
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  else {
    pcVar2 = "Windows-style path separators (\'\\\') not permitted, use \'/\' instead.";
  }
LAB_14015362f:
  uVar3 = FUN_1400fbed0(pcVar2);
  return uVar3;
}

