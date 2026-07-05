/**
 * Function: v2i_authority_keyid
 * Address:  140c66910
 * Signature: undefined v2i_authority_keyid(void)
 * Body size: 1453 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong * v2i_authority_keyid(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  char *_Str1;
  char *_Str1_00;
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  char cVar11;
  undefined8 local_res20;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined4 *local_40;
  
  cVar11 = '\0';
  cVar2 = '\0';
  iVar3 = FUN_140b77980(param_3);
  local_res20 = CONCAT44(local_res20._4_4_,iVar3);
  local_50 = 0;
  local_58 = 0;
  local_40 = (undefined4 *)0x0;
  local_48 = 0;
  puVar5 = (ulonglong *)FUN_140be44a0();
  if (puVar5 != (ulonglong *)0x0) {
    if (iVar3 == 1) {
      lVar6 = FUN_140b77990(param_3,0);
      iVar4 = strcmp(*(char **)(lVar6 + 8),"none");
      if (iVar4 == 0) {
        return puVar5;
      }
    }
    uVar8 = 0;
    if (0 < iVar3) {
      do {
        lVar6 = FUN_140b77990(param_3,uVar8);
        _Str1 = *(char **)(lVar6 + 0x10);
        if ((_Str1 != (char *)0x0) && (iVar3 = strcmp(_Str1,"always"), iVar3 != 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\x509\\v3_akid.c",0x7b,"v2i_AUTHORITY_KEYID");
          FUN_140b91cc0(0x22,0x78,"name=%s option=%s",*(undefined8 *)(lVar6 + 8),
                        *(undefined8 *)(lVar6 + 0x10));
          goto LAB_140c66e6c;
        }
        _Str1_00 = *(char **)(lVar6 + 8);
        iVar3 = strcmp(_Str1_00,"keyid");
        if ((iVar3 == 0) && (cVar11 == '\0')) {
          cVar11 = (_Str1 != (char *)0x0) + '\x01';
        }
        else {
          iVar3 = strcmp(_Str1_00,"issuer");
          if ((iVar3 != 0) || (cVar2 != '\0')) {
            iVar3 = strcmp(_Str1_00,"none");
            if (((iVar3 == 0) || (iVar3 = strcmp(_Str1_00,"keyid"), iVar3 == 0)) ||
               (iVar3 = strcmp(_Str1_00,"issuer"), iVar3 == 0)) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\x509\\v3_akid.c",0x8a,"v2i_AUTHORITY_KEYID");
              FUN_140b91cc0(0x22,0xab,"name=%s",*(undefined8 *)(lVar6 + 8));
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\x509\\v3_akid.c",0x8e,"v2i_AUTHORITY_KEYID");
              FUN_140b91cc0(0x22,0xac,"name=%s",*(undefined8 *)(lVar6 + 8));
            }
            goto LAB_140c66e6c;
          }
          cVar2 = '\x01';
          if (_Str1 != (char *)0x0) {
            cVar2 = '\x02';
          }
        }
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res20);
    }
    if (param_2 == (byte *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\v3_akid.c",0x98,"v2i_AUTHORITY_KEYID");
      uVar9 = 0xc0102;
    }
    else {
      if ((*param_2 & 1) != 0) {
        return puVar5;
      }
      lVar6 = *(longlong *)(param_2 + 8);
      if (lVar6 != 0) {
        lVar1 = *(longlong *)(param_2 + 0x10);
        uVar10 = (uint)(lVar1 == lVar6);
        FUN_140b932f0();
        if (*(longlong *)(param_2 + 0x38) != 0) {
          uVar10 = FUN_140b74d00(*(undefined8 *)(param_2 + 0x10));
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        if ((cVar11 == '\x02') || ((cVar11 == '\x01' && (uVar10 == 0)))) {
          iVar3 = FUN_140b77840(lVar6,0x52,0xffffffff);
          if ((iVar3 < 0) ||
             ((lVar7 = FUN_140b77860(lVar6,iVar3), lVar7 == 0 || ((lVar1 == lVar6 && (uVar10 == 0)))
              ))) {
LAB_140c66c4a:
            if ((lVar1 == lVar6) && (*(longlong *)(param_2 + 0x38) != 0)) {
              local_res20 = 0;
              iVar3 = cryptox509x_pubkeyc(&local_res20);
              if (iVar3 != 0) {
                local_50 = ossl_x509_pubkey_hash(local_res20);
              }
              FUN_140b9d550(local_res20);
            }
          }
          else {
            local_50 = FUN_140bebeb0(lVar7);
            iVar3 = FUN_140b78ee0(local_50);
            if (iVar3 == 0) {
              FUN_140b90e80(local_50);
              local_50 = 0;
              goto LAB_140c66c4a;
            }
            if (local_50 == 0) goto LAB_140c66c4a;
          }
          uVar8 = 0;
          if ((cVar11 == '\x02') && (local_50 == 0)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\x509\\v3_akid.c",0xbf,"v2i_AUTHORITY_KEYID");
            FUN_140b91cc0(0x22,0x7b,0);
            local_58 = 0;
            goto LAB_140c66e6f;
          }
        }
        if ((cVar2 != '\x02') && (((cVar2 != '\x01' || (uVar10 != 0)) || (local_50 != 0)))) {
          local_58 = 0;
LAB_140c66dc3:
          puVar5[2] = local_48;
          puVar5[1] = local_58;
          *puVar5 = local_50;
          return puVar5;
        }
        uVar9 = FUN_140b74cb0(lVar6);
        uVar8 = FUN_140b9c740(uVar9);
        uVar9 = FUN_140b74ca0(lVar6);
        local_48 = FUN_140bd84f0(uVar9);
        if ((uVar8 == 0) || (local_48 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\x509\\v3_akid.c",200,"v2i_AUTHORITY_KEYID");
          uVar9 = 0x7a;
        }
        else {
          local_58 = FUN_140b77ab0();
          if ((local_58 != 0) &&
             (local_40 = (undefined4 *)FUN_140b79340(), local_40 != (undefined4 *)0x0)) {
            iVar3 = FUN_140b78340(local_58,local_40);
            if (iVar3 != 0) {
              *local_40 = 4;
              *(ulonglong *)(local_40 + 2) = uVar8;
              goto LAB_140c66dc3;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\x509\\v3_akid.c",0xd4,"v2i_AUTHORITY_KEYID");
            FUN_140b91cc0(0x22,0x8000f,0);
            goto LAB_140c66e6f;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\x509\\v3_akid.c",0xd0,"v2i_AUTHORITY_KEYID");
          uVar9 = 0x8000d;
        }
        FUN_140b91cc0(0x22,uVar9,0);
        goto LAB_140c66e6f;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\v3_akid.c",0x9c,"v2i_AUTHORITY_KEYID");
      uVar9 = 0x79;
    }
    FUN_140b91cc0(0x22,uVar9,0);
  }
LAB_140c66e6c:
  local_58 = 0;
  uVar8 = local_58;
  local_50 = 0;
LAB_140c66e6f:
  FUN_140b77c10(local_58);
  FUN_140b79360(local_40);
  FUN_140b9c7e0(uVar8);
  FUN_140b90e80(local_48);
  FUN_140b90e80(local_50);
  FUN_140be44c0(puVar5);
  return (ulonglong *)0x0;
}

