/**
 * Function: pkey_pss_init
 * Address:  140bfc290
 * Signature: undefined pkey_pss_init(void)
 * Body size: 329 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pkey_pss_init(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 uVar7;
  
  uVar7 = 0x140bfc29d;
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (**(int **)(param_1 + 0x78) == 0x390) {
    lVar6 = FUN_140c0a3e0(*(undefined8 *)(param_1 + 0x88));
    if (*(longlong *)(lVar6 + 0x80) == 0) {
      return 1;
    }
    iVar4 = rsa_pss_verify_param
                      (*(longlong *)(lVar6 + 0x80),&local_res10,&local_res18,local_res8,uVar7);
    if (iVar4 != 0) {
      iVar4 = FUN_140b97b40(local_res10);
      if (iVar4 < 1) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\rsa\\rsa_pmeth.c",0x378,"pkey_pss_init");
        uVar7 = 0x8f;
      }
      else {
        iVar5 = FUN_140c8d0a0(lVar6);
        bVar3 = FUN_140c8d080(lVar6);
        iVar2 = (iVar5 - iVar4) + -1;
        if ((bVar3 & 7) != 1) {
          iVar2 = iVar5 - iVar4;
        }
        if (local_res8[0] <= iVar2) {
          *(int *)(lVar1 + 0x34) = local_res8[0];
          *(undefined8 *)(lVar1 + 0x20) = local_res10;
          *(undefined8 *)(lVar1 + 0x28) = local_res18;
          *(int *)(lVar1 + 0x30) = local_res8[0];
          return 1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\rsa\\rsa_pmeth.c",0x37f,"pkey_pss_init");
        uVar7 = 0x96;
      }
      FUN_140b91cc0(4,uVar7,0);
      return 0;
    }
  }
  return 0;
}

