/**
 * Function: evp_md_init_internal
 * Address:  140b71f50
 * Signature: undefined evp_md_init_internal(void)
 * Body size: 1463 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
evp_md_init_internal(undefined8 *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong *plVar10;
  ulonglong in_stack_ffffffffffffffb8;
  
  lVar8 = 0;
  puVar3 = (uint *)param_1[5];
  if (((puVar3 != (uint *)0x0) && (uVar2 = *puVar3, (uVar2 & 0xc1f0) != 0)) &&
     (*(longlong *)(puVar3 + 0xc) != 0)) {
    if (uVar2 == 0x80) {
      uVar7 = FUN_140bd06e0(param_1,0,param_2,param_4,0);
      return uVar7;
    }
    if (uVar2 != 0x100) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\digest.c",0xb2,"evp_md_init_internal");
      FUN_140b91cc0(6,0xbd,0);
      return 0;
    }
    uVar7 = FUN_140bd0d80(param_1,0,param_2,param_4,0);
    return uVar7;
  }
  FUN_140b988e0(param_1,0x802);
  if (param_2 == (int *)0x0) {
    param_2 = (int *)param_1[1];
    if (param_2 == (int *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\digest.c",0xbe,"evp_md_init_internal");
      FUN_140b91cc0(6,0x8b,0);
      return 0;
    }
  }
  else {
    *param_1 = param_2;
  }
  if (((param_1[2] != 0) && ((int *)param_1[1] != (int *)0x0)) && (*param_2 == *(int *)param_1[1]))
  goto LAB_140b724a0;
  engine_unlocked_finish();
  param_1[2] = 0;
  if (((param_4 == 0) && (lVar8 = FUN_140bd1d50(*param_2), param_1[2] == 0)) &&
     ((lVar8 == 0 && (((*(uint *)(param_1 + 3) & 0x100) == 0 && (param_2[4] != 2)))))) {
    if (param_1[1] != 0) {
      if ((*(longlong *)(param_1[1] + 0x38) != 0) && (iVar6 = FUN_140b988f0(param_1,2), iVar6 == 0))
      {
        (**(code **)(param_1[1] + 0x38))(param_1);
      }
      if ((param_1[4] != 0) && (0 < *(int *)(param_1[1] + 0x44))) {
        FUN_140b988f0(param_1,4);
        FUN_140b8db20(param_1[4],(longlong)*(int *)(param_1[1] + 0x44),"crypto\\evp\\digest.c",0x26)
        ;
        param_1[4] = 0;
      }
    }
    if ((int *)param_1[1] == param_2) {
      if (*(longlong *)(param_2 + 0x1a) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0xfb;
        goto LAB_140b72126;
      }
    }
    else {
      iVar6 = FUN_140b71c00(param_1);
      if (iVar6 == 0) {
        return 0;
      }
      if (*(longlong *)(param_2 + 0x1a) == 0) {
        if (*param_2 == 0) {
          puVar9 = &DAT_1413a68b4;
        }
        else {
          puVar9 = (undefined *)FUN_140b96490();
        }
        param_2 = (int *)FUN_140bd58f0(0,1,puVar9,&DAT_1413a2ad6,blocksize,FUN_140b719d0,
                                       FUN_140b719e0);
        if (param_2 == (int *)0x0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar7 = 0x10f;
          goto LAB_140b72126;
        }
        lVar8 = param_1[8];
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 0)) {
          LOCK();
          piVar1 = (int *)(lVar8 + 0x70);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 < 2) {
            FUN_140b99470();
          }
        }
        param_1[8] = param_2;
      }
    }
    if ((*(longlong *)(param_2 + 0x1a) != 0) && ((int *)param_1[8] != param_2)) {
      if (param_2[4] == 0) {
        LOCK();
        param_2[0x1c] = param_2[0x1c] + 1;
        UNLOCK();
      }
      lVar8 = param_1[8];
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == 0)) {
        LOCK();
        piVar1 = (int *)(lVar8 + 0x70);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 < 2) {
          FUN_140b99470();
        }
      }
      param_1[8] = param_2;
    }
    lVar8 = param_1[7];
    param_1[1] = param_2;
    if (lVar8 == 0) {
      pcVar4 = *(code **)(param_2 + 0x1e);
      uVar7 = FUN_140bd3830(*(undefined8 *)(param_2 + 0x1a));
      lVar8 = (*pcVar4)(uVar7);
      param_1[7] = lVar8;
      if (lVar8 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0x124;
        goto LAB_140b72126;
      }
    }
    if (*(code **)(param_1[1] + 0x80) != (code *)0x0) {
      uVar7 = (**(code **)(param_1[1] + 0x80))(lVar8,param_3);
      return uVar7;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar7 = 0x12a;
LAB_140b72126:
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\digest.c",uVar7,"evp_md_init_internal");
    FUN_140b91cc0(6,0x86,0);
    return 0;
  }
  iVar6 = FUN_140b71c00(param_1);
  if (iVar6 == 0) {
    return 0;
  }
  lVar5 = param_1[8];
  if (param_1[1] == lVar5) {
    param_1[1] = 0;
  }
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == 0)) {
    LOCK();
    piVar1 = (int *)(lVar5 + 0x70);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 < 2) {
      FUN_140b99470();
    }
  }
  param_1[8] = 0;
  if (param_2 != (int *)0x0) {
    if (param_4 == 0) {
      if (lVar8 == 0) {
        param_1[2] = 0;
        goto LAB_140b723eb;
      }
    }
    else {
      iVar6 = cryptoengineeng_initc(param_4);
      lVar8 = param_4;
      if (iVar6 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0x137;
        goto LAB_140b72126;
      }
    }
    param_2 = (int *)FUN_140bd1ce0(lVar8,*param_2);
    if (param_2 == (int *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\digest.c",0x143,"evp_md_init_internal");
      FUN_140b91cc0(6,0x86,0);
      engine_unlocked_finish(lVar8);
      return 0;
    }
    param_1[2] = lVar8;
  }
LAB_140b723eb:
  plVar10 = param_1 + 1;
  piVar1 = (int *)*plVar10;
  if (piVar1 != param_2) {
    if (piVar1 != (int *)0x0) {
      if ((*(longlong *)(piVar1 + 0xe) != 0) && (iVar6 = FUN_140b988f0(param_1,2), iVar6 == 0)) {
        (**(code **)(*plVar10 + 0x38))(param_1);
      }
      if ((param_1[4] != 0) && (0 < *(int *)(*plVar10 + 0x44))) {
        FUN_140b988f0(param_1,4);
        FUN_140b8db20(param_1[4],(longlong)*(int *)(param_1[1] + 0x44),"crypto\\evp\\digest.c",0x26)
        ;
        param_1[4] = 0;
      }
    }
    param_1[1] = param_2;
    if (((*(uint *)(param_1 + 3) & 0x100) == 0) && (param_2[0x11] != 0)) {
      param_1[6] = *(undefined8 *)(param_2 + 8);
      lVar8 = FUN_140b8da80((longlong)param_2[0x11],"crypto\\evp\\digest.c",0x158);
      param_1[4] = lVar8;
      if (lVar8 == 0) {
        return 0;
      }
    }
  }
LAB_140b724a0:
  puVar3 = (uint *)param_1[5];
  if (((puVar3 != (uint *)0x0) &&
      ((((*puVar3 & 0xc1f0) == 0 || (*(longlong *)(puVar3 + 10) == 0)) &&
       (iVar6 = FUN_140b7bc20(puVar3,0xffffffff,0xc1f0,7,
                              in_stack_ffffffffffffffb8 & 0xffffffff00000000,param_1), iVar6 < 1))))
     && (iVar6 != -2)) {
    return 0;
  }
  if ((*(uint *)(param_1 + 3) & 0x100) == 0) {
    uVar7 = (**(code **)(param_1[1] + 0x18))(param_1);
    return uVar7;
  }
  return 1;
}

