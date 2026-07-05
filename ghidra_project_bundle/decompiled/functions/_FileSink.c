/**
 * Function: ~FileSink
 * Address:  140041980
 * Signature: void __thiscall ~FileSink(FileSink * this)
 * Body size: 175 bytes
 */


void __thiscall quill::v11::FileSink::~FileSink(FileSink *this)

{
  longlong *plVar1;
  FILE *_File;
  FILE *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  this->vftablePtr = &vftable;
  _File = (FILE *)(this->Sink_data).offset_0xe0;
  if (_File != (FILE *)0x0) {
    plVar1 = *(longlong **)&(this->Sink_data).field_0x1a8;
    if (plVar1 != (longlong *)0x0) {
      local_20 = _File;
      (**(code **)(*plVar1 + 0x10))(plVar1,&(this->Sink_data).offset_0xc0,&local_20);
      _File = (FILE *)(this->Sink_data).offset_0xe0;
    }
    fclose(_File);
    (this->Sink_data).offset_0xe0 = 0;
    plVar1 = *(longlong **)&(this->Sink_data).field_0x1e8;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&(this->Sink_data).offset_0xc0);
    }
  }
  if ((this->FileSink_data).offset_0xd8 != 0) {
    thunk_FUN_140b68ba8();
  }
  FUN_14000ef00(&this->FileSink_data);
  StreamSink::~StreamSink((StreamSink *)this);
  return;
}

