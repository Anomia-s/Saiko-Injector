/**
 * Function: tls1_setup_key_block
 * Address:  140c44360
 * Signature: undefined tls1_setup_key_block(void)
 * Body size: 668 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_setup_key_block(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 local_38 [24];
  
  uVar6 = 0;
  local_res8[0] = 0;
  local_res18 = 0;
  if (*(longlong *)(param_1 + 0x360) != 0) {
    return 1;
  }
  iVar3 = FUN_140ba6cd0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x8f8),&local_res10,
                        &local_res20,local_res8,&local_res18,local_38,
                        *(undefined4 *)(param_1 + 0xb0c));
  if (iVar3 == 0) {
    FUN_140ba3200(param_1,0x50);
    return 0;
  }
  FUN_140b6ef70(*(undefined8 *)(param_1 + 0x370));
  *(undefined8 *)(param_1 + 0x370) = local_res10;
  FUN_140b6f050(*(undefined8 *)(param_1 + 0x378));
  uVar2 = local_res10;
  *(undefined8 *)(param_1 + 0x378) = local_res20;
  *(undefined4 *)(param_1 + 0x380) = local_res8[0];
  *(longlong *)(param_1 + 0x388) = local_res18;
  iVar3 = FUN_140b97ed0(local_res10);
  if (iVar3 != 6) {
    iVar3 = FUN_140b97ed0(uVar2);
    if (iVar3 != 7) {
      iVar3 = FUN_140b97eb0(uVar2);
      if (iVar3 < 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\t1_enc.c",0x11e,"tls1_setup_key_block");
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        return 0;
      }
      goto LAB_140c444d4;
    }
  }
  iVar3 = 4;
LAB_140c444d4:
  iVar4 = FUN_140b97ea0(local_res10);
  lVar1 = ((longlong)iVar3 + iVar4 + local_res18) * 2;
  FUN_140c46f70(param_1);
  lVar5 = FUN_140b8d8d0(lVar1,"ssl\\t1_enc.c",0x126);
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\t1_enc.c",0x127,"tls1_setup_key_block");
    FUN_140ba3290(param_1,0x50,0x8000f,0);
  }
  else {
    *(longlong *)(param_1 + 0x368) = lVar5;
    *(longlong *)(param_1 + 0x360) = lVar1;
    iVar3 = FUN_140c44db0(param_1,"key expansion",0xd,param_1 + 0x164,0x20,param_1 + 0x184,0x20,0,0,
                          0,0,*(longlong *)(param_1 + 0x8f8) + 0x50,
                          *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 8),lVar5,lVar1,1);
    if (iVar3 != 0) {
      uVar6 = 1;
    }
  }
  return uVar6;
}

