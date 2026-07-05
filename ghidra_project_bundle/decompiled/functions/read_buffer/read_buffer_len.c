/**
 * Function: read_buffer_len
 * Address:  140c3fdc0
 * Signature: undefined read_buffer_len(void)
 * Body size: 646 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 read_buffer_len(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140b93540(param_2,"options");
  if (lVar2 != 0) {
    iVar1 = FUN_140b940a0(lVar2,param_1 + 0x50);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\record\\methods\\tls_common.c",0x4b3,"tls_set_options");
      FUN_140b91cc0(0x14,0x13c,0);
      return 0;
    }
  }
  lVar2 = FUN_140b93540(param_2,&DAT_1413a62f8);
  if (lVar2 != 0) {
    iVar1 = FUN_140b93b70(lVar2,param_1 + 0x58);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\record\\methods\\tls_common.c",0x4b9,"tls_set_options");
      FUN_140b91cc0(0x14,0x13c,0);
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    lVar2 = FUN_140b93540(param_2,"read_buffer_len");
    if (lVar2 != 0) {
      iVar1 = FUN_140b94310(lVar2,param_1 + 0x6a8);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0x4c1,"tls_set_options");
        FUN_140b91cc0(0x14,0x13c,0);
        return 0;
      }
    }
  }
  else {
    lVar2 = FUN_140b93540(param_2,"block_padding");
    if (lVar2 != 0) {
      iVar1 = FUN_140b94310(lVar2,param_1 + 0x1060);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0x4c8,"tls_set_options");
        FUN_140b91cc0(0x14,0x13c,0);
        return 0;
      }
    }
    lVar2 = FUN_140b93540(param_2,"hs_padding");
    if (lVar2 != 0) {
      iVar1 = FUN_140b94310(lVar2,param_1 + 0x1068);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0x4ce,"tls_set_options");
        FUN_140b91cc0(0x14,0x13c,0);
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x20) == 3) {
    lVar2 = FUN_140b93540(param_2,"read_ahead");
    if (lVar2 != 0) {
      iVar1 = FUN_140b93920(lVar2,param_1 + 0x100c);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\record\\methods\\tls_common.c",0x4dd,"tls_set_options");
        FUN_140b91cc0(0x14,0x13c,0);
        return 0;
      }
    }
  }
  return 1;
}

