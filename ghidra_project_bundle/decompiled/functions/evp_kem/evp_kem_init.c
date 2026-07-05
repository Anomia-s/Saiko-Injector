/**
 * Function: evp_kem_init
 * Address:  140c016c0
 * Signature: undefined evp_kem_init(void)
 * Body size: 1547 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int evp_kem_init(int *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  longlong local_res8;
  int local_res10;
  undefined8 local_res18;
  int *local_res20;
  longlong local_68;
  
  lVar7 = 0;
  iVar12 = 0;
  iVar5 = 0;
  local_res8 = 0;
  uVar11 = 0;
  local_68 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_1 == (int *)0x0) || (*(longlong *)(param_1 + 6) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0x2a,"evp_kem_init");
    FUN_140b91cc0(6,0x86,0);
    return 0;
  }
  FUN_140b7c180();
  piVar2 = *(int **)(param_1 + 0x22);
  *param_1 = param_2;
  if (piVar2 == (int *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0x32,"evp_kem_init");
    FUN_140b91cc0(6,0x9a,0);
    iVar5 = iVar12;
    goto LAB_140c01c6a;
  }
  if ((param_4 != (int *)0x0) && (*param_4 != *piVar2)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0x36,"evp_kem_init");
    FUN_140b91cc0(6,0x65,0);
    return 0;
  }
  if ((*(longlong *)(piVar2 + 0x18) != 0) &&
     (*(longlong *)(piVar2 + 0x18) != *(longlong *)(param_1 + 8))) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0x3e,"evp_kem_init");
    FUN_140b91cc0(6,0xc0103,0);
    iVar5 = iVar12;
    goto LAB_140c01c6a;
  }
  lVar6 = FUN_140c07360(*(undefined8 *)(param_1 + 8),0xe);
  if (lVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0x44,"evp_kem_init");
    FUN_140b91cc0(6,0x86,0);
    iVar5 = iVar12;
    goto LAB_140c01c6a;
  }
  iVar12 = 1;
  lVar10 = 0;
  do {
    if (lVar10 != 0) goto LAB_140c01ae1;
    if (lVar7 != 0) {
      LOCK();
      piVar2 = (int *)(lVar7 + 0x20);
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 < 2) {
        FUN_140b8d990(*(undefined8 *)(lVar7 + 8),"crypto\\evp\\kem.c",0x1ba);
        FUN_140bd3160(*(undefined8 *)(lVar7 + 0x18));
        FUN_140b8d990(lVar7,"crypto\\evp\\kem.c",0x1bd);
      }
    }
    FUN_140bfdf00(local_res8);
    if (iVar12 == 1) {
      lVar7 = FUN_140bd58f0(*(undefined8 *)(param_1 + 2),0xe,lVar6,*(undefined8 *)(param_1 + 4),
                            FUN_140c01cd0,FUN_140b827d0,FUN_140c01460);
      if (lVar7 != 0) {
        uVar11 = *(undefined8 *)(lVar7 + 0x18);
        goto LAB_140c01982;
      }
    }
    else {
      if (iVar12 == 2) {
        uVar11 = FUN_140b97dc0(*(undefined8 *)(param_1 + 8));
        lVar7 = FUN_140bd5970(uVar11,0xe,lVar6,*(undefined8 *)(param_1 + 4),FUN_140c01cd0,
                              FUN_140b827d0,FUN_140c01460);
        if (lVar7 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar11 = 0x73;
          goto LAB_140c01c3f;
        }
      }
      else if (lVar7 == 0) goto LAB_140c01a16;
LAB_140c01982:
      uVar3 = *(undefined8 *)(param_1 + 4);
      uVar8 = FUN_140b77290(*(undefined8 *)(param_1 + 8));
      lVar9 = FUN_140bfe4f0(uVar11,uVar8,uVar3);
      local_res8 = lVar9;
      if ((((lVar9 != 0) &&
           (lVar10 = FUN_140b80640(*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 2),
                                   &local_res8,*(undefined8 *)(param_1 + 4)), lVar10 != 0)) &&
          (local_res20 != (int *)0x0)) &&
         (local_68 = FUN_140b80640(local_res20,*(undefined8 *)(param_1 + 2),&local_res8,
                                   *(undefined8 *)(param_1 + 4)), local_68 == 0)) {
        FUN_140c01460(lVar7);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0x91,"evp_kem_init");
        FUN_140b91cc0(6,0x86,0);
        goto LAB_140c01c6a;
      }
      if (local_res8 == 0) {
        FUN_140bfdf00(lVar9);
      }
    }
LAB_140c01a16:
    iVar12 = iVar12 + 1;
  } while (iVar12 < 3);
  if (lVar10 == 0) {
    if (lVar7 != 0) {
      LOCK();
      piVar2 = (int *)(lVar7 + 0x20);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 < 2) {
        FUN_140b8d990(*(undefined8 *)(lVar7 + 8),"crypto\\evp\\kem.c",0x1ba);
        FUN_140bd3160(*(undefined8 *)(lVar7 + 0x18));
        FUN_140b8d990(lVar7,"crypto\\evp\\kem.c",0x1bd);
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0x9c,"evp_kem_init");
    FUN_140b91cc0(6,0x86,0);
    goto LAB_140c01c6a;
  }
LAB_140c01ae1:
  *(longlong *)(param_1 + 10) = lVar7;
  pcVar4 = *(code **)(lVar7 + 0x28);
  uVar11 = FUN_140bd3830(*(undefined8 *)(lVar7 + 0x18));
  lVar6 = (*pcVar4)(uVar11);
  *(longlong *)(param_1 + 0xc) = lVar6;
  if (lVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0xa4,"evp_kem_init");
    FUN_140b91cc0(6,0x86,0);
    goto LAB_140c01c6a;
  }
  if (local_res10 == 0x1000) {
    if (local_68 == 0) {
      if (*(code **)(lVar7 + 0x30) == (code *)0x0) goto LAB_140c01c35;
      iVar5 = (**(code **)(lVar7 + 0x30))(lVar6,lVar10,local_res18);
    }
    else {
      if (*(code **)(lVar7 + 0x80) == (code *)0x0) {
LAB_140c01c35:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar11 = 0xb0;
LAB_140c01c3f:
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",uVar11,"evp_kem_init");
        FUN_140b91cc0(6,0x96,0);
        iVar5 = -2;
        goto LAB_140c01c6a;
      }
      iVar5 = (**(code **)(lVar7 + 0x80))(lVar6,lVar10,local_68,local_res18);
    }
  }
  else {
    if (local_res10 != 0x2000) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\kem.c",0xc2,"evp_kem_init");
      FUN_140b91cc0(6,0x86,0);
      goto LAB_140c01c6a;
    }
    if (local_68 == 0) {
      if (*(longlong *)(lVar7 + 0x30) == 0) goto LAB_140c01bc2;
      iVar5 = (**(code **)(lVar7 + 0x40))(lVar6,lVar10,local_res18);
    }
    else {
      if (*(code **)(lVar7 + 0x88) == (code *)0x0) {
LAB_140c01bc2:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar11 = 0xbc;
        goto LAB_140c01c3f;
      }
      iVar5 = (**(code **)(lVar7 + 0x88))(lVar6,lVar10,local_68,local_res18);
    }
  }
  FUN_140bfdf00(local_res8);
  local_res8 = 0;
  if (0 < iVar5) {
    return 1;
  }
LAB_140c01c6a:
  FUN_140b7c180(param_1);
  *param_1 = 0;
  FUN_140bfdf00(local_res8);
  return iVar5;
}

