/**
 * Function: ~StreamSink
 * Address:  14003d760
 * Signature: void __thiscall ~StreamSink(StreamSink * this)
 * Body size: 369 bytes
 */


void __thiscall quill::v11::StreamSink::~StreamSink(StreamSink *this)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  this->vftablePtr = &vftable;
  plVar1 = *(longlong **)&(this->Sink_data).field_0x228;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)&(this->Sink_data).field_0x1f0);
    *(undefined8 *)&(this->Sink_data).field_0x228 = 0;
  }
  plVar1 = *(longlong **)&(this->Sink_data).field_0x1e8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)&(this->Sink_data).field_0x1b0);
    *(undefined8 *)&(this->Sink_data).field_0x1e8 = 0;
  }
  plVar1 = *(longlong **)&(this->Sink_data).field_0x1a8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)&(this->Sink_data).field_0x170);
    *(undefined8 *)&(this->Sink_data).field_0x1a8 = 0;
  }
  plVar1 = *(longlong **)&(this->Sink_data).field_0x168;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)&(this->Sink_data).field_0x130);
    *(undefined8 *)&(this->Sink_data).field_0x168 = 0;
  }
  plVar1 = *(longlong **)&(this->Sink_data).field_0x128;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)&(this->Sink_data).field_0xf0);
    *(undefined8 *)&(this->Sink_data).field_0x128 = 0;
  }
  uVar2 = *(ulonglong *)&(this->Sink_data).offset_0xd8;
  if (7 < uVar2) {
    lVar3 = *(longlong *)&(this->Sink_data).offset_0xc0;
    uVar4 = uVar2 * 2 + 2;
    lVar5 = lVar3;
    if (0xfff < uVar4) {
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (ulonglong)((lVar3 + -8) - lVar5)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar2 * 2 + 0x29;
    }
    thunk_FUN_140b68ba8(lVar5,uVar4);
  }
  (this->Sink_data).offset_0xd0 = 0;
  (this->Sink_data).offset_0xd4 = 0;
  (this->Sink_data).offset_0xd8 = 7;
  (this->Sink_data).offset_0xdc = 0;
  *(undefined2 *)&(this->Sink_data).offset_0xc0 = 0;
  Sink::~Sink((Sink *)this);
  return;
}

