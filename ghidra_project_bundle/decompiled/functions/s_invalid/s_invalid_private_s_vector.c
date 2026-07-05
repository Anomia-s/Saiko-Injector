/**
 * Function: s_invalid_private_s_vector
 * Address:  140da28b0
 * Signature: undefined s_invalid_private_s_vector(void)
 * Body size: 490 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 s_invalid_private_s_vector(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Buf2;
  char *pcVar10;
  undefined8 uVar11;
  
  if ((((param_3 == (longlong *)0x0) || (param_3[8] != 0)) || (param_3[0x16] != 0)) ||
     ((lVar8 = *param_3, param_2 != *(longlong *)(lVar8 + 8) ||
      (lVar7 = FUN_140b70980(), lVar7 == 0)))) {
    return 0;
  }
  lVar8 = FUN_140b8d8d0(*(undefined8 *)(lVar8 + 0x10),"crypto\\ml_kem\\ml_kem.c",0x727);
  iVar6 = *(int *)(*param_3 + 0x48);
  if (lVar8 != 0) {
    *(undefined8 *)((longlong)param_3 + 0x6c) = 0;
    *(undefined8 *)((longlong)param_3 + 0x74) = 0;
    *(undefined8 *)((longlong)param_3 + 0x7c) = 0;
    *(undefined8 *)((longlong)param_3 + 0x84) = 0;
    lVar9 = (longlong)iVar6 * 0x200;
    *(undefined8 *)((longlong)param_3 + 0x8c) = 0;
    *(undefined8 *)((longlong)param_3 + 0x94) = 0;
    *(undefined8 *)((longlong)param_3 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_3 + 0xa4) = 0;
    puVar1 = (undefined8 *)*param_3;
    param_3[6] = (longlong)param_3 + 0x6c;
    param_3[7] = (longlong)param_3 + 0x8c;
    param_3[9] = lVar9 + lVar8;
    param_3[8] = lVar8;
    param_3[0xc] = 0;
    lVar8 = lVar8 + (longlong)(iVar6 * iVar6) * 0x200 + lVar9;
    param_3[10] = lVar8;
    param_3[0xb] = lVar8 + lVar9;
    iVar6 = FUN_140da4270(lVar8,param_1,*(undefined4 *)(puVar1 + 9));
    if (iVar6 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ml_kem\\ml_kem.c",0x524,"parse_prvkey")
      ;
      uVar11 = *puVar1;
      pcVar10 = "%s invalid private \'s\' vector";
    }
    else {
      lVar8 = puVar1[6];
      iVar6 = s_invalid_public_t_vector(lVar8 + param_1,lVar7,param_3);
      if (iVar6 == 0) goto LAB_140da29e1;
      _Buf2 = (void *)(lVar8 + param_1 + puVar1[3]);
      iVar6 = memcmp((void *)param_3[7],_Buf2,0x20);
      if (iVar6 == 0) {
        puVar2 = (undefined4 *)param_3[0xb];
        uVar3 = *(undefined4 *)((longlong)_Buf2 + 0x24);
        uVar4 = *(undefined4 *)((longlong)_Buf2 + 0x28);
        uVar5 = *(undefined4 *)((longlong)_Buf2 + 0x2c);
        *puVar2 = *(undefined4 *)((longlong)_Buf2 + 0x20);
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar3 = *(undefined4 *)((longlong)_Buf2 + 0x34);
        uVar4 = *(undefined4 *)((longlong)_Buf2 + 0x38);
        uVar5 = *(undefined4 *)((longlong)_Buf2 + 0x3c);
        puVar2[4] = *(undefined4 *)((longlong)_Buf2 + 0x30);
        puVar2[5] = uVar3;
        puVar2[6] = uVar4;
        puVar2[7] = uVar5;
        FUN_140b709d0(lVar7);
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ml_kem\\ml_kem.c",0x531,"parse_prvkey")
      ;
      uVar11 = *puVar1;
      pcVar10 = "%s public key hash mismatch";
    }
    FUN_140b91cc0(0x39,0x9e,pcVar10,uVar11);
  }
LAB_140da29e1:
  FUN_140da2440(param_3);
  FUN_140b709d0(lVar7);
  return 0;
}

