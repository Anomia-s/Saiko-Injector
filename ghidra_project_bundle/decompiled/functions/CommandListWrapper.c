/**
 * Function: CommandListWrapper
 * Address:  1406e0050
 * Signature: CommandListWrapper * __thiscall CommandListWrapper(CommandListWrapper * this, longlong * param_1, longlong * param_2, undefined1 param_3, undefined1 param_4)
 * Body size: 970 bytes
 */


CommandListWrapper * __thiscall
nvrhi::validation::CommandListWrapper::CommandListWrapper
          (CommandListWrapper *this,longlong *param_1,longlong *param_2,undefined1 param_3,
          undefined1 param_4)

{
  undefined8 uVar1;
  
  (this->CommandListWrapper_data).offset_0x0 = 1;
  this->vftablePtr = &vftable;
  (this->CommandListWrapper_data).offset_0x8 = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  (this->CommandListWrapper_data).offset_0x10 = param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  uVar1 = (**(code **)(*param_1 + 0x210))(param_1);
  (this->CommandListWrapper_data).offset_0x18 = uVar1;
  (this->CommandListWrapper_data).offset_0x20 = param_3;
  (this->CommandListWrapper_data).offset_0x21 = param_4;
  (this->CommandListWrapper_data).offset_0x30 = 0;
  (this->CommandListWrapper_data).offset_0x38 = 0;
  (this->CommandListWrapper_data).offset_0x40 = 0;
  (this->CommandListWrapper_data).offset_0x48 = 0;
  (this->CommandListWrapper_data).offset_0x50 = 0;
  (this->CommandListWrapper_data).offset_0x24 = 0;
  *(undefined4 *)((longlong)&(this->CommandListWrapper_data).offset_0x50 + 4) = 0x3f800000;
  (this->CommandListWrapper_data).offset_0x58 = 0;
  (this->CommandListWrapper_data).offset_0x60 = 0;
  (this->CommandListWrapper_data).offset_0x68 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x70 = 0;
  (this->CommandListWrapper_data).offset_0x78 = 0;
  (this->CommandListWrapper_data).offset_0x80 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x88 = 0;
  (this->CommandListWrapper_data).offset_0x90 = 0;
  (this->CommandListWrapper_data).offset_0x98 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0xa0 = 0;
  (this->CommandListWrapper_data).offset_0xa8 = 0;
  (this->CommandListWrapper_data).offset_0xb0 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0xb8 = 0;
  (this->CommandListWrapper_data).offset_0xc0 = 0;
  (this->CommandListWrapper_data).offset_0xc8 = 0;
  (this->CommandListWrapper_data).offset_0xcc = 0x3f800000;
  (this->CommandListWrapper_data).offset_0xd0 = 0;
  (this->CommandListWrapper_data).offset_0xd8 = 0;
  (this->CommandListWrapper_data).offset_0xe0 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0xe8 = 0;
  (this->CommandListWrapper_data).offset_0xf0 = 0;
  (this->CommandListWrapper_data).offset_0xf8 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x100 = 0;
  (this->CommandListWrapper_data).offset_0x108 = 0;
  (this->CommandListWrapper_data).offset_0x110 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x118 = 0;
  (this->CommandListWrapper_data).offset_0x120 = 0;
  (this->CommandListWrapper_data).offset_0x128 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x130 = 0;
  (this->CommandListWrapper_data).offset_0x138 = 0;
  (this->CommandListWrapper_data).offset_0x140 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x148 = 0;
  (this->CommandListWrapper_data).offset_0x150 = 0;
  (this->CommandListWrapper_data).offset_0x158 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x160 = 0;
  (this->CommandListWrapper_data).offset_0x168 = 0;
  (this->CommandListWrapper_data).offset_0x170 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x178 = 0;
  (this->CommandListWrapper_data).offset_0x180 = 0;
  (this->CommandListWrapper_data).offset_0x188 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x190 = 0;
  (this->CommandListWrapper_data).offset_0x198 = 0;
  (this->CommandListWrapper_data).offset_0x1a0 = 0;
  (this->CommandListWrapper_data).offset_0x1a4 = 0x3f800000;
  (this->CommandListWrapper_data).offset_0x1a8 = 0;
  (this->CommandListWrapper_data).offset_0x1b0 = 0;
  (this->CommandListWrapper_data).offset_0x1b8 = 0;
  (this->CommandListWrapper_data).offset_0x1bc = 0x3f800000;
  memset(&(this->CommandListWrapper_data).field_0x1c0,0,0x125);
  memset(&(this->CommandListWrapper_data).field_0x2e8,0,0x1d8);
  (this->CommandListWrapper_data).offset_0x548 = 0;
  (this->CommandListWrapper_data).offset_0x550 = 0;
  (this->CommandListWrapper_data).offset_0x4c8 = 0;
  (this->CommandListWrapper_data).offset_0x4d0 = 0;
  (this->CommandListWrapper_data).offset_0x4d8 = 0;
  (this->CommandListWrapper_data).offset_0x4e0 = 0;
  (this->CommandListWrapper_data).offset_0x4e8 = 0;
  (this->CommandListWrapper_data).offset_0x4f0 = 0;
  (this->CommandListWrapper_data).offset_0x4f8 = 0;
  (this->CommandListWrapper_data).offset_0x500 = 0;
  (this->CommandListWrapper_data).offset_0x508 = 0;
  (this->CommandListWrapper_data).offset_0x510 = 0;
  (this->CommandListWrapper_data).offset_0x518 = 0;
  (this->CommandListWrapper_data).offset_0x520 = 0;
  (this->CommandListWrapper_data).offset_0x528 = 0;
  (this->CommandListWrapper_data).offset_0x530 = 0;
  (this->CommandListWrapper_data).offset_0x538 = 0;
  (this->CommandListWrapper_data).offset_0x540 = 0;
  *(undefined4 *)((longlong)&(this->CommandListWrapper_data).offset_0x550 + 4) = 0x3f800000;
  (this->CommandListWrapper_data).offset_0x558 = 0;
  (this->CommandListWrapper_data).offset_0x560 = 0;
  (this->CommandListWrapper_data).offset_0x568 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x570 = 0;
  (this->CommandListWrapper_data).offset_0x578 = 0;
  (this->CommandListWrapper_data).offset_0x580 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x588 = 0;
  (this->CommandListWrapper_data).offset_0x590 = 0;
  (this->CommandListWrapper_data).offset_0x598 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x5a0 = 0;
  (this->CommandListWrapper_data).offset_0x5a8 = 0;
  (this->CommandListWrapper_data).offset_0x5b0 = 0;
  (this->CommandListWrapper_data).offset_0x5b4 = 0x3f800000;
  (this->CommandListWrapper_data).offset_0x5b8 = 0;
  (this->CommandListWrapper_data).offset_0x5c0 = 0;
  (this->CommandListWrapper_data).offset_0x5c8 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x5d0 = 0;
  (this->CommandListWrapper_data).offset_0x5d8 = 0;
  (this->CommandListWrapper_data).offset_0x5e0 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x5e8 = 0;
  (this->CommandListWrapper_data).offset_0x5f0 = 0;
  (this->CommandListWrapper_data).offset_0x5f8 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x600 = 0;
  (this->CommandListWrapper_data).offset_0x608 = 0;
  (this->CommandListWrapper_data).offset_0x610 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x618 = 0;
  (this->CommandListWrapper_data).offset_0x620 = 0;
  (this->CommandListWrapper_data).offset_0x628 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x630 = 0;
  (this->CommandListWrapper_data).offset_0x638 = 0;
  (this->CommandListWrapper_data).offset_0x640 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x648 = 0;
  (this->CommandListWrapper_data).offset_0x650 = 0;
  (this->CommandListWrapper_data).offset_0x658 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x660 = 0;
  (this->CommandListWrapper_data).offset_0x668 = 0;
  (this->CommandListWrapper_data).offset_0x670 = 0x3f80000000000000;
  (this->CommandListWrapper_data).offset_0x678 = 0;
  (this->CommandListWrapper_data).offset_0x680 = 0;
  (this->CommandListWrapper_data).offset_0x688 = 0;
  (this->CommandListWrapper_data).offset_0x68c = 0x3f800000;
  (this->CommandListWrapper_data).offset_0x690 = 0;
  (this->CommandListWrapper_data).offset_0x698 = 0;
  (this->CommandListWrapper_data).offset_0x6a0 = 0;
  (this->CommandListWrapper_data).offset_0x6a4 = 0x3f800000;
  (this->CommandListWrapper_data).offset_0x6a8 = 0;
  (this->CommandListWrapper_data).offset_0x6b0 = 0;
  (this->CommandListWrapper_data).offset_0x6b8 = 0;
  (this->CommandListWrapper_data).offset_0x6bc = 0x3f800000;
  memset(&(this->CommandListWrapper_data).field_0x6c0,0,0x121);
  (this->CommandListWrapper_data).offset_0x7e8 = 0;
  (this->CommandListWrapper_data).offset_0x7f0 = 0;
  (this->CommandListWrapper_data).offset_0x7f8 = 0;
  (this->CommandListWrapper_data).offset_0x800 = 0;
  (this->CommandListWrapper_data).offset_0x808 = 0;
  (this->CommandListWrapper_data).offset_0x810 = 0;
  (this->CommandListWrapper_data).offset_0x818 = 0;
  (this->CommandListWrapper_data).offset_0x820 = 0;
  (this->CommandListWrapper_data).offset_0x828 = 0;
  (this->CommandListWrapper_data).offset_0x830 = 0;
  (this->CommandListWrapper_data).offset_0x838 = 0;
  (this->CommandListWrapper_data).offset_0x840 = 0;
  (this->CommandListWrapper_data).offset_0x848 = 0;
  (this->CommandListWrapper_data).offset_0x850 = 0;
  (this->CommandListWrapper_data).offset_0x858 = 0;
  (this->CommandListWrapper_data).offset_0x860 = 0;
  (this->CommandListWrapper_data).offset_0x868 = 0;
  (this->CommandListWrapper_data).offset_0x870 = 0;
  (this->CommandListWrapper_data).offset_0x878 = 0;
  (this->CommandListWrapper_data).offset_0x880 = 0;
  *(undefined8 *)((longlong)&(this->CommandListWrapper_data).offset_0x880 + 1) = 0;
  (this->CommandListWrapper_data).offset_0x889 = 0;
  return this;
}

