/**
 * Function: x509_store_ctx_init
 * Address:  140bd9650
 * Signature: undefined x509_store_ctx_init(void)
 * Body size: 1019 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_store_ctx_init(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_1 == (longlong *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vfy.c",0x9ca,"X509_STORE_CTX_init");
    FUN_140b91cc0(0xb,0xc0102,0);
    return 0;
  }
  FUN_140bd9aa0();
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[0x12] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[2] = param_4;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_2 == 0) {
    param_1[0x11] = 0;
LAB_140bd9755:
    param_1[9] = (longlong)FUN_140bdb500;
    if (param_2 != 0) goto LAB_140bd9765;
LAB_140bd9774:
    param_1[8] = (longlong)FUN_140bd93d0;
    if (param_2 != 0) goto LAB_140bd9784;
LAB_140bd9793:
    param_1[7] = (longlong)&LAB_140bdb4f0;
    if (param_2 != 0) goto LAB_140bd97a3;
LAB_140bd97b2:
    param_1[6] = (longlong)FUN_140bdd320;
    if (param_2 != 0) goto LAB_140bd97c2;
LAB_140bd97d1:
    param_1[10] = (longlong)FUN_140bdc530;
    if (param_2 != 0) goto LAB_140bd97e1;
LAB_140bd97f0:
    param_1[0xb] = 0;
    if (param_2 != 0) goto LAB_140bd97f9;
LAB_140bd9808:
    param_1[0xc] = (longlong)FUN_140bdda40;
    if (param_2 != 0) goto LAB_140bd9818;
LAB_140bd9827:
    param_1[0xd] = (longlong)FUN_140bdde40;
    if (param_2 != 0) goto LAB_140bd9837;
LAB_140bd9846:
    param_1[0xe] = (longlong)FUN_140bdc800;
    if (param_2 != 0) goto LAB_140bd9856;
LAB_140bd9865:
    param_1[0xf] = (longlong)FUN_140b76c40;
    if (param_2 != 0) goto LAB_140bd9875;
LAB_140bd987e:
    pcVar4 = FUN_140b76e10;
  }
  else {
    param_1[0x11] = *(longlong *)(param_2 + 0x78);
    if (*(longlong *)(param_2 + 0x38) == 0) goto LAB_140bd9755;
    param_1[9] = *(longlong *)(param_2 + 0x38);
LAB_140bd9765:
    if (*(longlong *)(param_2 + 0x30) == 0) goto LAB_140bd9774;
    param_1[8] = *(longlong *)(param_2 + 0x30);
LAB_140bd9784:
    if (*(longlong *)(param_2 + 0x28) == 0) goto LAB_140bd9793;
    param_1[7] = *(longlong *)(param_2 + 0x28);
LAB_140bd97a3:
    if (*(longlong *)(param_2 + 0x20) == 0) goto LAB_140bd97b2;
    param_1[6] = *(longlong *)(param_2 + 0x20);
LAB_140bd97c2:
    if (*(longlong *)(param_2 + 0x40) == 0) goto LAB_140bd97d1;
    param_1[10] = *(longlong *)(param_2 + 0x40);
LAB_140bd97e1:
    if (*(longlong *)(param_2 + 0x48) == 0) goto LAB_140bd97f0;
    param_1[0xb] = *(longlong *)(param_2 + 0x48);
LAB_140bd97f9:
    if (*(longlong *)(param_2 + 0x50) == 0) goto LAB_140bd9808;
    param_1[0xc] = *(longlong *)(param_2 + 0x50);
LAB_140bd9818:
    if (*(longlong *)(param_2 + 0x58) == 0) goto LAB_140bd9827;
    param_1[0xd] = *(longlong *)(param_2 + 0x58);
LAB_140bd9837:
    if (*(longlong *)(param_2 + 0x60) == 0) goto LAB_140bd9846;
    param_1[0xe] = *(longlong *)(param_2 + 0x60);
LAB_140bd9856:
    if (*(longlong *)(param_2 + 0x68) == 0) goto LAB_140bd9865;
    param_1[0xf] = *(longlong *)(param_2 + 0x68);
LAB_140bd9875:
    pcVar4 = *(code **)(param_2 + 0x70);
    if (pcVar4 == (code *)0x0) goto LAB_140bd987e;
  }
  param_1[0x10] = (longlong)pcVar4;
  lVar5 = FUN_140b9b940();
  param_1[4] = lVar5;
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vfy.c",0xa26,"X509_STORE_CTX_init");
    uVar6 = 0x8000d;
  }
  else {
    if (param_2 == 0) {
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 0x11;
    }
    else {
      iVar2 = FUN_140b9ba30(lVar5,*(undefined8 *)(param_2 + 0x18));
      if (iVar2 == 0) goto LAB_140bd99bd;
    }
    lVar5 = FUN_140b9bf90("default");
    if (lVar5 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\x509_vfy.c",0xb0d,"X509_STORE_CTX_set_default");
      FUN_140b91cc0(0xb,0x79,"name=%s","default");
      goto LAB_140bd99bd;
    }
    iVar2 = FUN_140b9ba30(param_1[4],lVar5);
    if (iVar2 == 0) goto LAB_140bd99bd;
    if (*(int *)(param_1[4] + 0x1c) == 0) {
      uVar3 = FUN_140bc5610(*(undefined4 *)(param_1[4] + 0x18));
      lVar5 = FUN_140bc5660(uVar3);
      if (lVar5 != 0) {
        lVar1 = param_1[4];
        uVar3 = FUN_140bc56b0(lVar5);
        *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      }
    }
    iVar2 = FUN_140b8cf40(5,param_1,param_1 + 0x1c);
    if (iVar2 != 0) {
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509_vfy.c",0xa42,"X509_STORE_CTX_init");
    uVar6 = 0x8000f;
  }
  FUN_140b91cc0(0xb,uVar6,0);
LAB_140bd99bd:
  if ((code *)param_1[0x11] != (code *)0x0) {
    (*(code *)param_1[0x11])(param_1);
    param_1[0x11] = 0;
  }
  if (param_1[4] != 0) {
    if (param_1[0x1b] == 0) {
      FUN_140b9b990();
    }
    param_1[4] = 0;
  }
  FUN_140c613b0(param_1[0x14]);
  param_1[0x14] = 0;
  FUN_140b9f7a0(param_1[0x13]);
  param_1[0x13] = 0;
  get_and_lock(5,param_1,param_1 + 0x1c);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return 0;
}

