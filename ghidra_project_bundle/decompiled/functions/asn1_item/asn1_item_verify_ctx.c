/**
 * Function: asn1_item_verify_ctx
 * Address:  140c65240
 * Signature: undefined asn1_item_verify_ctx(void)
 * Body size: 1224 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int asn1_item_verify_ctx
              (undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
              undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int local_38;
  int local_34;
  longlong local_30;
  
  lVar9 = 0;
  lVar8 = 0;
  local_30 = 0;
  iVar4 = -1;
  uVar5 = FUN_140b6a6a0(param_5);
  piVar6 = (int *)FUN_140b7bde0(uVar5);
  if (piVar6 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_verify.c",0x7b,"ASN1_item_verify_ctx");
    FUN_140b91cc0(0xd,0xc0102,0);
    return -1;
  }
  if ((param_3[1] == 3) && ((*(byte *)(param_3 + 4) & 7) != 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_verify.c",0x80,"ASN1_item_verify_ctx");
    FUN_140b91cc0(0xd,0xdc,0);
    return -1;
  }
  uVar2 = FUN_140b964c0(*param_2);
  iVar3 = FUN_140c24470(uVar2,&local_38,&local_34);
  if (iVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_verify.c",0x86,"ASN1_item_verify_ctx");
    FUN_140b91cc0(0xd,199,0);
    goto LAB_140c656d2;
  }
  if (((local_38 == 0) && (*piVar6 != 0)) && (*(longlong *)(piVar6 + 0x18) == 0)) {
    if ((*(longlong *)(piVar6 + 2) == 0) ||
       (pcVar1 = *(code **)(*(longlong *)(piVar6 + 2) + 200), pcVar1 == (code *)0x0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_verify.c",0x8c,"ASN1_item_verify_ctx");
      FUN_140b91cc0(0xd,199,0);
      lVar9 = lVar8;
      goto LAB_140c656d2;
    }
    iVar4 = (*pcVar1)(param_5,param_1,param_4,param_2,param_3,piVar6);
    if (iVar4 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_verify.c",0x97,"ASN1_item_verify_ctx");
      FUN_140b91cc0(0xd,0x80006,0);
      goto LAB_140c656d2;
    }
    if (iVar4 < 2) goto LAB_140c656d2;
  }
  else if ((local_38 == 0) && (local_34 == 0x390)) {
    iVar3 = FUN_140b7dd90(piVar6,&DAT_1413a6b28);
    if ((iVar3 == 0) && (iVar3 = FUN_140b7dd90(piVar6,"RSA-PSS"), iVar3 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_verify.c",0xa5,"ASN1_item_verify_ctx");
      FUN_140b91cc0(0xd,200,0);
      lVar9 = lVar8;
      goto LAB_140c656d2;
    }
    iVar3 = rsa_pss_verify_param(param_5,0,param_2,piVar6);
    if (iVar3 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_verify.c",0xaa,"ASN1_item_verify_ctx");
      FUN_140b91cc0(0xd,0xc0103,0);
      lVar9 = lVar8;
      goto LAB_140c656d2;
    }
  }
  else {
    uVar5 = FUN_140b96490();
    iVar3 = FUN_140b7dd90(piVar6,uVar5);
    if (iVar3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_verify.c",0xb0,"ASN1_item_verify_ctx");
      FUN_140b91cc0(0xd,200,0);
      lVar9 = lVar8;
      goto LAB_140c656d2;
    }
    lVar7 = lVar9;
    if (local_38 != 0) {
      uVar5 = FUN_140b96490();
      lVar7 = FUN_140b999e0(uVar5);
      if (lVar7 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\asn1\\a_verify.c",0xb7,"ASN1_item_verify_ctx");
        FUN_140b91cc0(0xd,0xa1,"nid=0x%x",local_38);
        lVar9 = lVar8;
        goto LAB_140c656d2;
      }
    }
    iVar4 = FUN_140bd0d80(param_5,0,lVar7,0,piVar6);
    if (iVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_verify.c",0xc3,"ASN1_item_verify_ctx");
      FUN_140b91cc0(0xd,0x80006,0);
      iVar4 = 0;
      lVar9 = lVar8;
      goto LAB_140c656d2;
    }
  }
  iVar4 = FUN_140be3340(param_4,&local_30,param_1);
  if (iVar4 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_verify.c",0xcc,"ASN1_item_verify_ctx");
    FUN_140b91cc0(0xd,0xc0103,0);
    iVar4 = -1;
  }
  else if (local_30 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_verify.c",0xd1,"ASN1_item_verify_ctx");
    FUN_140b91cc0(0xd,0x8000d,0);
    iVar4 = -1;
    lVar9 = lVar8;
  }
  else {
    lVar9 = (longlong)iVar4;
    iVar4 = evp_digestverify(param_5,*(undefined8 *)(param_3 + 2),(longlong)*param_3,local_30,lVar9)
    ;
    if (iVar4 < 1) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\asn1\\a_verify.c",0xda,"ASN1_item_verify_ctx");
      FUN_140b91cc0(0xd,0x80006,0);
    }
    else {
      iVar4 = 1;
    }
  }
LAB_140c656d2:
  FUN_140b8db20(local_30,lVar9,"crypto\\asn1\\a_verify.c",0xdf);
  return iVar4;
}

