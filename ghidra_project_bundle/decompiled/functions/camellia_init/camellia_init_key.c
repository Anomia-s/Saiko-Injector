/**
 * Function: camellia_init_key
 * Address:  140ce96e0
 * Signature: undefined camellia_init_key(void)
 * Body size: 230 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 camellia_init_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  
  lVar2 = FUN_140b987a0();
  iVar1 = FUN_140b981e0(param_1);
  iVar1 = FUN_140d80ec0(param_2,iVar1 << 3,lVar2);
  if (iVar1 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\e_camellia.c",0xc9,"camellia_init_key");
    FUN_140b91cc0(6,0x9d,0);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140b76060(param_1);
    iVar1 = FUN_140b97ed0(uVar3);
    if ((iVar1 - 1U < 2) && (param_4 == 0)) {
      pcVar4 = FUN_140d80f50;
    }
    else {
      pcVar4 = FUN_140d80f20;
    }
    puVar5 = (undefined *)0x0;
    *(code **)(lVar2 + 0x118) = pcVar4;
    if (iVar1 == 2) {
      puVar5 = &DAT_140a82970;
    }
    uVar3 = 1;
    *(undefined **)(lVar2 + 0x120) = puVar5;
  }
  return uVar3;
}

