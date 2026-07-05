/**
 * Function: o2i_sct_signature
 * Address:  140ba1c20
 * Signature: undefined o2i_sct_signature(void)
 * Body size: 805 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint * o2i_sct_signature(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  puVar7 = (uint *)0x0;
  if (0xfffe < param_3 - 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar6 = 0x4c;
    goto LAB_140ba1ef7;
  }
  puVar7 = (uint *)FUN_140ba0ee0();
  if (puVar7 == (uint *)0x0) goto LAB_140ba1f1c;
  pbVar8 = (byte *)*param_2;
  bVar1 = *pbVar8;
  *puVar7 = (uint)bVar1;
  if (bVar1 != 0) {
    lVar4 = FUN_140b8c7c0(pbVar8,param_3,"crypto\\ct\\ct_oct.c",0x87);
    *(longlong *)(puVar7 + 2) = lVar4;
    if (lVar4 != 0) {
      *(ulonglong *)(puVar7 + 4) = param_3;
      pbVar8 = pbVar8 + param_3;
LAB_140ba1ed4:
      *param_2 = (longlong)pbVar8;
      if (param_1 == (undefined8 *)0x0) {
        return puVar7;
      }
      FUN_140ba0f20(*param_1);
      *param_1 = puVar7;
      return puVar7;
    }
    goto LAB_140ba1f1c;
  }
  if (param_3 < 0x2b) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar6 = 99;
  }
  else {
    lVar4 = FUN_140b8c7c0(pbVar8 + 1,0x20,"crypto\\ct\\ct_oct.c",0x68);
    *(longlong *)(puVar7 + 6) = lVar4;
    if (lVar4 == 0) goto LAB_140ba1f1c;
    puVar7[8] = 0x20;
    puVar7[9] = 0;
    bVar1 = pbVar8[0x21];
    *(ulonglong *)(puVar7 + 10) = (ulonglong)bVar1 << 0x38;
    uVar5 = (ulonglong)pbVar8[0x22] << 0x30 | (ulonglong)bVar1 << 0x38;
    *(ulonglong *)(puVar7 + 10) = uVar5;
    uVar5 = (ulonglong)pbVar8[0x23] << 0x28 | uVar5;
    *(ulonglong *)(puVar7 + 10) = uVar5;
    uVar5 = (ulonglong)pbVar8[0x24] << 0x20 | uVar5;
    *(ulonglong *)(puVar7 + 10) = uVar5;
    uVar5 = (ulonglong)pbVar8[0x25] << 0x18 | uVar5;
    *(ulonglong *)(puVar7 + 10) = uVar5;
    uVar5 = (ulonglong)pbVar8[0x26] << 0x10 | uVar5;
    *(ulonglong *)(puVar7 + 10) = uVar5;
    uVar5 = (ulonglong)pbVar8[0x27] << 8 | uVar5;
    *(ulonglong *)(puVar7 + 10) = uVar5;
    *(ulonglong *)(puVar7 + 10) = pbVar8[0x28] | uVar5;
    uVar5 = (ulonglong)CONCAT11(pbVar8[0x29],pbVar8[0x2a]);
    if (param_3 - 0x2b < uVar5) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar6 = 0x72;
      goto LAB_140ba1ef7;
    }
    if (uVar5 != 0) {
      lVar4 = FUN_140b8c7c0(pbVar8 + 0x2b,uVar5,"crypto\\ct\\ct_oct.c",0x76);
      *(longlong *)(puVar7 + 0xc) = lVar4;
      if (lVar4 == 0) goto LAB_140ba1f1c;
    }
    pbVar10 = pbVar8 + 0x2b + uVar5;
    *(ulonglong *)(puVar7 + 0xe) = uVar5;
    uVar5 = (param_3 - 0x2b) - uVar5;
    if (*puVar7 == 0) {
      if (uVar5 < 5) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = 0x2a;
LAB_140ba1de4:
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\ct\\ct_oct.c",uVar6,"o2i_SCT_signature");
        uVar6 = 0x6b;
        goto LAB_140ba1df5;
      }
      *(byte *)(puVar7 + 0x10) = *pbVar10;
      *(byte *)((longlong)puVar7 + 0x41) = pbVar10[1];
      iVar3 = FUN_140ba0fd0(puVar7);
      if (iVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = 0x33;
        goto LAB_140ba1de4;
      }
      bVar1 = pbVar10[2];
      bVar2 = pbVar10[3];
      pbVar8 = pbVar10 + 4;
      pbVar9 = (byte *)(ulonglong)CONCAT11(bVar1,bVar2);
      if (pbVar10 + (uVar5 - (longlong)pbVar8) < pbVar9) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar6 = 0x3a;
        goto LAB_140ba1de4;
      }
      iVar3 = FUN_140ba1000(puVar7,pbVar8,pbVar9);
      if ((iVar3 == 1) &&
         (iVar3 = ((uint)CONCAT11(bVar1,bVar2) - (int)(pbVar10 + (uVar5 - (longlong)pbVar8))) +
                  (int)uVar5, 0 < iVar3)) {
        pbVar8 = pbVar8 + (longlong)(pbVar9 + (uVar5 - (longlong)iVar3));
        goto LAB_140ba1ed4;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ct\\ct_oct.c",0x1f,"o2i_SCT_signature")
      ;
      uVar6 = 0x67;
LAB_140ba1df5:
      FUN_140b91cc0(0x32,uVar6,0);
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    uVar6 = 0x80;
  }
LAB_140ba1ef7:
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ct\\ct_oct.c",uVar6,"o2i_SCT");
  FUN_140b91cc0(0x32,0x68,0);
LAB_140ba1f1c:
  FUN_140ba0f20(puVar7);
  return (uint *)0x0;
}

