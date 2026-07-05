/**
 * Function: _Ref_count_obj2<nvrhi::d3d12::InternalCommandList>
 * Address:  14071e4c0
 * Signature: _Ref_count_obj2<nvrhi::d3d12::InternalCommandList> * __thiscall _Ref_count_obj2<nvrhi::d3d12::InternalCommandList>(_Ref_count_obj2<nvrhi::d3d12::InternalCommandList> * this, longlong * param_1)
 * Body size: 334 bytes
 */


_Ref_count_obj2<nvrhi::d3d12::InternalCommandList> * __thiscall
std::_Ref_count_obj2<nvrhi::d3d12::InternalCommandList>::
_Ref_count_obj2<nvrhi::d3d12::InternalCommandList>
          (_Ref_count_obj2<nvrhi::d3d12::InternalCommandList> *this,longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  vfunction1 *pvVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_140b65d30(0x40);
  plVar5[1] = 0x100000001;
  *plVar5 = (longlong)&vftable;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  if ((ulonglong)*(byte *)&this[0x3c].vftablePtr < 3) {
    uVar3 = *(undefined4 *)(&DAT_14123b6b8 + (ulonglong)*(byte *)&this[0x3c].vftablePtr * 4);
    pvVar4 = (this[2].vftablePtr)->vfunction1;
    (**(code **)(*(longlong *)pvVar4 + 0x48))(pvVar4,uVar3,&DAT_14123b8f8,plVar5 + 2);
    pvVar4 = (this[2].vftablePtr)->vfunction1;
    (**(code **)(*(longlong *)pvVar4 + 0x60))(pvVar4,0,uVar3,plVar5[2],0,&DAT_14123b908,plVar5 + 3);
    (*(code *)**(undefined8 **)plVar5[3])((undefined8 *)plVar5[3],&DAT_14123b918,plVar5 + 4);
    (*(code *)**(undefined8 **)plVar5[3])((undefined8 *)plVar5[3],&DAT_14123b928,plVar5 + 5);
    (*(code *)**(undefined8 **)plVar5[3])((undefined8 *)plVar5[3],&DAT_14123b938,plVar5 + 6);
    *param_1 = (longlong)(plVar5 + 2);
    param_1[1] = (longlong)plVar5;
  }
  else {
    httplib::ClientImpl::vfunction4();
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return (_Ref_count_obj2<nvrhi::d3d12::InternalCommandList> *)param_1;
}

