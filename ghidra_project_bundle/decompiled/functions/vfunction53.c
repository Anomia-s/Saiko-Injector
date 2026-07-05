/**
 * Function: vfunction53
 * Address:  1407ce0f0
 * Signature: void __thiscall vfunction53(CommandList * this, longlong param_1)
 * Body size: 23 bytes
 */


void __thiscall nvrhi::d3d12::CommandList::vfunction53(CommandList *this,longlong param_1)

{
  if (param_1 != 0) {
    param_1 = param_1 + 0x10;
  }
  FUN_1407c74d0(&(this->CommandList_data).offset_0xc8,param_1);
  return;
}

