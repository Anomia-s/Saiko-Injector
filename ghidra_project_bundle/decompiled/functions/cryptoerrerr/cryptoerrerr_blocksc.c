/**
 * Function: cryptoerrerr_blocksc
 * Address:  140b91cf0
 * Signature: undefined cryptoerrerr_blocksc(void)
 * Body size: 505 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cryptoerrerr_blocksc(uint param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  uVar11 = 0x140b91d16;
  uVar6 = 0;
  uVar10 = 0;
  lVar9 = 0;
  lVar3 = FUN_140b92c60();
  if (lVar3 == 0) {
    return;
  }
  uVar7 = 0;
  lVar8 = lVar9;
  if (param_3 == 0) goto LAB_140b91e16;
  lVar4 = (longlong)*(int *)(lVar3 + 0x340);
  uVar7 = *(ulonglong *)(lVar3 + 0x140 + lVar4 * 8);
  lVar8 = *(longlong *)(lVar3 + 0xc0 + lVar4 * 8);
  *(undefined8 *)(lVar3 + 0xc0 + lVar4 * 8) = 0;
  *(undefined4 *)(lVar3 + 0x1c0 + lVar4 * 4) = 0;
  uVar6 = uVar10;
  if ((uVar7 < 0x400) &&
     (lVar4 = FUN_140b8d9c0(lVar8,0x400,"crypto\\err\\err_blocks.c",0x54,uVar10,uVar11),
     uVar6 = uVar10, lVar4 != 0)) {
    uVar7 = 0x400;
    lVar8 = lVar4;
LAB_140b91da7:
    iVar2 = FUN_140c07b20(lVar8,uVar7,param_3,param_4);
    iVar5 = 0;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    lVar9 = (longlong)iVar5;
    *(undefined1 *)(lVar8 + lVar9) = 0;
  }
  else if (lVar8 != 0) goto LAB_140b91da7;
  lVar4 = FUN_140b8d9c0(lVar8,lVar9 + 1U,"crypto\\err\\err_blocks.c",0x67,uVar6,uVar11);
  if (lVar4 == 0) {
    if (lVar8 != 0) {
      uVar6 = 3;
    }
  }
  else {
    *(undefined1 *)(lVar9 + lVar4) = 0;
    uVar6 = 3;
    uVar7 = lVar9 + 1U;
    lVar8 = lVar4;
  }
LAB_140b91e16:
  lVar9 = (longlong)*(int *)(lVar3 + 0x340);
  if ((*(byte *)(lVar3 + 0x1c0 + lVar9 * 4) & 1) == 0) {
    *(undefined8 *)(lVar3 + 0xc0 + lVar9 * 8) = 0;
    *(undefined8 *)(lVar3 + 0x140 + lVar9 * 8) = 0;
    *(undefined4 *)(lVar3 + 0x1c0 + lVar9 * 4) = 0;
  }
  else {
    puVar1 = *(undefined1 **)(lVar3 + 0xc0 + lVar9 * 8);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(undefined4 *)(lVar3 + 0x1c0 + lVar9 * 4) = 1;
    }
  }
  if (param_1 == 2) {
    param_2 = param_2 | 0x80000000;
  }
  else {
    param_2 = param_2 & 0x7fffff | (param_1 & 0xff) << 0x17;
  }
  *(uint *)(lVar3 + 0x80 + (longlong)*(int *)(lVar3 + 0x340) * 4) = param_2;
  if (param_3 != 0) {
    lVar9 = (longlong)*(int *)(lVar3 + 0x340);
    if ((*(byte *)(lVar3 + 0x1c0 + lVar9 * 4) & 1) != 0) {
      FUN_140b8d990(*(undefined8 *)(lVar3 + 0xc0 + lVar9 * 8),
                    "D:\\a\\Platform\\Platform\\openssl-src\\crypto\\err\\err_local.h",0x4e);
    }
    *(longlong *)(lVar3 + 0xc0 + lVar9 * 8) = lVar8;
    *(ulonglong *)(lVar3 + 0x140 + lVar9 * 8) = uVar7;
    *(undefined4 *)(lVar3 + 0x1c0 + lVar9 * 4) = uVar6;
  }
  return;
}

