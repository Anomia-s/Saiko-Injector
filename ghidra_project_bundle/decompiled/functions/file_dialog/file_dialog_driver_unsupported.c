/**
 * Function: file_dialog_driver_unsupported
 * Address:  14046cc90
 * Signature: undefined file_dialog_driver_unsupported(void)
 * Body size: 701 bytes
 */


void file_dialog_driver_unsupported
               (int param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  
  uVar12 = 0;
  uVar3 = FUN_14014ff10(param_4,"SDL.filedialog.window",0);
  lVar4 = FUN_14014ff10(param_4,"SDL.filedialog.filters",0);
  uVar2 = FUN_140150150(param_4,"SDL.filedialog.nfilters",0);
  bVar1 = FUN_1401503a0(param_4,"SDL.filedialog.many",0);
  lVar5 = FUN_14014ffe0(param_4,"SDL.filedialog.location",0);
  lVar6 = FUN_14014ffe0(param_4,"SDL.filedialog.title",0);
  lVar7 = FUN_14014ffe0(param_4,"SDL.filedialog.accept",0);
  lVar8 = FUN_14014ffe0(param_4,"SDL.filedialog.cancel",0);
  if (param_1 != 0) {
    if (param_1 == 2) {
      file_dialog_driver_unsupported(UNRECOVERED_JUMPTABLE,param_3,uVar3,lVar5);
      return;
    }
    if (param_1 != 1) {
      return;
    }
    uVar12 = 1;
  }
  lVar9 = FUN_140110550("SDL_FILE_DIALOG_DRIVER");
  if (lVar9 != 0) {
    FUN_1400fbed0("File dialog driver unsupported");
LAB_14046cd84:
                    /* WARNING: Could not recover jumptable at 0x00014046cda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3,0,0xffffffff);
    return;
  }
  puVar10 = (undefined1 *)FUN_140160c40(0x50);
  if (puVar10 == (undefined1 *)0x0) goto LAB_14046cd84;
  lVar9 = FUN_14046c9e0(lVar4,uVar2);
  if (lVar4 != 0 && lVar9 == 0) {
    (*UNRECOVERED_JUMPTABLE)(param_3,0,0xffffffff);
    goto LAB_14046cf35;
  }
  *puVar10 = uVar12;
  *(longlong *)(puVar10 + 8) = lVar9;
  if (lVar5 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_1400fcda0(lVar5);
  }
  *(undefined8 *)(puVar10 + 0x10) = uVar11;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  *(uint *)(puVar10 + 0x20) = (uint)bVar1 << 9;
  *(code **)(puVar10 + 0x28) = UNRECOVERED_JUMPTABLE;
  *(undefined8 *)(puVar10 + 0x30) = param_3;
  if (lVar6 == 0) {
    *(undefined8 *)(puVar10 + 0x38) = 0;
    if (lVar7 != 0) goto LAB_14046ce7a;
LAB_14046cea2:
    *(undefined8 *)(puVar10 + 0x40) = 0;
    if (lVar8 != 0) goto LAB_14046ce88;
LAB_14046cead:
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1400fcda0(lVar6);
    *(undefined8 *)(puVar10 + 0x38) = uVar3;
    if (lVar7 == 0) goto LAB_14046cea2;
LAB_14046ce7a:
    uVar3 = FUN_1400fcda0();
    *(undefined8 *)(puVar10 + 0x40) = uVar3;
    if (lVar8 == 0) goto LAB_14046cead;
LAB_14046ce88:
    uVar3 = FUN_1400fcda0(lVar8);
  }
  *(undefined8 *)(puVar10 + 0x48) = uVar3;
  lVar4 = sdlthreadcreateentry_function
                    (FUN_14046c730,"SDL_Windows_ShowFileDialog",puVar10,_beginthreadex_exref,
                     _endthreadex_exref);
  if (lVar4 != 0) {
    FUN_1401382e0(lVar4);
    return;
  }
  (*UNRECOVERED_JUMPTABLE)(param_3,0,0xffffffff);
  FUN_140160cf0(*(undefined8 *)(puVar10 + 0x10));
  FUN_140160cf0(*(undefined8 *)(puVar10 + 8));
  FUN_140160cf0(*(undefined8 *)(puVar10 + 0x38));
  FUN_140160cf0(*(undefined8 *)(puVar10 + 0x40));
  FUN_140160cf0(*(undefined8 *)(puVar10 + 0x48));
LAB_14046cf35:
  FUN_140160cf0(puVar10);
  return;
}

