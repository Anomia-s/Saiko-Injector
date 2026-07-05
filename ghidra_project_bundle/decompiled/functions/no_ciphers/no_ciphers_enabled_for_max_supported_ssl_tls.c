/**
 * Function: no_ciphers_enabled_for_max_supported_ssl_tls
 * Address:  140c3a1c0
 * Signature: undefined no_ciphers_enabled_for_max_supported_ssl_tls(void)
 * Body size: 856 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
no_ciphers_enabled_for_max_supported_ssl_tls(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar13;
  longlong local_48;
  char *local_40;
  char *pcVar12;
  
  pcVar9 = (char *)0x0;
  uVar8 = 1;
  if ((((*(int *)(param_1 + 0xb98) != 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0)) ||
      (iVar2 = FUN_140ba9d00(param_1,9,0,0x301,0), iVar2 == 0)) ||
     (0x301 < *(int *)(param_1 + 0x9b4))) {
    uVar8 = 0;
  }
  iVar2 = FUN_140bb2bb0(param_1);
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x1012,"ssl_cipher_list_to_bytes");
    FUN_140ba3290(param_1,0x50,0xbf,0);
    return 0;
  }
  if (param_2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_clnt.c",0x1017,"ssl_cipher_list_to_bytes");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
    return 0;
  }
  lVar3 = ((ulonglong)uVar8 ^ 1) * 2;
  pcVar10 = (char *)(lVar3 + 0xfffa);
  if ((*(byte *)(param_1 + 0x9b0) & 0x80) == 0) {
    pcVar10 = (char *)(lVar3 + 0xfffc);
  }
  local_40 = pcVar10;
  iVar2 = FUN_140b77980(param_2);
  pcVar6 = pcVar9;
  pcVar7 = pcVar9;
  pcVar12 = pcVar9;
  if (0 < iVar2) {
    do {
      if (pcVar10 <= pcVar6) break;
      lVar3 = FUN_140b77990(param_2,pcVar12);
      iVar2 = FUN_140bb2d80(param_1,lVar3,0x10001,0);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0xb0))(lVar3,param_3,&local_48);
        if (iVar2 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar5 = 0x1039;
          goto LAB_140c3a40f;
        }
        if (pcVar7 == (char *)0x0) {
          bVar13 = (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1)
                   == 0;
          lVar4 = 0x34;
          if (bVar13) {
            lVar4 = 0x2c;
          }
          uVar1 = *(undefined4 *)(lVar4 + lVar3);
          lVar4 = 0x38;
          if (bVar13) {
            lVar4 = 0x30;
          }
          iVar2 = FUN_140bb61c0(param_1,*(undefined4 *)(lVar4 + lVar3),
                                *(undefined4 *)(param_1 + 0x41c));
          if ((-1 < iVar2) &&
             (iVar2 = FUN_140bb61c0(param_1,uVar1,*(undefined4 *)(param_1 + 0x41c)), iVar2 < 1)) {
            pcVar7 = (char *)0x1;
          }
        }
        pcVar6 = pcVar6 + local_48;
      }
      uVar11 = (int)pcVar12 + 1;
      pcVar12 = (char *)(ulonglong)uVar11;
      iVar2 = FUN_140b77980(param_2);
      pcVar10 = local_40;
    } while ((int)uVar11 < iVar2);
    if ((pcVar6 != (char *)0x0) && (pcVar7 != (char *)0x0)) {
      if ((uVar8 == 0) ||
         (iVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0xb0))
                            (&DAT_141251d90,param_3,&local_48), iVar2 != 0)) {
        if (((*(byte *)(param_1 + 0x9b0) & 0x80) == 0) ||
           (iVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0xb0))
                              (&DAT_141251de0,param_3,&local_48), iVar2 != 0)) {
          return 1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x1064;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar5 = 0x105b;
      }
LAB_140c3a40f:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_clnt.c",uVar5,"ssl_cipher_list_to_bytes");
      pcVar9 = (char *)0x0;
      uVar5 = 0xc0103;
      goto LAB_140c3a4ef;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\statem_clnt.c",0x1050,"ssl_cipher_list_to_bytes");
  uVar5 = 0xb5;
  if (pcVar7 == (char *)0x0) {
    pcVar9 = "No ciphers enabled for max supported SSL/TLS version";
  }
LAB_140c3a4ef:
  FUN_140ba3290(param_1,0x50,uVar5,pcVar9);
  return 0;
}

