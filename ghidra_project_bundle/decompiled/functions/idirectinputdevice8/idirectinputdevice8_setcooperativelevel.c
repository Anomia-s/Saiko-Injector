/**
 * Function: idirectinputdevice8_setcooperativelevel
 * Address:  140650c20
 * Signature: undefined idirectinputdevice8_setcooperativelevel(void)
 * Body size: 868 bytes
 */


undefined8 idirectinputdevice8_setcooperativelevel(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  char cVar9;
  longlong lVar10;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x44) = 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x18) = 0x2c;
  local_1c = 0;
  local_24 = 0;
  local_2c = 0x1000000014;
  iVar2 = (**(code **)(*DAT_1416fdee0 + 0x18))
                    (DAT_1416fdee0,param_2 + 0x28,*(longlong *)(param_1 + 0x140) + 0x10,0);
  if (iVar2 < 0) {
    pcVar8 = "IDirectInput::CreateDevice";
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
    iVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,DAT_1416f2178,9);
    if (iVar2 < 0) {
      pcVar8 = "IDirectInputDevice8::SetCooperativeLevel";
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
      iVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&DAT_14120f868);
      if (iVar2 < 0) {
        pcVar8 = "IDirectInputDevice8::SetDataFormat";
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
        iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,*(longlong *)(param_1 + 0x140) + 0x18);
        if (iVar2 < 0) {
          pcVar8 = "IDirectInputDevice8::GetCapabilities";
        }
        else {
          lVar4 = *(longlong *)(param_1 + 0x140);
          if ((*(byte *)(lVar4 + 0x1d) & 1) == 0) {
LAB_140650d9c:
            (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x20))
                      (*(longlong **)(lVar4 + 0x10),FUN_140650f90,param_1,0x1f);
            lVar4 = *(longlong *)(param_1 + 0x140);
            FUN_140170b10();
            lVar10 = *(longlong *)(param_1 + 0x140);
            if (0 < *(int *)(lVar10 + 0xc48)) {
              pcVar8 = (char *)(lVar4 + 0x50);
              lVar4 = 0;
              cVar6 = '\0';
              cVar7 = '\0';
              cVar9 = '\0';
              do {
                iVar2 = *(int *)(pcVar8 + -4);
                if (iVar2 == 2) {
                  *pcVar8 = cVar7;
                  cVar7 = cVar7 + '\x01';
                }
                else if (iVar2 == 1) {
                  *pcVar8 = cVar6;
                  cVar6 = cVar6 + '\x01';
                }
                else if (iVar2 == 0) {
                  *pcVar8 = cVar9;
                  cVar9 = cVar9 + '\x01';
                }
                lVar4 = lVar4 + 1;
                lVar10 = *(longlong *)(param_1 + 0x140);
                pcVar8 = pcVar8 + 0xc;
              } while (lVar4 < *(int *)(lVar10 + 0xc48));
            }
            local_24 = 0;
            local_1c = 0x80;
            iVar2 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x30))
                              (*(longlong **)(lVar10 + 0x10),1,&local_2c);
            if (iVar2 == 2) {
              *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x44) = 0;
            }
            else if (iVar2 < 0) {
              pcVar8 = "IDirectInputDevice8::SetProperty";
              goto LAB_140650f5b;
            }
            *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x45) = 1;
            iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10) + 200))();
            if ((iVar2 == -0x7ff8ffe2) || (iVar2 == -0x7ff8fff4)) {
              (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10) + 0x38))();
              (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10) + 200))();
            }
            FUN_140118490(0x32);
            uVar5 = 1;
            goto LAB_140650f63;
          }
          iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x38))();
          if (iVar2 < 0) {
            pcVar8 = "IDirectInputDevice8::Acquire";
          }
          else {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
            (**(code **)(*plVar1 + 0xb0))(plVar1,1);
            iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10) + 0x40))();
            if (-1 < iVar2) {
              local_24 = 0;
              local_1c = 1;
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x140) + 0x10);
              (**(code **)(*plVar1 + 0x30))(plVar1,9,&local_2c);
              uVar3 = parameter_s_is_invalid(param_1);
              FUN_14014fd20(uVar3,"SDL.joystick.cap.rumble",1);
              lVar4 = *(longlong *)(param_1 + 0x140);
              goto LAB_140650d9c;
            }
            pcVar8 = "IDirectInputDevice8::Unacquire";
          }
        }
      }
    }
  }
LAB_140650f5b:
  uVar5 = FUN_1400fbed0("%s() DirectX error 0x%8.8lx",pcVar8,iVar2);
LAB_140650f63:
  if (DAT_1414ef3c0 == (local_18 ^ (ulonglong)auStack_58)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
}

