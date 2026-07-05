/**
 * Function: Shape
 * Address:  1403d6490
 * Signature: Shape * __thiscall Shape(Shape * this, undefined1 param_1, longlong param_2, undefined8 param_3)
 * Body size: 342 bytes
 */


Shape * __thiscall
JPH::Shape::Shape(Shape *this,undefined1 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40 [3];
  ulonglong local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  *(undefined4 *)&this->RefTarget<JPH::Shape> = 0;
  this->vftablePtr = &vftable;
  (this->Shape_data).offset_0x0 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)&(this->Shape_data).offset_0x8 = 2;
  *(undefined1 *)((longlong)&(this->Shape_data).offset_0x8 + 1) = param_1;
  this->vftablePtr = (Shape_vftable *)&PTR_vfunction1_140de4940;
  (this->Shape_data).offset_0x10 = 0.0;
  (this->Shape_data).offset_0x14 = 0;
  plVar2 = *(longlong **)(param_2 + 0x40);
  lVar3 = *(longlong *)(param_2 + 0x48);
  if (plVar2 == (longlong *)0x0 && lVar3 == 0) {
    FUN_1400e7cd0(param_3,"Inner shape is null!");
  }
  else if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
    if (local_20 == '\x01') {
      puVar4 = *(undefined8 **)&(this->Shape_data).offset_0x10;
      if (puVar4 != local_40[0]) {
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar4 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        *(undefined8 **)&(this->Shape_data).offset_0x10 = local_40[0];
        if (local_40[0] != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_40[0] + 1) = *(int *)(local_40[0] + 1) + 1;
          UNLOCK();
        }
      }
    }
    else {
      FUN_1402e6750(param_3,local_40);
    }
    if (local_20 == '\x02') {
      if (0xf < local_28) {
        (*DAT_14151f538)(local_40[0]);
      }
    }
    else if ((local_20 == '\x01') && (local_40[0] != (undefined8 *)0x0)) {
      LOCK();
      piVar1 = (int *)(local_40[0] + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_40[0])(local_40[0],1);
      }
    }
  }
  else {
    (this->Shape_data).offset_0x10 = (float)(int)lVar3;
    (this->Shape_data).offset_0x14 = (int)((ulonglong)lVar3 >> 0x20);
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (DAT_1414ef3c0 != (local_18 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_18 ^ (ulonglong)auStack_68);
  }
  return this;
}

