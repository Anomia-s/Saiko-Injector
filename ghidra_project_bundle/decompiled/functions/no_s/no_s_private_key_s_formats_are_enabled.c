/**
 * Function: no_s_private_key_s_formats_are_enabled
 * Address:  140db9cb0
 * Signature: undefined no_s_private_key_s_formats_are_enabled(void)
 * Body size: 629 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
no_s_private_key_s_formats_are_enabled
          (undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  longlong *_Base;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  char *_Str;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  iVar4 = 0;
  _Base = (longlong *)
          FUN_140b8da80(0x70,"providers\\implementations\\encode_decode\\ml_common_codecs.c",0x2d);
  auVar6 = _DAT_14131f350;
  if (_Base == (longlong *)0x0) {
                    /* WARNING: Read-only address (ram,0x00014131f350) is written */
    return (longlong *)0x0;
  }
  if (DAT_1414f9e80 < 6) {
    lVar5 = 6;
    plVar2 = _Base;
    do {
      *plVar2 = param_2;
      param_2 = param_2 + 0x58;
      *(undefined4 *)(plVar2 + 1) = 0;
      plVar2 = plVar2 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  else {
    auVar7 = pmovsxdq(ZEXT816(0),ZEXT816(0x100000000));
    auVar7 = vpmullq_avx512vl(auVar7,_DAT_14131f350);
    *_Base = auVar7._0_8_ + param_2;
    iVar1 = SUB164(ZEXT816(0x100000000),4);
    auVar8._4_4_ = iVar1 + 2;
    auVar8._0_4_ = 2;
    auVar8._8_4_ = 2;
    auVar8._12_4_ = 2;
    _Base[2] = auVar7._8_8_ + param_2;
    auVar7 = pmovsxdq(auVar8,auVar8);
    auVar7 = vpmullq_avx512vl(auVar7,auVar6);
    _Base[4] = auVar7._0_8_ + param_2;
    auVar9._4_4_ = iVar1 + 4;
    auVar9._0_4_ = 4;
    auVar9._8_4_ = 4;
    auVar9._12_4_ = 4;
    _Base[6] = auVar7._8_8_ + param_2;
    *(undefined4 *)(_Base + 1) = 0;
    *(undefined4 *)(_Base + 3) = 0;
    auVar7 = pmovsxdq(auVar9,auVar9);
    auVar6 = vpmullq_avx512vl(auVar7,auVar6);
    *(undefined4 *)(_Base + 5) = 0;
    _Base[8] = auVar6._0_8_ + param_2;
    *(undefined4 *)(_Base + 7) = 0;
    _Base[10] = auVar6._8_8_ + param_2;
    *(undefined4 *)(_Base + 9) = 0;
    *(undefined4 *)(_Base + 0xb) = 0;
  }
  if (param_4 != (char *)0x0) {
    do {
      sVar3 = strspn(param_4,"\t ,");
      _Str = param_4 + sVar3;
      if (*_Str == '\0') break;
      sVar3 = strcspn(_Str,"\t ,");
      lVar5 = 0;
      param_4 = _Str + sVar3;
      plVar2 = _Base;
      do {
        if (((int)plVar2[1] < 1) &&
           (iVar1 = FUN_140b8c740(*(undefined8 *)*plVar2,_Str,sVar3), iVar1 == 0)) {
          iVar4 = iVar4 + 1;
          *(int *)(_Base + lVar5 * 2 + 1) = iVar4;
          break;
        }
        lVar5 = lVar5 + 1;
        plVar2 = plVar2 + 2;
      } while (lVar5 < 6);
    } while (iVar4 < 6);
    if (iVar4 == 0) {
      FUN_140b8d990(_Base,"providers\\implementations\\encode_decode\\ml_common_codecs.c",0x51);
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\encode_decode\\ml_common_codecs.c",0x52,
                 "ossl_ml_common_pkcs8_fmt_order");
      FUN_140b91cc0(0x39,0xf5,"no %s private key %s formats are enabled",param_1,param_3);
      return (longlong *)0x0;
    }
    qsort(_Base,6,0x10,(_PtFuncCompare *)&LAB_140db9f30);
    _Base[(longlong)iVar4 * 2] = 0;
  }
  return _Base;
}

