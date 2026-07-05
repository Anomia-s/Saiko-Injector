/**
 * Function: bytesnconfigured_maximum_queue_capacity
 * Address:  140008330
 * Signature: undefined __thiscall bytesnconfigured_maximum_queue_capacity(void * this)
 * Body size: 814 bytes
 */


longlong __thiscall bytesnconfigured_maximum_queue_capacity(void *this,ulonglong param_2)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *_Dst;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  QuillError_vftable *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar5 = *(longlong *)((longlong)this + 0x80);
  uVar6 = *(ulonglong *)(lVar5 + 0x80);
  do {
    uVar6 = uVar6 * 2;
  } while (uVar6 < param_2);
  if (*(ulonglong *)this < uVar6) {
    if (*(ulonglong *)this < param_2) {
      FUN_1400088e0(local_140);
      FUN_1400088e0(local_e0,uVar6);
      FUN_1400088e0(local_80,param_2);
      FUN_1400089f0(local_a0,
                    "Logging single messages larger than the configured maximum queue capacity is not possible.\nTo log single messages exceeding this limit, consider increasing FrontendOptions::unbounded_queue_max_capacity.\nMessage size: "
                    ,local_80);
      FUN_140008840(local_c0,local_a0," bytes\nRequired queue capacity: ");
      FUN_140007770(local_100);
      FUN_140008840(local_120,local_100," bytes\nConfigured maximum queue capacity: ");
      FUN_140007770(local_160);
      FUN_140008840(local_60,local_160," bytes");
      local_190 = 0;
      uStack_188 = 0;
                    /* inlined constructor or destructor (approx location) for
                       quill::v11::QuillError */
      local_198 = &quill::v11::QuillError::vftable;
      uStack_178 = uStack_58;
      local_170 = local_50;
      uStack_168 = uStack_48;
      local_50 = 0;
      uStack_48 = 0xf;
      local_60[0] = 0;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_198,(ThrowInfo *)&DAT_14140fa50);
    }
LAB_140008389:
    lVar5 = 0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x100) = *(undefined8 *)(lVar5 + 0x180);
    local_40 = (undefined8 *)FUN_140b68600(0x300,0x80);
    uVar1 = *(undefined4 *)(*(longlong *)((longlong)this + 0x80) + 0xa0);
    *local_40 = 0;
    if ((longlong)uVar6 < 0) {
      uVar7 = 0x8000000000000000;
    }
    else {
      uVar7 = uVar6;
      if ((uVar6 ^ uVar6 - 1) <= uVar6 - 1) {
        uVar4 = 1;
        do {
          uVar7 = uVar4;
          uVar4 = uVar7 * 2;
        } while (uVar7 < uVar6);
      }
    }
    local_40[0x10] = uVar7;
    lVar5 = uVar7 * 5;
    auVar8._8_4_ = (int)((ulonglong)lVar5 >> 0x20);
    auVar8._0_8_ = lVar5;
    auVar8._12_4_ = 0x45300000;
    local_40[0x11] = uVar7 - 1;
    dVar2 = ((auVar8._8_8_ - 1.9342813113834067e+25) +
            ((double)CONCAT44(0x43300000,(int)lVar5) - 4503599627370496.0)) / 100.0;
    uVar6 = (ulonglong)dVar2;
    local_40[0x12] = (longlong)(dVar2 - 9.223372036854776e+18) & (longlong)uVar6 >> 0x3f | uVar6;
    alloc_aligned_failed_with_error_message_errno(uVar7 * 2,0x80);
    puVar3 = local_40;
    local_40[0x13] = _Dst;
    *(undefined4 *)(local_40 + 0x14) = uVar1;
    local_40[0x20] = 0;
    local_40[0x40] = 0;
    local_40[0x30] = 0;
    local_40[0x31] = 0;
    local_40[0x32] = 0;
    local_40[0x50] = 0;
    local_40[0x51] = 0;
    local_40[0x52] = 0;
    memset(_Dst,0,uVar7 * 2);
    LOCK();
    puVar3[0x20] = 0;
    UNLOCK();
    LOCK();
    puVar3[0x40] = 0;
    UNLOCK();
    **(undefined8 **)((longlong)this + 0x80) = puVar3;
    *(undefined8 **)((longlong)this + 0x80) = puVar3;
    uVar6 = puVar3[0x30];
    if ((puVar3[0x10] - uVar6) + puVar3[0x31] < param_2) {
      puVar3[0x31] = puVar3[0x40];
      uVar6 = puVar3[0x30];
      if ((puVar3[0x40] + puVar3[0x10]) - uVar6 < param_2) goto LAB_140008389;
    }
    lVar5 = (uVar6 & puVar3[0x11]) + puVar3[0x13];
  }
  return lVar5;
}

