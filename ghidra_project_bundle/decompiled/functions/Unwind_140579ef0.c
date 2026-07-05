/**
 * Function: Unwind@140579ef0
 * Address:  140579ef0
 * Signature: undefined Unwind@140579ef0(void)
 * Body size: 100 bytes
 */


void Unwind_140579ef0(undefined8 param_1,longlong param_2)

{
  QString::~QString((QString *)(param_2 + 200));
  QString::~QString((QString *)(param_2 + 0xa8));
  QString::~QString((QString *)(param_2 + 0x88));
  QString::~QString((QString *)(param_2 + 0x68));
  QString::~QString((QString *)(param_2 + 0x48));
  *(undefined1 *)(param_2 + 0x11f) = 1;
  *(longlong *)(param_2 + 0x110) = param_2 + 200;
  return;
}

