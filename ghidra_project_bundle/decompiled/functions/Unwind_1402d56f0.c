/**
 * Function: Unwind@1402d56f0
 * Address:  1402d56f0
 * Signature: undefined Unwind@1402d56f0(void)
 * Body size: 74 bytes
 */


void Unwind_1402d56f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    QFileInfo::~QFileInfo((QFileInfo *)(*(longlong *)(param_2 + 0xf8) + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (*(longlong *)(param_2 + 0x70) != lVar1);
  return;
}

