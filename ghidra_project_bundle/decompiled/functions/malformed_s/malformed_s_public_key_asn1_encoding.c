/**
 * Function: malformed_s_public_key_asn1_encoding
 * Address:  140d6c570
 * Signature: undefined malformed_s_public_key_asn1_encoding(void)
 * Body size: 628 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong malformed_s_public_key_asn1_encoding(longlong *param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *local_res8;
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar9 = 1;
  bVar1 = false;
  uVar3 = FUN_140b76070(*param_3);
  local_res18[0] = *param_1;
  local_res8 = (undefined8 *)0x0;
  lVar4 = FUN_140da6690(uVar3,param_3 + 1,*(undefined8 *)param_3[0x21]);
  if (lVar4 == 0) {
    return 0;
  }
  iVar2 = FUN_140da6fd0(lVar4);
  if (param_2 != iVar2 + 0x12) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\decode_der2key.c",0x2c9,
               "slh_dsa_d2i_PUBKEY");
    FUN_140b91cc0(0x39,0x8d,"unexpected %s public key length: %ld != %ld",
                  *(undefined8 *)param_3[0x21],CONCAT44(uVar8,param_2),CONCAT44(uVar9,iVar2 + 0x12))
    ;
    goto LAB_140d6c78b;
  }
  local_res8 = (undefined8 *)
               FUN_140b8da80(0x10,"providers\\implementations\\encode_decode\\decode_der2key.c",
                             0x2d0);
  if (local_res8 == (undefined8 *)0x0) goto LAB_140d6c78b;
  lVar5 = FUN_140be0c60(&local_res8,local_res18,param_2,&DAT_14130de10,0,0);
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar3 = 0x2d6;
LAB_140d6c757:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\decode_der2key.c",uVar3,
               "slh_dsa_d2i_PUBKEY");
    uVar3 = FUN_140da70d0(lVar4);
    pcVar7 = "malformed %s public key ASN.1 encoding";
  }
  else {
    if (((*(byte *)(local_res8[1] + 0x10) & 7) != 0) ||
       (local_res18[0] != (longlong)param_2 + *param_1)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar3 = 0x2de;
      goto LAB_140d6c757;
    }
    uVar3 = *local_res8;
    uVar6 = FUN_140b96310(*(undefined4 *)(param_3[0x21] + 0x18));
    iVar2 = FUN_140bdf810(uVar6,uVar3);
    if (iVar2 == 0) {
      iVar2 = FUN_140da7040(lVar4,*(undefined8 *)((int *)local_res8[1] + 2),
                            (longlong)*(int *)local_res8[1]);
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_140d6c78b;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\decode_der2key.c",0x2eb,
                 "slh_dsa_d2i_PUBKEY");
      uVar3 = FUN_140da70d0(lVar4);
      pcVar7 = "failed to parse %s public key from the input data";
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\decode_der2key.c",0x2e4,
                 "slh_dsa_d2i_PUBKEY");
      uVar3 = FUN_140da70d0(lVar4);
      pcVar7 = "unexpected algorithm OID for an %s public key";
    }
  }
  FUN_140b91cc0(0x39,0x8d,pcVar7,uVar3);
LAB_140d6c78b:
  if (local_res8 != (undefined8 *)0x0) {
    FUN_140bde750(*local_res8);
    FUN_140b90e80(local_res8[1]);
    FUN_140b8d990(local_res8,"providers\\implementations\\encode_decode\\decode_der2key.c",0x2f5);
  }
  if (!bVar1) {
    FUN_140da6840(lVar4);
    lVar4 = 0;
  }
  return lVar4;
}

