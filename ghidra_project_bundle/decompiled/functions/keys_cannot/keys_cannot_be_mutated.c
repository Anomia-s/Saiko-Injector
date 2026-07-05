/**
 * Function: keys_cannot_be_mutated
 * Address:  140d370d0
 * Signature: undefined keys_cannot_be_mutated(void)
 * Body size: 504 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int keys_cannot_be_mutated(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res8;
  undefined8 local_res10;
  
  iVar5 = 0;
  local_res10 = 0;
  local_res8 = 0;
  if (((param_2 == (longlong *)0x0) || (*param_2 == 0)) ||
     (lVar4 = FUN_140b93540(param_2,"encoded-pub-key"), lVar4 == 0)) {
    return 1;
  }
  if (*(int *)(param_1 + 6) != 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x25d,"mlx_kem_set_params");
    FUN_140b91cc0(0x39,0xb2,"keys cannot be mutated");
    return 0;
  }
  iVar2 = FUN_140b95610(lVar4,&local_res10,&local_res8);
  if (iVar2 != 0) {
    lVar4 = FUN_140b93540(param_2,"properties");
    if (lVar4 != 0) {
      FUN_140b8d990(param_1[1],"providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x268);
      param_1[1] = 0;
      iVar2 = FUN_140b94f00(lVar4,param_1 + 1,0);
      if (iVar2 == 0) {
        return 0;
      }
    }
    uVar1 = local_res10;
    lVar4 = local_res8;
    iVar2 = iVar5;
    if (local_res8 == *(longlong *)(param_1[3] + 0x10) + *(longlong *)(param_1[2] + 0x18)) {
      while ((lVar4 == 0 ||
             (iVar3 = FUN_140d37de0(*param_1,param_1[1],&DAT_1413a64f0,5,param_1,iVar2,uVar1,
                                    *(undefined4 *)(param_1[2] + 0x18),
                                    *(undefined4 *)(param_1[3] + 0x10)), iVar3 != 0))) {
        iVar2 = iVar2 + 1;
        if (1 < iVar2) {
          iVar5 = 1;
LAB_140d37282:
          *(int *)(param_1 + 6) = iVar5;
          return iVar5;
        }
      }
      FUN_140b7efe0(param_1[4]);
      FUN_140b7efe0(param_1[5]);
      param_1[4] = 0;
      param_1[5] = 0;
      goto LAB_140d37282;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x26f,"mlx_kem_set_params");
    FUN_140b91cc0(0x39,0x9e,0);
  }
  return 0;
}

