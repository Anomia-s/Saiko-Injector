/**
 * Function: atmosphere_transmittance_lut
 * Address:  1404c90f0
 * Signature: undefined atmosphere_transmittance_lut(void)
 * Body size: 198 bytes
 */


void atmosphere_transmittance_lut(undefined8 *param_1,longlong *param_2)

{
  undefined1 local_c0 [32];
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1401a3690(local_c0,*param_1,"Atmosphere Transmittance LUT",0x219,
                "/opt/actions-runner/_work/Platform/Platform/graphics/intern/atmosphere.cpp",
                "(anonymous namespace)::dispatch_transmittance");
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_28 = 0;
  local_78 = *(undefined4 *)(param_1 + 9);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uStack_70 = *(undefined4 *)(param_1 + 10);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_30 = 1;
  (**(code **)(*param_2 + 0xe8))(param_2,&local_78);
  (**(code **)(*param_2 + 0xf0))(param_2,0x20,8,1);
  FUN_1401a43a0(local_a0);
  FUN_1401a44e0(local_c0);
  return;
}

