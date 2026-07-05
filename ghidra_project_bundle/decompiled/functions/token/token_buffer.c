/**
 * Function: token_buffer
 * Address:  1405f0840
 * Signature: undefined token_buffer(void)
 * Body size: 395 bytes
 */


longlong token_buffer(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                     undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  size_t sVar3;
  char *pcVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  pcVar4 = "";
  if (param_3 != (char *)0x0) {
    pcVar4 = param_3;
  }
  if (param_5 != (undefined8 *)0x0) {
    FUN_140398df0(1);
  }
  lVar1 = FUN_1403ca790(param_1);
  uVar2 = (*DAT_1415033b8)(param_2);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  local_88 = (*DAT_1415033b8)(pcVar4);
  *(undefined8 *)(lVar1 + 0x10) = local_88;
  local_90 = *(undefined8 *)(lVar1 + 8);
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 1;
  local_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  local_48 = *(undefined8 *)(lVar1 + 0x78);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_50 = lVar1;
  sVar3 = strlen(pcVar4);
  *(int *)(lVar1 + 0xa0) = (int)sVar3 * 2 + 1;
  uVar2 = FUN_140391250(lVar1 + 0x18);
  lStack_78 = FUN_140391500(uVar2,"token buffer");
  *(longlong *)(lVar1 + 0x88) = lStack_78;
  local_70 = *(int *)(lVar1 + 0xa0) + lStack_78;
  pcVar4 = *(char **)(lVar1 + 0x10);
  do {
    pcVar4 = (char *)unexpected_ss(&local_90,pcVar4);
    if (pcVar4 == (char *)0x0) {
      if (param_5 != (undefined8 *)0x0) {
        uVar2 = FUN_140398ef0();
        *param_5 = uVar2;
      }
      FUN_1403caac0(lVar1);
      lVar1 = 0;
      goto LAB_1405f0994;
    }
  } while (*pcVar4 != '\0');
  *(longlong *)(lVar1 + 0x90) = lStack_78;
  if (param_5 != (undefined8 *)0x0) {
    FUN_140398ef0();
  }
LAB_1405f0994:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_b8)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_b8);
}

