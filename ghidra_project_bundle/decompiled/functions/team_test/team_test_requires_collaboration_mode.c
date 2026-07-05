/**
 * Function: team_test_requires_collaboration_mode
 * Address:  140271cb0
 * Signature: undefined team_test_requires_collaboration_mode(void)
 * Body size: 115 bytes
 */


void team_test_requires_collaboration_mode(int param_1,longlong param_2)

{
  undefined8 uVar1;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x43ce8);
    QString::QString(local_38,"Team Test requires collaboration mode.");
    FUN_1402826c0(uVar1,local_38);
    QString::~QString(local_38);
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    thunk_FUN_140b68ba8(param_2,0x18);
    return;
  }
  return;
}

