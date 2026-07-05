/**
 * Function: system_audio_playback_device
 * Address:  14044ea20
 * Signature: undefined system_audio_playback_device(void)
 * Body size: 71 bytes
 */


void system_audio_playback_device(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14012f6f0(0,"System audio playback device",0,1);
  *param_1 = uVar1;
  uVar1 = FUN_14012f6f0(1,"System audio recording device",0,2);
  *param_2 = uVar1;
  return;
}

