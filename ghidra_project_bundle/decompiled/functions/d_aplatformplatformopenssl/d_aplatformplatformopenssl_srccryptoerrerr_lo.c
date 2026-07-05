/**
 * Function: d_aplatformplatformopenssl_srccryptoerrerr_lo
 * Address:  140c21850
 * Signature: undefined d_aplatformplatformopenssl_srccryptoerrerr_lo(void)
 * Body size: 731 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d_aplatformplatformopenssl_srccryptoerrerr_lo(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  char *_Str;
  undefined1 *puVar4;
  uint uVar5;
  longlong lVar6;
  size_t sVar7;
  char *_Dest;
  char *pcVar8;
  void *_Dst;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x344) != *(int *)(param_1 + 0x340))) &&
      (lVar6 = FUN_140b92c60(), lVar6 != 0)) &&
     (uVar11 = (ulonglong)*(int *)(param_1 + 0x344), uVar11 != (longlong)*(int *)(param_1 + 0x340)))
  {
    do {
      uVar11 = (ulonglong)((int)uVar11 + 1U & 0xf);
      if ((*(byte *)(param_1 + uVar11 * 4) & 2) == 0) {
        uVar5 = *(int *)(lVar6 + 0x340) + 1U & 0x8000000f;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
        }
        *(uint *)(lVar6 + 0x340) = uVar5;
        if (uVar5 == *(uint *)(lVar6 + 0x344)) {
          uVar9 = *(uint *)(lVar6 + 0x344) + 1 & 0x8000000f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
          }
          *(uint *)(lVar6 + 0x344) = uVar9;
        }
        lVar10 = (longlong)(int)uVar5;
        d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar6,lVar10,0);
        *(undefined4 *)(lVar6 + lVar10 * 4) = *(undefined4 *)(param_1 + uVar11 * 4);
        *(undefined4 *)(lVar6 + 0x80 + lVar10 * 4) = *(undefined4 *)(param_1 + 0x80 + uVar11 * 4);
        _Str = *(char **)(param_1 + 0x2c0 + uVar11 * 8);
        uVar3 = *(undefined4 *)(param_1 + 0x280 + uVar11 * 4);
        pcVar8 = *(char **)(param_1 + 0x200 + uVar11 * 8);
        FUN_140b8d990(*(undefined8 *)(lVar6 + 0x200 + lVar10 * 8),
                      "D:\\a\\Platform\\Platform\\openssl-src\\crypto\\err\\err_local.h",0x39);
        if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
          *(undefined8 *)(lVar6 + 0x200 + lVar10 * 8) = 0;
        }
        else {
          sVar7 = strlen(pcVar8);
          _Dest = (char *)FUN_140b8d8d0(sVar7 + 1,0,0);
          *(char **)(lVar6 + 0x200 + lVar10 * 8) = _Dest;
          if (_Dest != (char *)0x0) {
            strcpy(_Dest,pcVar8);
          }
        }
        *(undefined4 *)(lVar6 + 0x280 + lVar10 * 4) = uVar3;
        FUN_140b8d990(*(undefined8 *)(lVar6 + 0x2c0 + lVar10 * 8),
                      "D:\\a\\Platform\\Platform\\openssl-src\\crypto\\err\\err_local.h");
        if ((_Str == (char *)0x0) || (*_Str == '\0')) {
          *(undefined8 *)(lVar6 + 0x2c0 + lVar10 * 8) = 0;
        }
        else {
          sVar7 = strlen(_Str);
          pcVar8 = (char *)FUN_140b8d8d0(sVar7 + 1,0);
          *(char **)(lVar6 + 0x2c0 + lVar10 * 8) = pcVar8;
          if (pcVar8 != (char *)0x0) {
            strcpy(pcVar8,_Str);
          }
        }
        if ((*(longlong *)(param_1 + 0xc0 + uVar11 * 8) == 0) ||
           (sVar7 = *(size_t *)(param_1 + 0x140 + uVar11 * 8), sVar7 == 0)) {
          lVar1 = lVar6 + lVar10 * 4;
          lVar2 = lVar6 + lVar10 * 8;
          if ((*(byte *)(lVar1 + 0x1c0) & 1) == 0) {
            *(undefined8 *)(lVar2 + 0xc0) = 0;
            *(undefined8 *)(lVar6 + 0x140 + lVar10 * 8) = 0;
            *(undefined4 *)(lVar1 + 0x1c0) = 0;
          }
          else {
            puVar4 = *(undefined1 **)(lVar2 + 0xc0);
            if (puVar4 != (undefined1 *)0x0) {
              *puVar4 = 0;
              *(undefined4 *)(lVar1 + 0x1c0) = 1;
            }
          }
        }
        else {
          _Dst = (void *)FUN_140b8d8d0(sVar7,0);
          if (_Dst != (void *)0x0) {
            memcpy(_Dst,*(void **)(param_1 + 0xc0 + uVar11 * 8),sVar7);
            uVar5 = *(uint *)(param_1 + 0x1c0 + uVar11 * 4);
            if ((*(byte *)(lVar6 + 0x1c0 + lVar10 * 4) & 1) != 0) {
              FUN_140b8d990(*(undefined8 *)(lVar6 + 0xc0 + lVar10 * 8),
                            "D:\\a\\Platform\\Platform\\openssl-src\\crypto\\err\\err_local.h");
            }
            *(void **)(lVar6 + 0xc0 + lVar10 * 8) = _Dst;
            *(size_t *)(lVar6 + 0x140 + lVar10 * 8) = sVar7;
            *(uint *)(lVar6 + 0x1c0 + lVar10 * 4) = uVar5 | 1;
          }
        }
      }
    } while (uVar11 != (longlong)*(int *)(param_1 + 0x340));
  }
  return;
}

