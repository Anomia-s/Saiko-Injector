/**
 * Function: LineLayoutCache_Constructor_or_Destructor
 * Address:  140a41320
 * Signature: void __fastcall LineLayoutCache_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 181 bytes
 */


void Scintilla::LineLayoutCache::LineLayoutCache_Constructor_or_Destructor(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = &vftable;
  plVar3 = (longlong *)param_1[2];
  plVar4 = (longlong *)param_1[3];
  if (plVar3 != plVar4) {
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4);
    plVar3 = (longlong *)param_1[2];
    param_1[3] = plVar3;
  }
  if (plVar3 != (longlong *)0x0) {
    uVar2 = param_1[4] - (longlong)plVar3;
    plVar4 = plVar3;
    if (0xfff < uVar2) {
      plVar4 = (longlong *)plVar3[-1];
      if (0x1f < (ulonglong)((longlong)plVar3 + (-8 - (longlong)plVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar2 = uVar2 + 0x27;
    }
    thunk_FUN_140b68ba8(plVar4,uVar2);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

