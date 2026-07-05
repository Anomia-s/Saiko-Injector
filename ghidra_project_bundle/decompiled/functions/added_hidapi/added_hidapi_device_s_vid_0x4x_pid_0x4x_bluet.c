/**
 * Function: added_hidapi_device_s_vid_0x4x_pid_0x4x_bluet
 * Address:  140441f80
 * Signature: undefined added_hidapi_device_s_vid_0x4x_pid_0x4x_bluet(void)
 * Body size: 1253 bytes
 */


longlong *
added_hidapi_device_s_vid_0x4x_pid_0x4x_bluet(undefined8 *param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  size_t sVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  uint local_88;
  uint local_80;
  longlong local_78;
  undefined *local_70;
  char *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  httplib::ClientImpl::vfunction4();
  plVar6 = (longlong *)&DAT_1416f1750;
  lVar7 = 0;
  do {
    lVar10 = lVar7;
    lVar7 = *plVar6;
    plVar6 = (longlong *)(lVar7 + 0xb8);
  } while (lVar7 != 0);
  plVar6 = (longlong *)FUN_140160c70(1,0xc0);
  if (plVar6 == (longlong *)0x0) {
LAB_14044234a:
    plVar6 = (longlong *)0x0;
  }
  else {
    FUN_1403d8ef0(plVar6,9,1);
    lVar7 = FUN_1400fcda0(*param_1);
    plVar6[3] = lVar7;
    if (lVar7 != 0) {
      *(undefined1 *)(plVar6 + 0x13) = 1;
      *(undefined2 *)(plVar6 + 4) = *(undefined2 *)(param_1 + 1);
      *(undefined2 *)((longlong)plVar6 + 0x22) = *(undefined2 *)((longlong)param_1 + 10);
      *(undefined2 *)((longlong)plVar6 + 0x24) = *(undefined2 *)(param_1 + 3);
      *(undefined4 *)(plVar6 + 8) = *(undefined4 *)((longlong)param_1 + 0x34);
      *(undefined4 *)((longlong)plVar6 + 0x44) = *(undefined4 *)(param_1 + 7);
      *(undefined4 *)(plVar6 + 9) = *(undefined4 *)((longlong)param_1 + 0x3c);
      *(undefined4 *)((longlong)plVar6 + 0x4c) = *(undefined4 *)(param_1 + 8);
      *(undefined2 *)(plVar6 + 10) = *(undefined2 *)(param_1 + 6);
      *(undefined2 *)((longlong)plVar6 + 0x52) = *(undefined2 *)((longlong)param_1 + 0x32);
      *(bool *)((longlong)plVar6 + 0x54) = *(int *)((longlong)param_1 + 0x44) == 2;
      lVar7 = initializesrwlock();
      plVar6[0xf] = lVar7;
      pwVar11 = (wchar_t *)param_1[2];
      if (pwVar11 == (wchar_t *)0x0) {
        pcVar8 = (char *)0x0;
        pwVar11 = (wchar_t *)param_1[4];
joined_r0x00014044215f:
        if (pwVar11 != (wchar_t *)0x0) goto LAB_1404420c0;
LAB_140442165:
        plVar6[1] = 0;
        pwVar11 = (wchar_t *)param_1[5];
joined_r0x0001404420fa:
        if (pwVar11 == (wchar_t *)0x0) goto LAB_140442174;
LAB_1404420fc:
        sVar9 = wcslen(pwVar11);
        lVar7 = FUN_14017b9c0("UTF-8","WCHAR_T",pwVar11,sVar9 * 2 + 2);
        if (lVar7 == 0) {
          sVar9 = wcslen(pwVar11);
          lVar7 = FUN_14017b9c0("UTF-8","UCS-2-INTERNAL",pwVar11,sVar9 * 2 + 2);
        }
      }
      else {
        wcslen(pwVar11);
        pcVar8 = (char *)FUN_14017b9c0("UTF-8","WCHAR_T",pwVar11);
        if (pcVar8 == (char *)0x0) {
          wcslen(pwVar11);
          pcVar8 = (char *)FUN_14017b9c0("UTF-8","UCS-2-INTERNAL",pwVar11);
          pwVar11 = (wchar_t *)param_1[4];
          goto joined_r0x00014044215f;
        }
        pwVar11 = (wchar_t *)param_1[4];
        if (pwVar11 == (wchar_t *)0x0) goto LAB_140442165;
LAB_1404420c0:
        wcslen(pwVar11);
        lVar7 = FUN_14017b9c0("UTF-8","WCHAR_T",pwVar11);
        if (lVar7 != 0) {
          plVar6[1] = lVar7;
          pwVar11 = (wchar_t *)param_1[5];
          goto joined_r0x0001404420fa;
        }
        wcslen(pwVar11);
        lVar7 = FUN_14017b9c0("UTF-8","UCS-2-INTERNAL",pwVar11);
        plVar6[1] = lVar7;
        pwVar11 = (wchar_t *)param_1[5];
        if (pwVar11 != (wchar_t *)0x0) goto LAB_1404420fc;
LAB_140442174:
        lVar7 = 0;
      }
      plVar6[2] = lVar7;
      lVar7 = bensussen_deutsch_associatesincbda
                        ((short)plVar6[4],*(undefined2 *)((longlong)plVar6 + 0x22),plVar6[1]);
      *plVar6 = lVar7;
      if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
        FUN_140160cf0(pcVar8);
        lVar7 = *plVar6;
      }
      else {
        plVar6[5] = (longlong)pcVar8;
      }
      if (lVar7 != 0) {
        local_c0 = (uint)plVar6[1];
        uStack_bc = *(undefined4 *)((longlong)plVar6 + 0xc);
        uStack_b8 = (uint)plVar6[2];
        uStack_b4 = *(undefined4 *)((longlong)plVar6 + 0x14);
        uVar2 = local_c8 >> 0x10;
        local_c8 = CONCAT22((short)uVar2,*(undefined2 *)((longlong)plVar6 + 0x24));
        local_a8 = local_a8 & 0xffffff00;
        uVar3 = (ulonglong)local_b0 >> 8;
        local_b0 = (undefined *)CONCAT71((int7)uVar3,0x68);
        FUN_14012cfb0(&local_58,(*(int *)((longlong)param_1 + 0x44) == 2) * '\x02' + '\x03',
                      (short)plVar6[4],*(undefined2 *)((longlong)plVar6 + 0x22));
        *(undefined4 *)(plVar6 + 6) = local_58;
        *(undefined4 *)((longlong)plVar6 + 0x34) = uStack_54;
        *(undefined4 *)(plVar6 + 7) = uStack_50;
        *(undefined4 *)((longlong)plVar6 + 0x3c) = uStack_4c;
        *(undefined4 *)(plVar6 + 0xb) = 1;
        uStack_b8 = *(uint *)((longlong)plVar6 + 0x4c);
        local_c0 = *(uint *)(plVar6 + 9);
        local_c8 = *(uint *)((longlong)plVar6 + 0x44);
        uVar5 = FUN_1404429b0(*plVar6,(short)plVar6[4],*(undefined2 *)((longlong)plVar6 + 0x22),
                              (int)plVar6[8]);
        *(undefined4 *)((longlong)plVar6 + 0x5c) = uVar5;
        *(undefined4 *)(plVar6 + 0xc) = 0xffffffff;
        if (param_2 != 0) {
          *(int *)(plVar6 + 0x15) = param_2;
          plVar6[0x16] = (longlong)param_3;
          *(longlong **)(*param_3 + 0xa0) = plVar6;
          if (param_2 != 1) {
            *(longlong **)(param_3[1] + 0xa0) = plVar6;
          }
        }
        plVar4 = plVar6;
        if (lVar10 != 0) {
          *(longlong **)(lVar10 + 0xb8) = plVar6;
          plVar4 = DAT_1416f1750;
        }
        DAT_1416f1750 = plVar4;
        hidapi_setupdevicedriver_couldnt_open_s_s(plVar6,&local_58);
        if ((char)local_58 == '\0') {
          puVar1 = (undefined8 *)plVar6[0xd];
          if (puVar1 == (undefined8 *)0x0) {
            local_68 = "DISABLED";
            local_70 = &DAT_1413699c5;
          }
          else {
            local_68 = "DISABLED";
            if (*(char *)(puVar1 + 1) != '\0') {
              local_68 = "ENABLED";
            }
            local_70 = (undefined *)*puVar1;
          }
          local_60 = *plVar6;
          local_78 = plVar6[3];
          local_90 = *(undefined4 *)((longlong)plVar6 + 0x4c);
          local_98 = (undefined4)plVar6[9];
          local_a0 = *(undefined4 *)((longlong)plVar6 + 0x44);
          local_a8 = *(uint *)(plVar6 + 8);
          local_b0 = &DAT_1413699c5;
          if ((undefined *)plVar6[5] != (undefined *)0x0) {
            local_b0 = (undefined *)plVar6[5];
          }
          local_80 = (uint)*(ushort *)((longlong)plVar6 + 0x52);
          local_88 = (uint)*(ushort *)(plVar6 + 10);
          uStack_b8 = (uint)*(ushort *)((longlong)plVar6 + 0x24);
          local_c0 = (uint)*(byte *)((longlong)plVar6 + 0x54);
          local_c8 = (uint)*(ushort *)((longlong)plVar6 + 0x22);
          FUN_1400fb830(7,
                        "Added HIDAPI device \'%s\' VID 0x%.4x, PID 0x%.4x, bluetooth %d, version %d, serial %s, interface %d, interface_class %d, interface_subclass %d, interface_protocol %d, usage page 0x%.4x, usage 0x%.4x, path = %s, driver = %s (%s)"
                        ,local_60,(short)plVar6[4]);
          goto LAB_14044234c;
        }
        goto LAB_14044234a;
      }
      FUN_140160cf0(plVar6[1]);
      FUN_140160cf0(plVar6[2]);
      FUN_140160cf0(plVar6[5]);
      FUN_140160cf0(plVar6[3]);
    }
    FUN_140160cf0(plVar6);
    plVar6 = (longlong *)0x0;
  }
LAB_14044234c:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_e8)) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_e8);
}

