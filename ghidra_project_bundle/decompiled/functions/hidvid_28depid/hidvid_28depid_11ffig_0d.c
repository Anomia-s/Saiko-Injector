/**
 * Function: hidvid_28depid_11ffig_0d
 * Address:  140650620
 * Signature: undefined hidvid_28depid_11ffig_0d(void)
 * Body size: 1173 bytes
 */


undefined8 hidvid_28depid_11ffig_0d(void *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  size_t sVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  longlong lVar11;
  char *_Str;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 auStack_2d8 [32];
  ulonglong local_2b8;
  undefined8 local_2b0;
  ulonglong local_2a8;
  undefined1 local_2a0;
  undefined1 local_298;
  uint local_284;
  longlong *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  uint local_268 [4];
  wchar_t local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_2d8;
  local_280 = (longlong *)0x0;
  if ((*(byte *)((longlong)param_1 + 0x26) & 1) != 0) {
    uVar8 = 0;
    iVar4 = (**(code **)(*DAT_1416fdee0 + 0x18))(DAT_1416fdee0,(longlong)param_1 + 4,&local_280,0);
    uVar14 = 0;
    _Str = (char *)0x0;
    if (iVar4 < 0) goto LAB_140650a50;
    if (local_280 != (longlong *)0x0) {
      local_278 = 0x1000000228;
      uStack_270 = 0;
      iVar4 = (**(code **)(*local_280 + 0x28))(local_280,0xc,&local_278);
      if (-1 < iVar4) {
        sVar7 = wcslen(local_258);
        _Str = (char *)FUN_14017b9c0("UTF-8","UTF-16LE",local_258,sVar7 * 2 + 2);
        FUN_1400fce30(_Str);
        if (local_280 != (longlong *)0x0) {
          local_278 = 0x1000000014;
          uStack_270 = 0;
          local_268[0] = 0;
          iVar4 = (**(code **)(*local_280 + 0x28))(local_280,0x18,&local_278);
          uVar1 = local_268[0];
          plVar2 = local_280;
          if (-1 < iVar4) {
            if (local_280 == (longlong *)0x0) {
              uVar14 = 0;
LAB_14065076e:
              uVar8 = 0;
            }
            else {
              uVar15 = local_268[0] >> 0x10;
              uVar14 = FUN_140441410(local_268[0],uVar15);
              uVar8 = FUN_1404413b0(uVar1,uVar15);
              if (uVar8 == 0) {
                local_278 = 0x1000000218;
                uStack_270 = 0;
                iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,0xe,&local_278);
                if (iVar4 < 0) goto LAB_14065076e;
                sVar7 = wcslen((wchar_t *)local_268);
                uVar8 = FUN_14017b9c0("UTF-8","UTF-16LE",local_268,sVar7 * 2 + 2);
                uVar14 = 0;
              }
              cVar3 = FUN_140651b20();
              if ((((cVar3 == '\0') && (cVar3 = FUN_140443f70(), cVar3 == '\0')) ||
                  ((pcVar9 = strstr(_Str,"IG_"), pcVar9 == (char *)0x0 &&
                   ((uVar5 = lic_pro_controller(uVar1,uVar15,0,0), (uVar5 & 0xfffffffe) != 2 &&
                    ((uVar1 & 0xffff) != 0x28de || uVar15 != 0x11ff)))))) &&
                 ((cVar3 = FUN_14012d730(uVar1,uVar15,0,uVar8), cVar3 == '\0' &&
                  (local_2b8 = uVar8,
                  cVar3 = FUN_140126eb0(&PTR_sdl_joystick_thread_1415039e0,uVar1,uVar15,0),
                  cVar3 == '\0')))) {
                local_284 = uVar1;
                lVar11 = *param_2;
                if (lVar11 == 0) {
LAB_1406508bb:
                  puVar10 = (undefined4 *)FUN_140160c70(1,0x580);
                  uVar1 = local_284;
                  if (puVar10 != (undefined4 *)0x0) {
                    local_278 = CONCAT44(local_278._4_4_,0xffffffff);
                    uVar6 = 0xffffffff;
                    if (uVar15 == 0x11ff && (local_284 & 0xffff) == 0x28de) {
                      FUN_1400fd340(_Str,"\\\\?\\HID#VID_28DE&PID_11FF&IG_0%d",&local_278);
                      uVar6 = (undefined4)local_278;
                    }
                    puVar10[0x15d] = uVar6;
                    FUN_1400fcb10(puVar10 + 0x11c,_Str,0x104);
                    memcpy(puVar10 + 9,param_1,0x44c);
                    lVar11 = bensussen_deutsch_associatesincbda(uVar1,uVar15,uVar14,uVar8);
                    *(longlong *)(puVar10 + 4) = lVar11;
                    if (lVar11 == 0) {
                      FUN_140160cf0(0);
                      FUN_140160cf0(puVar10);
                    }
                    else {
                      if (uVar1 < 0x10000 || (short)uVar1 == 0) {
                        uVar13 = 5;
                      }
                      else {
                        uVar13 = 3;
                      }
                      local_298 = 0;
                      local_2a0 = 0;
                      local_2b8 = local_2b8 & 0xffffffffffff0000;
                      local_2b0 = uVar14;
                      local_2a8 = uVar8;
                      FUN_14012cfb0(&local_278,uVar13,uVar1,uVar15);
                      *puVar10 = (undefined4)local_278;
                      puVar10[1] = local_278._4_4_;
                      puVar10[2] = (undefined4)uStack_270;
                      puVar10[3] = uStack_270._4_4_;
                      FUN_140447430(puVar10);
                    }
                  }
                }
                else {
                  iVar4 = FUN_1400fd200(lVar11 + 0x470,_Str);
                  if (iVar4 == 0) {
                    lVar12 = 0;
                  }
                  else {
                    do {
                      lVar12 = lVar11;
                      lVar11 = *(longlong *)(lVar12 + 0x578);
                      if (lVar11 == 0) goto LAB_1406508bb;
                      iVar4 = FUN_1400fd200(lVar11 + 0x470,_Str);
                    } while (iVar4 != 0);
                  }
                  if (lVar11 == *param_2) {
                    *param_2 = *(longlong *)(lVar11 + 0x578);
                  }
                  else if (lVar12 != 0) {
                    *(undefined8 *)(lVar12 + 0x578) = *(undefined8 *)(lVar11 + 0x578);
                  }
                  memcpy((void *)(lVar11 + 0x24),param_1,0x44c);
                  *(longlong *)(lVar11 + 0x578) = DAT_1416f1878;
                  DAT_1416f1878 = lVar11;
                }
              }
            }
            goto LAB_140650a50;
          }
        }
        uVar8 = 0;
        uVar14 = 0;
        goto LAB_140650a50;
      }
    }
  }
  uVar8 = 0;
  uVar14 = 0;
  _Str = (char *)0x0;
LAB_140650a50:
  FUN_140160cf0(_Str);
  FUN_140160cf0(uVar14);
  FUN_140160cf0(uVar8);
  if (local_280 != (longlong *)0x0) {
    (**(code **)(*local_280 + 0x10))();
  }
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_2d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_2d8);
  }
  return 1;
}

