/**
 * Function: got_number_d_when_expecting_d
 * Address:  140c09a60
 * Signature: undefined got_number_d_when_expecting_d(void)
 * Body size: 600 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int got_number_d_when_expecting_d(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  char *_Str;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\core_namemap.c",0x13a,"ossl_namemap_add_names");
    FUN_140b91cc0(0xf,0xc0102,0);
    return 0;
  }
  pcVar4 = (char *)FUN_140b8c830(param_3,"crypto\\core_namemap.c",0x13e);
  if (pcVar4 != (char *)0x0) {
    iVar2 = FUN_140b8b770(*(undefined8 *)(param_1 + 0x10));
    if (iVar2 != 0) {
      cVar1 = *pcVar4;
      _Str = pcVar4;
      while (pcVar5 = pcVar4, cVar1 != '\0') {
        pcVar5 = strchr(_Str,(int)param_4);
        if (pcVar5 == (char *)0x0) {
          sVar6 = strlen(_Str);
          pcVar5 = _Str + sVar6;
        }
        else {
          *pcVar5 = '\0';
          pcVar5 = pcVar5 + 1;
        }
        if (*_Str == '\0') {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\core_namemap.c",0x156,"ossl_namemap_add_names");
          FUN_140b91cc0(0xf,0x75,0);
          goto LAB_140c09c77;
        }
        iVar3 = FUN_140c09700(param_1,_Str);
        iVar2 = iVar3;
        if (((param_2 != 0) && (iVar2 = param_2, iVar3 != 0)) && (iVar3 != param_2)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\core_namemap.c",0x160,"ossl_namemap_add_names");
          FUN_140b91cc0(0xf,0x76,"\"%s\" has an existing different identity %d (from \"%s\")",_Str,
                        iVar3,param_3);
          goto LAB_140c09c77;
        }
        _Str = pcVar5;
        param_2 = iVar2;
        cVar1 = *pcVar5;
      }
      do {
        iVar2 = param_2;
        if (_Str <= pcVar5) goto LAB_140c09c79;
        sVar6 = strlen(pcVar5);
        pcVar7 = pcVar5 + sVar6 + 1;
        iVar3 = FUN_140c09e50(param_1,iVar2,pcVar5);
        pcVar5 = pcVar7;
        param_2 = iVar3;
      } while ((iVar2 == 0) || (param_2 = iVar2, iVar3 == iVar2));
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\core_namemap.c",0x173,"ossl_namemap_add_names");
      FUN_140b91cc0(0xf,0xc0103,"Got number %d when expecting %d",iVar3,iVar2);
LAB_140c09c77:
      iVar2 = 0;
LAB_140c09c79:
      FUN_140b8b7a0(*(undefined8 *)(param_1 + 0x10));
      FUN_140b8d990(pcVar4,"crypto\\core_namemap.c",0x17d);
      return iVar2;
    }
    FUN_140b8d990(pcVar4,"crypto\\core_namemap.c",0x142);
  }
  return 0;
}

