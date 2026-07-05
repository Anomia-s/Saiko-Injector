/**
 * Function: s_exceeds_name_buffer_length
 * Address:  140d4b700
 * Signature: undefined s_exceeds_name_buffer_length(void)
 * Body size: 762 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 s_exceeds_name_buffer_length(undefined8 *param_1,char *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  void *_Src;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  undefined1 local_68 [64];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  _Src = (void *)0x0;
  if (param_2 == (char *)0x0) {
    return 1;
  }
  sVar4 = strlen(param_2);
  if (0x31 < sVar4) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\ecdsa_sig.c",0xb5,"ecdsa_setup_md");
    pcVar7 = "%s exceeds name buffer length";
LAB_140d4b765:
    FUN_140b91cc0(0x39,0x7a,pcVar7,param_2);
    return 0;
  }
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  lVar5 = FUN_140b71980(*param_1,param_2,param_3);
  if (lVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\ecdsa_sig.c",0xbd,"ecdsa_setup_md");
    pcVar7 = "%s could not be fetched";
    goto LAB_140d4b765;
  }
  iVar1 = FUN_140b97b40(lVar5);
  if (iVar1 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\signature\\ecdsa_sig.c",0xc3,"ecdsa_setup_md");
    pcVar8 = "%s has invalid md size %d";
    pcVar7 = (char *)CONCAT44(uVar9,iVar1);
    uVar6 = 0x7a;
LAB_140d4b8bd:
    FUN_140b91cc0(0x39,uVar6,pcVar8,param_2,pcVar7);
    FUN_140b719e0(lVar5);
    uVar6 = 0;
  }
  else {
    iVar2 = FUN_140da75e0(lVar5);
    iVar3 = FUN_140b97c00(lVar5);
    if (iVar3 != 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("providers\\implementations\\signature\\ecdsa_sig.c",0xd1,"ecdsa_setup_md");
      FUN_140b91cc0(0x39,0xb7,0);
      FUN_140b719e0(lVar5);
      return 0;
    }
    if ((*(byte *)((longlong)param_1 + 0x1c) & 2) == 0) {
      pcVar7 = (char *)(param_1 + 0x25);
      if ((*pcVar7 != '\0') && (iVar1 = FUN_140b97ac0(lVar5,pcVar7), iVar1 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\signature\\ecdsa_sig.c",0xe6,"ecdsa_setup_md");
        pcVar8 = "digest %s != %s";
        uVar6 = 0xae;
        goto LAB_140d4b8bd;
      }
      FUN_140b719e0(lVar5);
    }
    else {
      FUN_140b709d0(param_1[0x2d]);
      FUN_140b719e0(param_1[0x2c]);
      param_1[0x24] = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_140c21d90(local_68,param_1 + 4,0x100);
        if (((iVar3 != 0) &&
            (iVar2 = FUN_140da8030(local_68,0xffffffff,param_1[2],iVar2), iVar2 != 0)) &&
           (iVar2 = FUN_140c21e60(local_68), iVar2 != 0)) {
          FUN_140c22710(local_68,param_1 + 0x24);
          _Src = (void *)FUN_140c22760(local_68);
        }
        FUN_140c227c0(local_68);
        if ((_Src != (void *)0x0) && (param_1[0x24] != 0)) {
          memmove(param_1 + 4,_Src,param_1[0x24]);
        }
      }
      param_1[0x2d] = 0;
      param_1[0x2c] = lVar5;
      param_1[0x2e] = (longlong)iVar1;
      FUN_140b8c190(param_1 + 0x25,param_2,0x32);
    }
    uVar6 = 1;
  }
  return uVar6;
}

