/**
 * Function: ssl_ctx_use_serverinfo_file
 * Address:  140b79a30
 * Signature: undefined ssl_ctx_use_serverinfo_file(void)
 * Body size: 1022 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl_ctx_use_serverinfo_file(longlong param_1,longlong param_2)

{
  char *_Str1;
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  size_t sVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res18 [2];
  void *local_res20;
  char *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  
  local_40 = 0x140b79a52;
  uVar6 = 0;
  local_48 = 0;
  local_res20 = (void *)0x0;
  lVar8 = 0;
  local_res18[0] = 0;
  local_58 = (char *)0x0;
  local_50 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\ssl_rsa.c",0x36c,"SSL_CTX_use_serverinfo_file");
    uVar3 = 0xc0102;
  }
  else {
    uVar3 = FUN_140bf2830();
    lVar8 = FUN_140b73040(uVar3);
    if (lVar8 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\ssl_rsa.c",0x372,"SSL_CTX_use_serverinfo_file");
      uVar3 = 0x80007;
    }
    else {
      iVar1 = FUN_140b74190(lVar8,0x6c,3,param_2);
      if (iVar1 < 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\ssl_rsa.c",0x376,"SSL_CTX_use_serverinfo_file");
        uVar3 = 0x80002;
      }
      else {
        local_40 = 0;
        iVar1 = FUN_140bf3d20(lVar8,&local_58,&local_50,&local_res20,local_res18);
        uVar11 = uVar6;
        if (iVar1 != 0) {
          do {
            _Str1 = local_58;
            sVar4 = strlen(local_58);
            if ((uint)sVar4 < 0xf) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar3 = 0x38c;
LAB_140b79d3b:
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\ssl_rsa.c",uVar3,"SSL_CTX_use_serverinfo_file");
              uVar3 = 0x188;
              goto LAB_140b79da7;
            }
            iVar1 = strncmp(_Str1,"SERVERINFO FOR ",0xf);
            if (iVar1 != 0) {
              if ((uint)sVar4 < 0x11) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar3 = 0x393;
                goto LAB_140b79d3b;
              }
              iVar1 = strncmp(local_58,"SERVERINFOV2 FOR ",0x11);
              if (iVar1 == 0) {
                iVar1 = 2;
                if ((7 < local_res18[0]) &&
                   ((uint)*(byte *)((longlong)local_res20 + 6) * 0x100 +
                    (uint)*(byte *)((longlong)local_res20 + 7) == local_res18[0] + -8))
                goto LAB_140b79c02;
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar3 = 0x3ac;
LAB_140b79b91:
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\ssl_rsa.c",uVar3,"SSL_CTX_use_serverinfo_file");
                uVar3 = 0x186;
              }
              else {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\ssl_rsa.c",0x397,"SSL_CTX_use_serverinfo_file");
                uVar3 = 0x187;
              }
              goto LAB_140b79da7;
            }
            iVar1 = 1;
            if ((local_res18[0] < 4) ||
               ((uint)*(byte *)((longlong)local_res20 + 2) * 0x100 +
                (uint)*(byte *)((longlong)local_res20 + 3) != local_res18[0] + -4)) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar3 = 0x3a4;
              goto LAB_140b79b91;
            }
LAB_140b79c02:
            uVar9 = uVar6;
            if (iVar1 == 1) {
              uVar9 = 4;
            }
            uVar7 = (longlong)local_res18[0] + uVar9 + uVar11;
            lVar5 = FUN_140b8d9c0(local_48,uVar7,"ssl\\ssl_rsa.c",0x3b2);
            if (lVar5 == 0) goto LAB_140b79db4;
            if (iVar1 == 1) {
              *(undefined4 *)(lVar5 + uVar11) = 0xd0010000;
            }
            local_48 = lVar5;
            memcpy((void *)(uVar9 + (longlong)(lVar5 + uVar11)),local_res20,(longlong)local_res18[0]
                  );
            FUN_140b8d990(local_58,"ssl\\ssl_rsa.c",0x3ba);
            local_58 = (char *)0x0;
            FUN_140b8d990(local_50,"ssl\\ssl_rsa.c",0x3bc);
            local_50 = 0;
            FUN_140b8d990(local_res20,"ssl\\ssl_rsa.c",0x3be);
            lVar10 = local_40 + 1;
            local_res20 = (void *)0x0;
            local_40 = lVar10;
            iVar1 = FUN_140bf3d20(lVar8,&local_58,&local_50,&local_res20,local_res18);
            uVar11 = uVar7;
          } while (iVar1 != 0);
          if (lVar10 != 0) {
            uVar2 = ssl_ctx_use_serverinfo_ex(param_1,2,lVar5,uVar7);
            uVar6 = (ulonglong)uVar2;
            goto LAB_140b79db4;
          }
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\ssl_rsa.c",900,"SSL_CTX_use_serverinfo_file");
        uVar3 = 0x185;
      }
    }
  }
LAB_140b79da7:
  FUN_140b91cc0(0x14,uVar3,0);
LAB_140b79db4:
  FUN_140b8d990(local_58,"ssl\\ssl_rsa.c",0x3c6);
  FUN_140b8d990(local_50,"ssl\\ssl_rsa.c",0x3c7);
  FUN_140b8d990(local_res20,"ssl\\ssl_rsa.c",0x3c8);
  FUN_140b8d990(local_48,"ssl\\ssl_rsa.c",0x3c9);
  FUN_140b73150(lVar8);
  return uVar6;
}

