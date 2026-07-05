/**
 * Function: could_not_get_id3d12debug_interface
 * Address:  1403f5d80
 * Signature: undefined could_not_get_id3d12debug_interface(void)
 * Body size: 97 bytes
 */


void could_not_get_id3d12debug_interface(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  
  pcVar2 = (code *)failed_loading_s(*(undefined8 *)(param_1 + 0x48),"D3D12GetDebugInterface");
  if (pcVar2 == (code *)0x0) {
    pcVar3 = "Could not load function: D3D12GetDebugInterface";
  }
  else {
    iVar1 = (*pcVar2)(&DAT_140e147d4,(undefined8 *)(param_1 + 0x38));
    if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001403f5dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))();
      return;
    }
    pcVar3 = "Could not get ID3D12Debug interface";
  }
  FUN_1400fb8f0(9,pcVar3);
  return;
}

