/**
 * Function: assertion_failed_bl_intsizeofctx_buf
 * Address:  140b87440
 * Signature: undefined assertion_failed_bl_intsizeofctx_buf(void)
 * Body size: 891 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool assertion_failed_bl_intsizeofctx_buf
               (longlong *param_1,void *param_2,uint *param_3,void *param_4,uint param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong _Size;
  
  _Size = (ulonglong)(int)param_5;
  iVar4 = FUN_140b98900(param_1,0x2000);
  uVar7 = param_5;
  if (iVar4 != 0) {
    if ((int)param_5 < 1) {
      if (param_5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = param_5 & 0x80000007;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
        }
        iVar4 = param_5 + ((int)param_5 >> 0x1f & 7U);
        iVar6 = iVar4 >> 3;
        if ((iVar6 < 0) ||
           (((0 < iVar6 && ((int)(uint)(uVar7 != 0) <= 0x7fffffff - iVar6)) || (iVar6 == 0)))) {
          uVar7 = iVar6 + (uint)(uVar7 != 0);
        }
        else {
          uVar7 = (iVar4 >> 0x1f & 1U) + 0x7fffffff;
        }
      }
    }
    else if ((int)param_5 < 0x7ffffff7) {
      uVar7 = (int)(((int)(param_5 + 7) >> 0x1f & 7U) + param_5 + 7) >> 3;
    }
    else {
      uVar7 = (uint)((_Size & 7) != 0) + (param_5 >> 3);
    }
  }
  lVar2 = *param_1;
  uVar5 = *(uint *)(lVar2 + 4);
  if ((*(uint *)(lVar2 + 0x10) & 0x100000) == 0) {
    if ((int)param_5 < 1) {
      *param_3 = 0;
      return param_5 == 0;
    }
    iVar4 = *(int *)((longlong)param_1 + 0x14);
    uVar1 = ((longlong)iVar4 - (longlong)param_4) + (longlong)param_2;
    if (0 < (int)uVar7 &&
        (uVar1 != 0 &&
        ((ulonglong)-(longlong)(int)uVar7 < uVar1 || uVar1 < (ulonglong)(longlong)(int)uVar7))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\evp_enc.c",0x395,"evp_EncryptDecryptUpdate");
      FUN_140b91cc0(6,0xa2,0);
      return false;
    }
    if ((iVar4 == 0) && ((*(uint *)((longlong)param_1 + 0x84) & param_5) == 0)) {
      iVar4 = (**(code **)(lVar2 + 0x20))(param_1,param_2,param_4,_Size);
      if (iVar4 == 0) {
        *param_3 = 0;
        return false;
      }
      *param_3 = param_5;
    }
    else {
      if (0x20 < (int)uVar5) {
        s_d_openssl_internal_error_sn
                  ("assertion failed: bl <= (int)sizeof(ctx->buf)","crypto\\evp\\evp_enc.c",0x3a3);
      }
      uVar7 = 0;
      if (iVar4 != 0) {
        iVar6 = uVar5 - iVar4;
        if ((int)param_5 < iVar6) {
          memcpy((void *)((longlong)iVar4 + 0x38 + (longlong)param_1),param_4,_Size);
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + param_5;
          *param_3 = 0;
          goto LAB_140b87799;
        }
        param_5 = param_5 - iVar6;
        if ((int)(0x7fffffff - uVar5) < (int)(-uVar5 & param_5)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\evp\\evp_enc.c",0x3b5,"evp_EncryptDecryptUpdate");
          FUN_140b91cc0(6,0xca,0);
          return false;
        }
        memcpy((void *)((longlong)iVar4 + 0x38 + (longlong)param_1),param_4,(longlong)iVar6);
        param_4 = (void *)((longlong)param_4 + (longlong)iVar6);
        iVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_1 + 7,(longlong)(int)uVar5);
        if (iVar4 == 0) goto LAB_140b87583;
        param_2 = (void *)((longlong)param_2 + (longlong)(int)uVar5);
        uVar7 = uVar5;
      }
      *param_3 = uVar7;
      uVar7 = uVar5 - 1 & param_5;
      iVar4 = param_5 - uVar7;
      if (0 < iVar4) {
        iVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_4,(longlong)iVar4);
        if (iVar6 == 0) goto LAB_140b87583;
        *param_3 = *param_3 + iVar4;
      }
      if (uVar7 != 0) {
        memcpy(param_1 + 7,(void *)((longlong)iVar4 + (longlong)param_4),(longlong)(int)uVar7);
      }
      *(uint *)((longlong)param_1 + 0x14) = uVar7;
    }
LAB_140b87799:
    bVar3 = true;
  }
  else {
    if (uVar5 == 1) {
      uVar5 = 0;
      if (param_2 != param_4) {
        uVar5 = (uint)((ulonglong)-(longlong)(int)uVar7 <
                       (ulonglong)((longlong)param_2 - (longlong)param_4) ||
                      (ulonglong)((longlong)param_2 - (longlong)param_4) <
                      (ulonglong)(longlong)(int)uVar7);
      }
      if ((0 < (int)uVar7 & uVar5) == 0) goto LAB_140b8758a;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\evp\\evp_enc.c",900,"evp_EncryptDecryptUpdate");
      FUN_140b91cc0(6,0xa2,0);
    }
    else {
LAB_140b8758a:
      uVar7 = (**(code **)(lVar2 + 0x20))(param_1,param_2,param_4,_Size);
      if (-1 < (int)uVar7) {
        *param_3 = uVar7;
        goto LAB_140b87799;
      }
    }
LAB_140b87583:
    bVar3 = false;
  }
  return bVar3;
}

