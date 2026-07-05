/**
 * Function: bn_blinding_update
 * Address:  140cb4910
 * Signature: undefined bn_blinding_update(void)
 * Body size: 336 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bn_blinding_update(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bn\\bn_blind.c",0x60,"BN_BLINDING_update");
    FUN_140b91cc0(3,0x6b,0);
    uVar3 = 0;
    goto LAB_140cb4a3e;
  }
  if (*(int *)((longlong)param_1 + 0x24) == -1) {
    *(int *)((longlong)param_1 + 0x24) = 1;
LAB_140cb495d:
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      if (param_1[6] == 0) {
        iVar1 = FUN_140cc3ac0(lVar2,lVar2,lVar2,param_1[3],param_2,0x140cb492a);
        if (iVar1 == 0) goto LAB_140cb4a3e;
        lVar2 = *param_1;
        iVar1 = FUN_140cc3ac0(lVar2,lVar2,lVar2,param_1[3],param_2);
        bVar4 = iVar1 == 0;
        goto LAB_140cb4a02;
      }
      iVar1 = FUN_140c93010();
      if (iVar1 == 0) goto LAB_140cb4a3e;
      lVar2 = *param_1;
      iVar1 = FUN_140c93010(lVar2,lVar2,lVar2,param_1[6],param_2);
      if (iVar1 == 0) goto LAB_140cb4a3e;
    }
  }
  else {
    iVar1 = *(int *)((longlong)param_1 + 0x24) + 1;
    *(int *)((longlong)param_1 + 0x24) = iVar1;
    if (((iVar1 != 0x20) || (param_1[2] == 0)) || ((*(byte *)(param_1 + 5) & 2) != 0))
    goto LAB_140cb495d;
    lVar2 = bn_blinding_create_param(param_1,0,0,param_2,0,0);
    bVar4 = lVar2 == 0;
LAB_140cb4a02:
    uVar3 = 0;
    if (bVar4) goto LAB_140cb4a3e;
  }
  uVar3 = 1;
LAB_140cb4a3e:
  if (*(int *)((longlong)param_1 + 0x24) == 0x20) {
    *(int *)((longlong)param_1 + 0x24) = 0;
  }
  return uVar3;
}

