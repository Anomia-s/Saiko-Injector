/**
 * Function: modules_values_retcode_8d
 * Address:  140c1ade0
 * Signature: undefined modules_values_retcode_8d(void)
 * Body size: 691 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int modules_values_retcode_8d(undefined8 param_1,char *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  uVar9 = 0x140c1ae02;
  iVar1 = FUN_140b8b890(&DAT_141700344,FUN_140c1b640);
  iVar8 = 0;
  if (iVar1 != 0) {
    iVar8 = DAT_141700364;
  }
  if (iVar8 == 0) {
    return -1;
  }
  pcVar3 = strrchr(param_2,0x2e);
  if (pcVar3 == (char *)0x0) {
    sVar4 = strlen(param_2);
    iVar8 = (int)sVar4;
  }
  else {
    iVar8 = (int)pcVar3 - (int)param_2;
  }
  iVar2 = FUN_140b8b890(&DAT_141700340,do_init_module_list_lock);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = DAT_141700360;
  }
  if (iVar1 != 0) {
    cryptothreads_winc(DAT_141700348);
    uVar5 = FUN_140b8c100(&DAT_141700350);
    iVar2 = 0;
    iVar1 = FUN_140b77980(uVar5);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (0 < iVar1) {
      do {
        lVar6 = FUN_140b77990(uVar5,iVar2);
        iVar1 = strncmp(*(char **)(lVar6 + 8),param_2,(longlong)iVar8);
        uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
        if (iVar1 == 0) {
          cryptothreads_winc(DAT_141700348);
          if (lVar6 == 0) goto LAB_140c1aeea;
          goto LAB_140c1afd5;
        }
        iVar2 = iVar2 + 1;
        iVar1 = FUN_140b77980(uVar5);
        uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      } while (iVar2 < iVar1);
    }
    cryptothreads_winc(DAT_141700348);
  }
LAB_140c1aeea:
  if ((param_4 & 8) != 0) goto LAB_140c1b035;
  uVar9 = 0;
  pcVar3 = (char *)FUN_140caf690(param_1,param_3,&DAT_1413a6120);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = param_2;
  }
  lVar7 = dso_load(0,pcVar3,0,0);
  if (lVar7 == 0) {
    uVar9 = 0x6e;
LAB_140c1af8e:
    FUN_140c5d2b0(lVar7);
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\conf\\conf_mod.c",0x14d,"module_load_dso");
    FUN_140b91cc0(0xe,uVar9,"module=%s, path=%s",param_2,pcVar3);
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_140c5d7e0(lVar7,"OPENSSL_init");
    if (lVar6 == 0) {
      uVar9 = 0x70;
      goto LAB_140c1af8e;
    }
    uVar5 = FUN_140c5d7e0(lVar7,"OPENSSL_finish");
    lVar6 = FUN_140c1b0a0(lVar7,param_2,lVar6,uVar5);
    if (lVar6 == 0) goto LAB_140c1af8e;
  }
  if (lVar6 != 0) {
LAB_140c1afd5:
    iVar8 = module_init(lVar6,param_2,param_3,param_1);
    if (0 < iVar8) {
      return iVar8;
    }
    if ((param_4 & 4) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_mod.c",0x120,"module_run");
      FUN_140b91cc0(0xe,0x6d,"module=%s, value=%s retcode=%-8d",param_2,param_3,
                    CONCAT44(uVar10,iVar8));
      return iVar8;
    }
    return iVar8;
  }
LAB_140c1b035:
  if ((param_4 & 4) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_mod.c",0x116,"module_run");
    FUN_140b91cc0(0xe,0x71,"module=%s",param_2);
  }
  return -1;
}

