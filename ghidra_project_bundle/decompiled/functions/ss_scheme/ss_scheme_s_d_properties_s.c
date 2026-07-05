/**
 * Function: ss_scheme_s_d_properties_s
 * Address:  140c5cab0
 * Signature: undefined ss_scheme_s_d_properties_s(void)
 * Body size: 707 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ss_scheme_s_d_properties_s(undefined8 *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 local_res8;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar9;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uStack_40 = 0x140c5caca;
  lVar3 = FUN_140c17600(*param_1,0xf);
  lVar4 = FUN_140c09530(*param_1);
  local_res20 = 0;
  pcVar7 = "";
  pcVar8 = "";
  if (param_3 != (char *)0x0) {
    pcVar8 = param_3;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\store\\store_meth.c",0x12d,"inner_loader_fetch");
    FUN_140b91cc0(0x2c,0x80106,0);
    return 0;
  }
  if (param_2 == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_140c09700(lVar4,param_2);
    uVar6 = (uint)(iVar1 == 0);
    if ((iVar1 != 0) && (iVar2 = FUN_140c602c0(lVar3,0,iVar1,pcVar8,&local_res20), iVar2 != 0))
    goto LAB_140c5cc75;
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  local_78 = FUN_140bd5be0;
  local_70 = FUN_140c5c590;
  local_res8 = 0;
  local_68 = FUN_140c5c5d0;
  local_60 = FUN_140c5c610;
  local_58 = FUN_140c5c6c0;
  local_50 = FUN_140c5ca40;
  local_48 = FUN_140c5c420;
  *(int *)(param_1 + 1) = iVar1;
  param_1[2] = param_2;
  param_1[3] = pcVar8;
  local_res20 = FUN_140c60b50(*param_1,0x16,&local_res8,0,&local_78,param_1);
  if (local_res20 != 0) {
    if (iVar1 == 0) {
      iVar1 = FUN_140c09700(lVar4,param_2);
    }
    uVar9 = 1;
    FUN_140c60390(lVar3,local_res8,iVar1,pcVar8,local_res20,&LAB_140c5c570,FUN_140c5c420);
  }
  uVar6 = ~*(uint *)(param_1 + 5) & 1;
  if ((iVar1 == 0) && (param_2 == (char *)0x0)) {
    return local_res20;
  }
LAB_140c5cc75:
  if (local_res20 == 0) {
    if (uVar6 != 0) {
      pcVar7 = 
      "No store loader found. For standard store loaders you need at least one of the default or base providers available. Did you forget to load them? Info: "
      ;
    }
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_140c09900(lVar4,iVar1,0);
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\store\\store_meth.c",0x16b,"inner_loader_fetch");
    if (param_3 == (char *)0x0) {
      param_3 = "<null>";
    }
    if (param_2 == (char *)0x0) {
      param_2 = "<null>";
    }
    uVar5 = non_default_library_context(*param_1);
    FUN_140b91cc0(0x2c,(uVar6 ^ 1) + 0x8010c,"%s%s, Scheme (%s : %d), Properties (%s)",pcVar7,uVar5,
                  param_2,CONCAT44(uVar9,iVar1),param_3);
  }
  return local_res20;
}

