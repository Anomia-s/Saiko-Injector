/**
 * Function: tls_process_certificate_request
 * Address:  140c37930
 * Signature: undefined tls_process_certificate_request(void)
 * Body size: 1199 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char tls_process_certificate_request(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  size_t _Size;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 local_res8;
  byte *local_38;
  ulonglong uStack_30;
  undefined1 local_28 [16];
  
  _Size = *(longlong *)(param_1 + 0x118) << 2;
  if (*(void **)(param_1 + 0x408) == (void *)0x0) {
    uVar5 = FUN_140b8da80(_Size,"ssl\\statem\\statem_clnt.c",0xa2b);
    *(undefined8 *)(param_1 + 0x408) = uVar5;
  }
  else {
    memset(*(void **)(param_1 + 0x408),0,_Size);
  }
  if (*(longlong *)(param_1 + 0x408) == 0) {
    return '\0';
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    local_res8 = 0;
    if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
      return '\x01';
    }
    FUN_140b8d990(*(undefined8 *)(param_1 + 0x348),"ssl\\statem\\statem_clnt.c",0xa3f);
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    FUN_140b8d990(*(undefined8 *)(param_1 + 0xba8),"ssl\\statem\\statem_clnt.c",0xa42);
    *(undefined8 *)(param_1 + 0xba8) = 0;
    *(undefined8 *)(param_1 + 0xbb0) = 0;
    pbVar1 = (byte *)*param_2;
    uVar4 = param_2[1];
    if (param_2[1] == 0) {
LAB_140c37ba0:
      uStack_30 = uVar4;
      local_38 = pbVar1;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0xa48;
      goto LAB_140c37d9b;
    }
    uVar7 = param_2[1] - 1;
    uStack_30 = (ulonglong)*pbVar1;
    local_38 = pbVar1 + 1;
    if (uVar7 < uStack_30) goto LAB_140c37ba0;
    *param_2 = (longlong)(local_38 + uStack_30);
    param_2[1] = uVar7 - uStack_30;
    iVar2 = d_aplatformplatformopenssl_srcincludeinternal(&local_38,param_1 + 0xba8);
    pbVar1 = local_38;
    uVar4 = uStack_30;
    if (iVar2 == 0) goto LAB_140c37ba0;
    iVar2 = FUN_140bbc3b0(param_2,local_28);
    if (iVar2 != 0) {
      iVar2 = FUN_140c31dc0(param_1,local_28,0x4000,&local_res8,0,1);
      if ((iVar2 == 0) || (iVar2 = FUN_140c32380(param_1,0x4000,local_res8,0,0,1), iVar2 == 0)) {
        FUN_140b8d990(local_res8,"ssl\\statem\\statem_clnt.c",0xa56);
        return '\0';
      }
      FUN_140b8d990(local_res8,"ssl\\statem\\statem_clnt.c",0xa59);
      iVar2 = FUN_140bb2400(param_1);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0xa5b,"tls_process_certificate_request");
        uVar5 = 0x50;
        uVar6 = 0x10f;
        goto LAB_140c37db9;
      }
      goto LAB_140c37d3c;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0xa4d,"tls_process_certificate_request");
    uVar6 = 0x10f;
  }
  else {
    local_38 = (byte *)*param_2;
    uStack_30 = param_2[1];
    if (param_2[1] == 0) {
LAB_140c37d91:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar5 = 0xa63;
    }
    else {
      uVar4 = param_2[1] - 1;
      uVar7 = (ulonglong)*local_38;
      pbVar1 = local_38 + 1;
      if (uVar4 < uVar7) goto LAB_140c37d91;
      uStack_30 = uVar4 - uVar7;
      local_38 = pbVar1 + uVar7;
      *param_2 = (longlong)local_38;
      param_2[1] = uStack_30;
      FUN_140b8d990(*(undefined8 *)(param_1 + 0x348),
                    "D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h",0x1c6);
      *(undefined8 *)(param_1 + 0x348) = 0;
      *(undefined8 *)(param_1 + 0x350) = 0;
      if (uVar7 != 0) {
        lVar3 = FUN_140b8c7c0(pbVar1,uVar7,
                              "D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h",
                              0x1cf);
        *(longlong *)(param_1 + 0x348) = lVar3;
        if (lVar3 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_clnt.c",0xa68,"tls_process_certificate_request");
          uVar5 = 0x50;
          uVar6 = 0xc0103;
          goto LAB_140c37db9;
        }
        *(ulonglong *)(param_1 + 0x350) = uVar7;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) == 0) {
LAB_140c37d29:
        iVar2 = FUN_140bb7030(param_1,param_2);
        if (iVar2 == 0) {
          return '\0';
        }
LAB_140c37d3c:
        if (param_2[1] == 0) {
          *(undefined4 *)(param_1 + 0x340) = 1;
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
              (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
            return (*(int *)(param_1 + 0xba0) != 4) + '\x02';
          }
          return '\x02';
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0xa8b;
      }
      else {
        iVar2 = FUN_140bbc3b0(param_2,local_28);
        if (iVar2 != 0) {
          iVar2 = FUN_140bb2380(param_1,local_28,0);
          if (iVar2 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_clnt.c",0xa7a,"tls_process_certificate_request");
            uVar5 = 0x50;
            uVar6 = 0x168;
            goto LAB_140c37db9;
          }
          iVar2 = FUN_140bb2400(param_1);
          if (iVar2 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\statem\\statem_clnt.c",0xa7e,"tls_process_certificate_request");
            uVar5 = 0x50;
            uVar6 = 0x80014;
            goto LAB_140c37db9;
          }
          goto LAB_140c37d29;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0xa70;
      }
    }
LAB_140c37d9b:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",uVar5,"tls_process_certificate_request");
    uVar6 = 0x9f;
  }
  uVar5 = 0x32;
LAB_140c37db9:
  FUN_140ba3290(param_1,uVar5,uVar6,0);
  return '\0';
}

