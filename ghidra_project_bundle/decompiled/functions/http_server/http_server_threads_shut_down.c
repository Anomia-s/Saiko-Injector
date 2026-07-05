/**
 * Function: http_server_threads_shut_down
 * Address:  1405f8200
 * Signature: undefined http_server_threads_shut_down(void)
 * Body size: 344 bytes
 */


void http_server_threads_shut_down(undefined1 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  (*DAT_141503418)(*(undefined8 *)(param_1 + 0x10));
  *param_1 = 0;
  if (*(SOCKET *)(param_1 + 8) != 0xffffffffffffffff) {
    closesocket(*(SOCKET *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  }
  (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
  (*DAT_1415033c8)(*(undefined8 *)(param_1 + 0x18));
  (*DAT_1415033c8)(*(undefined8 *)(param_1 + 0x2908));
  FUN_140399630(0,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                ,0x598,"http: server threads shut down");
  iVar2 = FUN_1403b5840(param_1 + 0x80);
  if (1 < iVar2) {
    uVar4 = iVar2 + 1;
    do {
      puVar3 = (undefined8 *)FUN_1403b56f0(param_1 + 0x80,0x448,uVar4 - 2);
      (*DAT_1415033b0)(puVar3[0x87]);
      FUN_1403b5480(*(longlong *)(puVar3[0x85] + 8) + 0x80,0x448,*puVar3);
      uVar4 = uVar4 - 1;
    } while (2 < uVar4);
  }
  iVar2 = FUN_1403b5840(param_1 + 0x40);
  if (1 < iVar2) {
    uVar4 = iVar2 + 1;
    do {
      puVar3 = (undefined8 *)FUN_1403b56f0(param_1 + 0x40,0xb8,uVar4 - 2);
      uVar1 = *puVar3;
      if (puVar3[0x14] != 0xffffffffffffffff) {
        closesocket(puVar3[0x14]);
        puVar3[0x14] = 0xffffffffffffffff;
      }
      FUN_1403b5480(puVar3[1] + 0x40,0xb8,uVar1);
      uVar4 = uVar4 - 1;
    } while (2 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

