/**
 * Function: kmac_init
 * Address:  140d1aa10
 * Signature: undefined kmac_init(void)
 * Body size: 680 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 kmac_init(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  size_t _Size;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *_Dst;
  ulonglong uVar9;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  iVar1 = FUN_140b69250();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_140d1a860(param_1,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\macs\\kmac_prov.c",0x143,"kmac_init");
      uVar8 = 0x72;
      goto LAB_140d1aae5;
    }
  }
  else {
    iVar1 = FUN_140d1b2c0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_140b8c100(param_1 + 0x10);
  iVar1 = FUN_140b70ff0(uVar3,uVar2,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = FUN_140b8c100(param_1 + 0x10);
  iVar1 = evp_md_get_block_size(uVar3);
  uVar9 = (ulonglong)iVar1;
  if (0 < iVar1) {
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_140d1a860(param_1);
    }
    _Src = (void *)(param_1 + 0x2e4);
    iVar5 = 0;
    if (_Src != (void *)0x0) {
      iVar5 = *(int *)(param_1 + 0x38);
    }
    uVar6 = (longlong)(iVar5 + 8) + -1 + uVar9;
    lVar7 = uVar6 - uVar6 % uVar9;
    puVar4 = (undefined1 *)
             FUN_140b8d8d0(lVar7,"providers\\implementations\\macs\\kmac_prov.c",0x15f);
    if (puVar4 == (undefined1 *)0x0) {
      return 0;
    }
    _Size = *(size_t *)(param_1 + 0x38);
    if (uVar9 < 0x100) {
      *puVar4 = 1;
      puVar4[1] = (char)iVar1;
      *(undefined4 *)(puVar4 + 2) = 0x4d4b2001;
      *(undefined2 *)(puVar4 + 6) = 0x4341;
      _Dst = puVar4 + 8;
      if ((_Src != (void *)0x0) && (_Size != 0)) {
        memcpy(_Dst,_Src,_Size);
        _Dst = _Dst + _Size;
      }
      iVar5 = (int)_Dst - (int)puVar4;
      iVar1 = (int)(((longlong)iVar5 + -1 + uVar9) / uVar9) * iVar1;
      if (iVar1 != iVar5) {
        memset(_Dst,0,(longlong)(iVar1 - iVar5));
      }
      iVar1 = evp_digestupdate(uVar8,puVar4,lVar7);
      if ((iVar1 != 0) &&
         (iVar1 = evp_digestupdate(uVar8,param_1 + 0x44,*(undefined8 *)(param_1 + 0x30)), iVar1 != 0
         )) {
        uVar3 = 1;
      }
    }
    FUN_140b8d990(puVar4,"providers\\implementations\\macs\\kmac_prov.c",0x166);
    return uVar3;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("providers\\implementations\\macs\\kmac_prov.c",0x14c,"kmac_init");
  uVar8 = 0xa6;
LAB_140d1aae5:
  FUN_140b91cc0(0x39,uVar8,0);
  return 0;
}

