/**
 * Function: update_size_overflow
 * Address:  14043cde0
 * Signature: undefined update_size_overflow(void)
 * Body size: 544 bytes
 */


undefined1
update_size_overflow(longlong param_1,uint *param_2,undefined8 *param_3,void *param_4,int param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 uVar7;
  uint uVar8;
  ulonglong _Size;
  longlong lVar9;
  void *_Dst;
  undefined8 uVar10;
  int iVar11;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  uint local_78;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  uVar1 = *param_2;
  if ((uVar1 & 0xf0000000) == 0x10000000 || uVar1 == 0) {
    uVar8 = uVar1 & 0xff;
  }
  else {
    uVar8 = 2;
    if (((uVar1 != 0x32595559) && (uVar1 != 0x55595659)) && (uVar1 != 0x59565955)) {
      uVar8 = (uVar1 == 0x30313050) + 1;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)*(int *)(param_3 + 1);
  _Size = SUB168(auVar4 * ZEXT416(uVar8),0);
  if (SUB168(auVar4 * ZEXT416(uVar8),8) == 0) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)*(int *)((longlong)param_3 + 0xc);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = _Size;
    auVar5 = auVar5 * auVar6;
    if (auVar5._8_8_ == 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x2c0);
      puVar3 = *(undefined8 **)(param_2 + 0x3c);
      local_4c = 0;
      local_50 = auVar5._0_4_;
      local_54 = 0;
      lVar9 = invalid_gpu_device(*puVar2,&local_54);
      if (lVar9 != 0) {
        local_a0 = puVar3;
        _Dst = (void *)invalid_gpu_device(*puVar2,lVar9,0);
        if (_Size == (longlong)param_5) {
          memcpy(_Dst,param_4,auVar5._0_8_);
        }
        else if (0 < *(int *)((longlong)param_3 + 0xc)) {
          iVar11 = 0;
          do {
            memcpy(_Dst,param_4,_Size);
            _Dst = (void *)((longlong)_Dst + _Size);
            param_4 = (void *)((longlong)param_4 + (longlong)param_5);
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)((longlong)param_3 + 0xc));
        }
        invalid_gpu_device(*puVar2,lVar9);
        uVar10 = parameter_s_is_invalid(puVar2[0x11]);
        local_78 = *(uint *)((longlong)param_3 + 0xc);
        uStack_60 = (ulonglong)local_78;
        local_68 = (ulonglong)*(uint *)(param_3 + 1) << 0x20;
        local_90 = 0;
        local_98 = *local_a0;
        uStack_88 = *param_3;
        local_80 = (ulonglong)*(uint *)(param_3 + 1) << 0x20;
        local_74 = 1;
        local_70 = lVar9;
        parameter_s_is_invalid(uVar10,&local_70,&local_98,0);
        parameter_s_is_invalid(uVar10);
        invalid_gpu_device(*puVar2,lVar9);
      }
      uVar7 = lVar9 != 0;
      goto LAB_14043cfc5;
    }
  }
  uVar7 = FUN_1400fbed0("update size overflow");
LAB_14043cfc5:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

