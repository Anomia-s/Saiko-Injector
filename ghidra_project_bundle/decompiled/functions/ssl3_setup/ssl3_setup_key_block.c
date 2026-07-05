/**
 * Function: ssl3_setup_key_block
 * Address:  140c46be0
 * Signature: undefined ssl3_setup_key_block(void)
 * Body size: 453 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_setup_key_block(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_1 + 0x360) != 0) {
    return 1;
  }
  iVar1 = FUN_140ba6cd0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x8f8),&local_res8,
                        &local_res10,0,0,local_res18,0);
  if (iVar1 == 0) {
    FUN_140ba3200(param_1,0x50);
    return 0;
  }
  FUN_140b6ef70(*(undefined8 *)(param_1 + 0x370));
  *(undefined8 *)(param_1 + 0x370) = local_res8;
  FUN_140b6f050(*(undefined8 *)(param_1 + 0x378));
  *(undefined8 *)(param_1 + 0x378) = local_res10;
  *(undefined8 *)(param_1 + 0x390) = local_res18[0];
  iVar1 = FUN_140b97b40();
  if (iVar1 < 1) {
    return 0;
  }
  iVar2 = FUN_140b97eb0(local_res8);
  iVar3 = FUN_140b97ea0(local_res8);
  iVar1 = (iVar3 + iVar1 + iVar2) * 2;
  FUN_140b8db20(*(undefined8 *)(param_1 + 0x368),*(undefined8 *)(param_1 + 0x360),"ssl\\s3_enc.c",
                0xd8);
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  lVar4 = FUN_140b8d8d0((longlong)iVar1,"ssl\\s3_enc.c",200);
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\s3_enc.c",0xc9,"ssl3_setup_key_block");
    FUN_140ba3290(param_1,0x50,0x8000f,0);
    uVar5 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x360) = (longlong)iVar1;
    *(longlong *)(param_1 + 0x368) = lVar4;
    uVar5 = ssl3_generate_key_block(param_1,lVar4,iVar1);
  }
  return uVar5;
}

