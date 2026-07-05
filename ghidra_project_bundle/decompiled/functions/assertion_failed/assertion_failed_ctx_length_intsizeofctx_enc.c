/**
 * Function: assertion_failed_ctx_length_intsizeofctx_enc
 * Address:  140c703c0
 * Signature: undefined assertion_failed_ctx_length_intsizeofctx_enc(void)
 * Body size: 378 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
assertion_failed_ctx_length_intsizeofctx_enc
          (uint *param_1,undefined1 *param_2,undefined4 *param_3,void *param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  int iVar5;
  
  _Size = (size_t)param_5;
  uVar4 = 0;
  *param_3 = 0;
  if (param_5 < 1) {
    uVar2 = 0;
  }
  else {
    if (0x50 < (int)param_1[1]) {
      s_d_openssl_internal_error_sn
                ("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)",
                 "crypto\\evp\\encode.c",0xab);
    }
    uVar1 = *param_1;
    iVar5 = param_1[1] - uVar1;
    if (param_5 < iVar5) {
      memcpy((void *)((longlong)(int)uVar1 + 8 + (longlong)param_1),param_4,_Size);
      *param_1 = *param_1 + param_5;
    }
    else {
      if (uVar1 != 0) {
        memcpy((void *)((longlong)(int)uVar1 + 8 + (longlong)param_1),param_4,(longlong)iVar5);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar5);
        _Size = (size_t)(uint)(param_5 - iVar5);
        iVar5 = FUN_140c70830(param_1,param_2,param_1 + 2,param_1[1]);
        uVar4 = (ulonglong)iVar5;
        param_2 = param_2 + uVar4;
        *param_1 = 0;
        if ((param_1[0x17] & 1) == 0) {
          *param_2 = 10;
          param_2 = param_2 + 1;
          uVar4 = uVar4 + 1;
        }
        *param_2 = 0;
      }
      uVar1 = param_1[1];
      uVar3 = (uint)_Size;
      if ((int)uVar1 <= (int)uVar3) {
        do {
          if (0x7fffffff < uVar4) goto LAB_140c704f2;
          iVar5 = FUN_140c70830(param_1,param_2,param_4,uVar1);
          param_4 = (void *)((longlong)param_4 + (longlong)(int)param_1[1]);
          uVar3 = (int)_Size - param_1[1];
          _Size = (size_t)uVar3;
          param_2 = param_2 + iVar5;
          uVar4 = uVar4 + (longlong)iVar5;
          if ((param_1[0x17] & 1) == 0) {
            *param_2 = 10;
            param_2 = param_2 + 1;
            uVar4 = uVar4 + 1;
          }
          *param_2 = 0;
          uVar1 = param_1[1];
        } while ((int)uVar1 <= (int)uVar3);
      }
      if (0x7fffffff < uVar4) {
LAB_140c704f2:
        *param_3 = 0;
        return 0;
      }
      if (uVar3 != 0) {
        memcpy(param_1 + 2,param_4,(longlong)(int)uVar3);
      }
      *param_1 = uVar3;
      *param_3 = (int)uVar4;
    }
    uVar2 = 1;
  }
  return uVar2;
}

