/**
 * Function: ~Sink
 * Address:  14003e070
 * Signature: void __thiscall ~Sink(Sink * this)
 * Body size: 364 bytes
 */


void __thiscall quill::v11::Sink::~Sink(Sink *this)

{
  int *piVar1;
  longlong **pplVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  this->vftablePtr = &vftable;
  plVar8 = (this->Sink_data).offset_0xa0;
  if (plVar8 != (longlong *)0x0) {
    pplVar2 = &(this->Sink_data).offset_0xa0;
    plVar3 = (this->Sink_data).offset_0xa8;
    if (plVar8 == plVar3) {
      uVar7 = (this->Sink_data).offset_0xb0 - (longlong)plVar8;
    }
    else {
      do {
        puVar4 = (undefined8 *)*plVar8;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar3);
      plVar8 = *pplVar2;
      uVar7 = (this->Sink_data).offset_0xb0 - (longlong)plVar8;
    }
    if (0xfff < uVar7) {
      if (0x1f < (ulonglong)((longlong)plVar8 + (-8 - plVar8[-1]))) goto LAB_14003e1c5;
      uVar7 = uVar7 + 0x27;
      plVar8 = (longlong *)plVar8[-1];
    }
    thunk_FUN_140b68ba8(plVar8,uVar7);
    *pplVar2 = (longlong *)0x0;
    (this->Sink_data).offset_0xa8 = (longlong *)0x0;
    (this->Sink_data).offset_0xb0 = 0;
  }
  lVar5 = (this->Sink_data).offset_0x88;
  if (lVar5 != 0) {
    uVar7 = (this->Sink_data).offset_0x98 - lVar5;
    lVar6 = lVar5;
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(lVar5 + -8);
      if (0x1f < (ulonglong)((lVar5 + -8) - lVar6)) {
LAB_14003e1c5:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uVar7 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar6,uVar7);
    (this->Sink_data).offset_0x88 = 0;
    (this->Sink_data).offset_0x90 = 0;
    (this->Sink_data).offset_0x98 = 0;
  }
  plVar8 = (this->Sink_data).offset_0x80;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  if ((this->Sink_data).offset_0x70 == '\x01') {
    FUN_14000f270(&this->Sink_data);
    return;
  }
  return;
}

