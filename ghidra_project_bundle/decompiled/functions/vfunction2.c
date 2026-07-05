/**
 * Function: vfunction2
 * Address:  140b59a40
 * Signature: void __thiscall vfunction2(StreamSink * this)
 * Body size: 261 bytes
 */


/* quill::v11::StreamSink member function inherited by quill::v11::FileSink */

void __thiscall quill::v11::StreamSink::vfunction2(StreamSink *this)

{
  undefined8 *puVar1;
  FILE *pFVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  longlong *in_stack_00000068;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 ***local_40 [2];
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  pFVar2 = (FILE *)(this->Sink_data).offset_0xe0;
  if (pFVar2 != (FILE *)0x0) {
    plVar3 = *(longlong **)&(this->Sink_data).field_0x228;
    if (plVar3 == (longlong *)0x0) {
      writefile_failed_getlasterror(*in_stack_00000068,1,in_stack_00000068[1],pFVar2);
      puVar1 = &(this->Sink_data).offset_0xe8;
      *puVar1 = *puVar1 + in_stack_00000068[1];
    }
    else {
      local_58 = (undefined4)*in_stack_00000068;
      uStack_54 = *(undefined4 *)((longlong)in_stack_00000068 + 4);
      uStack_50 = (undefined4)in_stack_00000068[1];
      uStack_4c = *(undefined4 *)((longlong)in_stack_00000068 + 0xc);
      (**(code **)(*plVar3 + 0x10))(plVar3,local_40,&local_58);
      ppppuVar5 = local_40;
      if (0xf < local_28) {
        ppppuVar5 = (undefined8 ****)local_40[0];
      }
      writefile_failed_getlasterror
                ((longlong)ppppuVar5,1,local_30,(FILE *)(this->Sink_data).offset_0xe0);
      puVar1 = &(this->Sink_data).offset_0xe8;
      *puVar1 = *puVar1 + local_30;
      if (0xf < local_28) {
        uVar4 = local_28 + 1;
        ppppuVar5 = (undefined8 ****)local_40[0];
        if (0xfff < uVar4) {
          ppppuVar5 = (undefined8 ****)local_40[0][-1];
          if (0x1f < (ulonglong)((longlong)local_40[0] + (-8 - (longlong)ppppuVar5))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar4 = local_28 + 0x28;
        }
        thunk_FUN_140b68ba8(ppppuVar5,uVar4);
      }
    }
    *(undefined1 *)((longlong)&(this->Sink_data).offset_0x230 + 1) = 1;
  }
  return;
}

