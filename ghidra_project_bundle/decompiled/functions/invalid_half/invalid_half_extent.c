/**
 * Function: invalid_half_extent
 * Address:  1402f3070
 * Signature: undefined __thiscall invalid_half_extent(void * this)
 * Body size: 572 bytes
 */


undefined1 (*) [32] __thiscall invalid_half_extent(void *this,undefined1 (*param_2) [32])

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 *puVar10;
  void *_Dst;
  char *pcVar11;
  ulonglong uVar12;
  longlong *_Src;
  
  _Src = (longlong *)((longlong)this + 0x18);
  cVar4 = *(char *)((longlong)this + 0x38);
  if (cVar4 != '\0') {
    param_2[1][0] = cVar4;
    goto joined_r0x0001402f31ab;
  }
  puVar10 = (undefined8 *)(*DAT_14151f528)(0x50);
  *(undefined4 *)(puVar10 + 1) = 0;
                    /* inlined constructor or destructor (approx location) for JPH::Shape */
  *puVar10 = &JPH::Shape::vftable;
  puVar10[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined2 *)(puVar10 + 3) = 0x100;
                    /* inlined constructor or destructor (approx location) for JPH::ConvexShape */
  *puVar10 = &JPH::ConvexShape::vftable;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  puVar10[4] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar10 + 5) = *(undefined4 *)((longlong)this + 0x48);
                    /* inlined constructor or destructor (approx location) for JPH::BoxShape */
  *puVar10 = &JPH::BoxShape::vftable;
  uVar9 = *(undefined8 *)((longlong)this + 0x58);
  puVar10[6] = *(undefined8 *)((longlong)this + 0x50);
  puVar10[7] = uVar9;
  auVar3 = *(undefined1 (*) [16])((longlong)this + 0x50);
  auVar8 = vshufps_avx(auVar3,auVar3,0xa9);
  auVar3 = vminps_avx(auVar3,auVar8);
  auVar8 = vshufps_avx(auVar3,auVar3,0xaa);
  auVar3 = vminss_avx(auVar3,auVar8);
  auVar3 = vminss_avx(auVar3,ZEXT416(*(uint *)((longlong)this + 0x60)));
  *(int *)(puVar10 + 8) = auVar3._0_4_;
  auVar3 = *(undefined1 (*) [16])((longlong)this + 0x50);
  auVar8 = vshufps_avx(auVar3,auVar3,0xa9);
  auVar3 = vminps_avx(auVar3,auVar8);
  auVar8 = vshufps_avx(auVar3,auVar3,0xaa);
  auVar3 = vminss_avx(auVar3,auVar8);
  if (0.0 <= auVar3._0_4_) {
    if (*(float *)((longlong)this + 0x60) < 0.0) {
      pcVar11 = "Invalid convex radius";
      goto LAB_1402f3181;
    }
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
    if (*(char *)((longlong)this + 0x38) == '\x02') {
      if (0xf < *(ulonglong *)((longlong)this + 0x30)) {
        (*DAT_14151f538)(*_Src);
      }
      *(undefined8 *)((longlong)this + 0x28) = 0;
      *(undefined8 *)((longlong)this + 0x30) = 0xf;
    }
    else if ((*(char *)((longlong)this + 0x38) == '\x01') &&
            (puVar7 = (undefined8 *)*_Src, puVar7 != (undefined8 *)0x0)) {
      LOCK();
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
    *(undefined8 **)((longlong)this + 0x18) = puVar10;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    pcVar11 = "Invalid half extent";
LAB_1402f3181:
    FUN_1400e7cd0(_Src,pcVar11);
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)*puVar10)(puVar10,1);
  }
  cVar4 = *(char *)((longlong)this + 0x38);
  param_2[1][0] = cVar4;
joined_r0x0001402f31ab:
  if (cVar4 == '\x02') {
    *param_2 = ZEXT1232(ZEXT812(0));
    uVar6 = *(ulonglong *)((longlong)this + 0x28);
    if (0xf < *(ulonglong *)((longlong)this + 0x30)) {
      _Src = *(longlong **)((longlong)this + 0x18);
    }
    if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (uVar6 < 0x10) {
      *(ulonglong *)(*param_2 + 0x10) = uVar6;
      *(undefined8 *)(*param_2 + 0x18) = 0xf;
      lVar5 = _Src[1];
      *(longlong *)*param_2 = *_Src;
      *(longlong *)(*param_2 + 8) = lVar5;
    }
    else {
      uVar12 = 0x16;
      if (0x16 < (uVar6 | 0xf)) {
        uVar12 = uVar6 | 0xf;
      }
      _Dst = (void *)(*DAT_14151f528)(uVar12 + 1);
      *(void **)*param_2 = _Dst;
      *(ulonglong *)(*param_2 + 0x10) = uVar6;
      *(ulonglong *)(*param_2 + 0x18) = uVar12;
      memcpy(_Dst,_Src,uVar6 + 1);
    }
  }
  else if (cVar4 == '\x01') {
    lVar5 = *_Src;
    *(longlong *)*param_2 = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}

