/**
 * Function: in_accept_drag_and_drop_window_u_disabled_ful
 * Address:  14045fa70
 * Signature: undefined in_accept_drag_and_drop_window_u_disabled_ful(void)
 * Body size: 309 bytes
 */


void in_accept_drag_and_drop_window_u_disabled_ful(IDropTargetVtbl *param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  _func_6381 *p_Var3;
  UINT UVar4;
  LPDROPTARGET pDropTarget;
  char *pcVar5;
  
  p_Var3 = param_1[6].Drop;
  if (*(char *)(*(longlong *)(p_Var3 + 0xc0) + 5) != '\x01') {
    DragAcceptFiles(*(HWND *)(p_Var3 + 8),(uint)param_2);
    pcVar5 = "disabled";
    if (param_2 != 0) {
      pcVar5 = "enabled";
    }
    FUN_1400fb770(7,". In Accept Drag and Drop, window %u, %s Fallback WM_DROPFILES",
                  *(undefined4 *)&param_1->QueryInterface,pcVar5);
    return;
  }
  if (param_2 == 0) {
    if (*(longlong *)(p_Var3 + 0xd8) == 0) {
      return;
    }
    RevokeDragDrop(*(HWND *)(p_Var3 + 8));
    piVar1 = (int *)(*(longlong *)(p_Var3 + 0xd8) + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_140160cf0();
    }
    *(undefined8 *)(p_Var3 + 0xd8) = 0;
    uVar2 = *(undefined4 *)&param_1->QueryInterface;
    pcVar5 = ". In Accept Drag and Drop, window %u, disabled Full OLE IDropTarget";
  }
  else {
    if (*(longlong *)(p_Var3 + 0xd8) != 0) {
      return;
    }
    pDropTarget = (LPDROPTARGET)FUN_140160c70(1,0x28);
    if (pDropTarget == (LPDROPTARGET)0x0) {
      return;
    }
    pDropTarget->lpVtbl = (IDropTargetVtbl *)&PTR_FUN_141503e10;
    pDropTarget[2].lpVtbl = param_1;
    pDropTarget[3].lpVtbl = *(IDropTargetVtbl **)(p_Var3 + 8);
    UVar4 = RegisterClipboardFormatW(L"text/uri-list");
    *(UINT *)((longlong)&pDropTarget[4].lpVtbl + 4) = UVar4;
    UVar4 = RegisterClipboardFormatW(L"text/plain;charset=utf-8");
    *(UINT *)&pDropTarget[4].lpVtbl = UVar4;
    *(LPDROPTARGET *)(p_Var3 + 0xd8) = pDropTarget;
    *(int *)&pDropTarget[1].lpVtbl = *(int *)&pDropTarget[1].lpVtbl + 1;
    RegisterDragDrop(*(HWND *)(p_Var3 + 8),pDropTarget);
    uVar2 = *(undefined4 *)&param_1->QueryInterface;
    pcVar5 = ". In Accept Drag and Drop, window %u, enabled Full OLE IDropTarget";
  }
  FUN_1400fb770(7,pcVar5,uVar2);
  return;
}

