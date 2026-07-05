/**
 * Function: auto_override
 * Address:  1405f7e20
 * Signature: undefined auto_override(void)
 * Body size: 243 bytes
 */


void auto_override(longlong param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  if (param_2[2] != 0) {
    pcVar2 = "??? | ";
    if (param_2[2] == 0x4000000000000000) {
      pcVar2 = "auto_override | ";
    }
    if (*(char *)(param_1 + 0x454) == '\x01') {
      FUN_1403b79b0(*(undefined8 *)(param_1 + 0x448),&DAT_141338b7a,*(int *)(param_1 + 0x450) * 2,
                    &DAT_1413a2ad6);
      *(undefined1 *)(param_1 + 0x454) = 0;
    }
    FUN_1403b8780(*(undefined8 *)(param_1 + 0x448),pcVar2);
  }
  pcVar2 = (char *)*param_2;
  if (param_2[1] == 0) {
    if (*(char *)(param_1 + 0x454) == '\x01') {
      FUN_1403b79b0(*(undefined8 *)(param_1 + 0x448),&DAT_141338b7a,*(int *)(param_1 + 0x450) * 2,
                    &DAT_1413a2ad6);
      *(undefined1 *)(param_1 + 0x454) = 0;
    }
    FUN_1403b8780(*(undefined8 *)(param_1 + 0x448),pcVar2);
    sVar1 = strlen(pcVar2);
    if (pcVar2[sVar1 - 1] == '\n') {
      *(undefined1 *)(param_1 + 0x454) = 1;
    }
  }
  else {
    FUN_1405f7f20(param_1,"(%s, %s)",pcVar2);
  }
  return;
}

