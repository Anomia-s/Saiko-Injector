/**
 * Function: sdlrendererd3d12command_queue
 * Address:  140422960
 * Signature: undefined sdlrendererd3d12command_queue(void)
 * Body size: 969 bytes
 */


void sdlrendererd3d12command_queue(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x2c0);
  uVar3 = parameter_s_is_invalid();
  FUN_14014faf0(uVar3,"SDL.renderer.d3d12.device",0);
  FUN_14014faf0(uVar3,"SDL.renderer.d3d12.command_queue",0);
  for (lVar5 = *(longlong *)(param_1 + 0x1d8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x100)) {
    FUN_140420090(param_1,lVar5);
  }
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)plVar1[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[2] + 0x10))();
      plVar1[2] = 0;
    }
    if ((longlong *)plVar1[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[3] + 0x10))();
      plVar1[3] = 0;
    }
    if ((longlong *)plVar1[5] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[5] + 0x10))();
      plVar1[5] = 0;
    }
    if ((longlong *)plVar1[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[6] + 0x10))();
      plVar1[6] = 0;
    }
    if ((longlong *)plVar1[7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[7] + 0x10))();
      plVar1[7] = 0;
    }
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[8] + 0x10))();
      plVar1[8] = 0;
    }
    if ((longlong *)plVar1[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[9] + 0x10))();
      plVar1[9] = 0;
    }
    if ((longlong *)plVar1[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0xd] + 0x10))();
      plVar1[0xd] = 0;
    }
    if ((longlong *)plVar1[0xf] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0xf] + 0x10))();
      plVar1[0xf] = 0;
    }
    if ((longlong *)plVar1[0x10] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x10] + 0x10))();
      plVar1[0x10] = 0;
    }
    if ((longlong *)plVar1[0x12] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x12] + 0x10))();
      plVar1[0x12] = 0;
    }
    if ((longlong *)plVar1[0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x1a] + 0x10))();
      plVar1[0x1a] = 0;
    }
    if ((longlong *)plVar1[0x14] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x14] + 0x10))();
      plVar1[0x14] = 0;
    }
    if ((longlong *)plVar1[0x16] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x16] + 0x10))();
      plVar1[0x16] = 0;
    }
    if ((longlong *)plVar1[0x15] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x15] + 0x10))();
      plVar1[0x15] = 0;
    }
    if ((longlong *)plVar1[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x17] + 0x10))();
      plVar1[0x17] = 0;
    }
    iVar4 = (int)plVar1[0x1f];
    if (0 < iVar4) {
      lVar5 = 0x70;
      lVar6 = 0;
      do {
        if (*(longlong **)(plVar1[0x20] + lVar5) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(plVar1[0x20] + lVar5) + 0x10))();
          *(undefined8 *)(plVar1[0x20] + lVar5) = 0;
          iVar4 = (int)plVar1[0x1f];
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x78;
      } while (lVar6 < iVar4);
      FUN_140160cf0(plVar1[0x20]);
      plVar1[0x20] = 0;
      *(undefined4 *)(plVar1 + 0x1f) = 0;
    }
    if ((longlong *)plVar1[0x1c] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x1c] + 0x10))();
      plVar1[0x1c] = 0;
    }
    if ((longlong *)plVar1[0x1d] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x1d] + 0x10))();
      plVar1[0x1d] = 0;
    }
    if ((longlong *)plVar1[0x1e] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[0x1e] + 0x10))();
      plVar1[0x1e] = 0;
    }
    lVar5 = 0x128;
    do {
      plVar2 = *(longlong **)((longlong)plVar1 + lVar5 + -0x18);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)plVar1 + lVar5 + -0x18) = 0;
      }
      *(undefined8 *)((longlong)plVar1 + lVar5) = 0;
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0x2128);
    plVar1[10] = 0;
    plVar1[0x845a] = 0;
    plVar1[0x845c] = 0;
    plVar2 = (longlong *)plVar1[4];
    if (plVar2 != (longlong *)0x0) {
      local_38 = 0xe48ae283;
      uStack_34 = 0x490bda80;
      uStack_30 = 0xe943e687;
      uStack_2c = 0x8dacfa9;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,6);
      if ((longlong *)plVar1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[4] + 0x10))();
        plVar1[4] = 0;
      }
    }
    if (plVar1[1] != 0) {
      FUN_140165790();
      plVar1[1] = 0;
    }
    if (*plVar1 != 0) {
      FUN_140165790();
      *plVar1 = 0;
    }
  }
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
}

