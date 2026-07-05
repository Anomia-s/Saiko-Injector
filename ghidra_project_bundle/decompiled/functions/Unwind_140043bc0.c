/**
 * Function: Unwind@140043bc0
 * Address:  140043bc0
 * Signature: undefined Unwind@140043bc0(void)
 * Body size: 85 bytes
 */


void Unwind_140043bc0(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_2 + 0x50);
  lVar2 = *(longlong *)(param_2 + 0x60);
  if (*(longlong *)(lVar2 + 0x28) != 0) {
    **(undefined8 **)(param_2 + 0x48) = 0;
    (*DAT_14151f538)();
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
    *pauVar1 = auVar3;
  }
  (*DAT_14151f538)(lVar2);
  return;
}

