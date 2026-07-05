/**
 * Function: Device
 * Address:  14053e470
 * Signature: Device * __thiscall Device(Device * this, undefined8 * param_1)
 * Body size: 1664 bytes
 */


Device * __thiscall nvrhi::d3d12::Device::Device(Device *this,undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  HANDLE pvVar8;
  longlong *plVar9;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 *local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong **local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  (this->Device_data).offset_0x0 = 1;
  this->vftablePtr = &vftable;
  local_58 = &(this->Device_data).offset_0x8;
  (this->Device_data).offset_0x60 = 0;
  (this->Device_data).offset_0x8 = (longlong *)0x0;
  (this->Device_data).offset_0x10 = 0;
  (this->Device_data).offset_0x18 = 0;
  (this->Device_data).offset_0x20 = 0;
  (this->Device_data).offset_0x28 = 0;
  (this->Device_data).offset_0x30 = 0;
  (this->Device_data).offset_0x38 = 0;
  (this->Device_data).offset_0x40 = 0;
  (this->Device_data).offset_0x48 = 0;
  (this->Device_data).offset_0x50 = 0;
  (this->Device_data).offset_0x58 = 0;
  local_90 = &(this->Device_data).field_0x68;
  FUN_14053ee00(local_90,local_58,param_1);
  local_88 = &(this->Device_data).offset_0x470;
  (this->Device_data).offset_0x470 = 0;
  (this->Device_data).offset_0x478 = (longlong *)0x0;
  (this->Device_data).offset_0x480 = (longlong *)0x0;
  (this->Device_data).offset_0x498 = 0;
  (this->Device_data).offset_0x4a0 = 0;
  (this->Device_data).offset_0x4a8 = 0;
  (this->Device_data).offset_0x4b0 = 0;
  (this->Device_data).offset_0x4b8 = 0;
  (this->Device_data).offset_0x4c0 = 0;
  (this->Device_data).offset_0x4c8 = 0;
  (this->Device_data).offset_0x4d0 = 0;
  (this->Device_data).offset_0x4d8 = 0xffffffff;
  (this->Device_data).offset_0x490 = 2;
  local_80 = &(this->Device_data).offset_0x4e0;
  *(undefined8 *)&(this->Device_data).field_0x4dc = 0;
  *(undefined8 *)((longlong)&(this->Device_data).offset_0x4e0 + 4) = 0;
  *(undefined8 *)&(this->Device_data).field_0x4ec = 0;
  *(undefined8 *)((longlong)&(this->Device_data).offset_0x4f0 + 4) = 0;
  *(undefined8 *)&(this->Device_data).field_0x4fa = 0;
  *(undefined8 *)&(this->Device_data).field_0x502 = 0;
  FUN_1406ecd50(&(this->Device_data).field_0x510);
  (this->Device_data).offset_0x5f4 = 0;
  (this->Device_data).offset_0x5fc = 0;
  (this->Device_data).offset_0x600 = 0;
  (this->Device_data).offset_0x5e8 = 0;
  *(undefined8 *)&(this->Device_data).offset_0x5f0 = 0;
  (this->Device_data).offset_0x5d8 = 0;
  *(undefined8 *)&(this->Device_data).field_0x5e0 = 0;
  (this->Device_data).offset_0x5c8 = 0;
  (this->Device_data).offset_0x5d0 = 0;
  (this->Device_data).offset_0x5b8 = 0;
  (this->Device_data).offset_0x5c0 = 0;
  (this->Device_data).offset_0x5a8 = 0;
  (this->Device_data).offset_0x5b0 = 0;
  *(undefined8 *)&(this->Device_data).offset_0x598 = 0;
  (this->Device_data).offset_0x5a0 = 0;
  (this->Device_data).offset_0x588 = 0;
  (this->Device_data).offset_0x590 = 0;
  plVar1 = (longlong *)param_1[1];
  plVar9 = (this->Device_data).offset_0x8;
  if (plVar9 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar9 = *local_58;
    }
    *local_58 = plVar1;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  (this->Device_data).offset_0x58 = *(undefined1 *)((longlong)param_1 + 0x3e);
  (this->Device_data).offset_0x60 = *param_1;
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    local_60 = (longlong *)FUN_140b65d30(0x58);
    FUN_14053f100(local_60,local_58,lVar2);
    plVar1 = (longlong *)*local_88;
    *local_88 = local_60;
    if (plVar1 != (longlong *)0x0) {
      FUN_140542670(plVar1 + 5);
      lVar2 = plVar1[5];
      plVar1[5] = 0;
      thunk_FUN_140b68ba8(lVar2,0x10);
      plVar9 = (longlong *)plVar1[1];
      if (plVar9 != (longlong *)0x0) {
        plVar1[1] = 0;
        (**(code **)(*plVar9 + 0x10))();
      }
      plVar9 = (longlong *)*plVar1;
      if (plVar9 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar9 + 0x10))();
      }
      thunk_FUN_140b68ba8(plVar1,0x58);
    }
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    local_60 = (longlong *)FUN_140b65d30(0x58);
    FUN_14053f100(local_60,local_58,lVar2);
    plVar1 = (this->Device_data).offset_0x478;
    (this->Device_data).offset_0x478 = local_60;
    if (plVar1 != (longlong *)0x0) {
      FUN_140542670(plVar1 + 5);
      lVar2 = plVar1[5];
      plVar1[5] = 0;
      thunk_FUN_140b68ba8(lVar2,0x10);
      plVar9 = (longlong *)plVar1[1];
      if (plVar9 != (longlong *)0x0) {
        plVar1[1] = 0;
        (**(code **)(*plVar9 + 0x10))();
      }
      plVar9 = (longlong *)*plVar1;
      if (plVar9 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar9 + 0x10))();
      }
      thunk_FUN_140b68ba8(plVar1,0x58);
    }
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    local_60 = (longlong *)FUN_140b65d30(0x58);
    FUN_14053f100(local_60,local_58,lVar2);
    plVar1 = (this->Device_data).offset_0x480;
    (this->Device_data).offset_0x480 = local_60;
    if (plVar1 != (longlong *)0x0) {
      FUN_140542670(plVar1 + 5);
      lVar2 = plVar1[5];
      plVar1[5] = 0;
      thunk_FUN_140b68ba8(lVar2,0x10);
      plVar9 = (longlong *)plVar1[1];
      if (plVar9 != (longlong *)0x0) {
        plVar1[1] = 0;
        (**(code **)(*plVar9 + 0x10))();
      }
      plVar9 = (longlong *)*plVar1;
      if (plVar9 != (longlong *)0x0) {
        *plVar1 = 0;
        (**(code **)(*plVar9 + 0x10))();
      }
      thunk_FUN_140b68ba8(plVar1,0x58);
    }
  }
  FUN_14071ce40(&(this->Device_data).field_0x128,3,*(undefined4 *)((longlong)param_1 + 0x2c),0);
  FUN_14071ce40(local_90,2,*(undefined4 *)(param_1 + 5),0);
  FUN_14071ce40(&(this->Device_data).field_0x1e8,0,*(undefined4 *)(param_1 + 6),1);
  FUN_14071ce40(&(this->Device_data).field_0x2a8,1,*(undefined4 *)((longlong)param_1 + 0x34),1);
  (**(code **)(**local_58 + 0x68))(*local_58,0,&(this->Device_data).offset_0x588,0x3c);
  (**(code **)(**local_58 + 0x68))
            (*local_58,8,(undefined1 *)((longlong)&(this->Device_data).offset_0x5c0 + 4),0x18);
  uVar3 = (**(code **)(**local_58 + 0x68))
                    (*local_58,0x1b,(undefined1 *)((longlong)&(this->Device_data).offset_0x5d8 + 4),
                     0xc);
  iVar4 = (**(code **)(**local_58 + 0x68))(*local_58,0x1e,&(this->Device_data).offset_0x5e8,0x14);
  uVar5 = (**(code **)(**local_58 + 0x68))(*local_58,0x20,&(this->Device_data).offset_0x5fc,8);
  plVar1 = (this->Device_data).offset_0x8;
  uVar6 = (**(code **)*plVar1)(plVar1,&DAT_140e53300,&(this->Device_data).offset_0x18);
  if (-1 < (int)(uVar6 | uVar3)) {
    iVar7 = (this->Device_data).offset_0x5e4;
    (this->Device_data).offset_0x4fc = 9 < iVar7;
    (this->Device_data).offset_0x4fd = 10 < iVar7;
  }
  plVar1 = (this->Device_data).offset_0x8;
  uVar3 = (**(code **)*plVar1)(plVar1,&DAT_140e53310,&(this->Device_data).offset_0x10);
  if (-1 < (int)(uVar3 | uVar5)) {
    (this->Device_data).offset_0x4fe = 9 < (this->Device_data).offset_0x5fc;
  }
  plVar1 = (this->Device_data).offset_0x8;
  uVar3 = (**(code **)*plVar1)(plVar1,&DAT_140e53320,&(this->Device_data).offset_0x20);
  if (-1 < (int)(uVar3 | uVar5)) {
    (this->Device_data).offset_0x505 = 0x59 < (this->Device_data).offset_0x600;
  }
  plVar1 = (this->Device_data).offset_0x8;
  iVar7 = (**(code **)*plVar1)(plVar1,&DAT_140e53330,&(this->Device_data).offset_0x28);
  if (-1 < iVar7) {
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    iVar7 = (**(code **)(**local_58 + 0x68))(*local_58,9,&local_78,4);
    if (-1 < iVar7) {
      (this->Device_data).offset_0x508 = 0xf < (int)local_78;
      (this->Device_data).offset_0x509 = 0x10 < (int)local_78;
    }
  }
  if (-1 < iVar4) {
    (this->Device_data).offset_0x4ff = 1 < (this->Device_data).offset_0x5f0;
  }
  local_94 = 0;
  local_9c = 0;
  local_68 = 0;
  local_70 = &local_a0;
  local_78 = 0x100000010;
  local_a0 = 0;
  plVar1 = (this->Device_data).offset_0x8;
  (**(code **)(*plVar1 + 0x148))(plVar1,&local_78,0,&DAT_140e52f00,&(this->Device_data).offset_0x30)
  ;
  local_78._0_4_ = 0x14;
  local_a0 = 1;
  plVar1 = (this->Device_data).offset_0x8;
  (**(code **)(*plVar1 + 0x148))(plVar1,&local_78,0,&DAT_140e52f00,&(this->Device_data).offset_0x38)
  ;
  local_78 = CONCAT44(local_78._4_4_,0xc);
  local_a0 = 2;
  plVar1 = (this->Device_data).offset_0x8;
  (**(code **)(*plVar1 + 0x148))(plVar1,&local_78,0,&DAT_140e52f00,&(this->Device_data).offset_0x40)
  ;
  pvVar8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  (this->Device_data).offset_0x488 = pvVar8;
  local_78 = 0x40;
  if ((ulonglong)((this->Device_data).offset_0x4f0 - (this->Device_data).offset_0x4e0) < 0x200) {
    FUN_14002bb90(local_80,&local_78);
  }
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    local_78 = CONCAT44(local_78._4_4_,0x66);
    iVar4 = (**(code **)(**local_58 + 0x68))(*local_58,7,&local_78,4);
    (this->Device_data).offset_0x507 =
         (0x65 < (int)local_78 && 2 < (this->Device_data).offset_0x598) && -1 < iVar4;
  }
  return this;
}

