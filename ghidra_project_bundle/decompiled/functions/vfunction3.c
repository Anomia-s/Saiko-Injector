/**
 * Function: vfunction3
 * Address:  140b5a1c0
 * Signature: void __thiscall vfunction3(FileSink * this)
 * Body size: 435 bytes
 */


void __thiscall quill::v11::FileSink::vfunction3(FileSink *this)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int *piVar4;
  FILE *pFVar5;
  int local_58 [2];
  undefined **local_50;
  FILE *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((*(char *)((longlong)&(this->Sink_data).offset_0x230 + 1) == '\x01') &&
     ((this->Sink_data).offset_0xe0 != 0)) {
    fflush_failed_errno((longlong)this);
    if ((this->FileSink_data).field_0xca == '\x01') {
      FUN_140041a50(this,0);
    }
    piVar1 = &(this->Sink_data).offset_0xc0;
    uVar3._0_4_ = (this->Sink_data).offset_0xd8;
    uVar3._4_4_ = (this->Sink_data).offset_0xdc;
    piVar4 = piVar1;
    if (7 < uVar3) {
      piVar4 = *(int **)&(this->Sink_data).offset_0xc0;
    }
    local_58[0] = FUN_140b65f14(piVar4,&local_48,3);
    if (local_58[0] < 0x40) {
      if (1 < local_58[0] - 2U) {
        if (local_58[0] == 0) {
          return;
        }
        if (local_58[0] != 0x35) goto LAB_140b5a352;
      }
    }
    else if (((local_58[0] != 0x40) && (local_58[0] != 0x7b)) && (local_58[0] != 0x10b)) {
LAB_140b5a352:
      local_50 = &PTR_vftable_140dc1808;
                    /* WARNING: Subroutine does not return */
      FUN_140005380("exists",local_58,piVar1);
    }
    pFVar5 = (FILE *)(this->Sink_data).offset_0xe0;
    if (pFVar5 != (FILE *)0x0) {
      plVar2 = *(longlong **)&(this->Sink_data).field_0x1a8;
      if (plVar2 != (longlong *)0x0) {
        local_48 = pFVar5;
        (**(code **)(*plVar2 + 0x10))(plVar2,piVar1,&local_48);
        pFVar5 = (FILE *)(this->Sink_data).offset_0xe0;
      }
      fclose(pFVar5);
      (this->Sink_data).offset_0xe0 = 0;
      plVar2 = *(longlong **)&(this->Sink_data).field_0x1e8;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,piVar1);
      }
    }
    uStack_40 = 0;
    local_38 = 1;
    local_30 = 0xf;
    local_48 = (FILE *)0x77;
    fopen_failed_after((longlong)this,(undefined8 *)piVar1,(char *)&local_48);
    if (0xf < local_30) {
      uVar3 = local_30 + 1;
      pFVar5 = local_48;
      if (0xfff < uVar3) {
        pFVar5 = (FILE *)local_48[-1]._tmpfname;
        if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pFVar5))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar3 = local_30 + 0x28;
      }
      thunk_FUN_140b68ba8(pFVar5,uVar3);
    }
  }
  return;
}

