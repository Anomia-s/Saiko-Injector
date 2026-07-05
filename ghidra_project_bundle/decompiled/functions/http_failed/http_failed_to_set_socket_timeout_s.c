/**
 * Function: http_failed_to_set_socket_timeout_s
 * Address:  1405f8620
 * Signature: undefined http_failed_to_set_socket_timeout_s(void)
 * Body size: 3230 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 http_failed_to_set_socket_timeout_s(char *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  u_short uVar5;
  u_long uVar6;
  int iVar7;
  int iVar8;
  SOCKET SVar9;
  undefined4 *puVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *pcVar17;
  code *pcVar18;
  double dVar19;
  undefined1 auStackY_1118 [32];
  SOCKET local_10d8;
  undefined8 local_10c0;
  longlong local_10b8;
  undefined4 local_10b0;
  sockaddr local_10a8;
  sockaddr local_1098 [8];
  char local_1018 [32];
  char local_ff8 [256];
  WSADATA local_ef8 [2];
  undefined *local_ad8;
  longlong *local_ad0;
  undefined1 local_ac8 [1048];
  char local_6b0 [8];
  undefined1 local_6a8 [1048];
  int local_290;
  undefined4 local_284;
  char local_4f;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStackY_1118;
  local_10a8.sa_data[6] = '\0';
  local_10a8.sa_data[7] = '\0';
  local_10a8.sa_data[8] = '\0';
  local_10a8.sa_data[9] = '\0';
  local_10a8.sa_data[10] = '\0';
  local_10a8.sa_data[0xb] = '\0';
  local_10a8.sa_data[0xc] = '\0';
  local_10a8.sa_data[0xd] = '\0';
  local_10a8.sa_family = 2;
  local_10a8.sa_data[0] = '\0';
  local_10a8.sa_data[1] = '\0';
  local_10a8.sa_data[2] = '\0';
  local_10a8.sa_data[3] = '\0';
  local_10a8.sa_data[4] = '\0';
  local_10a8.sa_data[5] = '\0';
  uVar5 = *(u_short *)(param_1 + 0xc2);
  iVar8 = 0;
  pcVar18 = _errno_exref;
  do {
    uVar5 = htons(uVar5);
    local_10a8.sa_data[0] = (char)uVar5;
    local_10a8.sa_data[1] = (char)(uVar5 >> 8);
    if (*(longlong *)(param_1 + 200) == 0) {
      uVar6 = htonl(0);
      local_10a8.sa_data[2] = (char)uVar6;
      local_10a8.sa_data[3] = (char)(uVar6 >> 8);
      local_10a8.sa_data[4] = (char)(uVar6 >> 0x10);
      local_10a8.sa_data[5] = (char)(uVar6 >> 0x18);
    }
    else {
      inet_pton(2,*(longlong *)(param_1 + 200),local_10a8.sa_data + 2);
    }
    SVar9 = socket(2,1,6);
    if ((SVar9 == 0xffffffffffffffff) && (iVar7 = WSAGetLastError(), iVar7 == 0x276d)) {
      memset(local_ef8,0,0x198);
      iVar7 = WSAStartup(0x202,local_ef8);
      if (iVar7 != 0) {
        GetLastError();
        pcVar17 = "http: WSAStartup failed with GetLastError = %d\n";
        uVar15 = 0xfffffffe;
        uVar16 = 0x3ee;
        goto LAB_1405f926b;
      }
    }
    else {
      closesocket(SVar9);
    }
    iVar7 = getnameinfo(&local_10a8,0x10,local_ff8,0x100);
    if (iVar7 != 0) {
      strcpy_s(local_ff8,0x7fffffff,"unknown");
      strcpy_s(local_1018,0x7fffffff,"unknown");
    }
    (*DAT_141503418)(*(undefined8 *)(param_1 + 0x10));
    local_10d8 = 0xffffffffffffffff;
    if (*param_1 == '\x01') {
      local_10d8 = socket((uint)local_10a8.sa_family,1,6);
      if (local_10d8 != 0xffffffffffffffff) {
        local_6b0[0] = '\x01';
        local_6b0[1] = '\0';
        local_6b0[2] = '\0';
        local_6b0[3] = '\0';
        iVar7 = setsockopt(local_10d8,0xffff,4,local_6b0,4);
        if (iVar7 != 0) {
          puVar10 = (undefined4 *)(*pcVar18)();
          FUN_14039e390(*puVar10);
          FUN_140399630(0xfffffffe,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                        ,0x417,"http: failed to setsockopt: %s");
        }
        if (local_10a8.sa_family == 0x17) {
          local_ef8[0].wVersion = 0;
          local_ef8[0].wHighVersion = 0;
          iVar7 = setsockopt(local_10d8,0x29,0x1b,(char *)local_ef8,4);
          if (iVar7 != 0) {
            puVar10 = (undefined4 *)(*pcVar18)();
            FUN_14039e390(*puVar10);
            FUN_140399630(0xfffffffe,
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                          ,0x420,"http: failed to setsockopt: %s");
          }
        }
        iVar7 = bind(local_10d8,&local_10a8,0x10);
        if (iVar7 == 0) {
          local_ef8[0].wVersion = 1000;
          local_ef8[0].wHighVersion = 0;
          iVar7 = setsockopt(local_10d8,0xffff,0x1006,(char *)local_ef8,4);
          if (iVar7 != 0) {
            puVar10 = (undefined4 *)(*pcVar18)();
            FUN_14039e390(*puVar10);
            FUN_140399630(0xfffffffe,
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                          ,0x72,"http: failed to set socket timeout: %s");
          }
          *(SOCKET *)(param_1 + 8) = local_10d8;
          iVar7 = listen(local_10d8,0x7fffffff);
          if (iVar7 != 0) {
            puVar10 = (undefined4 *)(*pcVar18)();
            FUN_14039e390(*puVar10);
            FUN_140399630(0xfffffffe,
                          "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                          ,0x43a,"http: could not listen for SOMAXCONN (%d) connections: %s");
          }
          FUN_140399630(0,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                        ,0x43e,"http: listening for incoming connections on \'%s:%s\'");
          goto LAB_1405f8a30;
        }
        piVar11 = (int *)(*pcVar18)();
        bVar2 = *piVar11 != 100;
        if (*piVar11 == 100) {
          uVar15 = 0xfffffffe;
          uVar16 = 0x429;
          pcVar17 = "http: address \'%s:%s\' in use, retrying with port %u";
        }
        else {
          puVar10 = (undefined4 *)(*pcVar18)();
          FUN_14039e390(*puVar10);
          uVar15 = 0xfffffffd;
          uVar16 = 0x42c;
          pcVar17 = "http: failed to bind to \'%s:%s\': %s";
        }
        FUN_140399630(uVar15,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                      ,uVar16,pcVar17);
        (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
        (*DAT_141503418)(*(undefined8 *)(param_1 + 0x10));
        if (local_10d8 == 0xffffffffffffffff) goto LAB_1405f9195;
        goto LAB_1405f917a;
      }
      puVar10 = (undefined4 *)(*pcVar18)();
      FUN_14039e390(*puVar10);
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                    ,0x40e,"http: unable to create new connection socket: %s");
      (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
      bVar2 = true;
      (*DAT_141503418)(*(undefined8 *)(param_1 + 0x10));
    }
    else {
LAB_1405f8a30:
      (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
      bVar2 = true;
      if (*param_1 == '\x01') {
        do {
          local_ef8[0].wVersion = 0x80;
          local_ef8[0].wHighVersion = 0;
          SVar9 = accept(*(SOCKET *)(param_1 + 8),local_1098,(int *)local_ef8);
          uVar3 = local_ef8[0]._0_4_;
          if (SVar9 != 0xffffffffffffffff) {
            local_ef8[0].wVersion = 100;
            local_ef8[0].wHighVersion = 0;
            iVar7 = setsockopt(SVar9,0xffff,0x1006,(char *)local_ef8,4);
            if (iVar7 != 0) {
              puVar10 = (undefined4 *)(*pcVar18)();
              FUN_14039e390(*puVar10);
              FUN_140399630(0xfffffffe,
                            "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                            ,0x72,"http: failed to set socket timeout: %s");
            }
            local_ef8[0].wVersion = 1;
            local_ef8[0].wHighVersion = 0;
            iVar7 = setsockopt(SVar9,0xffff,8,(char *)local_ef8,4);
            if (iVar7 != 0) {
              puVar10 = (undefined4 *)(*pcVar18)();
              FUN_14039e390(*puVar10);
              FUN_140399630(0xfffffffe,
                            "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                            ,0x7d,"http: failed to set socket KEEPALIVE: %s");
            }
            (*DAT_141503418)(*(undefined8 *)(param_1 + 0x10));
            plVar12 = (longlong *)FUN_1403b5060(param_1 + 0x40,0xb8);
            lVar13 = FUN_1403b5130(param_1 + 0x40);
            *plVar12 = lVar13;
            plVar12[1] = (longlong)param_1;
            plVar12[0x14] = SVar9;
            (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
            iVar7 = getnameinfo(local_1098,uVar3,plVar12 + 2,0x80);
            if (iVar7 != 0) {
              strcpy_s((char *)(plVar12 + 2),0x7fffffff,"unknown");
              strcpy_s((char *)(plVar12 + 0x12),0x7fffffff,"unknown");
            }
            pcVar17 = (char *)(*DAT_141503398)(0x10000);
            memset(local_6b0,0,0x668);
            (*DAT_141503450)(0,10000000);
            iVar7 = recv(SVar9,pcVar17,0x10000,0);
            if (iVar7 < 1) {
              (*DAT_141503450)(0,10000000);
              if (iVar7 == -1) {
                iVar7 = recv(SVar9,pcVar17,0x10000,0);
                if (0 < iVar7) goto LAB_1405f8c78;
                (*DAT_141503450)(0,10000000);
                if (iVar7 == -1) {
                  iVar7 = recv(SVar9,pcVar17,0x10000,0);
                  if (0 < iVar7) goto LAB_1405f8c78;
                  (*DAT_141503450)(0,10000000);
                  if (iVar7 == -1) {
                    iVar7 = recv(SVar9,pcVar17,0x10000,0);
                    if (0 < iVar7) goto LAB_1405f8c78;
                    (*DAT_141503450)(0,10000000);
                    if (iVar7 == -1) {
                      iVar7 = recv(SVar9,pcVar17,0x10000,0);
                      if (0 < iVar7) goto LAB_1405f8c78;
                      (*DAT_141503450)(0,10000000);
                      if (iVar7 == -1) {
                        iVar7 = recv(SVar9,pcVar17,0x10000,0);
                        if (0 < iVar7) goto LAB_1405f8c78;
                        (*DAT_141503450)(0,10000000);
                        if (iVar7 == -1) {
                          iVar7 = recv(SVar9,pcVar17,0x10000,0);
                          if (0 < iVar7) goto LAB_1405f8c78;
                          (*DAT_141503450)(0,10000000);
                          if (iVar7 == -1) {
                            iVar7 = recv(SVar9,pcVar17,0x10000,0);
                            if (0 < iVar7) goto LAB_1405f8c78;
                            (*DAT_141503450)(0,10000000);
                            if (iVar7 == -1) {
                              iVar7 = recv(SVar9,pcVar17,0x10000,0);
                              if (0 < iVar7) goto LAB_1405f8c78;
                              (*DAT_141503450)(0,10000000);
                              if (iVar7 == -1) {
                                iVar7 = recv(SVar9,pcVar17,0x10000,0);
                                if (0 < iVar7) goto LAB_1405f8c78;
                                (*DAT_141503450)(0,10000000);
                                if (iVar7 == -1) {
                                  closesocket(SVar9);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_1405f8c78:
              if (*plVar12 == lVar13) {
                cVar4 = FUN_1405f98b0(local_6b0,pcVar17,iVar7);
                if (cVar4 == '\0') {
                  _DAT_1416fdd90 = _DAT_1416fdd90 + 1;
                }
                else if (local_290 == 4) {
                  memset(&local_ef8[0].lpVendorInfo,0,0x418);
                  local_ef8[0].wVersion = 200;
                  local_ef8[0].wHighVersion = 0;
                  memset(&local_ad0,0,0x420);
                  local_ad8 = &DAT_141368eba;
                  http_failed_to_send_reply_to_s_s_s(plVar12,local_ef8,1);
                  _DAT_1416fddb0 = _DAT_1416fddb0 + 1;
                }
                else {
                  lVar1 = plVar12[1];
                  (*DAT_141503418)(*(undefined8 *)(lVar1 + 0x10));
                  if ((*plVar12 == lVar13) && (local_4f == '\0')) {
                    lVar13 = FUN_1405f9d80(local_ef8,local_6b0);
                    if (lVar13 == 0) goto LAB_1405f8f65;
                    local_ad0 = plVar12;
                    if (local_290 != 0) {
LAB_1405f8f07:
                      puVar14 = (undefined8 *)FUN_1403b5060(lVar1 + 0x80,0x448);
                      memcpy(puVar14,local_ef8,0x448);
                      uVar15 = FUN_1403b5130(lVar1 + 0x80);
                      *puVar14 = uVar15;
                      puVar14[0x86] = *plVar12;
                      _DAT_1416fdd88 = _DAT_1416fdd88 + 1;
                      goto LAB_1405f8f65;
                    }
                    local_10b0 = local_284;
                    local_10c0 = 0;
                    local_10b8 = lVar13;
                    puVar14 = (undefined8 *)FUN_1403d1500(lVar1 + 0x2918,0x10,&local_10b8,0x18);
                    if ((puVar14 == (undefined8 *)0x0) ||
                       (dVar19 = (double)FUN_1403d24d0(&local_10c0),
                       *(double *)(lVar1 + 0x30) <= dVar19 - (double)puVar14[2]))
                    goto LAB_1405f8f07;
                    (*DAT_1415033b0)(lVar13);
                    memset(&local_ef8[0].lpVendorInfo,0,0x418);
                    local_ef8[0]._0_4_ = *(undefined4 *)((longlong)puVar14 + 0xc);
                    local_ad0 = (longlong *)0x1413400a9;
                    memset(local_ac8,0,0x418);
                    local_ad8 = &DAT_141368eba;
                    FUN_1403b7a10(&local_ef8[0].lpVendorInfo,*puVar14,*(undefined4 *)(puVar14 + 1));
                    http_failed_to_send_reply_to_s_s_s(plVar12,local_ef8,0);
                    lVar13 = *plVar12;
                    if (plVar12[0x14] != 0xffffffffffffffff) {
                      closesocket(plVar12[0x14]);
                      plVar12[0x14] = -1;
                    }
                    FUN_1403b5480(plVar12[1] + 0x40,0xb8,lVar13);
                    uVar15 = *(undefined8 *)(param_1 + 0x10);
                  }
                  else {
                    FUN_1403b8960(local_6a8);
LAB_1405f8f65:
                    uVar15 = *(undefined8 *)(lVar1 + 0x10);
                  }
                  (*DAT_141503420)(uVar15);
                }
                (*DAT_141503450)(0,10000000);
                if (iVar7 == 0x10000) {
                  FUN_140399630(0xfffffffe,
                                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                                ,0x3a8,"request exceeded receive buffer size (%d)");
                }
              }
            }
            (*DAT_1415033b0)(pcVar17);
            FUN_1403b8960(local_6a8);
            pcVar18 = _errno_exref;
          }
        } while (*param_1 != '\0');
      }
      (*DAT_141503418)(*(undefined8 *)(param_1 + 0x10));
      if (local_10d8 != 0xffffffffffffffff) {
LAB_1405f917a:
        piVar11 = (int *)(*pcVar18)();
        if (*piVar11 != 9) {
          closesocket(local_10d8);
          param_1[8] = -1;
          param_1[9] = -1;
          param_1[10] = -1;
          param_1[0xb] = -1;
          param_1[0xc] = -1;
          param_1[0xd] = -1;
          param_1[0xe] = -1;
          param_1[0xf] = -1;
        }
      }
    }
LAB_1405f9195:
    (*DAT_141503420)(*(undefined8 *)(param_1 + 0x10));
    FUN_140399630(0,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                  ,0x461,"http: no longer accepting connections on \'%s:%s\'");
    if (bVar2) goto LAB_1405f9270;
    uVar5 = *(short *)(param_1 + 0xc2) + 1;
    *(u_short *)(param_1 + 0xc2) = uVar5;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 10);
  pcVar17 = "http: failed to connect (retried 10 times)";
  uVar15 = 0xfffffffd;
  uVar16 = 0x47f;
LAB_1405f926b:
  FUN_140399630(uVar15,
                "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/http/http.c"
                ,uVar16,pcVar17);
LAB_1405f9270:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStackY_1118)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStackY_1118);
}

