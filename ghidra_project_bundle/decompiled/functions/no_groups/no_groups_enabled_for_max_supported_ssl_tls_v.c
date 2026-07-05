/**
 * Function: no_groups_enabled_for_max_supported_ssl_tls_v
 * Address:  140cbb1e0
 * Signature: undefined no_groups_enabled_for_max_supported_ssl_tls_v(void)
 * Body size: 780 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 no_groups_enabled_for_max_supported_ssl_tls_v(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int local_38;
  undefined4 local_34;
  int local_30 [2];
  char *local_28;
  longlong local_20;
  
  pcVar7 = (char *)0x0;
  local_20 = 0;
  local_28 = (char *)0x0;
  iVar2 = FUN_140bb6bf0(param_1,&local_34,&local_38,0);
  if (iVar2 == 0) {
    iVar2 = FUN_140cbf7a0(param_1,local_34,local_38);
    if ((iVar2 == 0) &&
       (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0 ||
        (local_38 < 0x304)))) {
      uVar3 = 2;
    }
    else {
      FUN_140bafdb0(param_1,&local_20,&local_28);
      iVar2 = FUN_140c22430(param_2,10,2);
      if ((iVar2 == 0) ||
         (((iVar2 = FUN_140c22090(param_2,2), iVar2 == 0 ||
           (iVar2 = FUN_140c22090(param_2,2), iVar2 == 0)) ||
          (iVar2 = FUN_140c21e00(param_2,1), iVar2 == 0)))) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\extensions_clnt.c",0xf7,"tls_construct_ctos_supported_groups");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        uVar3 = 0;
      }
      else {
        pcVar5 = pcVar7;
        pcVar6 = pcVar7;
        pcVar8 = pcVar7;
        if (local_28 != (char *)0x0) {
          do {
            uVar1 = *(undefined2 *)(local_20 + (longlong)pcVar5 * 2);
            iVar2 = FUN_140bafa80(param_1,uVar1,local_34,local_38,0,local_30);
            if ((iVar2 != 0) && (iVar2 = FUN_140bafcf0(param_1,uVar1,0x20004), iVar2 != 0)) {
              iVar2 = FUN_140c22430(param_2,uVar1,2);
              if (iVar2 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\statem\\extensions_clnt.c",0x102,
                           "tls_construct_ctos_supported_groups");
                pcVar7 = (char *)0x0;
                uVar4 = 0xc0103;
                goto LAB_140cbb408;
              }
              if ((local_30[0] != 0) && (local_38 == 0x304)) {
                pcVar8 = pcVar8 + 1;
              }
              pcVar6 = pcVar6 + 1;
            }
            pcVar5 = pcVar5 + 1;
          } while (pcVar5 < local_28);
        }
        iVar2 = FUN_140c21e20(param_2);
        if ((iVar2 == 0) || (iVar2 = FUN_140c21e20(param_2), iVar2 == 0)) {
          if (pcVar6 == (char *)0x0) {
            uVar4 = 0x127;
            pcVar7 = "No groups enabled for max supported SSL/TLS version";
            uVar3 = 0x10c;
          }
          else {
            uVar4 = 0xc0103;
            uVar3 = 0x10f;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_clnt.c",uVar3,"tls_construct_ctos_supported_groups");
        }
        else {
          if ((pcVar8 != (char *)0x0) || (local_38 != 0x304)) {
            return 1;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_clnt.c",0x114,"tls_construct_ctos_supported_groups");
          pcVar7 = "No groups enabled for max supported SSL/TLS version";
          uVar4 = 0x127;
        }
LAB_140cbb408:
        FUN_140ba3290(param_1,0x50,uVar4,pcVar7);
        uVar3 = 0;
      }
    }
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_clnt.c",0xe1,"tls_construct_ctos_supported_groups");
    FUN_140ba3290(param_1,0x50,iVar2,0);
    uVar3 = 0;
  }
  return uVar3;
}

