/**
 * Function: texture_format_s_not_supported_by_opengl
 * Address:  14042a040
 * Signature: undefined texture_format_s_not_supported_by_opengl(void)
 * Body size: 563 bytes
 */


longlong texture_format_s_not_supported_by_opengl(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_48;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
    FUN_14042a660(param_1);
    uVar8 = 0x80e1;
    uVar7 = 0x16362004;
    goto LAB_14042a113;
  }
  uVar7 = **(uint **)(param_1 + 0x1e0);
  FUN_14042a660(param_1);
  if ((int)uVar7 < 0x3132564e) {
    if ((int)uVar7 < 0x16561804) {
      if ((uVar7 != 0x16161804) && (uVar7 != 0x16362004)) goto LAB_14042a24e;
      uVar8 = 0x80e1;
    }
    else {
      uVar8 = 0x1908;
      if ((uVar7 != 0x16561804) && (uVar7 != 0x16762004)) goto LAB_14042a24e;
    }
LAB_14042a113:
    lVar4 = height_pitch_would_overflow(param_2[2],param_2[3],uVar7);
    if (lVar4 != 0) {
      iVar3 = param_2[1];
      if (*(longlong *)(param_1 + 0x1e0) == 0) {
        parameter_s_is_invalid(param_1,local_44,&local_48);
        iVar3 = local_48 - (iVar3 + param_2[3]);
      }
      (**(code **)(lVar1 + 0x120))(0xd05,1);
      if ((uVar7 & 0xf0000000) == 0x10000000) {
        uVar6 = uVar7 & 0xff;
      }
      else {
        uVar6 = 2;
        if ((uVar7 != 0x32595559) && (uVar7 != 0x55595659)) {
          uVar6 = (uVar7 == 0x30313050) + 1;
        }
      }
      (**(code **)(lVar1 + 0x120))
                (0xd02,(longlong)*(int *)(lVar4 + 0x10) / (longlong)(int)uVar6 & 0xffffffff);
      local_58 = *(undefined8 *)(lVar4 + 0x18);
      local_60 = 0x1401;
      local_68 = uVar8;
      (**(code **)(lVar1 + 0x140))(*param_2,iVar3,param_2[2],param_2[3]);
      cVar2 = gl_out_of_memory("glReadPixels()",param_1,0x5d5,"GL_RenderReadPixels");
      if (cVar2 != '\0') {
        if (*(longlong *)(param_1 + 0x1e0) == 0) {
          parameter_s_is_invalid(lVar4,2);
        }
        goto LAB_14042a228;
      }
      parameter_s_is_invalid(lVar4);
    }
  }
  else {
    if ((int)uVar7 < 0x32315659) {
      if ((uVar7 == 0x3132564e) || (uVar7 == 0x3231564e)) {
LAB_14042a10d:
        uVar8 = 0x1909;
        goto LAB_14042a113;
      }
    }
    else if ((uVar7 == 0x56555949) || (uVar7 == 0x32315659)) goto LAB_14042a10d;
LAB_14042a24e:
    uVar5 = FUN_140155460(uVar7);
    FUN_1400fbed0("Texture format %s not supported by OpenGL",uVar5);
  }
  lVar4 = 0;
LAB_14042a228:
  if (DAT_1414ef3c0 != (local_40 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_40 ^ (ulonglong)auStack_88);
  }
  return lVar4;
}

