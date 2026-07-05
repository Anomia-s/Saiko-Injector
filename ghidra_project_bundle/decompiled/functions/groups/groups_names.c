/**
 * Function: groups_names
 * Address:  140c1a4c0
 * Signature: undefined groups_names(void)
 * Body size: 445 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 groups_names(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  code *pcVar8;
  
  pcVar6 = FUN_140c1a680;
  if (param_4 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\conf\\conf_lib.c",0x154,"NCONF_get_number_e");
    FUN_140b91cc0(0xe,0xc0102,0);
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined1 *)FUN_140caf690();
    if (puVar4 == (undefined1 *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      if (param_1 == (longlong *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\conf\\conf_lib.c",0x139,"NCONF_get_string");
        FUN_140b91cc0(0xe,0x6a,0);
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\conf\\conf_lib.c",0x13c,"NCONF_get_string");
        FUN_140b91cc0(0xe,0x6c,"group=%s name=%s",param_2,param_3);
      }
LAB_140c1a65c:
      uVar5 = 0;
    }
    else {
      pcVar8 = (code *)&LAB_140c1a6a0;
      if (param_1 != (longlong *)0x0) {
        pcVar2 = *(code **)(*param_1 + 0x38);
        if (pcVar2 != (code *)0x0) {
          pcVar6 = pcVar2;
        }
        pcVar2 = *(code **)(*param_1 + 0x40);
        if (pcVar2 != (code *)0x0) {
          pcVar8 = pcVar2;
        }
      }
      iVar7 = 0;
      iVar3 = (*pcVar6)(param_1,*puVar4);
      while (iVar3 != 0) {
        iVar3 = (*pcVar8)(param_1,*puVar4);
        if ((0x7fffffff - iVar3) / 10 < iVar7) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\conf\\conf_lib.c",0x167,"NCONF_get_number_e");
          FUN_140b91cc0(0xe,0x79,0);
          goto LAB_140c1a65c;
        }
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
        iVar7 = iVar3 + iVar7 * 10;
        iVar3 = (*pcVar6)(param_1,*puVar1);
      }
      *param_4 = iVar7;
      uVar5 = 1;
    }
  }
  return uVar5;
}

