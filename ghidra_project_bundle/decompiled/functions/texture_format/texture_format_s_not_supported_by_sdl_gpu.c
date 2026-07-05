/**
 * Function: texture_format_s_not_supported_by_sdl_gpu
 * Address:  14043cb60
 * Signature: undefined texture_format_s_not_supported_by_sdl_gpu(void)
 * Body size: 634 bytes
 */


undefined1 texture_format_s_not_supported_by_sdl_gpu(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  puVar2 = *(undefined8 **)(param_1 + 0x2c0);
  uVar6 = *param_2;
  if ((int)uVar6 < 0x16561804) {
    uVar10 = 0xc;
    if ((uVar6 == 0x16161804) || (uVar6 == 0x16362004)) {
LAB_14043cbbe:
      plVar7 = (longlong *)FUN_140160c70(1,0x30);
      if (plVar7 == (longlong *)0x0) {
LAB_14043cdae:
        bVar11 = false;
      }
      else {
        uVar6 = param_2[7];
        if (uVar6 == 1) {
          uVar6 = param_2[1];
          uVar1 = *param_2;
          if ((uVar1 & 0xf0000000) == 0x10000000 || uVar1 == 0) {
            uVar4 = uVar1 & 0xff;
          }
          else {
            uVar4 = 2;
            if (((uVar1 != 0x32595559) && (uVar1 != 0x55595659)) && (uVar1 != 0x59565955)) {
              uVar4 = (uVar1 == 0x30313050) + 1;
            }
          }
          iVar5 = (int)((ulonglong)uVar4 * (longlong)(int)uVar6);
          *(int *)(plVar7 + 3) = iVar5;
          uVar1 = param_2[2];
          lVar9 = (longlong)(int)uVar1 * (ulonglong)uVar4 * (longlong)(int)uVar6;
          uVar6 = *param_2;
          if ((uVar6 == 0x56555949) || (uVar6 == 0x32315659)) {
            lVar9 = lVar9 + (int)(((iVar5 - (iVar5 + 1 >> 0x1f)) + 1U >> 1) *
                                  ((uVar1 - ((int)(uVar1 + 1) >> 0x1f)) + 1 >> 1) * 2);
          }
          if ((uVar6 == 0x3231564e) || (uVar6 == 0x3132564e)) {
            lVar9 = lVar9 + (int)(((iVar5 - (iVar5 + 1 >> 0x1f)) + 1U >> 1) *
                                  ((uVar1 - ((int)(uVar1 + 1) >> 0x1f)) + 1 >> 1) * 2);
          }
          lVar9 = FUN_140160c70(1,lVar9);
          plVar7[2] = lVar9;
          if (lVar9 == 0) {
            FUN_140160cf0(plVar7);
            goto LAB_14043cdae;
          }
          uVar6 = param_2[7];
        }
        iStack_50 = (uint)(uVar6 == 2) * 2 + 1;
        *(longlong **)(param_2 + 0x3c) = plVar7;
        uStack_3c = 0;
        local_38 = 0;
        local_58 = (ulonglong)uVar10 << 0x20;
        uStack_44 = 1;
        uStack_40 = 1;
        uStack_4c = (undefined4)*(undefined8 *)(param_2 + 1);
        uStack_48 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20);
        *(uint *)(plVar7 + 1) = uVar10;
        lVar9 = invalid_gpu_device(*puVar2);
        *plVar7 = lVar9;
        bVar11 = lVar9 != 0;
        if (bVar11) {
          *(uint *)((longlong)plVar7 + 0xc) = ((*param_2 + 0xe9c9dffc & 0xffbfffff) == 0) + 1;
        }
      }
      if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_78)) {
        return bVar11;
      }
      goto LAB_14043cdcd;
    }
  }
  else if ((uVar6 == 0x16762004) || (uVar6 == 0x16561804)) {
    uVar10 = 4;
    goto LAB_14043cbbe;
  }
  uVar8 = FUN_140155460();
  uVar3 = FUN_1400fbed0("Texture format %s not supported by SDL_GPU",uVar8);
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_78)) {
    return uVar3;
  }
LAB_14043cdcd:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_78);
}

