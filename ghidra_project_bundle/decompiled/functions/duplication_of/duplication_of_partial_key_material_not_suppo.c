/**
 * Function: duplication_of_partial_key_material_not_suppo
 * Address:  140d376c0
 * Signature: undefined duplication_of_partial_key_material_not_suppo(void)
 * Body size: 365 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong duplication_of_partial_key_material_not_suppo(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_140b8c7c0(param_1,0x38,"providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x2e1);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar3 = FUN_140b8c830(*(longlong *)(lVar2 + 8),
                          "providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x2e5);
    *(longlong *)(lVar2 + 8) = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0x2e6;
      goto LAB_140d37732;
    }
  }
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    if (*(longlong *)(lVar2 + 0x28) == 0) {
      return lVar2;
    }
    uVar4 = 0x2ef;
  }
  else {
    if ((param_2 & 3) == 0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      return lVar2;
    }
    if ((param_2 & 3) == 3) {
      uVar4 = FUN_140b7ee40(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(lVar2 + 0x20) = uVar4;
      lVar3 = FUN_140b7ee40(*(undefined8 *)(param_1 + 0x28));
      *(longlong *)(lVar2 + 0x28) = lVar3;
      if ((lVar3 != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) {
        return lVar2;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x2fe,"mlx_kem_dup");
      FUN_140b91cc0(0x39,0xfa,"duplication of partial key material not supported");
    }
    FUN_140b8d990(*(undefined8 *)(lVar2 + 8),"providers\\implementations\\keymgmt\\mlx_kmgmt.c",0x44
                 );
    FUN_140b7efe0(*(undefined8 *)(lVar2 + 0x20));
    FUN_140b7efe0(*(undefined8 *)(lVar2 + 0x28));
    uVar4 = 0x47;
  }
LAB_140d37732:
  FUN_140b8d990(lVar2,"providers\\implementations\\keymgmt\\mlx_kmgmt.c",uVar4);
  return 0;
}

