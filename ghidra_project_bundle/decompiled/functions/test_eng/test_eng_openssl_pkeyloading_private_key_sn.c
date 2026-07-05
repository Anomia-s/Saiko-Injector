/**
 * Function: test_eng_openssl_pkeyloading_private_key_sn
 * Address:  140c733a0
 * Signature: undefined test_eng_openssl_pkeyloading_private_key_sn(void)
 * Body size: 125 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 test_eng_openssl_pkeyloading_private_key_sn(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = __acrt_iob_func(2);
  FUN_14002b100(uVar1,"(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n",param_2);
  lVar2 = calling_fopens_s(param_2,&DAT_1413a64f4);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_140bf5b60(lVar2,0,0,0);
  FUN_140b73150(lVar2);
  return uVar1;
}

