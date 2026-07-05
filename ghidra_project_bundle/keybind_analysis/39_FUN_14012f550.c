// FUN_14012f550 @ 14012f550

ulonglong FUN_14012f550(int param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 == param_3) goto LAB_14012f58f;
  if ((param_2 != 0) != (param_3 == 0)) {
    if (param_2 == 0) goto LAB_14012f58f;
    iVar1 = FUN_1400fc560(param_2,param_3,(longlong)param_1 << 2);
    if (iVar1 == 0) goto LAB_14012f58f;
  }
  uVar2 = 0;
LAB_14012f58f:
  return uVar2 & 0xffffffff;
}


