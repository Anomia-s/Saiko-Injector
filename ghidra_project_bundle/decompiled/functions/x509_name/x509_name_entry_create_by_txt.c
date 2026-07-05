/**
 * Function: x509_name_entry_create_by_txt
 * Address:  140b75e70
 * Signature: undefined x509_name_entry_create_by_txt(void)
 * Body size: 374 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
x509_name_entry_create_by_txt
          (longlong *param_1,undefined8 param_2,uint param_3,char *param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  size_t sVar6;
  
  lVar3 = FUN_140b964e0(param_2,0);
  if (lVar3 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\x509name.c",0xfc,"X509_NAME_ENTRY_create_by_txt");
    FUN_140b91cc0(0xb,0x77,"name=%s",param_2);
    return (longlong *)0x0;
  }
  if (((param_1 == (longlong *)0x0) || (plVar4 = (longlong *)*param_1, plVar4 == (longlong *)0x0))
     && (plVar4 = (longlong *)FUN_140b9c780(), plVar4 == (longlong *)0x0)) goto LAB_140b75f71;
  FUN_140bde750(*plVar4);
  lVar5 = FUN_140bdf6e0(lVar3);
  *plVar4 = lVar5;
  if ((lVar5 == 0) || ((param_4 == (char *)0x0 && (param_5 != 0)))) {
LAB_140b75f58:
    if ((param_1 == (longlong *)0x0) || (plVar4 != (longlong *)*param_1)) {
      FUN_140b9c7a0(plVar4);
    }
    plVar4 = (longlong *)0x0;
  }
  else {
    if (((int)param_3 < 1) || ((param_3 >> 0xc & 1) == 0)) {
      if (param_5 < 0) {
        sVar6 = strlen(param_4);
        param_5 = (int)sVar6;
      }
      iVar2 = FUN_140b78d90(plVar4[1],param_4,param_5);
      if (iVar2 == 0) goto LAB_140b75f58;
      if (param_3 != 0xffffffff) {
        if (param_3 == 0xfffffffe) {
          lVar5 = plVar4[1];
          uVar1 = FUN_140bdf1b0(param_4,param_5);
          *(undefined4 *)(lVar5 + 4) = uVar1;
        }
        else {
          *(uint *)(plVar4[1] + 4) = param_3;
        }
      }
    }
    else {
      uVar1 = FUN_140b964c0(lVar5);
      lVar5 = FUN_140bdf360(plVar4 + 1,param_4,param_5,param_3,uVar1);
      if (lVar5 == 0) goto LAB_140b75f58;
    }
    if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
      *param_1 = (longlong)plVar4;
    }
  }
LAB_140b75f71:
  FUN_140bde750(lVar3);
  return plVar4;
}

