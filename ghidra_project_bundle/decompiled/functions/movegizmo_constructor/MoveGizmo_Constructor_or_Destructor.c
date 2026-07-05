/**
 * Function: MoveGizmo_Constructor_or_Destructor
 * Address:  140298bc0
 * Signature: void __fastcall MoveGizmo_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 124 bytes
 */


void ldv::editor::MoveGizmo::MoveGizmo_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &vftable;
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    uVar3 = param_1[8] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return;
}

