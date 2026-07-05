/**
 * Function: vfunction71
 * Address:  14072f1e0
 * Signature: undefined8 * __thiscall vfunction71(Device * this, undefined8 * param_1, longlong * param_2, longlong * param_3, longlong param_4, undefined4 * param_5)
 * Body size: 619 bytes
 */


undefined8 * __thiscall
nvrhi::d3d12::Device::vfunction71
          (Device *this,undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
          undefined4 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined8 *_Dst;
  
  if (param_3 == (longlong *)0x0 || param_2 == (longlong *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    _Dst = (undefined8 *)FUN_140b65d30(0x160);
    memset(_Dst,0,0x160);
    *(undefined4 *)(_Dst + 1) = 1;
    *_Dst = &GraphicsPipeline::vftable;
    *(undefined1 *)(_Dst + 2) = 3;
    *(undefined8 *)((longlong)_Dst + 0x14) = 0;
    *(undefined8 *)((longlong)_Dst + 0x1c) = 0;
    *(undefined8 *)((longlong)_Dst + 0x24) = 0;
    *(undefined8 *)((longlong)_Dst + 0x2c) = 0;
    *(undefined8 *)((longlong)_Dst + 0x34) = 0;
    *(undefined8 *)((longlong)_Dst + 0x3c) = 0;
    *(undefined8 *)((longlong)_Dst + 0x41) = 0;
    *(undefined4 *)((longlong)_Dst + 0x49) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x4d) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x4f) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x51) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x55) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x57) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x59) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x5d) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x5f) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x61) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x65) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x67) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x69) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x6d) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x6f) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x71) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x75) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x77) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x79) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x7d) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x7f) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x81) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x85) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x87) = 0xf;
    *(undefined2 *)((longlong)_Dst + 0x89) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x8b) = 2;
    *(undefined2 *)((longlong)_Dst + 0x8d) = 0xffff;
    _Dst[0x12] = 0x101010801010100;
    *(undefined1 *)(_Dst + 0x13) = 8;
    *(undefined4 *)((longlong)_Dst + 0x9f) = 0;
    *(undefined4 *)((longlong)_Dst + 0x9c) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xac) = 0;
    *(undefined8 *)((longlong)_Dst + 0xb4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xbc) = 0;
    *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xcc) = 0;
    *(undefined8 *)((longlong)_Dst + 0xd4) = 0;
    _Dst[0x1c] = 0;
    _Dst[0x1d] = 0;
    _Dst[0x1e] = 0;
    _Dst[0x1f] = 0;
    _Dst[0x20] = 0;
    _Dst[0x21] = 0;
    _Dst[0x22] = 0;
    _Dst[0x23] = 0;
    _Dst[0x24] = 0;
    _Dst[0x25] = 0;
    *(undefined8 *)((longlong)_Dst + 0x129) = 0;
    *(undefined8 *)((longlong)_Dst + 0x131) = 0;
    *(undefined4 *)((longlong)_Dst + 0x13c) = 1;
    _Dst[0x29] = 0;
    _Dst[0x2a] = 0;
    *(undefined1 *)(_Dst + 0x2b) = 0;
    FUN_140705260(_Dst + 2,param_4);
    uVar2 = param_5[1];
    uVar3 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    *(undefined4 *)(_Dst + 0x25) = *param_5;
    *(undefined4 *)((longlong)_Dst + 300) = uVar2;
    *(undefined4 *)(_Dst + 0x26) = uVar3;
    *(undefined4 *)((longlong)_Dst + 0x134) = uVar4;
    *(undefined4 *)(_Dst + 0x27) = uVar5;
    *(undefined4 *)((longlong)_Dst + 0x13c) = uVar6;
    *(undefined4 *)(_Dst + 0x28) = uVar7;
    *(undefined4 *)((longlong)_Dst + 0x144) = uVar8;
    if ((longlong *)_Dst[0x29] != param_2) {
      (**(code **)(*param_2 + 8))(param_2);
      plVar1 = (longlong *)_Dst[0x29];
      _Dst[0x29] = param_2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    if ((longlong *)_Dst[0x2a] != param_3) {
      (**(code **)(*param_3 + 8))(param_3);
      plVar1 = (longlong *)_Dst[0x2a];
      _Dst[0x2a] = param_3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    uVar9 = FUN_1406dfc80(param_4 + 0x38,*(undefined4 *)(_Dst + 0x26));
    *(undefined1 *)(_Dst + 0x2b) = uVar9;
  }
  *param_1 = _Dst;
  return param_1;
}

