/**
 * Function: alg_module_init
 * Address:  140cff420
 * Signature: undefined alg_module_init(void)
 * Body size: 500 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 alg_module_init(undefined8 param_1,undefined8 param_2)

{
  char *_Str1;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int local_res18 [4];
  
  uVar3 = FUN_140b77290();
  lVar4 = FUN_140c1a380(param_2,uVar3);
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\evp_cnf.c",0x21,"alg_module_init");
    FUN_140b91cc0(6,0xa5,0);
    return 0;
  }
  iVar7 = 0;
  iVar2 = FUN_140b77980(lVar4);
  if (0 < iVar2) {
    do {
      lVar5 = FUN_140b77990(lVar4,iVar7);
      _Str1 = *(char **)(lVar5 + 8);
      iVar2 = strcmp(_Str1,"fips_mode");
      if (iVar2 == 0) {
        iVar2 = FUN_140bc6490(lVar5,local_res18);
        if (iVar2 == 0) {
          return 0;
        }
        bVar1 = 0 < local_res18[0];
        uVar3 = FUN_140b6a6a0(param_2);
        iVar2 = cryptoevpevp_fetchc(uVar3,bVar1);
        if (iVar2 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_cnf.c",0x33,"alg_module_init");
          FUN_140b91cc0(6,0xd1,0);
          return 0;
        }
      }
      else {
        iVar2 = strcmp(_Str1,"default_properties");
        if (iVar2 != 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_cnf.c",0x3d,"alg_module_init");
          FUN_140b91cc0(6,0xa9,"name=%s, value=%s",*(undefined8 *)(lVar5 + 8),
                        *(undefined8 *)(lVar5 + 0x10));
          return 0;
        }
        uVar3 = *(undefined8 *)(lVar5 + 0x10);
        uVar6 = FUN_140b6a6a0(param_2);
        iVar2 = cryptoevpevp_fetchc(uVar6,uVar3,0,0);
        if (iVar2 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_cnf.c",0x39,"alg_module_init");
          FUN_140b91cc0(6,0xd1,0);
          return 0;
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = FUN_140b77980(lVar4);
    } while (iVar7 < iVar2);
  }
  return 1;
}

