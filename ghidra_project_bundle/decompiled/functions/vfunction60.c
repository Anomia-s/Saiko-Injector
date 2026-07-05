/**
 * Function: vfunction60
 * Address:  1407ce6d0
 * Signature: void __thiscall vfunction60(CommandList * this, longlong param_1)
 * Body size: 23 bytes
 */


void __thiscall nvrhi::d3d12::CommandList::vfunction60(CommandList *this,longlong param_1)

{
  if (param_1 != 0) {
    param_1 = param_1 + 0x10;
  }
  FUN_1407c8b50(&(this->CommandList_data).offset_0xc8,param_1);
  return;
}

