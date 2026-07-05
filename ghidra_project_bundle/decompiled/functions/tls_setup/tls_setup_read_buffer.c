/**
 * Function: tls_setup_read_buffer
 * Address:  140c41bb0
 * Signature: undefined tls_setup_read_buffer(void)
 * Body size: 267 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_setup_read_buffer(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x6a0) == 0) {
    iVar2 = *(int *)(param_1 + 0x104c);
    lVar4 = 0x14;
    if (iVar1 == 0) {
      lVar4 = 0xc;
    }
    iVar3 = FUN_140c42bf0();
    if ((iVar3 != 0) && (lVar4 = 0x414, iVar1 == 0)) {
      lVar4 = 0x40c;
    }
    uVar5 = lVar4 + (ulonglong)(iVar2 + 0x140);
    if (1 < *(ulonglong *)(param_1 + 0x1140)) {
      uVar5 = uVar5 * *(ulonglong *)(param_1 + 0x1140);
    }
    uVar6 = *(ulonglong *)(param_1 + 0x6a8);
    if (*(ulonglong *)(param_1 + 0x6a8) <= uVar5) {
      uVar6 = uVar5;
    }
    lVar4 = FUN_140b8d8d0(uVar6,"ssl\\record\\methods\\tls_common.c",0x105);
    if (lVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\record\\methods\\tls_common.c",0x10b,"tls_setup_read_buffer");
      FUN_140c40330(param_1,0xffffffff,0x8000f,0);
      return 0;
    }
    *(longlong *)(param_1 + 0x6a0) = lVar4;
    *(ulonglong *)(param_1 + 0x6b0) = uVar6;
  }
  return 1;
}

