/**
 * Function: s_directx_error_0x88lx
 * Address:  140651260
 * Signature: undefined s_directx_error_0x88lx(void)
 * Body size: 674 bytes
 */


ulonglong s_directx_error_0x88lx(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char *pcVar7;
  uint uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if ((*(byte *)(lVar1 + 0x1d) & 1) == 0) {
    uVar4 = FUN_1400fbed0("That operation is not supported");
    return uVar4;
  }
  uVar8 = (uint)((int)((param_3 & 0xffff) >> 1) + (int)((param_2 & 0xffff) >> 1)) >> 1;
  if (*(char *)(lVar1 + 0xc50) == '\x01') {
    **(uint **)(*(longlong *)(lVar1 + 0xc58) + 0x40) = (uVar8 * 10000) / 0x7fff;
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0xc60);
    iVar3 = (**(code **)(*plVar6 + 0x30))
                      (plVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xc58),0x101);
    if (iVar3 == -0x7ff8ffe2) {
      iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10) + 0x38))();
      if (-1 < iVar3) {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0xc60);
        iVar3 = (**(code **)(*plVar6 + 0x30))
                          (plVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xc58),0x101);
        goto LAB_140651325;
      }
LAB_14065132d:
      pcVar7 = "IDirectInputDevice8::SetParameters";
      goto LAB_1406514c9;
    }
LAB_140651325:
    if (iVar3 < 0) goto LAB_14065132d;
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0xb0))(*(longlong **)(lVar1 + 0x10),1);
    if ((iVar3 == -0x7ff8ffe2) || (iVar3 == -0x7ffbfdfb)) {
      iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10) + 0x38))();
      if (-1 < iVar3) {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
        iVar3 = (**(code **)(*plVar6 + 0xb0))(plVar6,1);
        goto LAB_140651392;
      }
LAB_14065142e:
      cVar2 = FUN_1400fbed0("%s() DirectX error 0x%8.8lx",
                            "IDirectInputDevice8::SendForceFeedbackCommand(DISFFC_RESET)",iVar3);
joined_r0x0001406514f1:
      if (cVar2 == '\0') {
LAB_1406514f7:
        uVar4 = 0;
        goto LAB_1406514f9;
      }
    }
    else {
LAB_140651392:
      if (iVar3 < 0) goto LAB_14065142e;
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
      iVar3 = (**(code **)(*plVar6 + 0xb0))(plVar6,0x10);
      if (iVar3 < 0) {
        cVar2 = FUN_1400fbed0("%s() DirectX error 0x%8.8lx",
                              "IDirectInputDevice8::SendForceFeedbackCommand(DISFFC_SETACTUATORSON)"
                              ,iVar3);
        goto joined_r0x0001406514f1;
      }
      uVar5 = FUN_1406503b0(uVar8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0xc58) = uVar5;
      lVar1 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(lVar1 + 0xc58) == 0) goto LAB_1406514f7;
      iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x90))
                        (*(longlong **)(lVar1 + 0x10),&DAT_140e160d0,*(longlong *)(lVar1 + 0xc58),
                         lVar1 + 0xc60,0);
      if (iVar3 < 0) {
        cVar2 = FUN_1400fbed0("%s() DirectX error 0x%8.8lx","IDirectInputDevice8::CreateEffect",
                              iVar3);
        goto joined_r0x0001406514f1;
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0xc50) = 1;
  }
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0xc60);
  iVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,1,0);
  if ((iVar3 == -0x7ff8ffe2) || (iVar3 == -0x7ffbfdfb)) {
    iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10) + 0x38))();
    if (-1 < iVar3) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0xc60);
      iVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,1,0);
      goto LAB_1406514b5;
    }
  }
  else {
LAB_1406514b5:
    uVar4 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    if (-1 < iVar3) {
LAB_1406514f9:
      return uVar4 & 0xffffffff;
    }
  }
  pcVar7 = "IDirectInputDevice8::Start";
LAB_1406514c9:
  uVar4 = FUN_1400fbed0("%s() DirectX error 0x%8.8lx",pcVar7,iVar3);
  return uVar4;
}

