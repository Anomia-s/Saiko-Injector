/**
 * Function: tls_default_read_n
 * Address:  140c404e0
 * Signature: undefined tls_default_read_n(void)
 * Body size: 815 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int tls_default_read_n(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4,int param_5,
                      ulonglong *param_6)

{
  void *_Dst;
  void *_Src;
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    return -1;
  }
  lVar6 = *(longlong *)(param_1 + 0x6a0);
  uVar7 = *(ulonglong *)(param_1 + 0x6c0);
  iVar3 = 0;
  lVar5 = 7 - (ulonglong)((int)lVar6 - 4U & 7);
  if (param_4 == 0) {
    if (uVar7 == 0) {
      *(longlong *)(param_1 + 0x6b8) = lVar5;
    }
    *(undefined8 *)(param_1 + 0xff8) = 0;
    *(longlong *)(param_1 + 0xff0) = *(longlong *)(param_1 + 0x6b8) + lVar6;
  }
  _Src = *(void **)(param_1 + 0xff0);
  if (_Src == (void *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\record\\methods\\tls_common.c",0x14c,"tls_default_read_n");
    FUN_140c40330(param_1,0x50,0xc0103,0);
    return -2;
  }
  lVar1 = *(longlong *)(param_1 + 0xff8);
  _Dst = (void *)(lVar6 + lVar5);
  if ((_Src != _Dst) && (param_5 == 1)) {
    memmove(_Dst,_Src,uVar7 + lVar1);
    *(void **)(param_1 + 0xff0) = _Dst;
    *(longlong *)(param_1 + 0x6b8) = lVar5 + lVar1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    if (uVar7 == 0) {
      if (param_4 != 0) {
        return -1;
      }
    }
    else {
      uVar4 = uVar7;
      if (uVar7 < param_2) goto LAB_140c40640;
    }
  }
  uVar4 = param_2;
  if (uVar7 < param_2) {
    uVar4 = *(longlong *)(param_1 + 0x6b0) - *(longlong *)(param_1 + 0x6b8);
    if (uVar4 < param_2) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\record\\methods\\tls_common.c",0x17a,"tls_default_read_n");
      FUN_140c40330(param_1,0x50,0xc0103,0);
      return -2;
    }
    uVar8 = param_2;
    if ((((*(int *)(param_1 + 0x100c) != 0) || (*(int *)(param_1 + 0x10) != 0)) &&
        (param_2 <= param_3)) && (uVar8 = param_3, uVar4 < param_3)) {
      uVar8 = uVar4;
    }
    do {
      lVar6 = *(longlong *)(param_1 + 0x38);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)(param_1 + 0x40);
        SetLastError(0);
        if (lVar6 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\record\\methods\\tls_common.c",0x1ab,"tls_default_read_n");
          FUN_140c40330(param_1,0x50,0xd3,0);
          iVar3 = -2;
          goto LAB_140c407e3;
        }
      }
      else {
        SetLastError(0);
      }
      iVar2 = FUN_140b732c0(lVar6,(longlong)_Dst + uVar7 + lVar1,(int)uVar8 - (int)uVar7);
      if (iVar2 < 1) {
        iVar2 = FUN_140b73020(lVar6,8);
        if (iVar2 == 0) {
          iVar3 = FUN_140b74190(lVar6,2,0,0);
          iVar3 = -2 - (uint)(iVar3 != 0);
LAB_140c407e3:
          *(ulonglong *)(param_1 + 0x6c0) = uVar7;
          if ((*(byte *)(param_1 + 0x58) & 0x10) == 0) {
            return iVar3;
          }
          if (*(int *)(param_1 + 0x10) == 0) {
            if (uVar7 + lVar1 == 0) {
              FUN_140c42cd0(param_1);
              return iVar3;
            }
            return iVar3;
          }
          return iVar3;
        }
        if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_140c407e3;
        FUN_140b73150();
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar7 = uVar7 + (longlong)iVar2;
        if (*(int *)(param_1 + 0x10) != 0) {
          if (uVar7 < param_2) {
            param_2 = uVar7;
          }
          break;
        }
      }
    } while (uVar7 < param_2);
    *(longlong *)(param_1 + 0x6b8) = *(longlong *)(param_1 + 0x6b8) + param_2;
    *(ulonglong *)(param_1 + 0x6c0) = uVar7 - param_2;
    *(longlong *)(param_1 + 0xff8) = *(longlong *)(param_1 + 0xff8) + param_2;
    *param_6 = param_2;
    return 1;
  }
LAB_140c40640:
  *(longlong *)(param_1 + 0xff8) = *(longlong *)(param_1 + 0xff8) + uVar4;
  *(longlong *)(param_1 + 0x6b8) = *(longlong *)(param_1 + 0x6b8) + uVar4;
  *(ulonglong *)(param_1 + 0x6c0) = uVar7 - uVar4;
  *param_6 = uVar4;
  return 1;
}

