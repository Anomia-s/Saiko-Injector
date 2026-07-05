/**
 * Function: tls_process_client_hello
 * Address:  140bbdf10
 * Signature: undefined tls_process_client_hello(void)
 * Body size: 1708 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_client_hello(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  void *_Src;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  size_t _Size;
  undefined8 uVar16;
  byte *pbVar17;
  int local_28;
  int iStack_24;
  undefined8 uStack_20;
  ulonglong uVar15;
  
  uStack_20 = 0x140bbdf34;
  piVar8 = (int *)0x0;
  if (((*(int *)(param_1 + 0xb98) == 0) && (*(longlong *)(param_1 + 0x260) != 0)) &&
     (*(longlong *)(param_1 + 0x2e8) != 0)) {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar7 = **(int **)(param_1 + 0x18), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x5dc,"tls_process_client_hello");
      FUN_140ba3290(param_1,0x50,0xc0103,0);
      goto LAB_140bbe586;
    }
    if ((((uint)*(ulonglong *)(param_1 + 0x9a8) & 0x40000100) != 0x100) ||
       ((*(int *)(param_1 + 0x4b0) == 0 && ((*(ulonglong *)(param_1 + 0x9a8) >> 0x12 & 1) == 0)))) {
      FUN_140bf0b00(param_1,1,100);
      return 1;
    }
    *(undefined4 *)(param_1 + 0xb98) = 1;
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  piVar8 = (int *)FUN_140b8da80(0x290,"ssl\\statem\\statem_srvr.c",0x5ea);
  if (piVar8 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_srvr.c",0x5ec,"tls_process_client_hello");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    goto LAB_140bbe586;
  }
  iVar7 = FUN_140baacf0(param_1 + 0xc48);
  *piVar8 = iVar7;
  if (iVar7 == 0) {
LAB_140bbe11a:
    if ((ulonglong)param_2[1] < 2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x61b,"tls_process_client_hello");
      uVar16 = 0xa0;
LAB_140bbe55d:
      uVar12 = 0x32;
      goto LAB_140bbe562;
    }
    bVar3 = *(byte *)*param_2;
    piVar8[1] = (uint)bVar3 << 8;
    piVar8[1] = (uint)CONCAT11(bVar3,*(undefined1 *)(*param_2 + 1));
    *param_2 = *param_2 + 2;
    param_2[1] = param_2[1] + -2;
    puVar6 = (undefined1 *)*param_2;
    uVar10 = param_2[1];
    if (*piVar8 != 0) {
      if (uVar10 < 2) {
LAB_140bbe2e0:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar12 = 0x62c;
      }
      else {
        uVar4 = puVar6[1];
        uVar5 = *puVar6;
        *param_2 = (longlong)(puVar6 + 2);
        param_2[1] = uVar10 - 2;
        if (uVar10 - 2 < 2) goto LAB_140bbe2e0;
        uVar11 = (uint)CONCAT11(puVar6[2],puVar6[3]);
        *param_2 = (longlong)(puVar6 + 4);
        param_2[1] = uVar10 - 4;
        if (uVar10 - 4 < 2) goto LAB_140bbe2e0;
        uVar14 = (uint)CONCAT11(puVar6[4],puVar6[5]);
        uVar15 = (ulonglong)uVar14;
        *param_2 = (longlong)(puVar6 + 6);
        param_2[1] = uVar10 - 6;
        if (0x20 < uVar11) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_srvr.c",0x631,"tls_process_client_hello");
          uVar12 = 0x2f;
          uVar16 = 0x9f;
          goto LAB_140bbe562;
        }
        uVar9 = (ulonglong)CONCAT11(uVar5,uVar4);
        if (uVar9 <= uVar10 - 6) {
          *(ulonglong *)(piVar8 + 0x58) = uVar9;
          *(undefined1 **)(piVar8 + 0x56) = puVar6 + 6;
          *param_2 = *param_2 + uVar9;
          param_2[1] = param_2[1] - uVar9;
          iVar7 = FUN_140bbc350(param_2,piVar8 + 0xc,(ulonglong)uVar11);
          if ((iVar7 != 0) && (uVar15 <= (ulonglong)param_2[1])) {
            _Src = (void *)*param_2;
            lVar13 = param_2[1] - uVar15;
            param_2[1] = lVar13;
            *param_2 = (longlong)_Src + uVar15;
            if (lVar13 == 0) {
              *(ulonglong *)(piVar8 + 10) = (ulonglong)uVar11;
              piVar8[2] = 0;
              piVar8[3] = 0;
              piVar8[4] = 0;
              piVar8[5] = 0;
              if (0x20 < uVar14) {
                uVar14 = 0x20;
              }
              uVar10 = (ulonglong)uVar14;
              piVar8[6] = 0;
              piVar8[7] = 0;
              piVar8[8] = 0;
              piVar8[9] = 0;
              if (uVar15 < uVar10) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar12 = 0x64d;
                goto LAB_140bbe0f7;
              }
              memcpy((void *)((longlong)piVar8 + (0x28 - uVar10)),_Src,uVar10);
              _Size = 1;
              piVar8[0x9c] = 0;
              piVar8[0x9d] = 0;
              pbVar17 = &DAT_141235b42;
              piVar8[0x9e] = 0;
              piVar8[0x9f] = 0;
              goto LAB_140bbe4b7;
            }
          }
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar12 = 0x63b;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",uVar12,"tls_process_client_hello");
      uVar16 = 0xd5;
      goto LAB_140bbe55d;
    }
    iVar7 = FUN_140bbc350(param_2,piVar8 + 2,0x20);
    if (iVar7 == 0) {
LAB_140bbe34b:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar12 = 0x659;
LAB_140bbe406:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",uVar12,"tls_process_client_hello");
      uVar16 = 0x9f;
      goto LAB_140bbe55d;
    }
    if (param_2[1] == 0) goto LAB_140bbe34b;
    uVar10 = param_2[1] - 1;
    uVar15 = (ulonglong)*(byte *)*param_2;
    pbVar17 = (byte *)*param_2 + 1;
    if (uVar10 < uVar15) goto LAB_140bbe34b;
    *param_2 = (longlong)(pbVar17 + uVar15);
    param_2[1] = uVar10 - uVar15;
    if (0x20 < uVar15) {
      piVar8[10] = 0;
      piVar8[0xb] = 0;
      goto LAB_140bbe34b;
    }
    *(ulonglong *)(piVar8 + 10) = uVar15;
    memcpy(piVar8 + 0xc,pbVar17,uVar15);
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
      if (param_2[1] != 0) {
        uVar10 = param_2[1] - 1;
        uVar15 = (ulonglong)*(byte *)*param_2;
        pbVar17 = (byte *)*param_2 + 1;
        if (uVar15 <= uVar10) {
          *param_2 = (longlong)(pbVar17 + uVar15);
          param_2[1] = uVar10 - uVar15;
          *(ulonglong *)(piVar8 + 0x14) = uVar15;
          memcpy(piVar8 + 0x16,pbVar17,uVar15);
          uVar10 = FUN_140b69530(param_1);
          if (((uVar10 >> 0xd & 1) != 0) && (*(longlong *)(piVar8 + 0x14) == 0)) {
            FUN_140b8d990(piVar8,"ssl\\statem\\statem_srvr.c",0x66f);
            return 1;
          }
          goto LAB_140bbe424;
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar12 = 0x65f;
      goto LAB_140bbe406;
    }
LAB_140bbe424:
    iVar7 = FUN_140bbc3b0(param_2,piVar8 + 0x56);
    if (iVar7 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar12 = 0x676;
      goto LAB_140bbe406;
    }
    if (param_2[1] == 0) {
LAB_140bbe52b:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar12 = 0x67b;
      goto LAB_140bbe406;
    }
    uVar10 = param_2[1] - 1;
    _Size = (size_t)*(byte *)*param_2;
    pbVar17 = (byte *)*param_2 + 1;
    if (uVar10 < _Size) goto LAB_140bbe52b;
    piVar1 = piVar8 + 0x9c;
    *param_2 = (longlong)(pbVar17 + _Size);
    param_2[1] = uVar10 - _Size;
    if (param_2[1] == 0) {
      piVar1[0] = 0;
      piVar1[1] = 0;
      piVar8[0x9e] = 0;
      piVar8[0x9f] = 0;
    }
    else {
      iVar7 = FUN_140bbc3b0(param_2,piVar1);
      if ((iVar7 == 0) || (param_2[1] != 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar12 = 0x685;
        goto LAB_140bbe406;
      }
    }
LAB_140bbe4b7:
    *(size_t *)(piVar8 + 0x5a) = _Size;
    memcpy(piVar8 + 0x5c,pbVar17,_Size);
    local_28 = piVar8[0x9c];
    iStack_24 = piVar8[0x9d];
    uStack_20 = *(undefined8 *)(piVar8 + 0x9e);
    iVar7 = FUN_140c31dc0(param_1,&local_28,0x80,piVar8 + 0xa2,piVar8 + 0xa0,1);
    if (iVar7 != 0) {
      *(int **)(param_1 + 0xb50) = piVar8;
      return 2;
    }
  }
  else {
    if (((*(longlong *)(param_1 + 0x260) == 0) || (*(longlong *)(param_1 + 0x2e8) == 0)) &&
       (*(int *)(param_1 + 0x8c8) == 0)) {
      if (param_2[1] != 0) {
        cVar2 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        param_2[1] = param_2[1] + -1;
        if (cVar2 == '\x01') goto LAB_140bbe11a;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar12 = 0x615;
LAB_140bbe0f7:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",uVar12,"tls_process_client_hello");
      uVar12 = 0x50;
      uVar16 = 0xc0103;
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_srvr.c",0x5fb,"tls_process_client_hello");
      uVar12 = 10;
      uVar16 = 0xf4;
    }
LAB_140bbe562:
    FUN_140ba3290(param_1,uVar12,uVar16,0);
  }
  FUN_140b8d990(*(undefined8 *)(piVar8 + 0xa2),"ssl\\statem\\statem_srvr.c",0x6a0);
LAB_140bbe586:
  FUN_140b8d990(piVar8,"ssl\\statem\\statem_srvr.c",0x6a1);
  return 0;
}

