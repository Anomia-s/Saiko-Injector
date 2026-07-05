/**
 * Function: maxsizeld
 * Address:  140c62380
 * Signature: undefined maxsizeld(void)
 * Body size: 1432 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint maxsizeld(longlong *param_1,byte *param_2,uint param_3,int param_4,uint param_5,int param_6,
              int param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  uint *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  uint local_res18 [2];
  uint local_48 [2];
  longlong local_40;
  
  uVar11 = 0;
  pcVar14 = (code *)0x0;
  if (param_3 == 0xffffffff) {
    sVar7 = strlen((char *)param_2);
    param_3 = (uint)sVar7;
  }
  if (param_5 == 0) {
    param_5 = 0x2806;
  }
  if ((int)param_3 < 0) {
    return 0xffffffff;
  }
  if (param_4 == 0x1000) {
    uVar13 = 0;
    pbVar10 = param_2;
    uVar12 = param_3;
    while (uVar12 != 0) {
      iVar6 = FUN_140cb4630(pbVar10,uVar12,local_res18);
      if (iVar6 < 0) {
LAB_140c6253f:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\asn1\\a_mbstr.c",0x55,"ASN1_mbstring_ncopy");
        uVar9 = 0x86;
        goto LAB_140c626d8;
      }
      uVar12 = uVar12 - iVar6;
      pbVar10 = pbVar10 + iVar6;
      if ((0x10ffff < local_res18[0]) || (local_res18[0] - 0xd800 < 0x800)) goto LAB_140c6253f;
      uVar13 = uVar13 + 1;
    }
  }
  else {
    uVar13 = param_3;
    if (param_4 != 0x1001) {
      if (param_4 == 0x1002) {
        if ((param_3 & 1) != 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\asn1\\a_mbstr.c",0x42,"ASN1_mbstring_ncopy");
          uVar9 = 0x81;
          goto LAB_140c626d8;
        }
        uVar13 = (int)param_3 >> 1;
      }
      else {
        if (param_4 != 0x1004) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\asn1\\a_mbstr.c",0x5f,"ASN1_mbstring_ncopy");
          uVar9 = 0xa0;
          goto LAB_140c626d8;
        }
        if ((param_3 & 3) != 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\asn1\\a_mbstr.c",0x4a,"ASN1_mbstring_ncopy");
          uVar9 = 0x85;
          goto LAB_140c626d8;
        }
        uVar13 = (int)param_3 >> 2;
      }
    }
  }
  iVar5 = param_7;
  iVar6 = param_6;
  if ((0 < param_6) && ((int)uVar13 < param_6)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_mbstr.c",100,"ASN1_mbstring_ncopy");
    FUN_140b91cc0(0xd,0x98,"minsize=%ld",iVar6);
    return 0xffffffff;
  }
  if ((0 < param_7) && (param_7 < (int)uVar13)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_mbstr.c",0x6a,"ASN1_mbstring_ncopy");
    FUN_140b91cc0(0xd,0x97,"maxsize=%ld",iVar5);
    return 0xffffffff;
  }
  iVar6 = FUN_140c62920(param_2,param_3,param_4,FUN_140c62a30,&param_5);
  if (iVar6 < 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\a_mbstr.c",0x71,"ASN1_mbstring_ncopy");
    uVar9 = 0x7c;
    goto LAB_140c626d8;
  }
  iVar6 = 0x1001;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x10) == 0) {
        if ((param_5 & 4) == 0) {
          if ((param_5 >> 0xb & 1) == 0) {
            if ((param_5 >> 8 & 1) == 0) {
              iVar6 = 0x1000;
              uVar12 = 0xc;
            }
            else {
              iVar6 = 0x1004;
              uVar12 = 0x1c;
            }
          }
          else {
            iVar6 = 0x1002;
            uVar12 = 0x1e;
          }
        }
        else {
          uVar12 = 0x14;
        }
      }
      else {
        uVar12 = 0x16;
      }
    }
    else {
      uVar12 = 0x13;
    }
  }
  else {
    uVar12 = 0x12;
  }
  if (param_1 == (longlong *)0x0) {
    return uVar12;
  }
  puVar8 = (uint *)*param_1;
  if (puVar8 == (uint *)0x0) {
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
    puVar8 = (uint *)FUN_140b78d00(uVar12);
    if (puVar8 != (uint *)0x0) {
      *param_1 = (longlong)puVar8;
      goto LAB_140c62714;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar9 = 0x94;
  }
  else {
    local_res18[0] = (uint)local_res18[0]._1_3_ << 8;
    FUN_140b78e90(puVar8,0,0);
    puVar8[1] = uVar12;
LAB_140c62714:
    if (param_4 != iVar6) {
      if (iVar6 == 0x1000) {
        pbVar10 = param_2;
        uVar13 = param_3;
        if (param_3 != 0) {
          do {
            if (param_4 == 0x1001) {
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              uVar13 = uVar13 - 1;
              local_48[0] = (uint)bVar4;
            }
            else if (param_4 == 0x1002) {
              bVar4 = *pbVar10;
              pbVar1 = pbVar10 + 1;
              pbVar10 = pbVar10 + 2;
              local_48[0] = (uint)CONCAT11(bVar4,*pbVar1);
              uVar13 = uVar13 - 2;
            }
            else if (param_4 == 0x1004) {
              bVar4 = *pbVar10;
              pbVar1 = pbVar10 + 1;
              pbVar2 = pbVar10 + 2;
              pbVar3 = pbVar10 + 3;
              pbVar10 = pbVar10 + 4;
              local_48[0] = (uint)*pbVar3 |
                            (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
              uVar13 = uVar13 - 4;
            }
            else {
              iVar6 = FUN_140cb4630(pbVar10,uVar13,local_48);
              if (iVar6 < 0) break;
              uVar13 = uVar13 - iVar6;
              pbVar10 = pbVar10 + iVar6;
            }
            iVar6 = FUN_140cb4790(0,0xffffffff,local_48[0]);
            if ((iVar6 < 1) || (uVar11 = uVar11 + iVar6, uVar13 == 0)) break;
          } while( true );
        }
        pcVar14 = FUN_140c62b70;
      }
      else if (iVar6 == 0x1001) {
        pcVar14 = (code *)&LAB_140c62b10;
        uVar11 = uVar13;
      }
      else if (iVar6 == 0x1002) {
        pcVar14 = (code *)&LAB_140c62b20;
        uVar11 = uVar13 * 2;
      }
      else {
        uVar11 = 0;
        if (iVar6 == 0x1004) {
          pcVar14 = (code *)&LAB_140c62b40;
          uVar11 = uVar13 * 4;
        }
      }
      local_40 = FUN_140b8d8d0((longlong)(int)(uVar11 + 1),"crypto\\asn1\\a_mbstr.c",0xbd);
      if (local_40 != 0) {
        *puVar8 = uVar11;
        *(longlong *)(puVar8 + 2) = local_40;
        *(undefined1 *)((int)uVar11 + local_40) = 0;
        FUN_140c62920(param_2,param_3,param_4,pcVar14,&local_40);
        return uVar12;
      }
      if ((char)local_res18[0] == '\0') {
        return 0xffffffff;
      }
      FUN_140b78950(puVar8);
      *param_1 = 0;
      return 0xffffffff;
    }
    iVar6 = FUN_140b78d90(puVar8,param_2,param_3);
    if (iVar6 != 0) {
      return uVar12;
    }
    if ((char)local_res18[0] != '\0') {
      FUN_140b78950(puVar8);
      *param_1 = 0;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar9 = 0xa0;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\asn1\\a_mbstr.c",uVar9,"ASN1_mbstring_ncopy");
  uVar9 = 0x8000d;
LAB_140c626d8:
  FUN_140b91cc0(0xd,uVar9,0);
  return 0xffffffff;
}

