/**
 * Function: oid_module_init
 * Address:  140cfed90
 * Signature: undefined oid_module_init(void)
 * Body size: 569 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
oid_module_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  void *_Dst;
  char *pcVar8;
  char *_Str;
  void *pvVar9;
  int iVar10;
  undefined8 uVar11;
  
  uVar11 = 0x140cfed9e;
  uVar4 = FUN_140b77290();
  lVar5 = FUN_140c1a380(param_2,uVar4);
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\asn_moid.c",0x20,"oid_module_init",param_4,uVar11);
    FUN_140b91cc0(0xd,0xac,0);
    return 0;
  }
  iVar10 = 0;
  iVar3 = FUN_140b77980(lVar5);
  if (0 < iVar3) {
    do {
      lVar6 = FUN_140b77990(lVar5,iVar10);
      _Dst = (void *)0x0;
      _Str = *(char **)(lVar6 + 0x10);
      pvVar2 = *(void **)(lVar6 + 8);
      pcVar7 = strrchr(_Str,0x2c);
      pcVar8 = _Str;
      pvVar9 = pvVar2;
      if ((pcVar7 != (char *)0x0) && (pcVar8 = pcVar7 + 1, pcVar7 != _Str)) {
        if (*pcVar8 == '\0') goto LAB_140cfef96;
        iVar3 = FUN_140c20ac0((int)*pcVar8,8);
        while (iVar3 != 0) {
          pcVar1 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          iVar3 = FUN_140c20ac0((int)*pcVar1,8);
        }
        iVar3 = FUN_140c20ac0((int)*_Str,8);
        while (iVar3 != 0) {
          pcVar1 = _Str + 1;
          _Str = _Str + 1;
          iVar3 = FUN_140c20ac0((int)*pcVar1,8);
        }
        iVar3 = FUN_140c20ac0((int)pcVar7[-1],8);
        while (pcVar7 = pcVar7 + -1, iVar3 != 0) {
          if (pcVar7 == _Str) goto LAB_140cfef96;
          iVar3 = FUN_140c20ac0((int)pcVar7[-1],8);
        }
        _Dst = (void *)FUN_140b8d8d0(pcVar7 + (2 - (longlong)_Str),"crypto\\asn1\\asn_moid.c",0x5a);
        if (_Dst == (void *)0x0) goto LAB_140cfef96;
        memcpy(_Dst,_Str,(size_t)(pcVar7 + (1 - (longlong)_Str)));
        (pcVar7 + (1 - (longlong)_Str))[(longlong)_Dst] = '\0';
        pvVar9 = _Dst;
      }
      iVar3 = obj_create(pcVar8,pvVar2,pvVar9);
      FUN_140b8d990(_Dst,"crypto\\asn1\\asn_moid.c",99);
      if (iVar3 == 0) {
LAB_140cfef96:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\asn1\\asn_moid.c",0x26,"oid_module_init");
        FUN_140b91cc0(0xd,0xab,0);
        return 0;
      }
      iVar10 = iVar10 + 1;
      iVar3 = FUN_140b77980(lVar5);
    } while (iVar10 < iVar3);
  }
  return 1;
}

