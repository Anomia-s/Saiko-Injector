/**
 * Function: viewport_ready
 * Address:  14008eb40
 * Signature: undefined viewport_ready(void)
 * Body size: 228 bytes
 */


void viewport_ready(longlong param_1)

{
  undefined8 uVar1;
  QString local_38 [24];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(float *)(*(longlong *)(param_1 + 0x43cd0) + 0x1094c) = (float)*(double *)(param_1 + 0x43db0);
  FUN_140299b10(*(undefined8 *)(param_1 + 0x43cd0),*(undefined4 *)(param_1 + 0x43dd0));
  FUN_14029ed20(*(longlong *)(param_1 + 0x43cd0) + 0x30,*(undefined1 *)(param_1 + 0x43dac));
  FUN_1402a02d0(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x43cd0) + 0x68,
                &LAB_140090800,param_1 + 0x28);
  FUN_1402a0730(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x43cd0) + 0x68,
                &LAB_140090800,param_1 + 0x28);
  __entities_explorer_summarized(*(undefined8 *)(param_1 + 0x43cd8),*(undefined8 *)(param_1 + 0x28))
  ;
  uVar1 = *(undefined8 *)(param_1 + 0x43ce8);
  QString::QString(local_38,"Viewport ready.");
  FUN_1402826c0(uVar1,local_38);
  QString::~QString(local_38);
  return;
}

