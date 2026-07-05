/**
 * Function: cryptohttphttp_libc
 * Address:  140c63050
 * Signature: undefined cryptohttphttp_libc(void)
 * Body size: 1647 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
cryptohttphttp_libc(char *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                   longlong *param_5,uint *param_6,byte *param_7,longlong *param_8,longlong *param_9
                   )

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *_Str;
  char *_Str_00;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint local_88 [2];
  byte *local_80;
  byte *local_78;
  byte *local_70;
  char *local_68;
  char *local_60;
  byte *local_58;
  
  plVar3 = param_8;
  plVar2 = (longlong *)param_7;
  local_88[0] = 0;
  if (param_2 != (longlong *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (longlong *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (longlong *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (byte *)0x0) {
    *(longlong *)param_7 = 0;
  }
  if (param_9 != (longlong *)0x0) {
    *param_9 = 0;
  }
  if (param_8 != (longlong *)0x0) {
    *param_8 = 0;
  }
  if (param_1 == (char *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\http\\http_lib.c",0x4d,"OSSL_parse_url");
    FUN_140b91cc0(0x3d,0xc0102,0);
    return 0;
  }
  pcVar5 = strstr(param_1,"://");
  _Str_00 = param_1;
  param_8 = (longlong *)param_1;
  if (pcVar5 == (char *)0x0) {
LAB_140c63185:
    local_60 = strchr(_Str_00,0x40);
    pcVar5 = local_60 + 1;
    if (local_60 == (char *)0x0) {
      pcVar5 = _Str_00;
      local_60 = _Str_00;
    }
    local_68 = pcVar5;
    if (*pcVar5 == '[') {
      pcVar5 = strchr(pcVar5 + 1,0x5d);
      if (pcVar5 == (char *)0x0) goto LAB_140c632c0;
      pbVar12 = (byte *)(pcVar5 + 1);
    }
    else {
      pbVar12 = (byte *)strpbrk(pcVar5,":/?#");
      if (pbVar12 == (byte *)0x0) {
        sVar6 = strlen(pcVar5);
        pbVar12 = (byte *)(pcVar5 + sVar6);
      }
    }
    local_80 = &DAT_1413a708c;
    _Str = pbVar12 + 1;
    pbVar8 = _Str;
    if (*pbVar12 != 0x3a) {
      _Str = pbVar12;
      pbVar8 = local_80;
    }
    local_80 = pbVar8;
    pbVar8 = local_80;
    iVar4 = FUN_1400fd340(local_80,&DAT_1413a5a04,local_88);
    if ((iVar4 < 1) || (0xffff < local_88[0])) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\http\\http_lib.c",0x7b,"OSSL_parse_url");
      FUN_140b91cc0(0x3d,0x7b,&DAT_1413a5d54,pbVar8);
      goto LAB_140c632f7;
    }
    bVar1 = *pbVar8;
    pbVar11 = pbVar8;
    while (('/' < (char)bVar1 && (bVar1 < 0x3a))) {
      pbVar10 = pbVar11 + 1;
      pbVar11 = pbVar11 + 1;
      bVar1 = *pbVar10;
    }
    if (pbVar8 == _Str) {
      _Str = pbVar11 + ((longlong)_Str - (longlong)pbVar8);
    }
    bVar1 = *_Str;
    if ((bVar1 != 0) &&
       ((0x3f < bVar1 || ((0x8000800800000000U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0)))) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\http\\http_lib.c",0x86,"OSSL_parse_url");
      FUN_140b91cc0(0x3d,0x7d,0);
      goto LAB_140c632c0;
    }
    sVar6 = strlen((char *)_Str);
    param_7 = _Str + sVar6;
    local_78 = param_7;
    local_70 = param_7;
    local_58 = param_7;
    pbVar7 = (byte *)strchr((char *)_Str,0x3f);
    pbVar8 = _Str;
    pbVar10 = param_7;
    if ((pbVar7 != (byte *)0x0) && (pbVar8 = pbVar7, plVar3 != (longlong *)0x0)) {
      param_7 = pbVar7 + 1;
      pbVar10 = pbVar7;
    }
    pbVar8 = (byte *)strchr((char *)pbVar8,0x23);
    if ((pbVar8 != (byte *)0x0) && (local_70 = pbVar8 + 1, local_78 = pbVar8, param_7 == pbVar10)) {
      pbVar10 = pbVar8;
    }
    if (param_2 == (longlong *)0x0) {
LAB_140c634b7:
      if (param_4 != (longlong *)0x0) {
        lVar9 = FUN_140b8c8b0(local_68,(longlong)pbVar12 - (longlong)local_68,
                              "crypto\\http\\http_lib.c",0x2a);
        *param_4 = lVar9;
        if (lVar9 == 0) goto LAB_140c632f7;
      }
      if (param_5 != (longlong *)0x0) {
        lVar9 = FUN_140b8c8b0(local_80,(longlong)pbVar11 - (longlong)local_80,
                              "crypto\\http\\http_lib.c",0x2a);
        *param_5 = lVar9;
        if (lVar9 == 0) goto LAB_140c632f7;
      }
      if (param_3 != (longlong *)0x0) {
        lVar9 = FUN_140b8c8b0(_Str_00,(longlong)local_60 - (longlong)_Str_00,
                              "crypto\\http\\http_lib.c",0x2a);
        *param_3 = lVar9;
        if (lVar9 == 0) goto LAB_140c632f7;
      }
      if (plVar3 != (longlong *)0x0) {
        lVar9 = FUN_140b8c8b0(param_7,(longlong)local_78 - (longlong)param_7,
                              "crypto\\http\\http_lib.c",0x2a);
        *plVar3 = lVar9;
        if (lVar9 == 0) goto LAB_140c632f7;
      }
      if (param_9 != (longlong *)0x0) {
        lVar9 = FUN_140b8c8b0(local_70,(longlong)local_58 - (longlong)local_70,
                              "crypto\\http\\http_lib.c",0x2a);
        *param_9 = lVar9;
        if (lVar9 == 0) goto LAB_140c632f7;
      }
      if (param_6 != (uint *)0x0) {
        *param_6 = local_88[0];
      }
      if (*_Str == 0x2f) {
        if (plVar2 == (longlong *)0x0) {
          return 1;
        }
        lVar9 = FUN_140b8c8b0(_Str,(longlong)pbVar10 - (longlong)_Str,"crypto\\http\\http_lib.c",
                              0x2a);
        *plVar2 = lVar9;
        if (lVar9 != 0) {
          return 1;
        }
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          return 1;
        }
        lVar9 = FUN_140b8d8d0(pbVar10 + (2 - (longlong)_Str),"crypto\\http\\http_lib.c",0xad);
        *plVar2 = lVar9;
        if (lVar9 != 0) {
          FUN_140c07aa0(lVar9,pbVar10 + (2 - (longlong)_Str),&DAT_1413a5d48,_Str);
          return 1;
        }
      }
      goto LAB_140c632f7;
    }
    lVar9 = FUN_140b8c8b0(param_1,(longlong)param_8 - (longlong)param_1,"crypto\\http\\http_lib.c",
                          0x2a);
    *param_2 = lVar9;
    if (lVar9 != 0) goto LAB_140c634b7;
  }
  else {
    if (pcVar5 != param_1) {
      _Str_00 = pcVar5 + 3;
      param_8 = (longlong *)pcVar5;
      goto LAB_140c63185;
    }
LAB_140c632c0:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\http\\http_lib.c",0xb4,"OSSL_parse_url");
    FUN_140b91cc0(0x3d,0x65,0);
LAB_140c632f7:
    if (param_2 == (longlong *)0x0) goto LAB_140c6330a;
  }
  FUN_140b8d990(*param_2,"crypto\\http\\http_lib.c",0x30);
  *param_2 = 0;
LAB_140c6330a:
  if (param_3 != (longlong *)0x0) {
    FUN_140b8d990(*param_3,"crypto\\http\\http_lib.c",0x30);
    *param_3 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    FUN_140b8d990(*param_4,"crypto\\http\\http_lib.c",0x30);
    *param_4 = 0;
  }
  if (param_5 != (longlong *)0x0) {
    FUN_140b8d990(*param_5,"crypto\\http\\http_lib.c",0x30);
    *param_5 = 0;
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_140b8d990(*plVar2,"crypto\\http\\http_lib.c",0x30);
    *plVar2 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_140b8d990(*plVar3,"crypto\\http\\http_lib.c",0x30);
    *plVar3 = 0;
  }
  if (param_9 != (longlong *)0x0) {
    FUN_140b8d990(*param_9,"crypto\\http\\http_lib.c",0x30);
    *param_9 = 0;
  }
  return 0;
}

