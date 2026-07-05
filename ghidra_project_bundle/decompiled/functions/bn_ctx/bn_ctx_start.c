/**
 * Function: bn_ctx_start
 * Address:  140c93910
 * Signature: undefined bn_ctx_start(void)
 * Body size: 264 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bn_ctx_start(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *_Dst;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) == iVar1) {
    if (iVar1 == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = (uint)(iVar1 * 3) >> 1;
    }
    _Dst = (void *)FUN_140b8d8d0((ulonglong)uVar3 << 2,"crypto\\bn\\bn_ctx.c",0x10d);
    if (_Dst == (void *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bn\\bn_ctx.c",0xbb,"BN_CTX_start");
      FUN_140b91cc0(3,0x6d,0);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
    if (*(uint *)(param_1 + 0x28) != 0) {
      memcpy(_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x28) << 2);
    }
    FUN_140b8d990(*(undefined8 *)(param_1 + 0x20),"crypto\\bn\\bn_ctx.c",0x111);
    *(void **)(param_1 + 0x20) = _Dst;
    *(uint *)(param_1 + 0x2c) = uVar3;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 4) = uVar2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

