/**
 * Function: pipehidvid_045epid_028eig_00xxxdu
 * Address:  1404445f0
 * Signature: undefined pipehidvid_045epid_028eig_00xxxdu(void)
 * Body size: 1099 bytes
 */


void pipehidvid_045epid_028eig_00xxxdu(HANDLE param_1)

{
  char cVar1;
  undefined1 uVar2;
  UINT UVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  LPVOID pData;
  HANDLE hObject;
  size_t sVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStackY_2b8 [32];
  uint local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238 [64];
  char local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStackY_2b8;
  memset(local_138,0,0x104);
  for (lVar6 = DAT_1416f17a8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x58)) {
    if (*(HANDLE *)(lVar6 + 0x40) == param_1) goto LAB_1404448d5;
  }
  local_26c = 0x20;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  UVar3 = GetRawInputDeviceInfoA(param_1,0x2000000b,&local_268,&local_26c);
  if ((UVar3 != 0xffffffff) && (local_268._4_4_ == 2)) {
    local_26c = 0x104;
    UVar3 = GetRawInputDeviceInfoA(param_1,0x20000007,local_138,&local_26c);
    if ((UVar3 != 0xffffffff) && (pcVar5 = strstr(local_138,"IG_"), pcVar5 != (char *)0x0)) {
      cVar1 = FUN_14012d730(uStack_260 & 0xffff,uStack_260._4_2_,local_258 & 0xffff,&DAT_1413a2ad6);
      if (cVar1 == '\0') {
        cVar1 = FUN_140126eb0(&PTR_FUN_1415038d8,uStack_260 & 0xffff,uStack_260._4_2_,
                              local_258 & 0xffff);
        if ((cVar1 == '\0') && (lVar6 = FUN_140160c70(1,0x60), lVar6 != 0)) {
          *(HANDLE *)(lVar6 + 0x40) = param_1;
          *(undefined2 *)(lVar6 + 0x18) = (undefined2)uStack_260;
          *(undefined2 *)(lVar6 + 0x1a) = uStack_260._4_2_;
          *(undefined2 *)(lVar6 + 0x1c) = (undefined2)local_258;
          *(undefined1 *)(lVar6 + 0x2e) = 1;
          uVar2 = FUN_14012d2a0();
          *(undefined1 *)(lVar6 + 0x2f) = uVar2;
          local_238[0] = 0xffffffff;
          if ((*(short *)(lVar6 + 0x1a) == 0x11ff) && (*(short *)(lVar6 + 0x18) == 0x28de)) {
            FUN_1400fd340(local_138,"\\\\.\\pipe\\HID#VID_045E&PID_028E&IG_00#%*X&%*X&%*X#%d#%*u",
                          local_238);
          }
          *(undefined4 *)(lVar6 + 0x30) = local_238[0];
          local_26c = 0;
          UVar3 = GetRawInputDeviceInfoA(param_1,0x20000005,(LPVOID)0x0,&local_26c);
          if (UVar3 != 0xffffffff) {
            pData = (LPVOID)FUN_140160c70(local_26c,1);
            *(LPVOID *)(lVar6 + 0x38) = pData;
            if (((pData != (LPVOID)0x0) &&
                (UVar3 = GetRawInputDeviceInfoA(param_1,0x20000005,pData,&local_26c),
                UVar3 != 0xffffffff)) &&
               (hObject = CreateFileA(local_138,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                                      (HANDLE)0x0), hObject != (HANDLE)0xffffffffffffffff)) {
              cVar1 = (*DAT_1416f2230)(hObject,local_238,0x100);
              if (cVar1 == '\0') {
                lVar8 = 0;
              }
              else {
                sVar7 = wcslen((wchar_t *)local_238);
                lVar8 = FUN_14017b9c0("UTF-8","UTF-16LE",local_238,sVar7 * 2 + 2);
              }
              cVar1 = (*DAT_1416f2238)(hObject,local_238,0x100);
              if (cVar1 == '\0') {
                lVar9 = 0;
              }
              else {
                sVar7 = wcslen((wchar_t *)local_238);
                lVar9 = FUN_14017b9c0("UTF-8","UTF-16LE",local_238,sVar7 * 2 + 2);
              }
              uVar10 = bensussen_deutsch_associatesincbda
                                 (*(undefined2 *)(lVar6 + 0x18),*(undefined2 *)(lVar6 + 0x1a),lVar8,
                                  lVar9);
              *(undefined8 *)(lVar6 + 8) = uVar10;
              FUN_14012cfb0(&local_248,3,*(undefined2 *)(lVar6 + 0x18),*(undefined2 *)(lVar6 + 0x1a)
                           );
              *(undefined4 *)(lVar6 + 0x1e) = local_248;
              *(undefined4 *)(lVar6 + 0x22) = uStack_244;
              *(undefined4 *)(lVar6 + 0x26) = uStack_240;
              *(undefined4 *)(lVar6 + 0x2a) = uStack_23c;
              if (lVar8 != 0) {
                FUN_140160cf0(lVar8);
              }
              if (lVar9 != 0) {
                FUN_140160cf0(lVar9);
              }
              uVar10 = FUN_1400fcda0(local_138);
              *(undefined8 *)(lVar6 + 0x10) = uVar10;
              CloseHandle(hObject);
              uVar4 = FUN_1403d8eb0();
              *(undefined4 *)(lVar6 + 0x50) = uVar4;
              FUN_140106160(lVar6);
              plVar11 = &DAT_1416f17a8;
              lVar8 = 0;
              do {
                lVar9 = lVar8;
                lVar8 = *plVar11;
                plVar11 = (longlong *)(lVar8 + 0x58);
              } while (lVar8 != 0);
              lVar8 = lVar6;
              if (lVar9 != 0) {
                *(longlong *)(lVar9 + 0x58) = lVar6;
                lVar8 = DAT_1416f17a8;
              }
              DAT_1416f17a8 = lVar8;
              DAT_1416f17b0 = DAT_1416f17b0 + 1;
              FUN_14012b7b0(*(undefined4 *)(lVar6 + 0x50));
              goto LAB_1404448d5;
            }
          }
          if (*(longlong *)(lVar6 + 8) != 0) {
            FUN_140160cf0();
          }
          if (*(longlong *)(lVar6 + 0x10) != 0) {
            FUN_140160cf0();
          }
          FUN_140160cf0(lVar6);
        }
      }
    }
  }
LAB_1404448d5:
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStackY_2b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStackY_2b8);
}

