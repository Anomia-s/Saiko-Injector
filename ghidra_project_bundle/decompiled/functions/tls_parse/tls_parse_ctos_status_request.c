/**
 * Function: tls_parse_ctos_status_request
 * Address:  140cb6210
 * Signature: undefined tls_parse_ctos_status_request(void)
 * Body size: 1088 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_ctos_status_request
          (longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *local_res8;
  undefined1 *local_38;
  ulonglong uStack_30;
  undefined1 *local_28;
  ulonglong uStack_20;
  
  uStack_20 = 0x140cb622e;
  if ((*(int *)(param_1 + 0x508) == 0) && (param_4 == 0)) {
    if (param_2[1] == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_srvr.c",0x15b,"tls_parse_ctos_status_request");
      FUN_140ba3290(param_1,0x32,0x6e,0);
      return 0;
    }
    *(uint *)(param_1 + 0xa20) = (uint)*(byte *)*param_2;
    *param_2 = *param_2 + 1;
    param_2[1] = param_2[1] + -1;
    if (*(int *)(param_1 + 0xa20) == 1) {
      iVar5 = FUN_140bbc3b0(param_2,&local_38);
      if (iVar5 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\extensions_srvr.c",0x168,"tls_parse_ctos_status_request");
        FUN_140ba3290(param_1,0x32,0x6e,0);
        return 0;
      }
      FUN_140b77c60(*(undefined8 *)(param_1 + 0xa38),FUN_140bc8920);
      uVar9 = uStack_30;
      uVar7 = uVar9;
      if (uStack_30 == 0) {
        *(undefined8 *)(param_1 + 0xa38) = 0;
      }
      else {
        lVar6 = FUN_140b77ab0();
        *(longlong *)(param_1 + 0xa38) = lVar6;
        if (lVar6 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_srvr.c",0x174,"tls_parse_ctos_status_request");
          FUN_140ba3290(param_1,0x50,0x8000f,0);
          return 0;
        }
      }
      while( true ) {
        if (uVar9 == 0) {
          local_38 = (undefined1 *)*param_2;
          uStack_30 = param_2[1];
          if (1 < (ulonglong)param_2[1]) {
            uVar7 = param_2[1] - 2;
            uVar3 = *local_38;
            puVar1 = local_38 + 2;
            uVar4 = local_38[1];
            uVar9 = (ulonglong)CONCAT11(uVar3,uVar4);
            if (uVar9 <= uVar7) {
              local_38 = puVar1 + uVar9;
              uStack_30 = uVar7 - uVar9;
              if (uStack_30 == 0) {
                *param_2 = (longlong)local_38;
                param_2[1] = 0;
                if (uVar9 == 0) {
                  return 1;
                }
                local_res8 = puVar1;
                FUN_140b77c60(*(undefined8 *)(param_1 + 0xa40),FUN_140b9f150);
                lVar6 = FUN_140b9f170(0,&local_res8,CONCAT11(uVar3,uVar4));
                *(longlong *)(param_1 + 0xa40) = lVar6;
                if ((lVar6 != 0) && (local_res8 == puVar1 + uVar9)) {
                  return 1;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\extensions_srvr.c",0x1ab,"tls_parse_ctos_status_request");
                FUN_140ba3290(param_1,0x32,0x6e,0);
                return 0;
              }
            }
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_srvr.c",0x19f,"tls_parse_ctos_status_request");
          FUN_140ba3290(param_1,0x32,0x6e,0);
          return 0;
        }
        if (uVar7 < 2) break;
        uVar3 = *local_38;
        puVar1 = local_38 + 2;
        puVar2 = local_38 + 1;
        uVar8 = (ulonglong)CONCAT11(uVar3,*puVar2);
        if (uVar7 - 2 < uVar8) break;
        uVar9 = (uVar7 - 2) - uVar8;
        local_38 = puVar1 + uVar8;
        uStack_30 = uVar9;
        local_28 = local_38;
        uStack_20 = uVar9;
        if (uVar8 == 0) break;
        local_res8 = puVar1;
        lVar6 = FUN_140bc8940(0,&local_res8,CONCAT11(uVar3,*puVar2));
        if (lVar6 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_srvr.c",0x18a,"tls_parse_ctos_status_request");
          FUN_140ba3290(param_1,0x32,0x6e,0);
          return 0;
        }
        if (local_res8 != puVar1 + uVar8) {
          FUN_140bc8920(lVar6);
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_srvr.c",400,"tls_parse_ctos_status_request");
          FUN_140ba3290(param_1,0x32,0x6e,0);
          return 0;
        }
        iVar5 = FUN_140b78340(*(undefined8 *)(param_1 + 0xa38),lVar6);
        uVar7 = uStack_30;
        if (iVar5 == 0) {
          FUN_140bc8920(lVar6);
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_srvr.c",0x197,"tls_parse_ctos_status_request");
          FUN_140ba3290(param_1,0x50,0xc0103,0);
          return 0;
        }
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_srvr.c",0x182,"tls_parse_ctos_status_request");
      FUN_140ba3290(param_1,0x32,0x6e,0);
      return 0;
    }
    *(undefined4 *)(param_1 + 0xa20) = 0xffffffff;
  }
  return 1;
}

