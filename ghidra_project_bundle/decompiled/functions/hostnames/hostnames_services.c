/**
 * Function: hostnames_services
 * Address:  140cdf2a0
 * Signature: undefined hostnames_services(void)
 * Body size: 1269 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong hostnames_services(longlong param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  __time64_t _Var10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  iVar8 = *param_2;
  pcVar1 = *(code **)(param_2 + 0xe);
  uVar13 = 0xffffffff;
  do {
    if (6 < iVar8 - 1U) {
LAB_140cdf762:
      if (pcVar1 != (code *)0x0) {
        uVar13 = (*pcVar1)(param_1,*param_2,uVar13);
      }
      return uVar13;
    }
    switch(iVar8 - 1U) {
    case 0:
      if ((*(longlong *)(param_2 + 4) == 0) && (*(longlong *)(param_2 + 6) == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0x7b,"conn_state");
        FUN_140b91cc0(0x20,0x90,"hostname=%s service=%s",*(undefined8 *)(param_2 + 4),
                      *(undefined8 *)(param_2 + 6));
        goto LAB_140cdf762;
      }
      *param_2 = 2;
      break;
    case 1:
      iVar8 = param_2[1];
      if (iVar8 == 4) {
        uVar9 = 2;
      }
      else if (iVar8 == 6) {
        uVar9 = 0x17;
      }
      else {
        if (iVar8 != 0x100) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0x9c,"conn_state")
          ;
          FUN_140b91cc0(0x20,0x92,0);
          goto LAB_140cdf762;
        }
        uVar9 = 0;
      }
      iVar8 = FUN_140bd7df0(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6),0,uVar9,
                            param_2[2],param_2 + 10);
      if (iVar8 == 0) goto LAB_140cdf762;
      lVar11 = *(longlong *)(param_2 + 10);
      if (lVar11 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0xa6,"conn_state");
        FUN_140b91cc0(0x20,0x8e,0);
        goto LAB_140cdf762;
      }
      *(longlong *)(param_2 + 0xc) = lVar11;
      *param_2 = 3;
      break;
    case 2:
      uVar9 = *(undefined8 *)(param_2 + 0xc);
      uVar4 = FUN_140bd7b00(uVar9);
      uVar5 = FUN_140bd7af0(uVar9);
      uVar6 = FUN_140bd7ae0(uVar9);
      uVar7 = calling_socket(uVar6,uVar5,uVar4,0);
      uVar13 = (ulonglong)uVar7;
      if (uVar7 == 0xffffffff) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0xb2,"conn_state");
        uVar9 = *(undefined8 *)(param_2 + 6);
        uVar2 = *(undefined8 *)(param_2 + 4);
        iVar8 = WSAGetLastError();
        FUN_140b91cc0(2,iVar8,"calling socket(%s, %s)",uVar2,uVar9);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0xb5,"conn_state");
        FUN_140b91cc0(0x20,0x76,0);
        goto LAB_140cdf762;
      }
      *(uint *)(param_1 + 0x38) = uVar7;
      *param_2 = 4;
      break;
    case 3:
      FUN_140b73030(param_1,0xf);
      FUN_140b932f0();
      uVar7 = param_2[8];
      iVar8 = FUN_140bd7af0(*(undefined8 *)(param_2 + 0xc));
      uVar3 = uVar7 | 4;
      if (iVar8 != 1) {
        uVar3 = uVar7;
      }
      uVar9 = FUN_140bd7b30(*(undefined8 *)(param_2 + 0xc));
      uVar7 = calling_connect(*(undefined4 *)(param_1 + 0x38),uVar9,uVar3);
      *(undefined4 *)(param_1 + 0x34) = 0;
      uVar13 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        iVar8 = FUN_140b72ef0(0);
        if (iVar8 != 0) {
          FUN_140b73010(param_1,0xc);
          *param_2 = 6;
          *(undefined4 *)(param_1 + 0x34) = 2;
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          goto LAB_140cdf762;
        }
        lVar11 = FUN_140bd7ad0(*(undefined8 *)(param_2 + 0xc));
        *(longlong *)(param_2 + 0xc) = lVar11;
        if (lVar11 == 0) {
          FUN_140b93470();
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0xd7,"conn_state")
          ;
          uVar9 = *(undefined8 *)(param_2 + 6);
          uVar2 = *(undefined8 *)(param_2 + 4);
          iVar8 = WSAGetLastError();
          FUN_140b91cc0(2,iVar8,"calling connect(%s, %s)",uVar2,uVar9);
          *param_2 = 7;
        }
        else {
          FUN_140bd6c00(*(undefined4 *)(param_1 + 0x38));
          *param_2 = 3;
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
        }
      }
      else {
        FUN_140b93470();
LAB_140cdf4be:
        if (param_2[2] == 2) {
          lVar11 = FUN_140b90c50(*(undefined4 *)(param_1 + 0x38));
          *(longlong *)(param_2 + 0x10) = lVar11;
          if (lVar11 == 0) {
            *param_2 = 7;
            break;
          }
        }
        *param_2 = 5;
      }
      break;
    case 4:
      uVar13 = 1;
      goto LAB_140cdf762;
    case 5:
      _Var10 = _time64((__time64_t *)0x0);
      iVar8 = FUN_140bd8270(*(undefined4 *)(param_1 + 0x38),0,_Var10);
      if (iVar8 != 0) {
        iVar8 = FUN_140bd8320(*(undefined4 *)(param_1 + 0x38));
        if (iVar8 == 0) goto LAB_140cdf4be;
        FUN_140b73030(param_1);
        lVar11 = FUN_140bd7ad0(*(undefined8 *)(param_2 + 0xc));
        *(longlong *)(param_2 + 0xc) = lVar11;
        if (lVar11 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0xf5,"conn_state")
          ;
          FUN_140b91cc0(2,iVar8,"calling connect(%s, %s)",*(undefined8 *)(param_2 + 4),
                        *(undefined8 *)(param_2 + 6));
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0xf8,"conn_state")
          ;
          FUN_140b91cc0(0x20,0x6e,0);
          uVar13 = 0;
          goto LAB_140cdf762;
        }
        FUN_140bd6c00(*(undefined4 *)(param_1 + 0x38));
        *param_2 = 3;
      }
      break;
    case 6:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bss_conn.c",0x10c,"conn_state");
      FUN_140b91cc0(0x20,0x67,0);
      uVar13 = 0;
      goto LAB_140cdf762;
    }
    if (pcVar1 != (code *)0x0) {
      uVar12 = (*pcVar1)(param_1);
      uVar13 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
        return uVar12;
      }
    }
    iVar8 = *param_2;
  } while( true );
}

