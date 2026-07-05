/**
 * Function: vfunction66
 * Address:  14071e900
 * Signature: undefined8 __thiscall vfunction66(CommandList * this, longlong param_1)
 * Body size: 114 bytes
 */


undefined8 __thiscall nvrhi::d3d12::CommandList::vfunction66(CommandList *this,longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18 [2];
  ulonglong local_8;
  
  local_8 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x5b) == '\x01') {
    local_20 = param_1;
    ::unordered_map_set_too_long(&(this->CommandList_data).field_0xa98,local_18,&local_20);
    uVar1 = *(undefined8 *)(local_18[0] + 0x18);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
  }
  if (DAT_1414ef3c0 == (local_8 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_8 ^ (ulonglong)auStack_48);
}

