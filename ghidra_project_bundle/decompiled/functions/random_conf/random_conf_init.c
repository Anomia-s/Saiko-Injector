/**
 * Function: random_conf_init
 * Address:  140b83f10
 * Signature: undefined random_conf_init(void)
 * Body size: 1145 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 random_conf_init(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  
  uVar2 = FUN_140b6a6a0(param_2);
  lVar3 = FUN_140c17600(uVar2,5);
  uVar9 = 1;
  uVar4 = FUN_140b77290(param_1);
  lVar5 = FUN_140c1a380(param_2,uVar4);
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\rand\\rand_lib.c",0x3df,"random_conf_init");
    FUN_140b91cc0(0xf,0x77,0);
    return 0;
  }
  if (lVar3 == 0) {
LAB_140b842d3:
    uVar9 = 0;
  }
  else {
    iVar10 = 0;
    iVar1 = FUN_140b77980(lVar5);
    if (0 < iVar1) {
      do {
        lVar6 = FUN_140b77990(lVar5,iVar10);
        iVar1 = FUN_140b8c6a0(*(undefined8 *)(lVar6 + 8),"random");
        if (iVar1 == 0) {
          lVar7 = 0;
          if ((*(longlong *)(lVar6 + 0x10) != 0) &&
             (lVar7 = FUN_140b8c830(*(longlong *)(lVar6 + 0x10),"crypto\\rand\\rand_lib.c",0x3c5),
             lVar7 == 0)) goto LAB_140b842d3;
          FUN_140b8d990(*(undefined8 *)(lVar3 + 0x30),"crypto\\rand\\rand_lib.c");
          *(longlong *)(lVar3 + 0x30) = lVar7;
        }
        else {
          iVar1 = FUN_140b8c6a0(*(undefined8 *)(lVar6 + 8),"cipher");
          if (iVar1 == 0) {
            lVar7 = 0;
            if ((*(longlong *)(lVar6 + 0x10) != 0) &&
               (lVar7 = FUN_140b8c830(*(longlong *)(lVar6 + 0x10),"crypto\\rand\\rand_lib.c",0x3c5),
               lVar7 == 0)) goto LAB_140b842d3;
            FUN_140b8d990(*(undefined8 *)(lVar3 + 0x38),"crypto\\rand\\rand_lib.c");
            *(longlong *)(lVar3 + 0x38) = lVar7;
          }
          else {
            iVar1 = FUN_140b8c6a0(*(undefined8 *)(lVar6 + 8),"digest");
            if (iVar1 == 0) {
              lVar7 = 0;
              if ((*(longlong *)(lVar6 + 0x10) != 0) &&
                 (lVar7 = FUN_140b8c830(*(longlong *)(lVar6 + 0x10),"crypto\\rand\\rand_lib.c",0x3c5
                                       ), lVar7 == 0)) goto LAB_140b842d3;
              FUN_140b8d990(*(undefined8 *)(lVar3 + 0x40),"crypto\\rand\\rand_lib.c");
              *(longlong *)(lVar3 + 0x40) = lVar7;
            }
            else {
              iVar1 = FUN_140b8c6a0(*(undefined8 *)(lVar6 + 8),"properties");
              if (iVar1 == 0) {
                lVar7 = 0;
                if ((*(longlong *)(lVar6 + 0x10) != 0) &&
                   (lVar7 = FUN_140b8c830(*(longlong *)(lVar6 + 0x10),"crypto\\rand\\rand_lib.c",
                                          0x3c5), lVar7 == 0)) goto LAB_140b842d3;
                FUN_140b8d990(*(undefined8 *)(lVar3 + 0x48),"crypto\\rand\\rand_lib.c");
                *(longlong *)(lVar3 + 0x48) = lVar7;
              }
              else {
                iVar1 = FUN_140b8c6a0(*(undefined8 *)(lVar6 + 8),&DAT_1413a641c);
                if (iVar1 == 0) {
                  lVar7 = 0;
                  if ((*(longlong *)(lVar6 + 0x10) != 0) &&
                     (lVar7 = FUN_140b8c830(*(longlong *)(lVar6 + 0x10),"crypto\\rand\\rand_lib.c",
                                            0x3c5), lVar7 == 0)) goto LAB_140b842d3;
                  FUN_140b8d990(*(undefined8 *)(lVar3 + 0x50),"crypto\\rand\\rand_lib.c");
                  *(longlong *)(lVar3 + 0x50) = lVar7;
                }
                else {
                  iVar1 = FUN_140b8c6a0(*(undefined8 *)(lVar6 + 8),"seed_properties");
                  if (iVar1 == 0) {
                    lVar7 = 0;
                    if ((*(longlong *)(lVar6 + 0x10) != 0) &&
                       (lVar7 = FUN_140b8c830(*(longlong *)(lVar6 + 0x10),"crypto\\rand\\rand_lib.c"
                                              ,0x3c5), lVar7 == 0)) goto LAB_140b842d3;
                    FUN_140b8d990(*(undefined8 *)(lVar3 + 0x58),"crypto\\rand\\rand_lib.c");
                    *(longlong *)(lVar3 + 0x58) = lVar7;
                  }
                  else {
                    iVar1 = FUN_140b8c6a0(*(undefined8 *)(lVar6 + 8),"random_provider");
                    if (iVar1 == 0) {
                      lVar7 = FUN_140bd2d00(uVar2,*(undefined8 *)(lVar6 + 0x10),0);
                      if (lVar7 == 0) {
                        iVar1 = FUN_140b838e0(lVar3,*(undefined8 *)(lVar6 + 0x10));
                        if (iVar1 == 0) goto LAB_140b842d3;
                      }
                      else {
                        lVar6 = FUN_140c17600(uVar2,5);
                        if (lVar6 == 0) {
LAB_140b8434d:
                          d_aplatformplatformopenssl_srccryptoerrerr_lo();
                          d_aplatformplatformopenssl_srccryptoerrerr_lo
                                    ("crypto\\rand\\rand_lib.c",0x400,"random_conf_init");
                          FUN_140b91cc0(0xf,0xc0103,0);
                          FUN_140c171b0(lVar7);
                          goto LAB_140b842d3;
                        }
                        if (*(longlong *)(lVar6 + 0x18) != lVar7) {
                          uVar4 = FUN_140c17270(lVar7);
                          if ((*(longlong *)(lVar6 + 0x20) == 0) ||
                             (iVar1 = FUN_140b8c6a0(*(longlong *)(lVar6 + 0x20),uVar4), iVar1 != 0))
                          {
                            FUN_140b8d990(*(undefined8 *)(lVar6 + 0x20),"crypto\\rand\\rand_lib.c",
                                          0x81);
                            lVar8 = FUN_140b8c830(uVar4,"crypto\\rand\\rand_lib.c");
                            *(longlong *)(lVar6 + 0x20) = lVar8;
                            if (lVar8 == 0) goto LAB_140b8434d;
                          }
                          *(longlong *)(lVar6 + 0x18) = lVar7;
                        }
                        FUN_140c171b0(lVar7);
                      }
                    }
                    else {
                      d_aplatformplatformopenssl_srccryptoerrerr_lo();
                      d_aplatformplatformopenssl_srccryptoerrerr_lo
                                ("crypto\\rand\\rand_lib.c",0x414,"random_conf_init");
                      FUN_140b91cc0(0xf,0x78,"name=%s, value=%s",*(undefined8 *)(lVar6 + 8),
                                    *(undefined8 *)(lVar6 + 0x10));
                      uVar9 = 0;
                    }
                  }
                }
              }
            }
          }
        }
        iVar10 = iVar10 + 1;
        iVar1 = FUN_140b77980(lVar5);
      } while (iVar10 < iVar1);
    }
  }
  return uVar9;
}

