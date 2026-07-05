/**
 * Function: http_failed_to_send_reply_to_s_s_s
 * Address:  1405fa190
 * Signature: undefined http_failed_to_send_reply_to_s_s_s(void)
 * Body size: 840 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void http_failed_to_send_reply_to_s_s_s(longlong param_1,int *param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  SOCKET *pSVar8;
  uint uVar9;
  undefined1 auStack_4b8 [32];
  longlong local_498;
  longlong local_490;
  undefined8 local_488;
  SOCKET local_478;
  int *local_470;
  longlong local_468;
  Decoration<__int64> local_460 [131];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_4b8;
  pSVar8 = (SOCKET *)0x0;
  memset(local_460,0,0x418);
  local_470 = param_2 + 2;
  iVar4 = param_2[4];
  local_478 = FUN_1403b89b0();
  if (param_3 == '\0') {
    pcVar5 = *(char **)(param_1 + 8);
    iVar3 = *(int *)(pcVar5 + 0x2900);
    uVar9 = iVar3 + 0x100;
    if (-1 < (int)(iVar3 + 1U)) {
      uVar9 = iVar3 + 1U;
    }
    iVar7 = (iVar3 - (uVar9 & 0xffffff00)) + 1;
    if ((iVar7 == *(int *)(pcVar5 + 0x2904)) || (*pcVar5 != '\x01')) {
      *param_2 = 0x1f7;
      _DAT_1416fddc8 = _DAT_1416fddc8 + 1;
      pSVar8 = (SOCKET *)0x0;
    }
    else {
      pSVar8 = (SOCKET *)(pcVar5 + (longlong)iVar3 * 0x28 + 0x100);
      *(int *)(pcVar5 + 0x2900) = iVar7;
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 0x108);
  lVar2 = *(longlong *)(param_2 + 0x10a);
  iVar3 = *param_2;
  local_468 = param_1;
  FUN_1403b7a10(local_460,"HTTP/1.1 ",9);
  FUN_1403b7b70(local_460,(longlong)iVar3);
  FUN_1403b7ad0(local_460,0x20);
  FUN_1403b8780(local_460,uVar1);
  FUN_1403b7a10(local_460,"\r\n",2);
  if (lVar2 != 0) {
    FUN_1403b7a10(local_460,"Content-Type: ",0xe);
    FUN_1403b8780(local_460,lVar2);
    FUN_1403b7a10(local_460,"\r\n",2);
  }
  if (-1 < iVar4) {
    FUN_1403b7a10(local_460,"Content-Length: ",0x10);
    FUN_1403b79b0(local_460,"%d",iVar4);
    FUN_1403b7a10(local_460,"\r\n",2);
  }
  FUN_1403b7a10(local_460,"Access-Control-Allow-Origin: *\r\n",0x20);
  if (param_3 != '\0') {
    FUN_1403b7a10(local_460,"Access-Control-Allow-Private-Network: true\r\n",0x2c);
    FUN_1403b7a10(local_460,"Access-Control-Allow-Methods: GET, PUT, DELETE, OPTIONS\r\n",0x39);
    FUN_1403b7a10(local_460,"Access-Control-Max-Age: 600\r\n",0x1d);
  }
  FUN_1403b8850(local_460,param_2 + 0x10c);
  FUN_1403b7a10(local_460,"\r\n",2);
  iVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3(local_460);
  pcVar5 = (char *)FUN_1403b89b0(local_460);
  lVar2 = local_468;
  if (pSVar8 == (SOCKET *)0x0) {
    iVar4 = send(*(SOCKET *)(local_468 + 0xa0),pcVar5,iVar3,0);
    if (iVar4 != iVar3) {
      piVar6 = _errno();
      local_488 = FUN_14039e390(*piVar6);
      local_490 = lVar2 + 0x90;
      local_498 = lVar2 + 0x10;
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                    ,0x354,"http: failed to send reply to \'%s:%s\': %s");
      DAT_1416fddc0 = DAT_1416fddc0 + 1;
    }
    (*DAT_1415033b0)(local_478);
    (*DAT_1415033b0)(pcVar5);
    closesocket(*(SOCKET *)(lVar2 + 0xa0));
  }
  else {
    *pSVar8 = *(SOCKET *)(local_468 + 0xa0);
    pSVar8[1] = (SOCKET)pcVar5;
    *(int *)(pSVar8 + 2) = iVar3;
    pSVar8[3] = local_478;
    *(int *)(pSVar8 + 4) = iVar4;
    local_470[0] = 0;
    local_470[1] = 0;
  }
  *(undefined8 *)(lVar2 + 0xa0) = 0xffffffffffffffff;
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_4b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_4b8);
}

