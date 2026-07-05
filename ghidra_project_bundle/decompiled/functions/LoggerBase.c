/**
 * Function: LoggerBase
 * Address:  140042870
 * Signature: LoggerBase * __thiscall LoggerBase(LoggerBase * this, longlong * param_1, longlong * param_2, undefined8 * param_3, undefined1 param_4, undefined8 param_5)
 * Body size: 630 bytes
 */


LoggerBase * __thiscall
quill::v11::detail::LoggerBase::LoggerBase
          (LoggerBase *this,longlong *param_1,longlong *param_2,undefined8 *param_3,
          undefined1 param_4,undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  this->vftablePtr = &vftable;
  (this->LoggerBase_data).offset_0x10 = 0;
  (this->LoggerBase_data).offset_0x18 = 0;
  (this->LoggerBase_data).offset_0x0 = 0;
  (this->LoggerBase_data).offset_0x8 = 0;
  lVar18 = *param_1;
  lVar16 = param_1[1];
  lVar11 = param_1[3];
  (this->LoggerBase_data).offset_0x10 = param_1[2];
  (this->LoggerBase_data).offset_0x18 = lVar11;
  (this->LoggerBase_data).offset_0x0 = lVar18;
  (this->LoggerBase_data).offset_0x8 = lVar16;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  (this->LoggerBase_data).offset_0x20 = param_5;
  (this->LoggerBase_data).offset_0x28 = 0;
  (this->LoggerBase_data).offset_0x30 = param_4;
  (this->LoggerBase_data).offset_0x31 = 0xa04;
  (this->LoggerBase_data).offset_0x33 = 1;
  (this->LoggerBase_data).offset_0x48 = 0;
  (this->LoggerBase_data).offset_0x50 = 0;
  (this->LoggerBase_data).offset_0x38 = 0;
  (this->LoggerBase_data).offset_0x40 = 0;
  uVar12 = *param_3;
  uVar13 = param_3[1];
  uVar14 = param_3[3];
  (this->LoggerBase_data).offset_0x48 = param_3[2];
  (this->LoggerBase_data).offset_0x50 = uVar14;
  (this->LoggerBase_data).offset_0x38 = uVar12;
  (this->LoggerBase_data).offset_0x40 = uVar13;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  (this->LoggerBase_data).offset_0x68 = 0;
  (this->LoggerBase_data).offset_0x70 = 0;
  (this->LoggerBase_data).offset_0x58 = 0;
  (this->LoggerBase_data).offset_0x60 = 0;
  uVar12 = param_3[5];
  uVar13 = param_3[6];
  uVar14 = param_3[7];
  (this->LoggerBase_data).offset_0x58 = param_3[4];
  (this->LoggerBase_data).offset_0x60 = uVar12;
  (this->LoggerBase_data).offset_0x68 = uVar13;
  (this->LoggerBase_data).offset_0x70 = uVar14;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined1 *)(param_3 + 4) = 0;
  (this->LoggerBase_data).offset_0x88 = 0;
  (this->LoggerBase_data).offset_0x8c = 0;
  (this->LoggerBase_data).offset_0x90 = 0;
  (this->LoggerBase_data).offset_0x94 = 0;
  (this->LoggerBase_data).offset_0x78 = 0;
  (this->LoggerBase_data).offset_0x7c = 0;
  (this->LoggerBase_data).offset_0x80 = 0;
  (this->LoggerBase_data).offset_0x84 = 0;
  uVar4 = *(undefined4 *)(param_3 + 8);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar6 = *(undefined4 *)(param_3 + 9);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar9 = *(undefined4 *)(param_3 + 0xb);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x5c);
  (this->LoggerBase_data).offset_0x88 = *(undefined4 *)(param_3 + 10);
  (this->LoggerBase_data).offset_0x8c = uVar8;
  (this->LoggerBase_data).offset_0x90 = uVar9;
  (this->LoggerBase_data).offset_0x94 = uVar10;
  (this->LoggerBase_data).offset_0x78 = uVar4;
  (this->LoggerBase_data).offset_0x7c = uVar5;
  (this->LoggerBase_data).offset_0x80 = uVar6;
  (this->LoggerBase_data).offset_0x84 = uVar7;
  param_3[10] = 0;
  param_3[0xb] = 0xf;
  *(undefined1 *)(param_3 + 8) = 0;
  (this->LoggerBase_data).offset_0xa0 = *(undefined4 *)(param_3 + 0xd);
  (this->LoggerBase_data).offset_0x98 = param_3[0xc];
  (this->LoggerBase_data).offset_0xc8 = (longlong *)0x0;
  (this->LoggerBase_data).offset_0xd0 = 0;
  (this->LoggerBase_data).offset_0xb8 = 0;
  (this->LoggerBase_data).offset_0xc0 = 0;
  (this->LoggerBase_data).offset_0xa8 = 0;
  (this->LoggerBase_data).offset_0xb0 = 0;
  (this->LoggerBase_data).offset_0xd8 = (longlong *)0x0;
  FUN_140042b20(&(this->LoggerBase_data).offset_0xa8,param_2);
  uVar17 = param_1[3];
  if (0xf < uVar17) {
    lVar18 = *param_1;
    uVar15 = uVar17 + 1;
    lVar16 = lVar18;
    if (0xfff < uVar15) {
      lVar16 = *(longlong *)(lVar18 + -8);
      if (0x1f < (ulonglong)((lVar18 + -8) - lVar16)) goto LAB_140042acd;
      uVar15 = uVar17 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar16,uVar15);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  lVar18 = *param_2;
  if (lVar18 != 0) {
    lVar16 = param_2[1];
    if (lVar18 == lVar16) {
      uVar17 = param_2[2] - lVar18;
    }
    else {
      do {
        plVar3 = *(longlong **)(lVar18 + 8);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)();
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 8))();
            }
          }
        }
        lVar18 = lVar18 + 0x10;
      } while (lVar18 != lVar16);
      lVar18 = *param_2;
      uVar17 = param_2[2] - lVar18;
    }
    if (0xfff < uVar17) {
      if (0x1f < (ulonglong)((lVar18 + -8) - *(longlong *)(lVar18 + -8))) {
LAB_140042acd:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar17 = uVar17 + 0x27;
      lVar18 = *(longlong *)(lVar18 + -8);
    }
    thunk_FUN_140b68ba8(lVar18,uVar17);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  FUN_14000f270(param_3);
  return this;
}

