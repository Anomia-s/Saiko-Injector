/**
 * Function: evp_pkey_ctx_get_signature_md
 * Address:  140b7afa0
 * Signature: undefined evp_pkey_ctx_get_signature_md(void)
 * Body size: 405 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_pkey_ctx_get_signature_md(uint *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98 [48];
  undefined1 local_68;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined8 uStack_4f;
  undefined8 local_47;
  undefined8 uStack_3f;
  undefined8 local_37;
  undefined8 uStack_2f;
  undefined8 local_27;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140b7afb0;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_118;
  local_68 = 0;
  local_27 = 0;
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  local_67 = 0;
  uStack_5f = 0;
  local_57 = 0;
  uStack_4f = 0;
  local_47 = 0;
  uStack_3f = 0;
  local_37 = 0;
  uStack_2f = 0;
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0xc1f0) == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\evp\\pmeth_lib.c",0x39f,"EVP_PKEY_CTX_get_signature_md");
    FUN_140b91cc0(6,0x93,0);
  }
  else if (*(longlong *)(param_1 + 0xc) == 0) {
    local_f8 = 0;
    local_f0 = param_2;
    FUN_140b7bc20(0,0xffffffff,0xc1f0,0xd);
  }
  else {
    puVar2 = (undefined8 *)FUN_140b93780(local_98,"digest",&local_68,0x50);
    local_e8 = *puVar2;
    uStack_e0 = puVar2[1];
    local_d8 = *(undefined4 *)(puVar2 + 2);
    uStack_d4 = *(undefined4 *)((longlong)puVar2 + 0x14);
    uStack_d0 = *(undefined4 *)(puVar2 + 3);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0x1c);
    local_c8 = puVar2[4];
    puVar2 = (undefined8 *)FUN_140b93900(local_98);
    local_c0 = *puVar2;
    uStack_b8 = puVar2[1];
    local_b0 = *(undefined4 *)(puVar2 + 2);
    uStack_ac = *(undefined4 *)((longlong)puVar2 + 0x14);
    uStack_a8 = *(undefined4 *)(puVar2 + 3);
    uStack_a4 = *(undefined4 *)((longlong)puVar2 + 0x1c);
    local_a0 = puVar2[4];
    iVar1 = FUN_140b7b7c0(param_1,&local_e8);
    if ((iVar1 != 0) && (lVar3 = FUN_140b99bf0(*(undefined8 *)(param_1 + 2),&local_68), lVar3 != 0))
    {
      *param_2 = lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_118);
}

