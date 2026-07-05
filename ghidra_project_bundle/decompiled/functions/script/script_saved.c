/**
 * Function: script_saved
 * Address:  1400981d0
 * Signature: undefined script_saved(void)
 * Body size: 146 bytes
 */


void script_saved(int param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(lVar1 + 0x118) != 0) {
      FUN_140289900(*(longlong *)(lVar1 + 0x118),**(undefined8 **)(param_4 + 8));
    }
    *(undefined1 *)(lVar1 + 0x138) = 1;
    uVar2 = *(undefined8 *)(lVar1 + 0x43ce8);
    QString::QString(local_38,"Script saved.");
    FUN_1402826c0(uVar2,local_38);
    QString::~QString(local_38);
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x18);
    return;
  }
  return;
}

