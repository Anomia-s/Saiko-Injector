/**
 * Function: ossl_quic_set_connect_state
 * Address:  140bca2c0
 * Signature: undefined ossl_quic_set_connect_state(void)
 * Body size: 162 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_quic_set_connect_state(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_48 [24];
  longlong local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x140bca2d0;
  uVar3 = 0x101;
  if (param_2 != 0) {
    uVar3 = 1;
  }
  iVar2 = qc_try_create_default_xso_for_write(param_1,local_48,uVar3);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(local_30 + 0x100);
  if ((uVar1 & 4) != 0) {
    if ((uVar1 & 1) != 0) {
      if (param_2 == 0) {
        return 0;
      }
      FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",0x6b3,"ossl_quic_set_connect_state",0x118,0);
      return 0;
    }
    *(uint *)(local_30 + 0x100) = uVar1 & 0xfffffffb;
  }
  return 1;
}

