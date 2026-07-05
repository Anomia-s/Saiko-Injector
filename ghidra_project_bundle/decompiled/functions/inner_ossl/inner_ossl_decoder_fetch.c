/**
 * Function: inner_ossl_decoder_fetch
 * Address:  140c2bc40
 * Signature: undefined inner_ossl_decoder_fetch(void)
 * Body size: 704 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong inner_ossl_decoder_fetch(undefined8 *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 local_res8;
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffff70;
  undefined8 *puVar8;
  undefined4 uVar9;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  lVar3 = FUN_140c17600(*param_1,0xb);
  lVar4 = FUN_140c09530(*param_1);
  local_res18[0] = 0;
  pcVar7 = "";
  if (param_3 != (char *)0x0) {
    pcVar7 = param_3;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\encode_decode\\decoder_meth.c",0x169,"inner_ossl_decoder_fetch");
    FUN_140b91cc0(0x3c,0x80106,0);
    return 0;
  }
  if (param_2 == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_140c09700(lVar4,param_2);
    uVar6 = (uint)(iVar1 == 0);
    if ((iVar1 != 0) && (iVar2 = FUN_140c602c0(lVar3,0,iVar1,pcVar7,local_res18), iVar2 != 0))
    goto LAB_140c2be0e;
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  local_78 = FUN_140bd5be0;
  local_70 = FUN_140c2b980;
  local_res8 = 0;
  local_68 = FUN_140c2b9c0;
  local_60 = FUN_140c2ba00;
  local_58 = FUN_140c2bae0;
  local_50 = FUN_140c2bbd0;
  local_48 = FUN_140c2b140;
  *(int *)(param_1 + 1) = iVar1;
  param_1[2] = param_2;
  param_1[3] = pcVar7;
  puVar8 = param_1;
  local_res18[0] = FUN_140c60b50(*param_1,0x15,&local_res8,0,&local_78,param_1);
  uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
  if ((local_res18[0] != 0) &&
     ((iVar1 != 0 ||
      ((param_2 != (char *)0x0 && (iVar1 = FUN_140c09700(lVar4,param_2), iVar1 != 0)))))) {
    uVar9 = 1;
    FUN_140c60390(lVar3,local_res8,iVar1,pcVar7,local_res18[0],FUN_140bfdef0,FUN_140c2b140);
  }
  uVar6 = ~*(uint *)(param_1 + 5) & 1;
  if ((iVar1 == 0) && (param_2 == (char *)0x0)) {
    return local_res18[0];
  }
LAB_140c2be0e:
  if (local_res18[0] == 0) {
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_140c09900(lVar4,iVar1,0);
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\encode_decode\\decoder_meth.c",0x1a2,"inner_ossl_decoder_fetch");
    if (param_3 == (char *)0x0) {
      param_3 = "<null>";
    }
    if (param_2 == (char *)0x0) {
      param_2 = "<null>";
    }
    uVar5 = non_default_library_context(*param_1);
    FUN_140b91cc0(0x3c,(uVar6 ^ 1) + 0x8010c,"%s, Name (%s : %d), Properties (%s)",uVar5,param_2,
                  CONCAT44(uVar9,iVar1),param_3);
  }
  return local_res18[0];
}

