/**
 * Function: Heap_Constructor_or_Destructor
 * Address:  140535b30
 * Signature: void __fastcall Heap_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 177 bytes
 */


void nvrhi::vulkan::Heap::Heap_Constructor_or_Destructor(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = &vftable;
  if ((param_1[3] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    FUN_1406f6540(param_1[10],param_1 + 2);
    param_1[3] = 0;
  }
  uVar1 = param_1[9];
  if (0xf < uVar1) {
    lVar2 = param_1[6];
    uVar3 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar1 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

