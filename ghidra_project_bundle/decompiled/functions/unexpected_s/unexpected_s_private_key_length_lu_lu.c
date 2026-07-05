/**
 * Function: unexpected_s_private_key_length_lu_lu
 * Address:  140d37b60
 * Signature: undefined unexpected_s_private_key_length_lu_lu(void)
 * Body size: 359 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 unexpected_s_private_key_length_lu_lu(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  undefined4 uVar5;
  undefined8 uVar4;
  
  uVar5 = 1;
  if (param_1 == (longlong *)0x0) {
    return 1;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if ((param_2[1] != 0) && (uVar5 = 1, lVar2 = FUN_140b93540(param_1,&DAT_1413a64f0), lVar2 != 0)) {
    local_res10 = param_2[4] + param_2[1];
    iVar1 = FUN_140b95120(lVar2,&local_res10,param_2[6],&local_res8);
    if (iVar1 != 1) {
      return 0;
    }
    if (CONCAT44(uStackX_c,local_res8) != param_2[6]) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\mlx_kmgmt.c",0xb4,"export_sub_cb");
      uVar4 = param_2[6];
      pcVar3 = "Unexpected %s public key length %lu != %lu";
      goto LAB_140d37c0c;
    }
    *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + 1;
  }
  if (param_2[2] == 0) {
    return 1;
  }
  lVar2 = FUN_140b93540(param_1,&DAT_1413a59dc);
  if (lVar2 == 0) {
    return 1;
  }
  local_res10 = param_2[5] + param_2[2];
  iVar1 = FUN_140b95120(lVar2,&local_res10,param_2[7],&local_res8);
  if (iVar1 != 1) {
    return 0;
  }
  if (CONCAT44(uStackX_c,local_res8) == param_2[7]) {
    *(int *)((longlong)param_2 + 0x1c) = *(int *)((longlong)param_2 + 0x1c) + 1;
    return 1;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\keymgmt\\mlx_kmgmt.c",0xc3,"export_sub_cb");
  pcVar3 = "Unexpected %s private key length %lu != %lu";
  uVar4 = CONCAT44(uVar5,*(undefined4 *)(param_2 + 6));
LAB_140d37c0c:
  FUN_140b91cc0(0x39,0xc0103,pcVar3,*param_2,local_res8,uVar4);
  return 0;
}

