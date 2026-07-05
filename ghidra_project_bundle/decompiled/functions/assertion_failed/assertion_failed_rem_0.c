/**
 * Function: assertion_failed_rem_0
 * Address:  140cfbd20
 * Signature: undefined assertion_failed_rem_0(void)
 * Body size: 1365 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
assertion_failed_rem_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 *_Dst;
  longlong lVar1;
  void *_Dst_00;
  size_t _Size;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  sbyte sVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  size_t _Size_00;
  longlong lVar18;
  longlong local_a0;
  longlong local_90;
  
  iVar5 = FUN_140a5ec00();
  if (((param_7 - 0x400 & 0xfffff9ff) != 0) || (param_7 == 0xa00)) {
    return 0;
  }
  lVar18 = 0x400;
  iVar5 = (uint)(iVar5 != 0) + (((int)(param_7 + ((int)param_7 >> 0x1f & 0x1ffU)) >> 9) + -2) * 2;
  pcVar2 = (code *)(&PTR_DAT_14151c810)[iVar5];
  pcVar3 = (code *)(&PTR_DAT_14151c840)[iVar5];
  if (param_7 == 0x400) {
    uVar17 = 0x10;
    local_90 = 0xa0;
    iVar5 = 0x2a8;
    local_a0 = 0x3c0;
    _Size_00 = 0x140;
    lVar11 = 0x2800;
    lVar18 = 0x280;
  }
  else {
    local_a0 = 0x600;
    if (param_7 == 0x600) {
      uVar17 = 0x18;
      local_90 = 0x100;
      iVar5 = 0x440;
      _Size_00 = 0x200;
      lVar11 = 0x4000;
    }
    else {
      if (param_7 != 0x800) {
        return 0;
      }
      local_90 = 0x140;
      _Size_00 = 0x280;
      local_a0 = 0x780;
      uVar17 = 0x20;
      iVar5 = 0x550;
      lVar11 = 0x5000;
      lVar18 = 0x500;
    }
  }
  iVar5 = (iVar5 + 5 + uVar17) * 0x10;
  uVar7 = FUN_140b8da80(iVar5,"crypto\\bn\\rsaz_exp_x2.c",0x1a0);
  if (uVar7 == 0) {
    return 0;
  }
  lVar16 = (uVar7 & 0xffffffffffffffc0) + 0x40;
  _Dst = (undefined8 *)(_Size_00 + lVar16);
  lVar1 = _Size_00 + (longlong)_Dst;
  *_Dst = 1;
  _Dst_00 = (void *)(lVar11 + lVar1);
  *(undefined8 *)(local_90 + (longlong)_Dst) = 1;
  (*pcVar2)(lVar1,_Dst,param_5,param_4,param_6);
  (*pcVar2)(_Size_00 + lVar1,param_2,param_5,param_4,param_6);
  lVar13 = local_a0 + lVar1;
  local_a0 = 0xf;
  lVar11 = lVar1;
  lVar12 = lVar1;
  do {
    lVar12 = _Size_00 + lVar12;
    lVar11 = lVar18 + lVar11;
    (*pcVar2)(lVar11,lVar12,lVar12,param_4,param_6);
    (*pcVar2)(lVar13,lVar11,_Size_00 + lVar1,param_4,param_6);
    lVar13 = lVar13 + lVar18;
    local_a0 = local_a0 + -1;
  } while (local_a0 != 0);
  _Size = (ulonglong)uVar17 * 8;
  memcpy(_Dst_00,(void *)*param_3,_Size);
  *(undefined8 *)(_Size + (longlong)_Dst_00) = 0;
  memcpy((void *)((longlong)_Dst_00 + (ulonglong)(uVar17 + 1) * 8),(void *)param_3[1],_Size);
  *(undefined8 *)((longlong)_Dst_00 + (ulonglong)(uVar17 * 2) * 8 + 8) = 0;
  uVar4 = ((int)param_7 / 5) * 5;
  iVar6 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 0x3fU)) >> 6;
  bVar8 = (byte)uVar4 & 0x3f;
  if (param_7 == uVar4) {
    s_d_openssl_internal_error_sn("assertion failed: rem != 0","crypto\\bn\\rsaz_exp_x2.c",0x1d5);
  }
  (*pcVar3)(lVar16,lVar1,*(ulonglong *)((longlong)_Dst_00 + (longlong)iVar6 * 8) >> bVar8,
            *(ulonglong *)((longlong)_Dst_00 + (longlong)(int)(iVar6 + uVar17) * 8 + 8) >> bVar8);
  while (uVar4 = uVar4 - 5, -1 < (int)uVar4) {
    uVar10 = uVar4 >> 6;
    sVar9 = (sbyte)(uVar4 & 0x3f);
    uVar14 = (uint)(*(ulonglong *)((longlong)_Dst_00 + (ulonglong)uVar10 * 8) >> sVar9);
    if ((uVar4 & 0x3f) < 0x3c) {
      uVar15 = (uint)(*(ulonglong *)((longlong)_Dst_00 + (ulonglong)(uVar10 + uVar17) * 8 + 8) >>
                     sVar9);
    }
    else {
      uVar15 = (uint)(*(longlong *)((longlong)_Dst_00 + (ulonglong)(uVar10 + uVar17) * 8 + 0x10) <<
                     (0x40U - sVar9 & 0x3f)) ^
               (uint)(*(ulonglong *)((longlong)_Dst_00 + (ulonglong)(uVar10 + uVar17) * 8 + 8) >>
                     sVar9);
      uVar14 = (uint)(*(longlong *)((longlong)_Dst_00 + (ulonglong)uVar10 * 8 + 8) <<
                     (0x40U - sVar9 & 0x3f)) ^ uVar14;
    }
    (*pcVar3)(_Dst,lVar1,uVar14 & 0x1f,uVar15 & 0x1f);
    (*pcVar2)(lVar16,lVar16,lVar16,param_4,param_6);
    (*pcVar2)(lVar16,lVar16,lVar16,param_4,param_6);
    (*pcVar2)(lVar16,lVar16,lVar16,param_4,param_6);
    (*pcVar2)(lVar16,lVar16,lVar16,param_4,param_6);
    (*pcVar2)(lVar16,lVar16,lVar16,param_4,param_6);
    (*pcVar2)(lVar16,lVar16,_Dst,param_4,param_6);
  }
  memset(_Dst,0,_Size_00);
  *_Dst = 1;
  *(undefined8 *)(local_90 + (longlong)_Dst) = 1;
  (*pcVar2)(param_1,lVar16,_Dst,param_4,param_6);
  FUN_14046e980(uVar7,iVar5);
  FUN_140b8d990(uVar7,"crypto\\bn\\rsaz_exp_x2.c",0x230);
  return 1;
}

