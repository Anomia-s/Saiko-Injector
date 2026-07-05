/**
 * Function: p8info_to_encp8
 * Address:  140d67160
 * Signature: undefined p8info_to_encp8(void)
 * Body size: 341 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void p8info_to_encp8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                    undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined8 *local_470;
  undefined4 local_468;
  longlong local_460;
  undefined8 local_458;
  undefined8 local_450;
  ulonglong local_448 [2];
  undefined1 local_438 [1024];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140d67171;
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_498;
  local_470 = param_6;
  local_478 = param_5;
  lVar2 = key_to_p8info();
  if (lVar2 == 0) {
    if (param_4 == 6) {
      FUN_140bde750(param_3);
    }
    else if (param_4 == 0x10) {
      FUN_140b78950(param_3);
    }
  }
  else {
    local_448[0] = 0;
    uVar3 = FUN_140b76070(*param_6);
    if (param_6[2] != 0) {
      local_470 = param_6 + 3;
      local_478 = CONCAT44(local_478._4_4_,1);
      iVar1 = prompt_info_data_type_incorrect(local_438,0x400,local_448,0);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\encode_decode\\encode_key2any.c",0x7b,
                   "p8info_to_encp8");
        FUN_140b91cc0(0x39,0x9f,0);
      }
      else {
        local_450 = 0;
        local_468 = 0;
        local_470 = (undefined8 *)((ulonglong)local_470 & 0xffffffff00000000);
        local_478 = 0;
        local_460 = lVar2;
        local_458 = uVar3;
        pkcs8_encrypt_ex(0xffffffff,param_6[2],local_438,local_448[0] & 0xffffffff);
        FUN_14046e980(local_438,local_448[0]);
      }
    }
    FUN_140c6c1e0(lVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_498);
}

