/**
 * Function: nones
 * Address:  14010ccf0
 * Signature: undefined nones(void)
 * Body size: 1129 bytes
 */


/* WARNING: Removing unreachable block (ram,0x00014010d154) */

longlong nones(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 auStack_5f8 [32];
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 auStack_4e0 [2];
  undefined1 local_4c9;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined1 local_4a8 [1024];
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_5f8;
  httplib::ClientImpl::vfunction4();
  uVar2 = FUN_140127600(param_1);
  FUN_14012d850(&local_4c8,param_1);
  httplib::ClientImpl::vfunction4();
  lVar3 = sdl_joystick_hidapi_vertical_joy_cons(&local_4c8,0);
  if (lVar3 != 0 || param_2 != '\x01') goto LAB_14010d11d;
  local_4e8 = 0;
  auStack_4e0[0] = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  cVar1 = FUN_1401291e0(param_1,&local_5d8);
  if (cVar1 != '\0') {
    pcVar4 = local_a8;
    FUN_1400fcb10(pcVar4,uVar2,0x80);
    do {
      if (*pcVar4 == ',') {
        *pcVar4 = ' ';
      }
      else if (*pcVar4 == '\0') goto code_r0x00014010ce12;
      pcVar4 = pcVar4 + 1;
    } while( true );
  }
  goto LAB_14010d122;
code_r0x00014010ce12:
  FUN_1400fd420(local_4a8,0x400,"none,%s,",local_a8);
  FUN_14010fba0(local_4a8,"a",&local_5d8);
  FUN_14010fba0(local_4a8,"b",&uStack_5d0);
  FUN_14010fba0(local_4a8,"x",&local_5c8);
  FUN_14010fba0(local_4a8,"y",&uStack_5c0);
  FUN_14010fba0(local_4a8,"back",&local_5b8);
  FUN_14010fba0(local_4a8,"guide",&uStack_5b0);
  FUN_14010fba0(local_4a8,"start",&local_5a8);
  FUN_14010fba0(local_4a8,"leftstick",&uStack_5a0);
  FUN_14010fba0(local_4a8,"rightstick",&local_598);
  FUN_14010fba0(local_4a8,"leftshoulder",&uStack_590);
  FUN_14010fba0(local_4a8,"rightshoulder",&local_588);
  FUN_14010fba0(local_4a8,&DAT_14133e030,&uStack_580);
  FUN_14010fba0(local_4a8,"dpdown",&local_578);
  FUN_14010fba0(local_4a8,"dpleft",&uStack_570);
  FUN_14010fba0(local_4a8,"dpright",&local_568);
  FUN_14010fba0(local_4a8,"misc1",&uStack_560);
  FUN_14010fba0(local_4a8,"misc2",&local_558);
  FUN_14010fba0(local_4a8,"misc3",&uStack_550);
  FUN_14010fba0(local_4a8,"misc4",&local_548);
  FUN_14010fba0(local_4a8,"misc5",&uStack_540);
  FUN_14010fba0(local_4a8,"misc6",&local_538);
  FUN_14010fba0(local_4a8,"paddle1",&uStack_530);
  FUN_14010fba0(local_4a8,"paddle2",&local_528);
  FUN_14010fba0(local_4a8,"paddle3",&uStack_520);
  FUN_14010fba0(local_4a8,"paddle4",&local_518);
  FUN_14010fba0(local_4a8,"leftx",&uStack_510);
  FUN_14010fba0(local_4a8,"lefty",&local_508);
  FUN_14010fba0(local_4a8,"rightx",&uStack_500);
  FUN_14010fba0(local_4a8,"righty",&local_4f8);
  FUN_14010fba0(local_4a8,"lefttrigger",&uStack_4f0);
  FUN_14010fba0(local_4a8,"righttrigger",&local_4e8);
  FUN_14010fba0(local_4a8,"touchpad",auStack_4e0);
  local_4b8 = local_4c8;
  uStack_4b4 = uStack_4c4;
  uStack_4b0 = uStack_4c0;
  uStack_4ac = uStack_4bc;
  lVar3 = couldnt_parse_name_from_s(&local_4b8,local_4a8,&local_4c9,0);
LAB_14010d11d:
  if (lVar3 != 0) goto LAB_14010d129;
LAB_14010d122:
  lVar3 = DAT_141525518;
LAB_14010d129:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_5f8)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_5f8);
}

