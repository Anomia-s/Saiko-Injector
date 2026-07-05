// FUN_14016df50 @ 14016df50

void FUN_14016df50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14014f270();
  FUN_14014faf0(uVar1,"SDL.filedialog.filters",param_4);
  FUN_14014fc70(uVar1,"SDL.filedialog.nfilters",(longlong)param_5);
  FUN_14014faf0(uVar1,"SDL.filedialog.window",param_3);
  FUN_14014fbf0(uVar1,"SDL.filedialog.location",param_6);
  FUN_14014fd20(uVar1,"SDL.filedialog.many",param_7);
  invalid_dialog_file_filters_s(0,param_1,param_2,uVar1);
  FUN_14014f0d0(uVar1);
  return;
}


