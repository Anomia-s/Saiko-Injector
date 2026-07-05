/**
 * Function: tls_setup_handshake
 * Address:  140bb5dd0
 * Signature: undefined tls_setup_handshake(void)
 * Body size: 933 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_setup_handshake(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = ssl3_init_finished_mac();
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x9e8) = 0;
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = 0;
  *(undefined4 *)(param_1 + 0xa00) = 0;
  *(undefined1 *)(param_1 + 0xa04) = 0;
  iVar2 = FUN_140bb6bf0(param_1,local_res10,local_res8,0);
  if (iVar2 != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0x9b,"tls_setup_handshake");
    FUN_140ba3290(param_1,0x46,0xbf,0);
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x5a8) == 0) {
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8;
    uVar11 = 0x302;
    if (uVar9 != 0) {
      uVar11 = 0xfeff;
    }
    iVar2 = FUN_140bb61c0(param_1,local_res8[0],uVar11);
    if (iVar2 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",0xa7,"tls_setup_handshake");
      FUN_140ba3290(param_1,0x28,0x129,
                    "The max supported SSL/TLS version needs the MD5-SHA1 digest but it is not available in the loaded providers. Use (D)TLSv1.2 or above, or load different providers"
                   );
      return 0;
    }
    uVar11 = 0x303;
    if (uVar9 != 0) {
      uVar11 = 0xfefd;
    }
    iVar2 = FUN_140bb61c0(param_1,local_res10[0],uVar11);
    if ((iVar2 < 0) && (iVar2 = FUN_140b6b270(param_1,0x7b,uVar11,0), iVar2 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\statem_lib.c",0xb9,"tls_setup_handshake");
      FUN_140ba3290(param_1,0x28,0xc0103,0);
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    if ((*(longlong *)(param_1 + 0x260) == 0) || (*(longlong *)(param_1 + 0x2e8) == 0)) {
      piVar5 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x78);
    }
    else {
      piVar5 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x7c);
    }
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
    *(undefined8 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x508) = 0;
    *(undefined4 *)(param_1 + 0x340) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
      *(undefined4 *)(param_1 + 200) = 1;
    }
LAB_140bb614f:
    uVar11 = 1;
  }
  else {
    uVar11 = FUN_140b6b790(param_1);
    iVar10 = 0;
    iVar2 = FUN_140b77980(uVar11);
    if (0 < iVar2) {
      do {
        lVar4 = FUN_140b77990(uVar11,iVar10);
        uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xd8) + 0x50) & 8;
        lVar7 = 0x34;
        if (uVar9 == 0) {
          lVar7 = 0x2c;
        }
        iVar2 = *(int *)(lVar7 + lVar4);
        lVar7 = 0x38;
        if (uVar9 == 0) {
          lVar7 = 0x30;
        }
        iVar8 = *(int *)(lVar7 + lVar4);
        if (local_res8[0] == iVar2) {
LAB_140bb601e:
          if (local_res8[0] != iVar8) {
            if (uVar9 == 0) {
              iVar3 = 1;
              if (local_res8[0] < iVar8) {
                iVar3 = -1;
              }
            }
            else {
              if (iVar8 == 0x100) {
                iVar8 = 0xff00;
              }
              iVar2 = local_res8[0];
              if (local_res8[0] == 0x100) {
                iVar2 = 0xff00;
              }
              iVar3 = 1;
              if (iVar8 < iVar2) {
                iVar3 = -1;
              }
            }
            if (0 < iVar3) goto LAB_140bb6058;
          }
          if ((*(longlong *)(param_1 + 0x260) == 0) || (*(longlong *)(param_1 + 0x2e8) == 0)) {
            LOCK();
            piVar5 = (int *)(*(longlong *)(param_1 + 0xb80) + 0x84);
            *piVar5 = *piVar5 + 1;
            UNLOCK();
          }
          else {
            LOCK();
            piVar5 = (int *)(lVar1 + 0x88);
            *piVar5 = *piVar5 + 1;
            UNLOCK();
            *(undefined4 *)(param_1 + 0x398) = 0;
          }
          goto LAB_140bb614f;
        }
        if (uVar9 == 0) {
          iVar6 = 1;
          if (local_res8[0] < iVar2) {
            iVar6 = -1;
          }
        }
        else {
          if (iVar2 == 0x100) {
            iVar2 = 0xff00;
          }
          iVar3 = local_res8[0];
          if (local_res8[0] == 0x100) {
            iVar3 = 0xff00;
          }
          iVar6 = 1;
          if (iVar2 < iVar3) {
            iVar6 = -1;
          }
        }
        if (-1 < iVar6) goto LAB_140bb601e;
LAB_140bb6058:
        iVar10 = iVar10 + 1;
        iVar2 = FUN_140b77980(uVar11);
      } while (iVar10 < iVar2);
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\statem_lib.c",0xd6,"tls_setup_handshake");
    FUN_140ba3290(param_1,0x28,0xb5,"No ciphers enabled for max supported SSL/TLS version");
    uVar11 = 0;
  }
  return uVar11;
}

