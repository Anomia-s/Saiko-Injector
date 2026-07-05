/**
 * Function: ssl_verify_internal
 * Address:  140baa1a0
 * Signature: undefined ssl_verify_internal(void)
 * Body size: 822 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int ssl_verify_internal(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  
  if ((param_2 == 0) || (iVar2 = FUN_140b77980(param_2), iVar2 == 0)) {
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 == 0) goto LAB_140baa1ec;
  }
  if (param_3 != 0) {
    return 0;
  }
LAB_140baa1ec:
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x878) + 0x78);
  if (lVar7 == 0) {
    lVar7 = puVar1[5];
  }
  lVar5 = FUN_140bd9320(*puVar1,puVar1[0x8c]);
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_cert.c",0x1c5,"ssl_verify_internal");
    FUN_140b91cc0(0x14,0x8000b,0);
    iVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar2 = FUN_140bd9a50(lVar5,lVar7,param_3);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_cert.c",0x1d1,"ssl_verify_internal")
        ;
        FUN_140b91cc0(0x14,0x8000b,0);
        FUN_140bd9600(lVar5);
        return 0;
      }
    }
    else {
      uVar6 = FUN_140b77990(param_2,0);
      iVar2 = x509_store_ctx_init(lVar5,lVar7,uVar6,param_2);
      if (iVar2 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_cert.c",0x1cc,"ssl_verify_internal")
        ;
        FUN_140b91cc0(0x14,0x8000b,0);
        FUN_140bd9600(lVar5);
        return 0;
      }
    }
    uVar6 = FUN_140b97dc0(lVar5);
    uVar3 = FUN_140b6c3f0(param_1);
    FUN_140b9bdd0(uVar6,uVar3);
    FUN_140bd9bc0(lVar5,*(uint *)(*(longlong *)(param_1 + 0x878) + 0x1c) & 0x30000);
    iVar4 = FUN_140b8b890(&DAT_1416ff9c8,ssl_for_verify_callback);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = DAT_1416ff9cc;
    }
    uVar3 = 0xffffffff;
    if (iVar2 != 0) {
      uVar3 = DAT_14150faa0;
    }
    iVar4 = FUN_140bd9b50(lVar5,uVar3,*(undefined8 *)(param_1 + 0x40));
    iVar2 = 0;
    if (iVar4 != 0) {
      if ((param_1 + 0x518 != 0) &&
         (iVar2 = FUN_140b77980(*(undefined8 *)(param_1 + 0x520)), 0 < iVar2)) {
        FUN_140bd9c60(lVar5,param_1 + 0x518);
      }
      pcVar8 = "ssl_server";
      if (*(int *)(param_1 + 0x78) != 0) {
        pcVar8 = "ssl_client";
      }
      FUN_140bd9be0(lVar5,pcVar8);
      x509_verify_param_set1(uVar6,*(undefined8 *)(param_1 + 0x510));
      if (*(longlong *)(param_1 + 0x950) != 0) {
        FUN_140bd9b40(lVar5);
      }
      if ((code *)puVar1[0x15] == (code *)0x0) {
        iVar2 = x509_verify_cert(lVar5);
        if (iVar2 < 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = (*(code *)puVar1[0x15])(lVar5,puVar1[0x16]);
      }
      uVar3 = FUN_140bd9b70(lVar5);
      *(undefined4 *)(param_1 + 0x990) = uVar3;
      FUN_140b9f7a0(*(undefined8 *)(param_1 + 0x988));
      *(undefined8 *)(param_1 + 0x988) = 0;
      if ((param_2 != 0) && (lVar7 = FUN_140bd9b80(lVar5), lVar7 != 0)) {
        lVar7 = FUN_140bd9b90(lVar5);
        *(longlong *)(param_1 + 0x988) = lVar7;
        if (lVar7 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\ssl_cert.c",0x208,"ssl_verify_internal");
          FUN_140b91cc0(0x14,0x8000b,0);
          iVar2 = 0;
        }
      }
      FUN_140b9bde0(*(undefined8 *)(param_1 + 0x510),uVar6);
    }
    FUN_140bd9600(lVar5);
  }
  return iVar2;
}

