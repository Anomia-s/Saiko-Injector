/**
 * Function: Document_Constructor_or_Destructor
 * Address:  140804560
 * Signature: void __fastcall Document_Constructor_or_Destructor(undefined8 * param_1)
 * Body size: 523 bytes
 */


void Scintilla::Document::Document_Constructor_or_Destructor(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  *param_1 = &vftable;
  param_1[1] = &vftable;
  param_1[2] = &vftable;
  puVar1 = (undefined8 *)param_1[0x48];
  for (puVar6 = (undefined8 *)param_1[0x47]; puVar6 != puVar1; puVar6 = puVar6 + 2) {
    (**(code **)(*(longlong *)*puVar6 + 0x20))((longlong *)*puVar6,param_1);
  }
  puVar6 = (undefined8 *)param_1[0x59];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar6 = (undefined8 *)param_1[0x51];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar6 = (undefined8 *)param_1[0x50];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar6 = (undefined8 *)param_1[0x4e];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar6 = (undefined8 *)param_1[0x4d];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar6 = (undefined8 *)param_1[0x4c];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar6 = (undefined8 *)param_1[0x4b];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar6 = (undefined8 *)param_1[0x4a];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  lVar2 = param_1[0x47];
  if (lVar2 != 0) {
    uVar5 = param_1[0x49] - lVar2;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) goto LAB_140804752;
      uVar5 = uVar5 + 0x27;
    }
    thunk_FUN_140b68ba8(lVar4,uVar5);
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
  }
  uVar5 = param_1[0x46];
  if (0xf < uVar5) {
    lVar2 = param_1[0x43];
    uVar3 = uVar5 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar3) {
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar4)) {
LAB_140804752:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar3 = uVar5 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar4,uVar3);
  }
  param_1[0x45] = 0;
  param_1[0x46] = 0xf;
  *(undefined1 *)(param_1 + 0x43) = 0;
  puVar6 = (undefined8 *)param_1[0x3e];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  FUN_1407f9e90(param_1 + 4);
  return;
}

