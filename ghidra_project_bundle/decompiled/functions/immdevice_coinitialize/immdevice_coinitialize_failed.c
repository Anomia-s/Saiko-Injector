/**
 * Function: immdevice_coinitialize_failed
 * Address:  1406542f0
 * Signature: undefined immdevice_coinitialize_failed(void)
 * Body size: 222 bytes
 */


undefined8 immdevice_coinitialize_failed(longlong *param_1)

{
  int iVar1;
  HRESULT HVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  
  iVar1 = FUN_1403d7a70();
  if (iVar1 == 0) {
    pcVar5 = "IMMDevice support requires Windows Vista or later";
LAB_140654373:
    uVar3 = FUN_1400fbed0(pcVar5);
    return uVar3;
  }
  iVar1 = FUN_1403d7730();
  if (iVar1 < 0) {
    pcVar5 = "IMMDevice: CoInitialize() failed";
    goto LAB_140654373;
  }
  HVar2 = CoCreateInstance((IID *)&DAT_14120fac0,(LPUNKNOWN)0x0,1,(IID *)&DAT_14120fab0,
                           (LPVOID *)&DAT_1416fdf30);
  pcVar4 = (code *)CONCAT44(extraout_var,HVar2);
  if (HVar2 < 0) {
    CoUninitialize();
    uVar3 = FUN_1403d7600("IMMDevice CoCreateInstance(MMDeviceEnumerator)",HVar2);
    return uVar3;
  }
  if (param_1 == (longlong *)0x0) {
    DAT_1416fdf40 = (code *)0x0;
  }
  else {
    DAT_1416fdf38 = (code *)*param_1;
    DAT_1416fdf40 = (code *)param_1[1];
    if (DAT_1416fdf38 != (code *)0x0) goto joined_r0x0001406543bc;
  }
  pcVar4 = FUN_14012f830;
  DAT_1416fdf38 = FUN_14012f830;
joined_r0x0001406543bc:
  if (DAT_1416fdf40 == (code *)0x0) {
    pcVar4 = FUN_1401333f0;
    DAT_1416fdf40 = FUN_1401333f0;
  }
  return CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
}

