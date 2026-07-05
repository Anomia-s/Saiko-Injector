/**
 * Function: cannot_set_both_ecsisentity_and_ecsisvariable
 * Address:  140395270
 * Signature: undefined cannot_set_both_ecsisentity_and_ecsisvariable(void)
 * Body size: 252 bytes
 */


undefined8 cannot_set_both_ecsisentity_and_ecsisvariable(ulonglong *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = *param_1;
  if ((~uVar4 & 0x600000000000000) == 0) {
    pcVar1 = "cannot set both EcsIsEntity and EcsIsVariable for term.%s";
LAB_140395293:
    FUN_140392c00(param_2,pcVar1);
    return 0xffffffff;
  }
  pcVar1 = (char *)param_1[1];
  if ((pcVar1 != (char *)0x0) && (*pcVar1 == '$')) {
    if (pcVar1[1] == '\0') {
      if ((uVar4 & 0x100000000000000) == 0) {
        pcVar1 = 
        "invalid variable name for term.%s (\'$\' syntax support is removed, use new Singleton trait)"
        ;
        goto LAB_140395293;
      }
    }
    else {
      param_1[1] = (ulonglong)(pcVar1 + 1);
      uVar4 = uVar4 | 0x400000000000000;
      *param_1 = uVar4;
    }
  }
  uVar2 = 0;
  if (((uVar4 & 0x700000000000000) != 0) ||
     (uVar3 = uVar4 & 0xffffffffffffff, pcVar1 == (char *)0x0 && uVar3 == 0)) {
    return uVar2;
  }
  if ((((uVar3 != 0x110) && (uVar3 != 0x10e)) && (uVar3 != 0x10f)) && (uVar3 != 0x111)) {
    *param_1 = uVar4 | 0x200000000000000;
    return uVar2;
  }
  *param_1 = uVar4 | 0x400000000000000;
  return uVar2;
}

