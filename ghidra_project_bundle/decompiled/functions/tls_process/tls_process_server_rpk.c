/**
 * Function: tls_process_server_rpk
 * Address:  140c39580
 * Signature: undefined tls_process_server_rpk(void)
 * Body size: 1287 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong tls_process_server_rpk(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong local_res8;
  longlong local_res18;
  undefined1 *local_res20;
  undefined1 *local_50;
  ulonglong local_48;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  lVar15 = 0;
  local_res8 = 0;
  if (*(char *)(param_1 + 0xb4a) == '\x02') {
    local_res18 = 0;
    iVar8 = FUN_140bb8db0(param_1,param_2,&local_res18);
    if (iVar8 != 0) {
      if (local_res18 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0x77d,"tls_process_server_rpk");
        FUN_140ba3290(param_1,0x32,0x15c,0);
        return 0;
      }
      FUN_140b7efe0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8));
      lVar15 = 2;
      *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2b8) = local_res18;
    }
    return lVar15;
  }
  if (*(char *)(param_1 + 0xb4a) != '\0') {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x7d8,"tls_process_server_certificate");
    uVar12 = 0x2b;
    uVar13 = 0xf7;
    goto LAB_140c39a2f;
  }
  lVar9 = FUN_140b77ab0();
  *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8) = lVar9;
  if (lVar9 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar13 = 0x7dd;
LAB_140c396b3:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",uVar13,"tls_process_server_certificate");
    uVar12 = 0x50;
    uVar13 = 0x8000f;
    goto LAB_140c39a2f;
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar8 = **(int **)(param_1 + 0x18), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
    if (param_2[1] != 0) {
      cVar1 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
      param_2[1] = param_2[1] + -1;
      if (cVar1 == '\0') goto LAB_140c39720;
    }
LAB_140c39a07:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x7e6,"tls_process_server_certificate");
    uVar13 = 0x9f;
  }
  else {
LAB_140c39720:
    if ((ulonglong)param_2[1] < 3) goto LAB_140c39a07;
    puVar6 = (undefined1 *)*param_2;
    uVar14 = param_2[1] - 3;
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    *param_2 = (longlong)(puVar6 + 3);
    param_2[1] = uVar14;
    if ((uVar14 != CONCAT21(CONCAT11(uVar2,uVar3),uVar4)) || (uVar14 == 0)) goto LAB_140c39a07;
    while (2 < uVar14) {
      puVar7 = (undefined1 *)*param_2;
      uVar14 = uVar14 - 3;
      puVar6 = puVar7 + 3;
      uVar10 = (uint)CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]);
      *param_2 = (longlong)puVar6;
      uVar11 = (ulonglong)uVar10;
      param_2[1] = uVar14;
      if (uVar14 < uVar11) break;
      *param_2 = (longlong)(puVar6 + uVar10);
      param_2[1] = uVar14 - uVar11;
      local_res20 = puVar6;
      local_res8 = FUN_140b76440(*puVar5,puVar5[0x8c]);
      if (local_res8 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0x7f3,"tls_process_server_certificate");
        uVar13 = 0x8000d;
        goto LAB_140c39a2a;
      }
      lVar9 = FUN_140b763f0(&local_res8,&local_res20,uVar11);
      if (lVar9 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0x7f8,"tls_process_server_certificate");
        uVar12 = 0x2a;
        uVar13 = 0x8000d;
        goto LAB_140c39a2f;
      }
      if (local_res20 != puVar6 + uVar11) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar13 = 0x7fd;
        goto LAB_140c39991;
      }
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
          (iVar8 = **(int **)(param_1 + 0x18), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
        puVar6 = (undefined1 *)*param_2;
        local_res18 = 0;
        if (1 < (ulonglong)param_2[1]) {
          uVar14 = param_2[1] - 2;
          uVar11 = (ulonglong)CONCAT11(*puVar6,puVar6[1]);
          if (uVar11 <= uVar14) {
            *param_2 = (longlong)(puVar6 + 2 + uVar11);
            param_2[1] = uVar14 - uVar11;
            local_50 = puVar6 + 2;
            local_48 = uVar11;
            iVar8 = FUN_140c31dc0(param_1,&local_50,0x1000,&local_res18,0,lVar15 == 0);
            if ((iVar8 != 0) &&
               (iVar8 = FUN_140c32380(param_1,0x1000,local_res18,local_res8,lVar15,param_2[1] == 0),
               iVar8 != 0)) {
              FUN_140b8d990(local_res18,"ssl\\statem\\statem_clnt.c",0x813);
              goto LAB_140c398fc;
            }
            FUN_140b8d990(local_res18,"ssl\\statem\\statem_clnt.c",0x80f);
            goto LAB_140c39a3a;
          }
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0x806,"tls_process_server_certificate");
        uVar13 = 0x10f;
        goto LAB_140c39a2a;
      }
LAB_140c398fc:
      iVar8 = FUN_140b78340(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8),local_res8);
      if (iVar8 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar13 = 0x817;
        goto LAB_140c396b3;
      }
      uVar14 = param_2[1];
      lVar15 = lVar15 + 1;
      local_res8 = 0;
      if (uVar14 == 0) {
        return 2;
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar13 = 0x7ec;
LAB_140c39991:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",uVar13,"tls_process_server_certificate");
    uVar13 = 0x87;
  }
LAB_140c39a2a:
  uVar12 = 0x32;
LAB_140c39a2f:
  FUN_140ba3290(param_1,uVar12,uVar13,0);
LAB_140c39a3a:
  FUN_140b763d0(local_res8);
  FUN_140b9f7a0(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8));
  *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x2c8) = 0;
  return 0;
}

