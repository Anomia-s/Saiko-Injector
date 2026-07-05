/**
 * Function: sdl_joystick_hidapi_vertical_joy_cons
 * Address:  14010b7f0
 * Signature: undefined sdl_joystick_hidapi_vertical_joy_cons(void)
 * Body size: 1447 bytes
 */


/* WARNING: Type propagation algorithm not settling */

longlong sdl_joystick_hidapi_vertical_joy_cons(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  short *psVar6;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  short local_43e;
  short local_43c;
  undefined8 local_439;
  undefined1 uStack_431;
  undefined7 uStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_468;
  local_418 = *(undefined4 *)param_1;
  uStack_414 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_410 = *(undefined4 *)(param_1 + 1);
  uStack_40c = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar4 = FUN_14010f740(&local_418,1,param_2);
  if (lVar4 != 0 || (char)param_2 != '\0') goto LAB_14010b9d9;
  local_418 = *(undefined4 *)param_1;
  uStack_414 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_410 = *(undefined4 *)(param_1 + 1);
  uStack_40c = *(undefined4 *)((longlong)param_1 + 0xc);
  cVar1 = FUN_14012d250(&local_418);
  if (cVar1 != '\0') {
    local_418 = *(undefined4 *)param_1;
    uStack_414 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_410 = *(undefined4 *)(param_1 + 1);
    uStack_40c = *(undefined4 *)((longlong)param_1 + 0xc);
    lVar4 = FUN_14010f740(&local_418,0,0);
    if (lVar4 != 0) goto LAB_14010b9d9;
  }
  local_418 = *(undefined4 *)param_1;
  uStack_414 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_410 = *(undefined4 *)(param_1 + 1);
  uStack_40c = *(undefined4 *)((longlong)param_1 + 0xc);
  cVar1 = FUN_14012d230(&local_418);
  lVar4 = DAT_141525530;
  if (cVar1 != '\0') goto LAB_14010b9d9;
  local_418 = *(undefined4 *)param_1;
  uStack_414 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_410 = *(undefined4 *)(param_1 + 1);
  uStack_40c = *(undefined4 *)((longlong)param_1 + 0xc);
  cVar1 = FUN_14012d240(&local_418);
  if (cVar1 == '\0') {
    local_418 = *(undefined4 *)param_1;
    uStack_414 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_410 = *(undefined4 *)(param_1 + 1);
    uStack_40c = *(undefined4 *)((longlong)param_1 + 0xc);
    cVar1 = FUN_14012d720(&local_418);
    if (cVar1 == '\0') {
      local_418 = *(undefined4 *)param_1;
      uStack_414 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_410 = *(undefined4 *)(param_1 + 1);
      uStack_40c = *(undefined4 *)((longlong)param_1 + 0xc);
      cVar1 = FUN_14012d710(&local_418);
      if (cVar1 == '\0') {
        local_418 = *(undefined4 *)param_1;
        uStack_414 = *(undefined4 *)((longlong)param_1 + 4);
        uStack_410 = *(undefined4 *)(param_1 + 1);
        uStack_40c = *(undefined4 *)((longlong)param_1 + 0xc);
        FUN_14012c230(&local_418);
      }
      else {
        uStack_430 = (undefined7)((ulonglong)*(undefined8 *)((longlong)param_1 + 7) >> 8);
        local_439._1_7_ = (undefined7)*param_1;
        uStack_431 = (undefined1)((ulonglong)*param_1 >> 0x38);
        if (*(char *)((longlong)param_1 + 0xf) == '\x01') {
          FUN_1400fcb10(&local_418,"none,*,",0x400);
          FUN_1400fcd40(&local_418,
                        "a:b0,b:b1,x:b2,y:b3,back:b6,start:b7,leftstick:b8,rightstick:b9,leftshoulder:b4,rightshoulder:b5,dpup:b10,dpdown:b12,dpleft:b13,dpright:b11,leftx:a1,lefty:a0~,rightx:a3,righty:a2~,lefttrigger:a4,righttrigger:a5,"
                        ,0x400);
          uStack_420 = (undefined4)uStack_430;
          uStack_41c._0_3_ = (undefined3)((uint7)uStack_430 >> 0x20);
          local_428 = (undefined4)local_439._1_7_;
          uStack_424 = (undefined4)(CONCAT17(uStack_431,local_439._1_7_) >> 0x20);
          uStack_41c = CONCAT13(1,(undefined3)uStack_41c);
          psVar6 = &local_43c;
          goto LAB_14010b9d1;
        }
      }
      lVar4 = 0;
      goto LAB_14010b9d9;
    }
    local_428 = *(undefined4 *)param_1;
    uStack_424 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_420 = *(undefined4 *)(param_1 + 1);
    uStack_41c = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1400fcb10(&local_418,"none,*,",0x400);
    FUN_1400fcd40(&local_418,
                  "a:b0,b:b1,x:b2,y:b3,back:b6,guide:b10,start:b7,leftstick:b8,rightstick:b9,leftshoulder:b4,rightshoulder:b5,dpup:h0.1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,leftx:a0,lefty:a1,rightx:a2,righty:a3,lefttrigger:a4,righttrigger:a5,"
                  ,0x400);
    psVar6 = (short *)((longlong)&local_439 + 1);
  }
  else {
    uStack_430 = (undefined7)((ulonglong)*(undefined8 *)((longlong)param_1 + 7) >> 8);
    local_439._1_7_ = (undefined7)*param_1;
    uStack_431 = (undefined1)((ulonglong)*param_1 >> 0x38);
    cVar1 = *(char *)((longlong)param_1 + 0xf);
    FUN_1400fcb10(&local_418,"none,*,",0x400);
    uStack_420 = (undefined4)uStack_430;
    uStack_41c._0_3_ = (undefined3)((uint7)uStack_430 >> 0x20);
    local_428 = (undefined4)local_439._1_7_;
    uStack_424 = (undefined4)(CONCAT17(uStack_431,local_439._1_7_) >> 0x20);
    uStack_41c = CONCAT13(cVar1,(undefined3)uStack_41c);
    local_448 = 0;
    FUN_14012c7b0(&local_428,&local_43c,&local_43e,0);
    pcVar5 = 
    "a:b0,b:b1,dpdown:b6,dpleft:b4,dpright:b5,dpup:b7,lefttrigger:a4,leftx:a0,lefty:a1~,rightshoulder:b9,righttrigger:a5,rightx:a2,righty:a3~,start:b8,x:b2,y:b3,"
    ;
    if (local_43e == 0x337 && local_43c == 0x57e) {
LAB_14010b93a:
      FUN_1400fcd40(&local_418,pcVar5,0x400);
    }
    else {
      if (local_43c == 0x79) {
        if ((local_43e != 0x1843) && (local_43e != 0x1846)) goto switchD_14010bad5_caseD_3;
        goto LAB_14010b93a;
      }
      if (local_43c == 0x57e) {
        switch(cVar1) {
        case '\x01':
        case '\x02':
          cVar2 = FUN_1401106d0("SDL_JOYSTICK_HIDAPI_VERTICAL_JOY_CONS",0);
          if (cVar2 == '\0') {
            pcVar5 = 
            "a:b0,b:b1,guide:b5,leftshoulder:b9,leftstick:b7,leftx:a0,lefty:a1,rightshoulder:b10,start:b6,x:b2,y:b3,paddle1:b12,paddle3:b14,"
            ;
            if (cVar1 == '\x01') {
              pcVar5 = 
              "a:b0,b:b1,guide:b5,leftshoulder:b9,leftstick:b7,leftx:a0,lefty:a1,rightshoulder:b10,start:b6,x:b2,y:b3,paddle2:b13,paddle4:b15,"
              ;
            }
          }
          else {
            pcVar5 = 
            "a:b0,b:b1,guide:b5,rightshoulder:b10,rightstick:b8,righttrigger:a5,rightx:a2,righty:a3,start:b6,x:b2,y:b3,paddle1:b12,paddle3:b14,"
            ;
            if (cVar1 == '\x01') {
              pcVar5 = 
              "back:b4,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftshoulder:b9,leftstick:b7,lefttrigger:a4,leftx:a0,lefty:a1,misc1:b11,paddle2:b13,paddle4:b15,"
              ;
            }
          }
          break;
        case '\x03':
        case '\x04':
        case '\x05':
        case '\x06':
          goto switchD_14010bad5_caseD_3;
        case '\a':
        case '\t':
        case '\n':
          pcVar5 = 
          "a:b0,b:b1,back:b4,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftshoulder:b9,rightshoulder:b10,start:b6,"
          ;
          break;
        case '\b':
          pcVar5 = 
          "a:b0,b:b1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftshoulder:b9,rightshoulder:b10,"
          ;
          break;
        case '\v':
          pcVar5 = 
          "a:b0,b:b1,back:b4,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,leftshoulder:b9,lefttrigger:a4,rightshoulder:b10,righttrigger:a5,start:b6,x:b2,y:b3,"
          ;
          break;
        case '\f':
          pcVar5 = 
          "a:b0,b:b1,back:b4,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:b5,leftshoulder:b9,leftstick:b7,lefttrigger:a4,leftx:a0,lefty:a1,rightshoulder:b10,righttrigger:a5,start:b6,x:b2,y:b3,misc1:b11,"
          ;
          break;
        case '\r':
          pcVar5 = 
          "a:b0,b:b1,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:b5,leftshoulder:b9,rightshoulder:b10,righttrigger:a5,start:b6,x:b2,y:b3,misc1:b11,"
          ;
          break;
        default:
          if (cVar1 == -0x80) {
            pcVar5 = 
            "a:b0,b:b1,back:b4,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:b5,start:b6,x:b2,y:b3,"
            ;
          }
          else {
            if (cVar1 != -0x7f) goto switchD_14010bad5_caseD_3;
            pcVar5 = 
            "a:b0,b:b1,back:b4,dpdown:b12,dpleft:b13,dpright:b14,dpup:b11,guide:b5,leftshoulder:b9,lefttrigger:a4,leftx:a0,lefty:a1,start:b6,x:b2,y:b3,"
            ;
          }
        }
        goto LAB_14010b93a;
      }
switchD_14010bad5_caseD_3:
      FUN_1400fcd40(&local_418,
                    "a:b0,b:b1,back:b4,dpdown:h0.4,dpleft:h0.8,dpright:h0.2,dpup:h0.1,guide:b5,leftshoulder:b9,leftstick:b7,lefttrigger:a4,leftx:a0,lefty:a1,rightshoulder:b10,rightstick:b8,righttrigger:a5,rightx:a2,righty:a3,start:b6,x:b2,y:b3,"
                    ,0x400);
      cVar2 = FUN_14012d300(local_43c,local_43e);
      pcVar5 = "misc1:b11,";
      if (cVar2 != '\0') goto LAB_14010b93a;
      pcVar5 = "misc1:b11,";
      cVar2 = FUN_14012d2c0(local_43c,local_43e);
      if (cVar2 != '\0') {
        pcVar5 = "paddle1:b11,paddle2:b13,paddle3:b12,paddle4:b14,";
        goto LAB_14010b93a;
      }
      cVar2 = FUN_14012d6a0(local_43c,local_43e);
      if (cVar2 != '\0') {
        pcVar5 = "paddle1:b12,paddle2:b11,";
        goto LAB_14010b93a;
      }
      cVar2 = FUN_14012d4e0(local_43c,local_43e);
      if ((cVar2 != '\0') || (cVar2 = FUN_14012d500(local_43c,local_43e), cVar2 != '\0'))
      goto LAB_14010b93a;
      cVar2 = FUN_14012d580(local_43c,local_43e);
      if (cVar2 != '\0') {
        pcVar5 = "misc1:b11,paddle1:b12,paddle2:b13,paddle3:b14,paddle4:b15,";
        goto LAB_14010b93a;
      }
      cVar2 = FUN_14012d610(local_43c,local_43e);
      if (cVar2 != '\0') goto LAB_14010b93a;
      cVar2 = FUN_14012d640(local_43c,local_43e);
      if (cVar2 != '\0') {
        pcVar5 = "misc1:b11,misc2:b12";
        goto LAB_14010b93a;
      }
      cVar2 = FUN_14012d660(local_43c,local_43e);
      if (cVar2 != '\0') {
        FUN_1400fcd40(&local_418,"misc1:b11,",0x400);
        if (local_43e != 0x7210) goto LAB_14010b94a;
        pcVar5 = "touchpad:b12,misc2:b13,misc3:b14";
        goto LAB_14010b93a;
      }
      cVar2 = FUN_14012d6c0(local_43c,local_43e);
      if (cVar2 != '\0') {
        pcVar5 = "paddle1:b13,paddle2:b12,paddle3:b15,paddle4:b14,misc2:b11,misc3:b16,misc4:b17";
        goto LAB_14010b93a;
      }
      uStack_420 = (undefined4)uStack_430;
      uStack_41c._0_3_ = (undefined3)((uint7)uStack_430 >> 0x20);
      local_428 = (undefined4)local_439._1_7_;
      uStack_424 = (undefined4)(CONCAT17(uStack_431,local_439._1_7_) >> 0x20);
      uStack_41c = CONCAT13(cVar1,(undefined3)uStack_41c);
      iVar3 = FUN_14012d170(&local_428,0);
      if (iVar3 == 5) {
        pcVar5 = "touchpad:b11,";
        goto LAB_14010b93a;
      }
      if (iVar3 == 6) {
        FUN_1400fcd40(&local_418,"touchpad:b11,misc1:b12,",0x400);
        cVar2 = FUN_14012d4c0(local_43c,local_43e);
        if (cVar2 != '\0') {
          pcVar5 = "paddle1:b16,paddle2:b15,paddle3:b14,paddle4:b13,";
          goto LAB_14010b93a;
        }
      }
      else {
        pcVar5 = "misc1:b11,";
        if (local_43e == 0 && local_43c == 0) goto LAB_14010b93a;
      }
    }
LAB_14010b94a:
    uStack_420 = (undefined4)uStack_430;
    uStack_41c._0_3_ = (undefined3)((uint7)uStack_430 >> 0x20);
    local_428 = (undefined4)local_439._1_7_;
    uStack_424 = (undefined4)(CONCAT17(uStack_431,local_439._1_7_) >> 0x20);
    uStack_41c = CONCAT13(cVar1,(undefined3)uStack_41c);
    psVar6 = (short *)&local_439;
  }
LAB_14010b9d1:
  lVar4 = couldnt_parse_name_from_s(&local_428,&local_418,psVar6,0);
LAB_14010b9d9:
  if (DAT_1414ef3c0 != (local_18 ^ (ulonglong)auStack_468)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_18 ^ (ulonglong)auStack_468);
  }
  return lVar4;
}

