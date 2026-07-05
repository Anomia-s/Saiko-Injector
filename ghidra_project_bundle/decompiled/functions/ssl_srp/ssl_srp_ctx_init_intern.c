/**
 * Function: ssl_srp_ctx_init_intern
 * Address:  140bc4ab0
 * Signature: undefined ssl_srp_ctx_init_intern(void)
 * Body size: 862 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_srp_ctx_init_intern(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 8), lVar1 == 0)) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0xbc8) = 0;
  *(undefined8 *)(param_1 + 0xbd0) = 0;
  *(undefined8 *)(param_1 + 0xbd8) = 0;
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  *(undefined8 *)(param_1 + 0xbf8) = 0;
  *(undefined8 *)(param_1 + 0xc00) = 0;
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined8 *)(param_1 + 0xc10) = 0;
  *(undefined8 *)(param_1 + 0xc18) = 0;
  *(undefined8 *)(param_1 + 0xc20) = 0;
  *(undefined8 *)(param_1 + 0xc28) = 0;
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xc38) = 0;
  *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(lVar1 + 0x340);
  *(undefined8 *)(param_1 + 0xbd0) = *(undefined8 *)(lVar1 + 0x348);
  *(undefined8 *)(param_1 + 0xbd8) = *(undefined8 *)(lVar1 + 0x350);
  *(undefined8 *)(param_1 + 0xbe0) = *(undefined8 *)(lVar1 + 0x358);
  *(undefined4 *)(param_1 + 0xc38) = *(undefined4 *)(lVar1 + 0x3b0);
  if (*(longlong *)(lVar1 + 0x368) != 0) {
    lVar2 = FUN_140bfd090();
    *(longlong *)(param_1 + 0xbf0) = lVar2;
    if (lVar2 != 0) goto LAB_140bc4b88;
LAB_140bc4c5b:
    uVar4 = 0x80003;
    uVar3 = 0x82;
    goto LAB_140bc4ce5;
  }
LAB_140bc4b88:
  if (*(longlong *)(lVar1 + 0x370) != 0) {
    lVar2 = FUN_140bfd090();
    *(longlong *)(param_1 + 0xbf8) = lVar2;
    if (lVar2 == 0) goto LAB_140bc4c5b;
  }
  if (*(longlong *)(lVar1 + 0x378) != 0) {
    lVar2 = FUN_140bfd090();
    *(longlong *)(param_1 + 0xc00) = lVar2;
    if (lVar2 == 0) goto LAB_140bc4c5b;
  }
  if (*(longlong *)(lVar1 + 0x380) != 0) {
    lVar2 = FUN_140bfd090();
    *(longlong *)(param_1 + 0xc08) = lVar2;
    if (lVar2 == 0) goto LAB_140bc4c5b;
  }
  if (*(longlong *)(lVar1 + 0x388) != 0) {
    lVar2 = FUN_140bfd090();
    *(longlong *)(param_1 + 0xc10) = lVar2;
    if (lVar2 == 0) goto LAB_140bc4c5b;
  }
  if (*(longlong *)(lVar1 + 0x390) != 0) {
    lVar2 = FUN_140bfd090();
    *(longlong *)(param_1 + 0xc18) = lVar2;
    if (lVar2 == 0) goto LAB_140bc4c5b;
  }
  if (*(longlong *)(lVar1 + 0x3a0) != 0) {
    lVar2 = FUN_140bfd090();
    *(longlong *)(param_1 + 0xc28) = lVar2;
    if (lVar2 == 0) goto LAB_140bc4c5b;
  }
  if (*(longlong *)(lVar1 + 0x398) != 0) {
    lVar2 = FUN_140bfd090();
    *(longlong *)(param_1 + 0xc20) = lVar2;
    if (lVar2 == 0) goto LAB_140bc4c5b;
  }
  if (*(longlong *)(lVar1 + 0x360) == 0) {
LAB_140bc4ca9:
    if (*(longlong *)(lVar1 + 0x3a8) == 0) {
LAB_140bc4dee:
      *(undefined4 *)(param_1 + 0xc3c) = *(undefined4 *)(lVar1 + 0x3b4);
      return 1;
    }
    lVar2 = FUN_140b8c830(*(longlong *)(lVar1 + 0x3a8),"ssl\\tls_srp.c",0x8b);
    *(longlong *)(param_1 + 0xc30) = lVar2;
    if (lVar2 != 0) goto LAB_140bc4dee;
    uVar3 = 0x8c;
  }
  else {
    lVar2 = FUN_140b8c830(*(longlong *)(lVar1 + 0x360),"ssl\\tls_srp.c",0x86);
    *(longlong *)(param_1 + 0xbe8) = lVar2;
    if (lVar2 != 0) goto LAB_140bc4ca9;
    uVar3 = 0x87;
  }
  uVar4 = 0xc0103;
LAB_140bc4ce5:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\tls_srp.c",uVar3,"ssl_srp_ctx_init_intern");
  FUN_140b91cc0(0x14,uVar4,0);
  FUN_140b8d990(*(undefined8 *)(param_1 + 0xbe8),"ssl\\tls_srp.c",0x93);
  FUN_140b8d990(*(undefined8 *)(param_1 + 0xc30),"ssl\\tls_srp.c",0x94);
  FUN_140bfcf10(*(undefined8 *)(param_1 + 0xbf0));
  FUN_140bfcf10(*(undefined8 *)(param_1 + 0xbf8));
  FUN_140bfcf10(*(undefined8 *)(param_1 + 0xc00));
  FUN_140bfcf10(*(undefined8 *)(param_1 + 0xc08));
  FUN_140bfcf10(*(undefined8 *)(param_1 + 0xc10));
  FUN_140bfcf10(*(undefined8 *)(param_1 + 0xc18));
  FUN_140bfcf10(*(undefined8 *)(param_1 + 0xc20));
  FUN_140bfcf10(*(undefined8 *)(param_1 + 0xc28));
  *(undefined8 *)(param_1 + 0xbc8) = 0;
  *(undefined8 *)(param_1 + 0xbd0) = 0;
  *(undefined8 *)(param_1 + 0xbd8) = 0;
  *(undefined8 *)(param_1 + 0xbe0) = 0;
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  *(undefined8 *)(param_1 + 0xbf8) = 0;
  *(undefined8 *)(param_1 + 0xc00) = 0;
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined8 *)(param_1 + 0xc10) = 0;
  *(undefined8 *)(param_1 + 0xc18) = 0;
  *(undefined8 *)(param_1 + 0xc20) = 0;
  *(undefined8 *)(param_1 + 0xc28) = 0;
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xc38) = 0;
  return 0;
}

