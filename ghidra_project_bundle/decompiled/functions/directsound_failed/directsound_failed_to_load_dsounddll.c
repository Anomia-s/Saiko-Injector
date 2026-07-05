/**
 * Function: directsound_failed_to_load_dsounddll
 * Address:  14044cf10
 * Signature: undefined directsound_failed_to_load_dsounddll(void)
 * Body size: 607 bytes
 */


undefined8 directsound_failed_to_load_dsounddll(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  
  DAT_1416f1a08 = 0;
  DAT_1416f1a10 = 0;
  DAT_1416f1a18 = 0;
  DAT_1416f1a20 = 0;
  DAT_1416f1a28 = 0;
  if (DAT_1416f1a00 != 0) {
    FUN_140165790();
    DAT_1416f1a00 = 0;
  }
  DAT_1416f1a00 = parameter_s_is_invalid("DSOUND.DLL");
  if (DAT_1416f1a00 == 0) {
    pcVar5 = "DirectSound: failed to load DSOUND.DLL";
  }
  else {
    DAT_1416f1a08 = failed_loading_s(DAT_1416f1a00,"DirectSoundCreate8");
    bVar6 = DAT_1416f1a08 != 0;
    uVar2 = failed_loading_s(DAT_1416f1a00,"DirectSoundEnumerateW");
    DAT_1416f1a10 = uVar2;
    uVar3 = failed_loading_s(DAT_1416f1a00,"DirectSoundCaptureCreate8");
    DAT_1416f1a18 = uVar3;
    uVar4 = failed_loading_s(DAT_1416f1a00,"DirectSoundCaptureEnumerateW");
    DAT_1416f1a20 = uVar4;
    DAT_1416f1a28 = failed_loading_s(DAT_1416f1a00,"GetDeviceID");
    auVar7._0_4_ = -(uint)((int)((ulonglong)DAT_1416f1a28 >> 0x20) == 0 && (int)DAT_1416f1a28 == 0);
    auVar7._4_4_ = -(uint)((int)uVar4 == 0 && (int)((ulonglong)uVar4 >> 0x20) == 0);
    auVar7._8_4_ = -(uint)((int)((ulonglong)uVar3 >> 0x20) == 0 && (int)uVar3 == 0);
    auVar7._12_4_ = -(uint)((int)uVar2 == 0 && (int)((ulonglong)uVar2 >> 0x20) == 0);
    iVar1 = movmskps((int)DAT_1416f1a28,auVar7);
    if (iVar1 == 0 && bVar6) {
      DAT_1416f19f8 = immdevice_coinitialize_failed(0);
      *param_1 = FUN_14044d170;
      param_1[1] = caller_doesnt_have_priority;
      param_1[5] = FUN_14044ddb0;
      param_1[4] = FUN_14044dde0;
      param_1[6] = caller_doesnt_have_priority;
      param_1[7] = FUN_14044e2f0;
      param_1[8] = FUN_14044e3b0;
      param_1[9] = FUN_14044e4a0;
      param_1[10] = FUN_14044e510;
      param_1[0xb] = &LAB_14044e5d0;
      param_1[0xc] = &LAB_14044e5f0;
      param_1[0xd] = FUN_14044e600;
      *(undefined1 *)((longlong)param_1 + 0x71) = 1;
      return 0x14044e601;
    }
    pcVar5 = "DirectSound: System doesn\'t appear to have DX8.";
  }
  FUN_1400fbed0(pcVar5);
  DAT_1416f1a08 = 0;
  DAT_1416f1a10 = 0;
  DAT_1416f1a18 = 0;
  DAT_1416f1a20 = 0;
  DAT_1416f1a28 = 0;
  if (DAT_1416f1a00 != 0) {
    FUN_140165790();
    DAT_1416f1a00 = 0;
  }
  return 0;
}

