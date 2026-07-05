/**
 * Function: test_eng_openssl_rc4_test_init_key_calledn
 * Address:  140c73420
 * Signature: undefined test_eng_openssl_rc4_test_init_key_calledn(void)
 * Body size: 171 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int test_eng_openssl_rc4_test_init_key_calledn(undefined8 param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Dst;
  longlong lVar3;
  
  iVar1 = FUN_140b981e0();
  uVar2 = __acrt_iob_func(2);
  FUN_14002b100(uVar2,"(TEST_ENG_OPENSSL_RC4) test_init_key() called\n");
  if (iVar1 < 1) {
    return iVar1;
  }
  _Dst = (void *)FUN_140b987a0(param_1);
  memcpy(_Dst,param_2,(longlong)iVar1);
  lVar3 = FUN_140b987a0(param_1);
  uVar2 = FUN_140b987a0(param_1);
  FUN_1408451e0(lVar3 + 0x10,iVar1,uVar2);
  return 1;
}

