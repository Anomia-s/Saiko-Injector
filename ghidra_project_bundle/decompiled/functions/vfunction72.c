/**
 * Function: vfunction72
 * Address:  140732f20
 * Signature: undefined8 * __thiscall vfunction72(Device * this, undefined8 * param_1, longlong * param_2, longlong * param_3, longlong param_4, undefined4 * param_5)
 * Body size: 582 bytes
 */


undefined8 * __thiscall
nvrhi::d3d12::Device::vfunction72
          (Device *this,undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
          undefined4 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined8 *_Dst;
  
  if (param_3 == (longlong *)0x0 || param_2 == (longlong *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    _Dst = (undefined8 *)FUN_140b65d30(0x3c8);
    memset(_Dst,0,0x3c8);
    *(undefined4 *)(_Dst + 1) = 1;
    *_Dst = &MeshletPipeline::vftable;
    *(undefined1 *)(_Dst + 2) = 3;
    _Dst[3] = 0;
    _Dst[4] = 0;
    *(undefined8 *)((longlong)_Dst + 0x21) = 0;
    *(undefined8 *)((longlong)_Dst + 0x29) = 0;
    *(undefined4 *)((longlong)_Dst + 0x31) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x35) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x37) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x39) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x3d) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x3f) = 0xf;
    *(undefined4 *)((longlong)_Dst + 0x41) = 0x2010102;
    *(undefined2 *)((longlong)_Dst + 0x45) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x47) = 0xf;
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
    *(undefined2 *)((longlong)_Dst + 0x71) = 0x101;
    *(undefined1 *)((longlong)_Dst + 0x73) = 2;
    *(undefined2 *)((longlong)_Dst + 0x75) = 0xffff;
    _Dst[0xf] = 0x101010801010100;
    *(undefined1 *)(_Dst + 0x10) = 8;
    *(undefined4 *)((longlong)_Dst + 0x87) = 0;
    *(undefined4 *)((longlong)_Dst + 0x84) = 0;
    *(undefined8 *)((longlong)_Dst + 0x8c) = 0;
    *(undefined8 *)((longlong)_Dst + 0x94) = 0;
    *(undefined8 *)((longlong)_Dst + 0x9c) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xac) = 0;
    *(undefined8 *)((longlong)_Dst + 0xb4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xbc) = 0;
    *(undefined8 *)((longlong)_Dst + 0xc4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xcc) = 0;
    *(undefined8 *)((longlong)_Dst + 0xd4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xdc) = 0;
    *(undefined8 *)((longlong)_Dst + 0xe4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xec) = 0;
    *(undefined8 *)((longlong)_Dst + 0xf4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xfc) = 0;
    *(undefined8 *)((longlong)_Dst + 0x104) = 0;
    *(undefined8 *)((longlong)_Dst + 0x109) = 0;
    *(undefined8 *)((longlong)_Dst + 0x111) = 0;
    *(undefined4 *)((longlong)_Dst + 0x11c) = 1;
    plVar2 = _Dst + 0x25;
    memset(plVar2,0,0x299);
    FUN_140709480(_Dst + 2,param_4);
    uVar3 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    *(undefined4 *)(_Dst + 0x21) = *param_5;
    *(undefined4 *)((longlong)_Dst + 0x10c) = uVar3;
    *(undefined4 *)(_Dst + 0x22) = uVar4;
    *(undefined4 *)((longlong)_Dst + 0x114) = uVar5;
    *(undefined4 *)(_Dst + 0x23) = uVar6;
    *(undefined4 *)((longlong)_Dst + 0x11c) = uVar7;
    *(undefined4 *)(_Dst + 0x24) = uVar8;
    *(undefined4 *)((longlong)_Dst + 0x124) = uVar9;
    if ((longlong *)_Dst[0x25] != param_2) {
      (**(code **)(*param_2 + 8))(param_2);
      plVar1 = (longlong *)*plVar2;
      *plVar2 = (longlong)param_2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
    if ((longlong *)_Dst[0x26] != param_3) {
      (**(code **)(*param_3 + 8))(param_3);
      plVar2 = (longlong *)_Dst[0x26];
      _Dst[0x26] = param_3;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    uVar10 = FUN_1406dfc80(param_4 + 0x20,*(undefined4 *)(_Dst + 0x22));
    *(undefined1 *)(_Dst + 0x78) = uVar10;
  }
  *param_1 = _Dst;
  return param_1;
}

