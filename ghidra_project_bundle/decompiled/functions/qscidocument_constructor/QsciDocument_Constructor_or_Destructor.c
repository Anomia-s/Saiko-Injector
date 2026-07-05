/**
 * Function: QsciDocument_Constructor_or_Destructor
 * Address:  14074d100
 * Signature: void __fastcall QsciDocument_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 129 bytes
 */


void QsciDocument::QsciDocument_Constructor_or_Destructor(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &vftable;
  if (param_1[1] == 0) {
    return;
  }
  piVar1 = (int *)(param_1[1] + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    plVar3 = (longlong *)param_1[1];
    if ((*plVar3 != 0) && ((int)plVar3[1] == 0)) {
      lVar2 = FUN_14074b8b0();
      plVar3 = (longlong *)param_1[1];
      if (lVar2 != 0) {
        FUN_14074b920(lVar2,0x949,0,*plVar3);
        plVar3 = (longlong *)param_1[1];
      }
      if (plVar3 == (longlong *)0x0) goto LAB_14074d172;
    }
    thunk_FUN_140b68ba8(plVar3,0x18);
  }
LAB_14074d172:
  param_1[1] = 0;
  return;
}

