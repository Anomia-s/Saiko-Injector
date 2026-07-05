/**
 * Function: dsa_do_verify
 * Address:  140c98cc0
 * Signature: undefined dsa_do_verify(void)
 * Body size: 1021 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dsa_do_verify(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_res20;
  undefined8 local_58 [3];
  
  uVar9 = 0;
  uVar11 = 0;
  if (((*(longlong *)(param_4 + 8) == 0) || (*(longlong *)(param_4 + 0x10) == 0)) ||
     (*(longlong *)(param_4 + 0x18) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dsa\\dsa_ossl.c",0x16f,"dsa_do_verify");
    FUN_140b91cc0(10,0x65,0);
    return 0xffffffff;
  }
  iVar2 = FUN_140bfc870();
  if (((iVar2 - 0xa0U & 0xffffff9f) != 0) || (iVar2 == 0xc0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dsa\\dsa_ossl.c",0x176,"dsa_do_verify");
    uVar10 = 0x66;
LAB_140c98d67:
    FUN_140b91cc0(10,uVar10,0);
    return 0xffffffff;
  }
  iVar3 = FUN_140bfc870(*(undefined8 *)(param_4 + 8));
  if (10000 < iVar3) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dsa\\dsa_ossl.c",0x17b,"dsa_do_verify");
    uVar10 = 0x67;
    goto LAB_140c98d67;
  }
  lVar4 = FUN_140bfcab0();
  lVar5 = FUN_140bfcab0();
  lVar6 = FUN_140bfcab0();
  lVar7 = FUN_140c936d0(0);
  if (((lVar4 == 0) || (lVar5 == 0)) || ((lVar6 == 0 || (lVar7 == 0)))) goto LAB_140c98fd2;
  FUN_140c6ea90(param_3,&local_res20,local_58);
  iVar3 = FUN_140bfc7d0(local_res20);
  uVar12 = uVar9;
  if (iVar3 != 0) goto LAB_140c99006;
  iVar3 = FUN_140bfcde0(local_res20);
  if (iVar3 != 0) goto LAB_140c99006;
  iVar3 = FUN_140bfd180(local_res20,*(undefined8 *)(param_4 + 0x10));
  if (-1 < iVar3) goto LAB_140c99006;
  iVar3 = FUN_140bfc7d0(local_58[0]);
  uVar12 = uVar11;
  if (iVar3 != 0) goto LAB_140c99006;
  iVar3 = FUN_140bfcde0(local_58[0]);
  if (iVar3 != 0) goto LAB_140c99006;
  iVar3 = FUN_140bfd180(local_58[0],*(undefined8 *)(param_4 + 0x10));
  if (-1 < iVar3) goto LAB_140c99006;
  lVar8 = FUN_140cf3a80(lVar5,local_58[0],*(undefined8 *)(param_4 + 0x10),lVar7);
  if (lVar8 != 0) {
    if (iVar2 >> 3 < param_2) {
      param_2 = iVar2 >> 3;
    }
    lVar8 = FUN_140bfcc40(param_1,param_2,lVar4);
    if (lVar8 != 0) {
      iVar2 = FUN_140cc3ac0(lVar4,lVar4,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
      if (iVar2 != 0) {
        iVar2 = FUN_140cc3ac0(lVar5,local_res20,lVar5,*(undefined8 *)(param_4 + 0x10),lVar7);
        if (iVar2 != 0) {
          if ((*(byte *)(param_4 + 0x78) & 1) != 0) {
            uVar9 = FUN_140c92e90(param_4 + 0x80,*(undefined8 *)(param_4 + 0xb0),
                                  *(undefined8 *)(param_4 + 8),lVar7);
            if (uVar9 == 0) goto LAB_140c98fd2;
          }
          pcVar1 = *(code **)(*(longlong *)(param_4 + 0xa0) + 0x20);
          if (pcVar1 == (code *)0x0) {
            iVar2 = FUN_140cf78b0(lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,
                                  *(undefined8 *)(param_4 + 0x68),lVar5,*(undefined8 *)(param_4 + 8)
                                  ,lVar7,uVar9);
          }
          else {
            iVar2 = (*pcVar1)(param_4,lVar6,*(undefined8 *)(param_4 + 0x18),lVar4,
                              *(undefined8 *)(param_4 + 0x68),lVar5,*(undefined8 *)(param_4 + 8),
                              lVar7,uVar9);
          }
          if (iVar2 != 0) {
            iVar2 = FUN_140c9a180(0,lVar4,lVar6,*(undefined8 *)(param_4 + 0x10),lVar7);
            if (iVar2 != 0) {
              iVar2 = FUN_140bfd180(lVar4,local_res20);
              uVar12 = (ulonglong)(iVar2 == 0);
              goto LAB_140c99006;
            }
          }
        }
      }
    }
  }
LAB_140c98fd2:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dsa\\dsa_ossl.c",0x1c7,"dsa_do_verify");
  FUN_140b91cc0(10,0x80003,0);
  uVar12 = 0xffffffff;
LAB_140c99006:
  FUN_140c93850(lVar7);
  FUN_140bfcf10(lVar4);
  FUN_140bfcf10(lVar5);
  FUN_140bfcf10(lVar6);
  return uVar12;
}

