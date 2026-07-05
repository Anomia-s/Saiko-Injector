/**
 * Function: s_algorithm_s_d_properties_s
 * Address:  140bd5f50
 * Signature: undefined s_algorithm_s_d_properties_s(void)
 * Body size: 1020 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong s_algorithm_s_d_properties_s
                   (undefined8 *param_1,undefined8 param_2,uint param_3,char *param_4,char *param_5,
                   undefined8 param_6,undefined8 param_7,code *param_8)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 *puVar9;
  undefined4 uVar10;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  local_40 = (code *)0x140bd5f6a;
  local_res10 = param_2;
  lVar3 = FUN_140c17600(*param_1,0);
  lVar4 = FUN_140c09530(*param_1);
  pcVar8 = "";
  if (param_5 != (char *)0x0) {
    pcVar8 = param_5;
  }
  uVar6 = 0;
  local_res8 = 0;
  if ((lVar3 == 0) || (lVar4 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_fetch.c",0x116,"inner_evp_generic_fetch");
    FUN_140b91cc0(6,0x80106,0);
    return 0;
  }
  if ((int)param_3 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_fetch.c",0x11f,"inner_evp_generic_fetch");
    FUN_140b91cc0(6,0xc0103,0);
    return 0;
  }
  if (param_4 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140c09700(lVar4,param_4);
    if ((uVar1 != 0) &&
       (((0x7ffffe < uVar1 - 1 || (0xfe < param_3 - 1)) ||
        (uVar6 = (uVar1 & 0x7fffff) << 8 | param_3 & 0xff, uVar6 == 0)))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\evp_fetch.c",0x12f,"inner_evp_generic_fetch");
      FUN_140b91cc0(6,0xc0103,0);
      return 0;
    }
    uVar7 = (uint)(uVar1 == 0);
    if ((uVar6 != 0) &&
       (iVar2 = FUN_140c602c0(lVar3,local_res10,uVar6,pcVar8,&local_res8), iVar2 != 0))
    goto LAB_140bd6269;
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  local_70 = FUN_140bd5be0;
  local_68 = FUN_140bd5c10;
  local_60 = FUN_140bd5c50;
  local_58 = FUN_140bd5c90;
  local_50 = FUN_140bd5da0;
  local_48 = FUN_140bd5eb0;
  local_40 = FUN_140bd5f30;
  param_1[6] = param_6;
  param_1[7] = param_7;
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((longlong)param_1 + 0xc) = uVar1;
  param_1[2] = param_4;
  param_1[3] = pcVar8;
  param_1[8] = param_8;
  puVar9 = param_1;
  local_res8 = FUN_140c60b50(*param_1,param_3,&local_res10,0,&local_70,param_1);
  uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
  if (local_res8 != 0) {
    if ((uVar1 == 0) && (uVar1 = FUN_140c09700(lVar4,param_4), uVar1 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\evp_fetch.c",0x15f,"inner_evp_generic_fetch");
      FUN_140b91cc0(6,0x8010d,"Algorithm %s cannot be found",param_4);
      (*param_8)(local_res8);
      local_res8 = 0;
    }
    else if ((uVar1 - 1 < 0x7fffff) &&
            ((param_3 - 1 < 0xff && (uVar6 = (uVar1 & 0x7fffff) << 8 | param_3 & 0xff, uVar6 != 0)))
            ) {
      FUN_140c60390(lVar3,local_res10,uVar6,pcVar8,local_res8,param_7,param_8);
      uVar10 = (undefined4)((ulonglong)param_7 >> 0x20);
    }
  }
  uVar7 = ~*(uint *)(param_1 + 5) & 1;
LAB_140bd6269:
  if (((uVar1 != 0) || (param_4 != (char *)0x0)) && (local_res8 == 0)) {
    if (param_4 == (char *)0x0) {
      param_4 = (char *)FUN_140c09900(lVar4,uVar1,0);
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_fetch.c",0x177,"inner_evp_generic_fetch");
    if (param_5 == (char *)0x0) {
      param_5 = "<null>";
    }
    if (param_4 == (char *)0x0) {
      param_4 = "<null>";
    }
    uVar5 = non_default_library_context(*param_1);
    FUN_140b91cc0(6,(uVar7 ^ 1) + 0x8010c,"%s, Algorithm (%s : %d), Properties (%s)",uVar5,param_4,
                  CONCAT44(uVar10,uVar1),param_5);
  }
  return local_res8;
}

