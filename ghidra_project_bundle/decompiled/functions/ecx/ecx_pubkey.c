/**
 * Function: ecx_pubkey
 * Address:  140d51550
 * Signature: undefined ecx_pubkey(void)
 * Body size: 807 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ecx_pubkey(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6,void *param_7,void *param_8)

{
  undefined2 *puVar1;
  void *_Size;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *_Src;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined *local_230;
  undefined1 *local_228;
  undefined8 local_220;
  char *local_218;
  undefined1 *local_210;
  void *local_208;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  void *local_1d0;
  void *local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [64];
  undefined1 local_178 [112];
  undefined1 local_108 [176];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140d51567;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_258;
  _Src = (void *)0x0;
  local_1e0 = param_5;
  puVar1 = *(undefined2 **)(param_1 + 0x40);
  local_1d8 = param_6;
  pvVar7 = (void *)0x0;
  _Size = *(void **)(puVar1 + 0x18);
  local_1d0 = param_7;
  local_1c8 = param_8;
  local_1e8 = *(longlong *)(param_1 + 8);
  local_238 = &local_1f0;
  local_230 = (undefined *)0x70;
  local_1f0 = 0;
  local_1c0 = param_2;
  iVar4 = FUN_140c13210(param_4,param_3,*(undefined8 *)(param_3 + 0x58),local_178);
  pvVar6 = _Src;
  pvVar5 = _Src;
  if (iVar4 == 0) goto LAB_140d5184c;
  pvVar6 = _Size;
  pvVar5 = pvVar7;
  if (local_1e8 != 0) {
    local_238 = &local_1f0;
    local_230 = (undefined *)(0x70 - (longlong)_Size);
    local_1f0 = 0;
    iVar4 = FUN_140c13210(local_1d8,local_1e0,*(undefined8 *)(local_1e0 + 0x58),
                          local_178 + (longlong)_Size);
    if (iVar4 == 0) goto LAB_140d5184c;
    lVar2 = *(longlong *)(param_1 + 8);
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x10) & 1) == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\kem\\ecx_kem.c",0x98,"ecx_pubkey");
      FUN_140b91cc0(0x39,0xdc,0);
      goto LAB_140d5184c;
    }
    _Src = (void *)(lVar2 + 0x14);
    if (_Src == (void *)0x0) goto LAB_140d5184c;
    pvVar6 = (void *)((longlong)_Size * 2);
  }
  if ((void *)((longlong)_Size + (longlong)pvVar6) < (void *)0xa9) {
    memcpy(local_108,local_1d0,(size_t)_Size);
    memcpy(local_108 + (longlong)_Size,local_1c8,(size_t)_Size);
    if (local_1e8 != 0) {
      memcpy(local_108 + (longlong)_Size * 2,_Src,(size_t)_Size);
    }
    pvVar5 = (void *)ossl_kdf_ctx_create(*(undefined8 *)(param_1 + 0x38),
                                         *(undefined8 *)(puVar1 + 0xc),
                                         *(undefined8 *)(param_1 + 0x10),
                                         *(undefined8 *)(param_1 + 0x18));
    if (pvVar5 != (void *)0x0) {
      puVar3 = *(undefined8 **)(puVar1 + 0x10);
      if (puVar3 < (undefined8 *)0x41) {
        local_1f7 = (undefined1)*puVar1;
        local_1f8 = (undefined1)((ushort)*puVar1 >> 8);
        local_210 = local_178;
        local_218 = "eae_prk";
        local_228 = &local_1f8;
        local_220 = 2;
        local_230 = &DAT_1413030c0;
        local_238 = (undefined8 *)0x0;
        local_208 = pvVar6;
        iVar4 = FUN_140cfc630(pvVar5,local_1b8,puVar3,0);
        if (iVar4 != 0) {
          local_210 = local_108;
          local_218 = "shared_secret";
          local_228 = &local_1f8;
          local_220 = 2;
          local_230 = &DAT_1413030c0;
          local_238 = puVar3;
          local_208 = (void *)((longlong)_Size + (longlong)pvVar6);
          iVar4 = FUN_140cfc870(pvVar5,local_1c0,puVar3,local_1b8);
          if (iVar4 != 0) {
            FUN_14046e980(local_1b8,puVar3);
            goto LAB_140d5184c;
          }
        }
        FUN_14046e980(local_1b8,puVar3);
      }
    }
  }
LAB_140d5184c:
  FUN_14046e980(local_178,pvVar6);
  FUN_140c481d0(pvVar5);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_258);
}

