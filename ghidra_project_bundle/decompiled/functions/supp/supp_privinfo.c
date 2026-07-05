/**
 * Function: supp_privinfo
 * Address:  140d23900
 * Signature: undefined supp_privinfo(void)
 * Body size: 815 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 supp_privinfo(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  
  uVar2 = FUN_140b76070(*param_1);
  uVar6 = 0;
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
LAB_140d23c0b:
    uVar2 = 1;
  }
  else {
    lVar3 = FUN_140b93540(param_2,"digest");
    if (lVar3 == 0) {
LAB_140d239c5:
      lVar3 = FUN_140b93540(param_2,"secret");
      if ((((((lVar3 == 0) && (lVar3 = FUN_140b93540(param_2,&DAT_1413a593c), lVar3 == 0)) ||
            (iVar1 = FUN_140d243c0(param_1 + 4,param_1 + 5,lVar3), iVar1 != 0)) &&
           ((lVar3 = FUN_140b93540(param_2,"acvp-info"), lVar3 == 0 ||
            (iVar1 = FUN_140d243c0(param_1 + 6,param_1 + 7,lVar3), iVar1 != 0)))) &&
          (((lVar3 = FUN_140b93540(param_2,"partyu-info"), lVar3 == 0 &&
            (lVar3 = FUN_140b93540(param_2,&DAT_1413a5fd0), lVar3 == 0)) ||
           (iVar1 = FUN_140d243c0(param_1 + 8,param_1 + 0xc,lVar3), iVar1 != 0)))) &&
         ((lVar3 = FUN_140b93540(param_2,"partyv-info"), lVar3 == 0 ||
          (iVar1 = FUN_140d243c0(param_1 + 9,param_1 + 0xd,lVar3), iVar1 != 0)))) {
        lVar3 = FUN_140b93540(param_2,"use-keybits");
        if ((lVar3 == 0) || (iVar1 = FUN_140b93920(lVar3,param_1 + 0x13), iVar1 != 0)) {
          lVar3 = FUN_140b93540(param_2,"supp-pubinfo");
          if (lVar3 != 0) {
            iVar1 = FUN_140d243c0(param_1 + 10,param_1 + 0xe,lVar3);
            if (iVar1 == 0) goto LAB_140d23bd7;
            *(undefined4 *)(param_1 + 0x13) = 0;
          }
          lVar3 = FUN_140b93540(param_2,"supp-privinfo");
          if ((lVar3 == 0) || (iVar1 = FUN_140d243c0(param_1 + 0xb,param_1 + 0xf,lVar3), iVar1 != 0)
             ) {
            lVar3 = FUN_140b93540(param_2,"cekalg");
            if (lVar3 == 0) goto LAB_140d23c0b;
            if (*(int *)(lVar3 + 8) == 4) {
              lVar5 = FUN_140b93540(param_2,"properties");
              uVar8 = uVar6;
              if (lVar5 != 0) {
                uVar8 = *(ulonglong *)(lVar3 + 0x10);
              }
              lVar3 = FUN_140b84390(uVar2,*(undefined8 *)(lVar3 + 0x10),uVar8);
              if (lVar3 != 0) {
                ppuVar7 = &PTR_s_AES_128_WRAP_1412f2de0;
                do {
                  iVar1 = FUN_140b97e10(lVar3,*ppuVar7);
                  if (iVar1 != 0) {
                    FUN_140b843f0(lVar3);
                    param_1[0x11] = (&PTR_DAT_1412f2de8)[uVar6 * 4];
                    param_1[0x12] = (&DAT_1412f2df0)[uVar6 * 4];
                    param_1[0x10] = (&DAT_1412f2df8)[uVar6 * 4];
                    goto LAB_140d23c0b;
                  }
                  uVar6 = uVar6 + 1;
                  ppuVar7 = ppuVar7 + 4;
                } while (uVar6 < 4);
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("providers\\implementations\\kdfs\\x942kdf.c",0x61,"find_alg_id");
              FUN_140b91cc0(0x39,0x91,0);
              FUN_140b843f0(lVar3);
            }
          }
        }
      }
    }
    else {
      iVar1 = FUN_140d718b0(param_1 + 1,param_2,uVar2);
      if (iVar1 != 0) {
        uVar4 = FUN_140b8c100(param_1 + 1);
        iVar1 = FUN_140b97c00(uVar4);
        if (iVar1 != 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("providers\\implementations\\kdfs\\x942kdf.c",0x225,"x942kdf_set_ctx_params");
          FUN_140b91cc0(0x39,0xb7,0);
          return 0;
        }
        goto LAB_140d239c5;
      }
    }
LAB_140d23bd7:
    uVar2 = 0;
  }
  return uVar2;
}

