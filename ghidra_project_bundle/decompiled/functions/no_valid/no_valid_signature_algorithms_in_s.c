/**
 * Function: no_valid_signature_algorithms_in_s
 * Address:  140bb0b90
 * Signature: undefined no_valid_signature_algorithms_in_s(void)
 * Body size: 370 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void no_valid_signature_algorithms_in_s
               (longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  size_t _Size;
  longlong lVar1;
  int iVar2;
  void *_Dst;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_c8;
  undefined1 local_c0 [128];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  local_c8 = 0;
  if (param_1 != 0) {
    local_40 = param_1;
  }
  local_d8 = &local_c8;
  iVar2 = FUN_140c1aad0(param_3,0x3a,1,ecdsa_secp256r1_sha256);
  lVar1 = local_c8;
  if (iVar2 != 0) {
    if (local_c8 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\t1_lib.c",0xef3,"tls1_set_sigalgs_list");
      FUN_140b91cc0(0x14,0x80106,"No valid signature algorithms in \'%s\'",param_3);
    }
    else if (param_2 != 0) {
      _Size = local_c8 * 2;
      _Dst = (void *)FUN_140b8d8d0(_Size,"ssl\\t1_lib.c",0xf01);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_c0,_Size);
        if (param_4 == 0) {
          FUN_140b8d990(*(undefined8 *)(param_2 + 0x40),"ssl\\t1_lib.c",0xf0a);
          *(void **)(param_2 + 0x40) = _Dst;
          *(longlong *)(param_2 + 0x48) = lVar1;
        }
        else {
          FUN_140b8d990(*(undefined8 *)(param_2 + 0x50),"ssl\\t1_lib.c",0xf06);
          *(void **)(param_2 + 0x50) = _Dst;
          *(longlong *)(param_2 + 0x58) = lVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_f8);
}

