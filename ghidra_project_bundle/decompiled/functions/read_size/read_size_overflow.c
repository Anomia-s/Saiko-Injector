/**
 * Function: read_size_overflow
 * Address:  14043dc70
 * Signature: undefined read_size_overflow(void)
 * Body size: 760 bytes
 */


longlong read_size_overflow(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong _Size;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *_Src;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  void *_Dst;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  puVar1 = *(undefined8 **)(param_1 + 0x2c0);
  puVar2 = (uint *)puVar1[0x10];
  if (puVar2 == (uint *)0x0) {
    if (*(int *)(puVar1 + 9) - 4U < 0x32) {
      uVar10 = puVar1[8];
      switch(*(int *)(puVar1 + 9)) {
      case 4:
      case 0x17:
      case 0x24:
      case 0x34:
        uVar13 = 0x16762004;
        break;
      default:
        goto switchD_14043dd32_caseD_5;
      case 7:
      case 0x27:
        uVar13 = 0x18204008;
        break;
      case 8:
        uVar13 = 0x16772004;
        break;
      case 9:
        uVar13 = 0x15551002;
        break;
      case 10:
        uVar13 = 0x15841002;
        break;
      case 0xb:
        uVar13 = 0x15821002;
        break;
      case 0xc:
      case 0x35:
        uVar13 = 0x16362004;
        break;
      case 0x1d:
        uVar13 = 0x1a204008;
        break;
      case 0x20:
        uVar13 = 0x1b208010;
      }
LAB_14043dd7a:
      uVar6 = uVar13 & 0xff;
      goto LAB_14043dd7e;
    }
switchD_14043dd32_caseD_5:
    pcVar11 = "Unsupported backbuffer format";
LAB_14043dda2:
    FUN_1400fbed0(pcVar11);
  }
  else {
    uVar10 = **(undefined8 **)(puVar2 + 0x3c);
    uVar13 = *puVar2;
    if ((uVar13 & 0xf0000000) == 0x10000000 || uVar13 == 0) goto LAB_14043dd7a;
    uVar6 = 2;
    if (((uVar13 != 0x32595559) && (uVar13 != 0x55595659)) && (uVar13 != 0x59565955)) {
      uVar6 = (uVar13 == 0x30313050) + 1;
    }
LAB_14043dd7e:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)*(int *)(param_2 + 1);
    _Size = SUB168(auVar3 * ZEXT416(uVar6),0);
    if (SUB168(auVar3 * ZEXT416(uVar6),8) != 0) {
LAB_14043dd9b:
      pcVar11 = "read size overflow";
      goto LAB_14043dda2;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)*(int *)((longlong)param_2 + 0xc);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = _Size;
    auVar4 = auVar4 * auVar5;
    if (auVar4._8_8_ != 0) goto LAB_14043dd9b;
    lVar7 = height_pitch_would_overflow
                      ((longlong)*(int *)(param_2 + 1),*(int *)((longlong)param_2 + 0xc));
    if (lVar7 != 0) {
      local_4c = 0;
      local_50 = auVar4._0_4_;
      local_54 = 1;
      lVar8 = invalid_gpu_device(*puVar1,&local_54);
      if (lVar8 != 0) {
        uVar9 = parameter_s_is_invalid(puVar1[0x11]);
        local_78 = 0;
        uStack_70 = *param_2;
        local_68 = (ulonglong)*(uint *)(param_2 + 1) << 0x20;
        local_60 = *(uint *)((longlong)param_2 + 0xc);
        local_5c = 1;
        uStack_88 = (ulonglong)local_60;
        local_90 = (ulonglong)*(uint *)(param_2 + 1) << 0x20;
        local_98 = lVar8;
        local_80 = uVar10;
        parameter_s_is_invalid(uVar9,&local_80,&local_98);
        parameter_s_is_invalid(uVar9);
        local_a0 = parameter_s_is_invalid(puVar1[0x11]);
        invalid_gpu_device(*puVar1,1,&local_a0,1);
        invalid_gpu_device(*puVar1,local_a0);
        uVar10 = invalid_gpu_device(*puVar1);
        puVar1[0x11] = uVar10;
        _Src = (void *)invalid_gpu_device(*puVar1,lVar8,0);
        if (_Size == (longlong)*(int *)(lVar7 + 0x10)) {
          memcpy(*(void **)(lVar7 + 0x18),_Src,auVar4._0_8_);
        }
        else if (0 < *(int *)((longlong)param_2 + 0xc)) {
          _Dst = *(void **)(lVar7 + 0x18);
          iVar12 = 0;
          do {
            memcpy(_Dst,_Src,_Size);
            _Dst = (void *)((longlong)_Dst + (longlong)*(int *)(lVar7 + 0x10));
            _Src = (void *)((longlong)_Src + _Size);
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)((longlong)param_2 + 0xc));
        }
        invalid_gpu_device(*puVar1,lVar8);
        invalid_gpu_device(*puVar1,lVar8);
        goto LAB_14043dda9;
      }
    }
  }
  lVar7 = 0;
LAB_14043dda9:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

