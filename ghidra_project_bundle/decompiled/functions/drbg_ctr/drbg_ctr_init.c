/**
 * Function: drbg_ctr_init
 * Address:  140d2ce30
 * Signature: undefined drbg_ctr_init(void)
 * Body size: 486 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 drbg_ctr_init(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1[4] == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\rands\\drbg_ctr.c",0x239,"drbg_ctr_init");
    FUN_140b91cc0(0x39,0x9b,0);
    return 0;
  }
  iVar2 = FUN_140b97ea0();
  plVar1[5] = (longlong)iVar2;
  if (*plVar1 == 0) {
    lVar4 = FUN_140b857c0();
    *plVar1 = lVar4;
  }
  lVar4 = plVar1[1];
  if (lVar4 == 0) {
    lVar4 = FUN_140b857c0();
    plVar1[1] = lVar4;
  }
  if ((*plVar1 == 0) || (lVar4 == 0)) {
    uVar5 = 0x242;
LAB_140d2cfb4:
    uVar6 = 0x80006;
  }
  else {
    uVar5 = CONCAT44(uVar7,1);
    iVar3 = FUN_140b85520(*plVar1,plVar1[3],0,0,0,uVar5);
    if (iVar3 != 0) {
      uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),1);
      iVar3 = FUN_140b85520(plVar1[1],plVar1[4],0,0,0,uVar5);
      uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x78) = iVar2 * 8;
        *(longlong *)(param_1 + 0xe0) = (longlong)iVar2 + 0x10;
        if ((int)plVar1[6] == 0) goto LAB_140d2cf99;
        lVar4 = plVar1[2];
        if (lVar4 == 0) {
          lVar4 = FUN_140b857c0();
          plVar1[2] = lVar4;
          if (lVar4 == 0) {
            uVar5 = 0x25d;
            goto LAB_140d2cfb4;
          }
        }
        iVar2 = FUN_140b85520(lVar4,plVar1[3],0,&DAT_1412f46b0,0,CONCAT44(uVar7,1));
        if (iVar2 != 0) {
LAB_140d2cf99:
          uVar5 = FUN_140d2cd70(param_1);
          return uVar5;
        }
        uVar6 = 0xcd;
        uVar5 = 0x263;
        goto LAB_140d2cfb9;
      }
    }
    uVar6 = 0xd0;
    uVar5 = 0x24a;
  }
LAB_140d2cfb9:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\rands\\drbg_ctr.c",uVar5,"drbg_ctr_init");
  FUN_140b91cc0(0x39,uVar6,0);
  FUN_140b858e0(*plVar1);
  FUN_140b858e0(plVar1[1]);
  plVar1[1] = 0;
  *plVar1 = 0;
  return 0;
}

