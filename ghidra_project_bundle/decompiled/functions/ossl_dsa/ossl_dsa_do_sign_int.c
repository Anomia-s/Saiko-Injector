/**
 * Function: ossl_dsa_do_sign_int
 * Address:  140c99130
 * Signature: undefined ossl_dsa_do_sign_int(void)
 * Body size: 1026 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
ossl_dsa_do_sign_int
          (ulonglong param_1,int param_2,longlong param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar9;
  undefined4 local_res18;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar11;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uVar8;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uStack_40 = 0x140c99154;
  uVar8 = 0;
  uVar7 = 0;
  local_res18 = 0x80003;
  lVar4 = 0;
  local_58 = 0;
  plVar9 = (longlong *)0x0;
  if (((*(longlong *)(param_3 + 8) == 0) || (*(longlong *)(param_3 + 0x10) == 0)) ||
     (*(longlong *)(param_3 + 0x18) == 0)) {
    local_res18 = 0x65;
    uVar8 = uVar7;
    lVar4 = 0;
  }
  else if (*(longlong *)(param_3 + 0x70) == 0) {
    local_res18 = 0x6f;
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)cryptodsadsa_signc();
    if (plVar9 != (longlong *)0x0) {
      lVar3 = FUN_140bfcab0();
      *plVar9 = lVar3;
      lVar3 = FUN_140bfcab0();
      plVar9[1] = lVar3;
      if (((*plVar9 != 0) && (uVar8 = uVar7, lVar4 = 0, lVar3 != 0)) &&
         (lVar4 = FUN_140c936d0(*(undefined8 *)(param_3 + 0xb8)), lVar4 != 0)) {
        local_50 = FUN_140c93a20(lVar4);
        uVar5 = FUN_140c93a20(lVar4);
        local_48 = FUN_140c93a20(lVar4);
        lVar3 = FUN_140c93a20(lVar4);
        if (lVar3 != 0) {
          uVar10 = param_1;
          iVar2 = dsa_sign_setup(param_3,lVar4,&local_58,plVar9,param_1,CONCAT44(uVar11,param_2),
                                 param_4,param_5,param_6,param_7);
          iVar1 = 0;
          while (uVar8 = local_58, iVar2 != 0) {
            iVar2 = FUN_140bfc870(*(undefined8 *)(param_3 + 0x10));
            if ((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3 < param_2) {
              iVar2 = FUN_140bfc870(*(undefined8 *)(param_3 + 0x10));
              param_2 = (int)((iVar2 + 7 >> 0x1f & 7U) + iVar2 + 7) >> 3;
            }
            lVar6 = FUN_140bfcc40(param_1,param_2,local_50);
            uVar8 = local_58;
            if (lVar6 == 0) break;
            do {
              iVar2 = FUN_140bfc870(*(undefined8 *)(param_3 + 0x10));
              uVar10 = uVar10 & 0xffffffff00000000;
              lVar6 = lVar4;
              iVar2 = FUN_140ca3c30(uVar5,iVar2 + -1,0xffffffff,0,uVar10,lVar4);
              uVar11 = (undefined4)((ulonglong)lVar6 >> 0x20);
              uVar8 = local_58;
              if (iVar2 == 0) goto LAB_140c994cb;
              iVar2 = FUN_140bfc7d0(uVar5);
            } while (iVar2 != 0);
            FUN_140bfc6d0(uVar5,4);
            uVar7 = local_48;
            FUN_140bfc6d0(local_48,4);
            FUN_140bfc6d0(lVar3,4);
            iVar2 = FUN_140cc3ac0(lVar3,uVar5,*(undefined8 *)(param_3 + 0x70),
                                  *(undefined8 *)(param_3 + 0x10),lVar4);
            uVar8 = local_58;
            if (((iVar2 == 0) ||
                (iVar2 = FUN_140cc3ac0(lVar3,lVar3,*plVar9,*(undefined8 *)(param_3 + 0x10),lVar4),
                uVar8 = local_58, iVar2 == 0)) ||
               ((iVar2 = FUN_140cc3ac0(uVar7,uVar5,local_50,*(undefined8 *)(param_3 + 0x10),lVar4),
                uVar8 = local_58, iVar2 == 0 ||
                ((((iVar2 = FUN_140cc3990(plVar9[1],lVar3,uVar7,*(undefined8 *)(param_3 + 0x10)),
                   uVar8 = local_58, iVar2 == 0 ||
                   (iVar2 = FUN_140cc3ac0(plVar9[1],plVar9[1],local_58,
                                          *(undefined8 *)(param_3 + 0x10),lVar4), iVar2 == 0)) ||
                  (lVar6 = FUN_140cf3a80(uVar5,uVar5,*(undefined8 *)(param_3 + 0x10),lVar4),
                  lVar6 == 0)) ||
                 (iVar2 = FUN_140cc3ac0(plVar9[1],plVar9[1],uVar5,*(undefined8 *)(param_3 + 0x10),
                                        lVar4), iVar2 == 0)))))) break;
            iVar2 = FUN_140bfc7d0(*plVar9);
            if ((iVar2 == 0) && (iVar2 = FUN_140bfc7d0(plVar9[1]), iVar2 == 0)) goto LAB_140c99507;
            if (8 < iVar1) {
              local_res18 = 0x74;
              break;
            }
            uVar10 = param_1;
            iVar2 = dsa_sign_setup(param_3,lVar4,&local_58,plVar9,param_1,CONCAT44(uVar11,param_2),
                                   param_4,param_5,param_6,param_7);
            iVar1 = iVar1 + 1;
          }
        }
      }
    }
  }
LAB_140c994cb:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\dsa\\dsa_ossl.c",0xc3,"ossl_dsa_do_sign_int");
  FUN_140b91cc0(10,local_res18,0);
  cryptodsadsa_signc(plVar9);
  plVar9 = (longlong *)0x0;
LAB_140c99507:
  FUN_140c93850(lVar4);
  FUN_140bfcb30(uVar8);
  return plVar9;
}

