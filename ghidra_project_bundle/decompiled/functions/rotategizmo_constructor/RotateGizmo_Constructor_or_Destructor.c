/**
 * Function: RotateGizmo_Constructor_or_Destructor
 * Address:  140298c40
 * Signature: void __fastcall RotateGizmo_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 195 bytes
 */


void ldv::editor::RotateGizmo::RotateGizmo_Constructor_or_Destructor(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = &vftable;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    uVar3 = param_1[0xe] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) goto LAB_140298cea;
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    uVar3 = param_1[0xb] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (ulonglong)((lVar1 + -8) - lVar2)) {
LAB_140298cea:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar3 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar2,uVar3);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  return;
}

