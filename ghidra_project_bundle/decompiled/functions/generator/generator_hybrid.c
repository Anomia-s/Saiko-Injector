/**
 * Function: generator_hybrid
 * Address:  140d6a830
 * Signature: undefined generator_hybrid(void)
 * Body size: 769 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 generator_hybrid(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 local_res20;
  undefined8 local_48;
  
  uVar9 = 0;
  uVar11 = 0;
  local_48 = 0;
  lVar3 = FUN_140c936d0(param_3);
  if (lVar3 == 0) {
    return 0;
  }
  bn_ctx_start(lVar3);
  uVar1 = FUN_140c0bda0(param_2);
  lVar4 = FUN_140b77290(param_2);
  if (lVar4 != 0) {
    lVar5 = FUN_140b74cb0(param_2);
    if (lVar5 != 0) {
      local_48 = FUN_140b9f2c0(param_2);
    }
    lVar6 = FUN_140b772a0(param_2);
    uVar7 = FUN_140b96490(uVar1);
    iVar2 = FUN_140c078a0(param_1,"Field Type: %s\n",uVar7);
    if (0 < iVar2) {
      pcVar10 = "Prime:";
      uVar7 = FUN_140c93a20(lVar3);
      local_res20 = FUN_140c93a20(lVar3);
      lVar8 = FUN_140c93a20(lVar3);
      if ((lVar8 != 0) && (iVar2 = FUN_140c0bf00(param_2,uVar7,local_res20,lVar8,lVar3), iVar2 != 0)
         ) {
        iVar2 = FUN_140c0bda0(param_2);
        if (iVar2 == 0x197) {
          iVar2 = FUN_140c0daf0(param_2);
          if (iVar2 == 0) goto LAB_140d6ab0c;
          uVar9 = FUN_140b96490(iVar2);
          iVar2 = FUN_140c078a0(param_1,"Basis Type: %s\n",uVar9);
          uVar9 = uVar11;
          if (iVar2 < 1) goto LAB_140d6ab0c;
          pcVar10 = "Polynomial:";
        }
        iVar2 = sssllu_s0xllxn(param_1,pcVar10,uVar7);
        uVar9 = uVar11;
        if (((iVar2 != 0) && (iVar2 = sssllu_s0xllxn(param_1,"A:   ",local_res20), iVar2 != 0)) &&
           (iVar2 = sssllu_s0xllxn(param_1,"B:   ",lVar8), iVar2 != 0)) {
          local_res20 = 0;
          iVar2 = FUN_140c0bdd0(param_2);
          lVar8 = FUN_140b76c30(param_2);
          if (lVar8 != 0) {
            if (iVar2 == 2) {
              pcVar10 = "Generator (compressed):";
            }
            else if (iVar2 == 4) {
              pcVar10 = "Generator (uncompressed):";
            }
            else {
              if (iVar2 != 6) goto LAB_140d6ab0c;
              pcVar10 = "Generator (hybrid):";
            }
            lVar8 = FUN_140c944b0(param_2,lVar8,iVar2,&local_res20,lVar3);
            if (lVar8 != 0) {
              iVar2 = FUN_140c11cf0(param_1,pcVar10,local_res20,lVar8);
              FUN_140b8db20(local_res20,lVar8,
                            "providers\\implementations\\encode_decode\\encode_key2text.c",0xf4);
              if ((((iVar2 != 0) && (iVar2 = sssllu_s0xllxn(param_1,"Order: ",lVar4), iVar2 != 0))
                  && ((lVar6 == 0 ||
                      (iVar2 = sssllu_s0xllxn(param_1,"Cofactor: ",lVar6), iVar2 != 0)))) &&
                 ((lVar5 == 0 || (iVar2 = FUN_140c11cf0(param_1,"Seed:",lVar5,local_48), iVar2 != 0)
                  ))) {
                uVar9 = 1;
              }
            }
          }
        }
      }
    }
  }
LAB_140d6ab0c:
  FUN_140c93bc0(lVar3);
  FUN_140c93850(lVar3);
  return uVar9;
}

