/**
 * Function: recommended_private_length_d_bitsn
 * Address:  140c962a0
 * Signature: undefined recommended_private_length_d_bitsn(void)
 * Body size: 446 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
recommended_private_length_d_bitsn(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  
  uVar4 = 0x80007;
  if (param_4 == 2) {
    lVar3 = *(longlong *)(param_2 + 0x78);
    lVar6 = *(longlong *)(param_2 + 0x70);
  }
  else {
    lVar3 = 0;
    if (param_4 < 1) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x70);
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    if (param_4 != 2) {
      if (param_4 < 1) {
LAB_140c9636f:
        pcVar5 = "DH Public-Key";
        if (param_4 != 1) {
          pcVar5 = "DH Parameters";
        }
      }
      else {
LAB_140c9635b:
        if (lVar6 == 0) goto LAB_140c96305;
        if (param_4 != 2) goto LAB_140c9636f;
        pcVar5 = "DH Private-Key";
      }
      iVar1 = FUN_140b73ea0(param_1,param_3,0x80);
      if (iVar1 != 0) {
        uVar2 = FUN_140c0aa20(param_2);
        iVar1 = FUN_140c078a0(param_1,"%s: (%d bit)\n",pcVar5,uVar2);
        if (0 < iVar1) {
          param_3 = param_3 + 4;
          iVar1 = s_slu_s0xlxn(param_1,"private-key:",lVar3,0,param_3);
          if ((((iVar1 != 0) &&
               (iVar1 = s_slu_s0xlxn(param_1,"public-key:",lVar6,0,param_3), iVar1 != 0)) &&
              (iVar1 = subgroup_factor(param_1,param_2 + 8,param_3), iVar1 != 0)) &&
             ((*(int *)(param_2 + 0x68) == 0 ||
              ((iVar1 = FUN_140b73ea0(param_1,param_3,0x80), iVar1 != 0 &&
               (iVar1 = FUN_140c078a0(param_1,"recommended-private-length: %d bits\n",
                                      *(undefined4 *)(param_2 + 0x68)), 0 < iVar1)))))) {
            return 1;
          }
        }
      }
      goto LAB_140c9630b;
    }
    if (lVar3 != 0) goto LAB_140c9635b;
  }
LAB_140c96305:
  uVar4 = 0xc0102;
LAB_140c9630b:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dh\\dh_ameth.c",0x128,"do_dh_print");
  FUN_140b91cc0(5,uVar4,0);
  return 0;
}

