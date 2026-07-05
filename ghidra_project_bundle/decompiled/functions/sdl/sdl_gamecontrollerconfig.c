/**
 * Function: sdl_gamecontrollerconfig
 * Address:  14010adf0
 * Signature: undefined sdl_gamecontrollerconfig(void)
 * Body size: 390 bytes
 */


undefined8 sdl_gamecontrollerconfig(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *_Str;
  longlong lVar5;
  undefined1 auStack_448 [32];
  undefined1 local_428 [1032];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_448;
  httplib::ClientImpl::vfunction4();
  FUN_14010a8e0();
  pcVar4 = 
  "xinput,*,a:b0,b:b1,back:b6,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:b10,leftshoulder:b4,leftstick:b8,lefttrigger:a2,leftx:a0,lefty:a1,rightshoulder:b5,rightstick:b9,righttrigger:a5,rightx:a3,righty:a4,start:b7,x:b2,y:b3,"
  ;
  lVar5 = 1;
  do {
    couldnt_parse_guid_from_s(pcVar4,0);
    pcVar4 = (&PTR_s_xinput___a_b0_b_b1_back_b6_dpdow_140de8e70)[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x134);
  pcVar4 = (char *)FUN_140110550("SDL_GAMECONTROLLERCONFIG_FILE");
  if (((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
     (uVar1 = FUN_1400fcb10(local_428,pcVar4,0x400), uVar1 < 0x400)) {
    uVar2 = parameter_s_is_invalid(local_428,&DAT_14135eecf);
    could_not_allocate_space_to_read_db_into_memo(uVar2,1);
  }
  pcVar4 = (char *)FUN_140110550("SDL_GAMECONTROLLERCONFIG");
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    pcVar4 = (char *)FUN_1400fcda0(pcVar4);
    FUN_14010a8e0();
    if (pcVar4 != (char *)0x0) {
      pcVar3 = strchr(pcVar4,10);
      _Str = pcVar4;
      while (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
        couldnt_parse_guid_from_s(_Str,2);
        _Str = pcVar3 + 1;
        pcVar3 = strchr(_Str,10);
      }
      couldnt_parse_guid_from_s(_Str,2);
    }
    FUN_14010aa30();
    FUN_140160cf0(pcVar4);
  }
  FUN_140126780(&PTR_s_SDL_GAMECONTROLLER_IGNORE_DEVICE_1414f86c8);
  FUN_140126780(&PTR_s_SDL_GAMECONTROLLER_IGNORE_DEVICE_1414f8710);
  FUN_14010aa30();
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_448)) {
    return CONCAT71((int7)((local_20 ^ (ulonglong)auStack_448) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_448);
}

