/**
 * Function: keymgmt_key_type_s_but_legacy_type_evp_pkey
 * Address:  140b80930
 * Signature: undefined keymgmt_key_type_s_but_legacy_type_evp_pkey(void)
 * Body size: 706 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 keymgmt_key_type_s_but_legacy_type_evp_pkey(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar6 = 0;
  if ((param_1 != (longlong *)0x0) &&
     (((*(longlong *)(param_2 + 8) != 0 || (*(longlong *)(param_2 + 0x1a) != 0)) &&
      (lVar2 = *(longlong *)(param_2 + 0x18), lVar2 != 0)))) {
    lVar3 = *(longlong *)(param_2 + 0x1a);
    iVar4 = *param_2;
    uVar5 = FUN_140b77290(lVar2);
    if (iVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\p_lib.c",0x836,"evp_pkey_copy_downgraded");
      FUN_140b91cc0(6,0xc0103,"keymgmt key type = %s but legacy type = EVP_PKEY_NONE",uVar5);
    }
    else {
      if (iVar4 != -1) {
        uVar5 = FUN_140b96490(iVar4);
      }
      if (*param_1 == 0) {
        lVar6 = FUN_140b7ed00();
        *param_1 = lVar6;
        if (lVar6 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\p_lib.c",0x844,"evp_pkey_copy_downgraded");
          FUN_140b91cc0(6,0x80006,0);
          return 0;
        }
      }
      else {
        FUN_140b80f20();
      }
      iVar4 = FUN_140b7e180(*param_1,iVar4);
      if (iVar4 != 0) {
        if (lVar3 == 0) {
          return 1;
        }
        if (*(longlong *)(*(longlong *)(*param_1 + 8) + 0x128) == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\p_lib.c",0x851,"evp_pkey_copy_downgraded");
          FUN_140b91cc0(6,0xce,"key type = %s",uVar5);
        }
        else {
          uVar7 = FUN_140bd3af0(*(undefined8 *)(lVar2 + 0x20));
          lVar8 = FUN_140b7b2e0(uVar7,*param_1,0);
          if (lVar8 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\evp\\p_lib.c",0x85e,"evp_pkey_copy_downgraded");
            FUN_140b91cc0(6,0x80006,0);
          }
          else {
            iVar4 = FUN_140bfe480(lVar2,lVar3,0x87,
                                  *(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x128),lVar8);
            if (iVar4 != 0) {
              lVar6 = *param_1;
              uVar5 = (**(code **)(*(longlong *)(lVar6 + 8) + 0x118))();
              *(undefined8 *)(lVar6 + 0x80) = uVar5;
              FUN_140b7b6a0(lVar8);
              return 1;
            }
          }
          FUN_140b7b6a0(lVar8);
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\evp\\p_lib.c",0x86e,"evp_pkey_copy_downgraded");
        FUN_140b91cc0(6,0xcd,"key type = %s",uVar5);
      }
      if (lVar6 != 0) {
        LOCK();
        piVar1 = (int *)(lVar6 + 0x30);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 < 2) {
          FUN_140b80f20(lVar6);
          get_and_lock(0x11,lVar6,lVar6 + 0x50);
          cryptothreads_winc(*(undefined8 *)(lVar6 + 0x38));
          FUN_140b77c60(*(undefined8 *)(lVar6 + 0x40),FUN_140c0fbe0);
          FUN_140b8d990(lVar6,"crypto\\evp\\p_lib.c",0x749);
        }
        *param_1 = 0;
      }
    }
  }
  return 0;
}

