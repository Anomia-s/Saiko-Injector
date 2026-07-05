/**
 * Function: openssl_conf
 * Address:  140c1a870
 * Signature: undefined openssl_conf(void)
 * Body size: 548 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int openssl_conf(undefined8 param_1,char *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *_Str;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar8;
  undefined8 uVar9;
  int local_res20;
  char *pcVar7;
  
  pcVar7 = (char *)0x0;
  pcVar6 = (char *)0x0;
  iVar1 = 0;
  local_res20 = FUN_140c17380();
  FUN_140b932f0();
  pcVar4 = param_2;
  if (param_2 == (char *)0x0) {
    puVar3 = (undefined1 *)uopenssl_win32_utf8("OPENSSL_CONF");
    if (puVar3 == (undefined1 *)0x0) {
      _Str = (char *)FUN_140c251e0();
      if (_Str == (char *)0x0) {
        puVar3 = &DAT_1413a2ad6;
        uVar9 = 0x2c1;
        goto LAB_140c1a901;
      }
      sVar5 = strlen(_Str);
      pcVar4 = (char *)FUN_140b8d8d0(sVar5 + 0xd,"crypto\\conf\\conf_mod.c",0x2c7);
      pcVar8 = pcVar7;
      if (pcVar4 != (char *)0x0) {
        FUN_140c07aa0(pcVar4,sVar5 + 0xd,"%s%s%s",_Str,&DAT_1413a7098,"openssl.cnf");
        goto LAB_140c1a987;
      }
    }
    else {
      uVar9 = 0x2b4;
LAB_140c1a901:
      pcVar4 = (char *)FUN_140b8c830(puVar3,"crypto\\conf\\conf_mod.c",uVar9);
      pcVar6 = pcVar7;
      pcVar8 = pcVar4;
      iVar1 = 0;
      if (pcVar4 != (char *)0x0) {
LAB_140c1a987:
        if (*pcVar4 != '\0') goto LAB_140c1a9a1;
        iVar1 = 1;
        pcVar6 = pcVar7;
        pcVar8 = pcVar4;
      }
    }
  }
  else {
LAB_140c1a9a1:
    pcVar6 = (char *)FUN_140c1a290(param_1,0);
    iVar1 = 0;
    if (pcVar6 != (char *)0x0) {
      iVar1 = nconf_load(pcVar6,pcVar4,0);
      if (iVar1 < 1) {
        iVar1 = 0;
        if (((param_4 & 0x10) != 0) &&
           (uVar2 = FUN_140b92170(), (((int)uVar2 >> 0x1f & 0x7f800000U) + 0x7fffff & uVar2) == 0x72
           )) {
          iVar1 = 1;
        }
      }
      else {
        iVar1 = config_diagnostics(pcVar6,param_3,param_4);
        local_res20 = FUN_140c17380(param_1);
      }
    }
    pcVar8 = pcVar4;
    if (param_2 != (char *)0x0) goto LAB_140c1aa31;
  }
  FUN_140b8d990(pcVar8,"crypto\\conf\\conf_mod.c",0xe7);
LAB_140c1aa31:
  FUN_140c1a300(pcVar6);
  if (((param_4 & 2) != 0) && (local_res20 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    return 1;
  }
  if (iVar1 < 1) {
    FUN_140b93470();
    return iVar1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  return iVar1;
}

