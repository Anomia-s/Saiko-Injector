/**
 * Function: http_invalid_socketn
 * Address:  1405f92e0
 * Signature: undefined http_invalid_socketn(void)
 * Body size: 447 bytes
 */


undefined8 http_invalid_socketn(char *param_1)

{
  int iVar1;
  int len;
  SOCKET s;
  char *buf;
  char *buf_00;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 uVar9;
  char *pcVar10;
  
  iVar1 = *(int *)(param_1 + 0x2910);
  do {
    while( true ) {
      if ((*param_1 == '\0') && (*(int *)(param_1 + 0x2900) == *(int *)(param_1 + 0x2904))) {
        return 0;
      }
      (*DAT_141503418)(*(undefined8 *)(param_1 + 0x10));
      iVar3 = *(int *)(param_1 + 0x2904);
      lVar4 = (longlong)iVar3;
      if (iVar3 != *(int *)(param_1 + 0x2900)) break;
      (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
      if (*param_1 == '\x01') {
        (*DAT_141503450)(0,iVar1 * 1000000);
      }
    }
    uVar8 = iVar3 + 0x100;
    if (-1 < (int)(iVar3 + 1U)) {
      uVar8 = iVar3 + 1U;
    }
    *(uint *)(param_1 + 0x2904) = (iVar3 - (uVar8 & 0xffffff00)) + 1;
    s = *(SOCKET *)(param_1 + lVar4 * 0x28 + 0x100);
    buf = *(char **)(param_1 + lVar4 * 0x28 + 0x108);
    iVar3 = *(int *)(param_1 + lVar4 * 0x28 + 0x110);
    buf_00 = *(char **)(param_1 + lVar4 * 0x28 + 0x118);
    len = *(int *)(param_1 + lVar4 * 0x28 + 0x120);
    (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
    if (s == 0xffffffffffffffff) {
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                    ,0x303,"http: invalid socket\n");
    }
    else {
      iVar2 = send(s,buf,iVar3,0);
      if (iVar2 == iVar3) {
        plVar7 = &DAT_1416fddb8;
        if (-1 < len) {
          iVar3 = send(s,buf_00,len,0);
          plVar7 = &DAT_1416fddb8;
          if (iVar3 != len) {
            piVar5 = _errno();
            uVar6 = FUN_14039e390(*piVar5);
            uVar9 = 0x2f8;
            pcVar10 = "http: failed to write HTTP response body: %s";
            goto LAB_1405f947e;
          }
        }
      }
      else {
        piVar5 = _errno();
        uVar6 = FUN_14039e390(*piVar5);
        uVar9 = 0x2f0;
        pcVar10 = "http: failed to write HTTP response headers: %s";
LAB_1405f947e:
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                      ,uVar9,pcVar10,uVar6);
        plVar7 = &DAT_1416fddc0;
      }
      *plVar7 = *plVar7 + 1;
      closesocket(s);
    }
    (*DAT_1415033b0)(buf_00);
    (*DAT_1415033b0)(buf);
  } while( true );
}

