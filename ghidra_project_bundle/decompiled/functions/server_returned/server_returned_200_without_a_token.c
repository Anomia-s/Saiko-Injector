/**
 * Function: server_returned_200_without_a_token
 * Address:  1405b71b0
 * Signature: undefined server_returned_200_without_a_token(void)
 * Body size: 454 bytes
 */


void server_returned_200_without_a_token(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  
  lVar2 = cJSON_GetObjectItem(param_1,"token");
  iVar1 = cJSON_IsString(lVar2);
  if (iVar1 == 0) {
    lVar2 = cJSON_GetObjectItem(param_1,"error");
    iVar1 = cJSON_IsString(lVar2);
    if (iVar1 == 0) {
      pcVar6 = "server returned 200 without a token";
    }
    else {
      pcVar6 = *(char **)(lVar2 + 0x20);
    }
    puVar5 = param_2 + 8;
    sVar3 = strlen(pcVar6);
    if (*(ulonglong *)(param_2 + 0x20) < sVar3) {
      FUN_1400069b0(puVar5,sVar3);
      return;
    }
    if (0xf < *(ulonglong *)(param_2 + 0x20)) {
      puVar5 = *(undefined1 **)(param_2 + 8);
    }
    *(size_t *)(param_2 + 0x18) = sVar3;
    memmove(puVar5,pcVar6,sVar3);
    puVar5[sVar3] = 0;
  }
  else {
    pcVar6 = *(char **)(lVar2 + 0x20);
    puVar5 = param_2 + 0x28;
    sVar3 = strlen(pcVar6);
    if (*(ulonglong *)(param_2 + 0x40) < sVar3) {
      FUN_1400069b0(puVar5,sVar3);
    }
    else {
      if (0xf < *(ulonglong *)(param_2 + 0x40)) {
        puVar5 = *(undefined1 **)(param_2 + 0x28);
      }
      *(size_t *)(param_2 + 0x38) = sVar3;
      memmove(puVar5,pcVar6,sVar3);
      puVar5[sVar3] = 0;
    }
    *param_2 = 1;
    uVar4 = cJSON_GetObjectItem(param_1,"user");
    iVar1 = cJSON_IsObject(uVar4);
    if (iVar1 != 0) {
      lVar2 = cJSON_GetObjectItem(uVar4,"username");
      iVar1 = cJSON_IsString(lVar2);
      if (iVar1 != 0) {
        pcVar6 = *(char **)(lVar2 + 0x20);
        puVar5 = param_2 + 0x68;
        sVar3 = strlen(pcVar6);
        if (*(ulonglong *)(param_2 + 0x80) < sVar3) {
          FUN_1400069b0(puVar5,sVar3);
        }
        else {
          if (0xf < *(ulonglong *)(param_2 + 0x80)) {
            puVar5 = *(undefined1 **)(param_2 + 0x68);
          }
          *(size_t *)(param_2 + 0x78) = sVar3;
          memmove(puVar5,pcVar6,sVar3);
          puVar5[sVar3] = 0;
        }
      }
      lVar2 = cJSON_GetObjectItem(uVar4,"id");
      iVar1 = cJSON_IsNumber(lVar2);
      if (iVar1 != 0) {
        *(longlong *)(param_2 + 0x88) = (longlong)*(double *)(lVar2 + 0x30);
      }
    }
  }
  return;
}

