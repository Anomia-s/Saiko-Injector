/**
 * Function: x509_missing_scheme_in_uri_sn
 * Address:  140be62c0
 * Signature: undefined x509_missing_scheme_in_uri_sn(void)
 * Body size: 903 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong x509_missing_scheme_in_uri_sn(int param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  size_t sVar8;
  char *pcVar9;
  byte *pbVar10;
  ulonglong uVar11;
  char *local_res10 [2];
  char *local_res20;
  
  switch(*param_2) {
  case 0:
    if (param_1 != 1) {
      return 0x33;
    }
    uVar11 = FUN_140be67f0(*(undefined8 *)(*(longlong *)(param_2 + 2) + 8),
                           *(undefined8 *)(param_3 + 8));
    return uVar11;
  case 1:
    uVar11 = FUN_140be6670(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_3 + 8));
    return uVar11;
  case 2:
    iVar5 = **(int **)(param_3 + 8);
    pcVar3 = *(char **)(*(int **)(param_3 + 8) + 2);
    lVar7 = *(longlong *)(*(int **)(param_2 + 2) + 2);
    if (iVar5 == 0) {
      return 0;
    }
    iVar6 = **(int **)(param_2 + 2);
    if ((iVar5 <= iVar6) &&
       (((iVar6 <= iVar5 || (lVar7 = lVar7 + (iVar6 - iVar5), *pcVar3 == '.')) ||
        (*(char *)(lVar7 + -1) == '.')))) {
      iVar5 = FUN_140be6a20(pcVar3,lVar7,(longlong)iVar5);
      return (ulonglong)(-(uint)(iVar5 != 0) & 0x2f);
    }
    return 0x2f;
  default:
    return 0x33;
  case 4:
    lVar7 = *(longlong *)(param_2 + 2);
    lVar1 = *(longlong *)(param_3 + 8);
    if (((*(int *)(lVar7 + 8) == 0) || (iVar5 = FUN_140b9c820(lVar7,0), -1 < iVar5)) &&
       ((*(int *)(lVar1 + 8) == 0 || (iVar5 = FUN_140b9c820(lVar1,0), -1 < iVar5)))) {
      if (*(int *)(lVar1 + 0x20) <= *(int *)(lVar7 + 0x20)) {
        iVar5 = memcmp(*(void **)(lVar1 + 0x18),*(void **)(lVar7 + 0x18),
                       (longlong)*(int *)(lVar1 + 0x20));
        return (ulonglong)(-(uint)(iVar5 != 0) & 0x2f);
      }
      return 0x2f;
    }
    return 0x11;
  case 6:
    break;
  case 7:
    iVar5 = **(int **)(param_2 + 2);
    pbVar4 = *(byte **)(*(int **)(param_3 + 8) + 2);
    iVar6 = **(int **)(param_3 + 8);
    if (((iVar5 == 4) || (iVar5 == 0x10)) && ((iVar6 == 8 || (iVar6 == 0x20)))) {
      if (iVar5 * 2 != iVar6) {
        return 0x2f;
      }
      if (0 < iVar5) {
        pbVar10 = pbVar4;
        do {
          if ((pbVar10[*(longlong *)(*(int **)(param_2 + 2) + 2) - (longlong)pbVar4] &
              pbVar10[iVar5]) != (pbVar10[iVar5] & *pbVar10)) {
            return 0x2f;
          }
          pbVar10 = pbVar10 + 1;
        } while ((longlong)pbVar10 - (longlong)pbVar4 < (longlong)iVar5);
      }
      return 0;
    }
    return 0x35;
  }
  piVar2 = *(int **)(param_3 + 8);
  pcVar3 = *(char **)(piVar2 + 2);
  lVar7 = FUN_140b8c8b0(*(undefined8 *)(*(int **)(param_2 + 2) + 2),
                        (longlong)**(int **)(param_2 + 2),"crypto\\x509\\v3_ncons.c",0x318);
  if (lVar7 == 0) {
    return 1;
  }
  uVar11 = 0;
  iVar5 = cryptohttphttp_libc(lVar7,&local_res20,0,local_res10,0,0,0,0,0);
  if (iVar5 == 0) {
    FUN_140b8d990(lVar7,"crypto\\x509\\v3_ncons.c",0x31c);
    return 0x35;
  }
  if ((local_res20 == (char *)0x0) || (*local_res20 == '\0')) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\x509\\v3_ncons.c",0x322,"nc_uri");
    uVar11 = 0x35;
    FUN_140b91cc0(0x22,0x35,"x509: missing scheme in URI: %s\n",lVar7);
    FUN_140b8d990(lVar7,"crypto\\x509\\v3_ncons.c",0x324);
    goto LAB_140be6588;
  }
  FUN_140b8d990(local_res20,"crypto\\x509\\v3_ncons.c",0x32a);
  FUN_140b8d990(lVar7,"crypto\\x509\\v3_ncons.c",0x32b);
  sVar8 = strlen(local_res10[0]);
  iVar5 = *piVar2;
  lVar7 = (longlong)iVar5;
  iVar6 = (int)sVar8;
  if ((iVar5 < 1) || (*pcVar3 != '.')) {
    if (iVar5 == iVar6) {
      lVar7 = (longlong)iVar6;
      pcVar9 = local_res10[0];
      goto LAB_140be6517;
    }
  }
  else if (iVar5 < iVar6) {
    pcVar9 = local_res10[0] + (iVar6 - lVar7);
LAB_140be6517:
    iVar5 = FUN_140be6a20(pcVar9,pcVar3,lVar7);
    if (iVar5 == 0) goto LAB_140be6588;
  }
  uVar11 = 0x2f;
LAB_140be6588:
  FUN_140b8d990(local_res10[0],"crypto\\x509\\v3_ncons.c",0x343);
  return uVar11;
}

