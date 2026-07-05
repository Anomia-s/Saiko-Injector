/**
 * Function: i2o_sct_signature
 * Address:  140ba19a0
 * Signature: undefined i2o_sct_signature(void)
 * Body size: 639 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong i2o_sct_signature(int *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *_Dst;
  undefined1 *puVar10;
  undefined1 *_Dst_00;
  
  iVar7 = FUN_140ba12b0();
  if (iVar7 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ct\\ct_oct.c",0xcc,"i2o_SCT");
    FUN_140b91cc0(0x32,0x6a,0);
    puVar9 = (undefined1 *)0x0;
LAB_140ba1a0a:
    FUN_140b8d990(puVar9,"crypto\\ct\\ct_oct.c",0xf9);
    uVar8 = 0xffffffff;
  }
  else {
    if (*param_1 == 0) {
      uVar8 = *(longlong *)(param_1 + 0xe) + *(longlong *)(param_1 + 0x14) + 0x2f;
    }
    else {
      uVar8 = *(ulonglong *)(param_1 + 4);
    }
    if (param_2 != (undefined8 *)0x0) {
      _Dst = (undefined1 *)*param_2;
      if (_Dst == (undefined1 *)0x0) {
        puVar9 = (undefined1 *)FUN_140b8d8d0(uVar8,"crypto\\ct\\ct_oct.c",0xe1);
        _Dst = puVar9;
        puVar10 = puVar9;
        if (puVar9 == (undefined1 *)0x0) goto LAB_140ba1a0a;
      }
      else {
        puVar9 = _Dst + uVar8;
        puVar10 = (undefined1 *)0x0;
      }
      *param_2 = puVar9;
      if (*param_1 == 0) {
        *_Dst = 0;
        _Dst_00 = _Dst + 0x2b;
        puVar1 = *(undefined4 **)(param_1 + 6);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(_Dst + 1) = *puVar1;
        *(undefined4 *)(_Dst + 5) = uVar3;
        *(undefined4 *)(_Dst + 9) = uVar4;
        *(undefined4 *)(_Dst + 0xd) = uVar5;
        uVar6 = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(_Dst + 0x11) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(_Dst + 0x19) = uVar6;
        _Dst[0x21] = *(undefined1 *)((longlong)param_1 + 0x2f);
        _Dst[0x22] = *(undefined1 *)((longlong)param_1 + 0x2e);
        _Dst[0x23] = *(undefined1 *)((longlong)param_1 + 0x2d);
        _Dst[0x24] = (char)param_1[0xb];
        _Dst[0x25] = *(undefined1 *)((longlong)param_1 + 0x2b);
        _Dst[0x26] = *(undefined1 *)((longlong)param_1 + 0x2a);
        _Dst[0x27] = *(undefined1 *)((longlong)param_1 + 0x29);
        _Dst[0x28] = (char)param_1[10];
        _Dst[0x29] = *(undefined1 *)((longlong)param_1 + 0x39);
        _Dst[0x2a] = (char)param_1[0xe];
        if (*(size_t *)(param_1 + 0xe) != 0) {
          memcpy(_Dst_00,*(void **)(param_1 + 0xc),*(size_t *)(param_1 + 0xe));
          _Dst_00 = _Dst_00 + *(longlong *)(param_1 + 0xe);
        }
        iVar7 = FUN_140ba1300(param_1);
        puVar9 = puVar10;
        if (iVar7 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\ct\\ct_oct.c",0x9f,"i2o_SCT_signature");
          FUN_140b91cc0(0x32,0x6b,0);
        }
        else if (*param_1 == 0) {
          lVar2 = *(longlong *)(param_1 + 0x14);
          if ((_Dst_00 != (undefined1 *)0x0) ||
             (_Dst_00 = (undefined1 *)FUN_140b8d8d0(lVar2 + 4,"crypto\\ct\\ct_oct.c",0xb4),
             _Dst_00 != (undefined1 *)0x0)) {
            *_Dst_00 = (char)param_1[0x10];
            _Dst_00[1] = *(undefined1 *)((longlong)param_1 + 0x41);
            _Dst_00[2] = *(undefined1 *)((longlong)param_1 + 0x51);
            _Dst_00[3] = (char)param_1[0x14];
            memcpy(_Dst_00 + 4,*(void **)(param_1 + 0x12),*(size_t *)(param_1 + 0x14));
            if ((int)(lVar2 + 4) < 1) goto LAB_140ba1a0a;
            goto LAB_140ba1bb9;
          }
        }
        else {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\ct\\ct_oct.c",0xa4,"i2o_SCT_signature");
          FUN_140b91cc0(0x32,0x67,0);
        }
        FUN_140b8d990(0,"crypto\\ct\\ct_oct.c",0xc2);
        goto LAB_140ba1a0a;
      }
      memcpy(_Dst,*(void **)(param_1 + 2),uVar8);
    }
LAB_140ba1bb9:
    uVar8 = uVar8 & 0xffffffff;
  }
  return uVar8;
}

