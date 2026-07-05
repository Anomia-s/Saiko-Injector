/**
 * Function: evp_rand_generate_locked
 * Address:  140c18b90
 * Signature: undefined evp_rand_generate_locked(void)
 * Body size: 521 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
evp_rand_generate_locked
          (longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  undefined1 local_a8 [48];
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_res8 = 0;
  local_78 = 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  puVar2 = (undefined8 *)FUN_140b93670(local_a8,"max_request",&local_res8);
  local_78 = *puVar2;
  uStack_70 = puVar2[1];
  local_68 = puVar2[2];
  uStack_60 = puVar2[3];
  local_58 = puVar2[4];
  iVar1 = (**(code **)(*param_1 + 0xa0))(param_1[1],&local_78);
  if ((iVar1 != 0) && (local_res8 != 0)) {
    while( true ) {
      if (param_3 == 0) {
        return 1;
      }
      uVar3 = param_3;
      if (local_res8 < param_3) {
        uVar3 = local_res8;
      }
      iVar1 = (**(code **)(*param_1 + 0x50))
                        (param_1[1],param_2,uVar3,param_4,param_5,param_6,param_7);
      if (iVar1 == 0) break;
      param_2 = param_2 + uVar3;
      param_3 = param_3 - uVar3;
      param_5 = 0;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\evp_rand.c",0x23c,"evp_rand_generate_locked");
    FUN_140b91cc0(6,0xd6,0);
    return 0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\evp\\evp_rand.c",0x235,"evp_rand_generate_locked");
  FUN_140b91cc0(6,0xd7,0);
  return 0;
}

