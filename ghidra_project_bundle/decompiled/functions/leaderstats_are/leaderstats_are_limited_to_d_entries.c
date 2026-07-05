/**
 * Function: leaderstats_are_limited_to_d_entries
 * Address:  1406b6650
 * Signature: undefined leaderstats_are_limited_to_d_entries(void)
 * Body size: 281 bytes
 */


undefined8 leaderstats_are_limited_to_d_entries(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *_Str1;
  double dVar7;
  
  pcVar3 = (char *)FUN_1406b7610(param_1,2,0);
  dVar7 = (double)FUN_1406b7730(param_1,3);
  pcVar4 = (char *)FUN_1400ba6e0(param_2[1],*param_2,DAT_14151f770,0x68);
  bVar1 = pcVar4[0x60];
  uVar5 = (ulonglong)bVar1;
  if (uVar5 != 0) {
    uVar6 = 0;
    _Str1 = pcVar4;
    do {
      iVar2 = strncmp(_Str1,pcVar3,0x10);
      if (iVar2 == 0) goto LAB_1406b671c;
      uVar6 = uVar6 + 1;
      _Str1 = _Str1 + 0x10;
    } while (uVar5 != uVar6);
    if (3 < bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(param_1,"leaderstats are limited to %d entries",4);
    }
  }
  pcVar4[0x60] = bVar1 + 1;
  strncpy(pcVar4 + (ulonglong)bVar1 * 0x10,pcVar3,0xf);
  pcVar4[(ulonglong)bVar1 * 0x10 + 0xf] = '\0';
  pcVar3 = pcVar4 + uVar5 * 8 + 0x40;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  uVar6 = uVar5;
LAB_1406b671c:
  *(longlong *)(pcVar4 + (uVar6 & 0xffffffff) * 8 + 0x40) = (longlong)dVar7;
  FUN_1400ba7b0(param_2[1],*param_2,DAT_14151f770);
  return 0;
}

