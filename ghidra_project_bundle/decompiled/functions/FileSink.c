/**
 * Function: FileSink
 * Address:  14003fab0
 * Signature: FileSink * __thiscall FileSink(FileSink * this, undefined8 param_1, longlong param_2, longlong * param_3, char param_4, undefined8 param_5)
 * Body size: 515 bytes
 */


FileSink * __thiscall
quill::v11::FileSink::FileSink
          (FileSink *this,undefined8 param_1,longlong param_2,longlong *param_3,char param_4,
          undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  FileSink *pFVar3;
  undefined1 local_1e8 [320];
  undefined1 local_a8 [56];
  undefined1 local_70 [32];
  longlong *local_50;
  FileSink_data *local_48;
  FileSink *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_50 = param_3;
  FUN_14003c030(local_1e8,param_3);
  FUN_14003fdc0(local_70,param_1,*(undefined1 *)(param_2 + 0xc9),param_2 + 0x20,
                *(undefined1 *)(param_2 + 200),param_5);
  cannot_create_canonical_path_for_path(this,local_70,0,param_2 + 0x50,local_1e8);
  this->vftablePtr = &vftable;
  local_48 = &this->FileSink_data;
  local_40 = this;
  FUN_14003ff00(local_48,param_2);
  *(undefined8 *)&(local_40->FileSink_data).field_0xd0 = 0;
  (local_40->FileSink_data).offset_0xd8 = 0;
  if (((local_40->FileSink_data).field_0xca == '\0') &&
     (*(longlong *)&(local_40->FileSink_data).field_0x48 != 0)) {
    QuillError::QuillError
              ((QuillError *)local_a8,
               "Cannot set a non-zero minimum fsync interval when fsync is disabled.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14140fa50);
  }
  if (param_4 != '\0') {
    fopen_failed_after((longlong)local_40,(undefined8 *)&(local_40->Sink_data).offset_0xc0,
                       (char *)local_48);
  }
  plVar2 = local_50;
  plVar1 = (longlong *)local_50[0x27];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != local_50 + 0x20);
    plVar2[0x27] = 0;
  }
  pFVar3 = local_40;
  plVar1 = (longlong *)plVar2[0x1f];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2 + 0x18);
    plVar2[0x1f] = 0;
  }
  plVar1 = (longlong *)plVar2[0x17];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2 + 0x10);
    plVar2[0x17] = 0;
  }
  plVar1 = (longlong *)plVar2[0xf];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2 + 8);
    plVar2[0xf] = 0;
  }
  plVar1 = (longlong *)plVar2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return pFVar3;
}

