/**
 * Function: vfunction67
 * Address:  1407312a0
 * Signature: void __thiscall vfunction67(CommandList * this)
 * Body size: 244 bytes
 */


void __thiscall nvrhi::d3d12::CommandList::vfunction67(CommandList *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if ((this->CommandList_data).offset_0xad8 == '\x01') {
    lVar1 = this[1].CommandList_data.offset_0x308;
    if (lVar1 != 0) {
      lVar4 = 0;
      do {
        local_58 = *(undefined8 *)((longlong)&this[1].CommandList_data.offset_0x10 + lVar4);
        ::unordered_map_set_too_long(&(this->CommandList_data).field_0xa98,local_50,&local_58);
        lVar2 = *(longlong *)(local_50[0] + 0x18);
        if (lVar2 != *(longlong *)((longlong)&this[1].CommandList_data.offset_0x18 + lVar4)) {
          plVar3 = *(longlong **)((this->CommandList_data).offset_0x1e0 + 8);
          (**(code **)(*plVar3 + 0x130))
                    (plVar3,*(undefined4 *)((longlong)&this[1].CommandList_data.offset_0x8 + lVar4),
                     lVar2);
          *(longlong *)((longlong)&this[1].CommandList_data.offset_0x18 + lVar4) = lVar2;
        }
        lVar4 = lVar4 + 0x18;
      } while (lVar1 * 0x18 != lVar4);
    }
    (this->CommandList_data).offset_0xad8 = 0;
  }
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_78);
}

