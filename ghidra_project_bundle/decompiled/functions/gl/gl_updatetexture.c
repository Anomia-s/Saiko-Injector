/**
 * Function: gl_updatetexture
 * Address:  140428720
 * Signature: undefined gl_updatetexture(void)
 * Body size: 913 bytes
 */


void gl_updatetexture(longlong param_1,uint *param_2,int *param_3,longlong param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  uVar1 = *(undefined4 *)(lVar3 + 0x28);
  puVar4 = *(undefined4 **)(param_2 + 0x3c);
  uVar2 = *param_2;
  if ((uVar2 & 0xf0000000) == 0x10000000 || uVar2 == 0) {
    uVar6 = uVar2 & 0xff;
    if (uVar6 == 0) {
      do {
        iVar7 = FUN_14015bb20(&DAT_141503720,"GL_UpdateTexture",
                              "/opt/actions-runner/_work/Platform/Platform/thirdparty/SDL/src/render/opengl/SDL_render_gl.c"
                              ,0x2a7);
      } while (iVar7 == 0);
      if (iVar7 == 1) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 2;
    if (((uVar2 != 0x32595559) && (uVar2 != 0x55595659)) && (uVar2 != 0x59565955)) {
      uVar6 = (uVar2 == 0x30313050) + 1;
    }
  }
  FUN_14042a660(param_1);
  *(undefined8 *)(lVar3 + 0x218) = 0;
  (**(code **)(lVar3 + 0x40))(uVar1,*puVar4);
  (**(code **)(lVar3 + 0x120))(0xcf5,1);
  (**(code **)(lVar3 + 0x120))(0xcf2,(longlong)param_5 / (longlong)(int)uVar6 & 0xffffffff);
  (**(code **)(lVar3 + 400))
            (uVar1,0,*param_3,param_3[1],param_3[2],param_3[3],puVar4[4],puVar4[5],param_4);
  if (*(char *)(puVar4 + 0x11) == '\x01') {
    iVar7 = (param_5 - (param_5 + 1 >> 0x1f)) + 1 >> 1;
    (**(code **)(lVar3 + 0x120))(0xcf2,iVar7);
    param_4 = param_4 + (longlong)param_3[3] * (longlong)param_5;
    (**(code **)(lVar3 + 0x40))(uVar1,puVar4[(ulonglong)(*param_2 == 0x32315659) * 2 + 0x12]);
    (**(code **)(lVar3 + 400))
              (uVar1,0,*param_3 / 2,param_3[1] / 2,(param_3[2] - (param_3[2] + 1 >> 0x1f)) + 1 >> 1,
               (param_3[3] - (param_3[3] + 1 >> 0x1f)) + 1 >> 1,puVar4[4],puVar4[5],param_4);
    param_4 = param_4 + ((param_3[3] - (param_3[3] + 1 >> 0x1f)) + 1 >> 1) * iVar7;
    (**(code **)(lVar3 + 0x40))(uVar1,puVar4[(ulonglong)(*param_2 != 0x32315659) * 2 + 0x12]);
    (**(code **)(lVar3 + 400))
              (uVar1,0,*param_3 / 2,param_3[1] / 2,(param_3[2] - (param_3[2] + 1 >> 0x1f)) + 1 >> 1,
               (param_3[3] - (param_3[3] + 1 >> 0x1f)) + 1 >> 1,puVar4[4],puVar4[5],param_4);
  }
  if (*(char *)((longlong)puVar4 + 0x45) == '\x01') {
    (**(code **)(lVar3 + 0x120))(0xcf2,(param_5 - (param_5 + 1 >> 0x1f)) + 1 >> 1);
    iVar7 = param_3[3];
    (**(code **)(lVar3 + 0x40))(uVar1,puVar4[0x12]);
    (**(code **)(lVar3 + 400))
              (uVar1,0,*param_3 / 2,param_3[1] / 2,(param_3[2] - (param_3[2] + 1 >> 0x1f)) + 1 >> 1,
               (param_3[3] - (param_3[3] + 1 >> 0x1f)) + 1 >> 1,0x190a,0x1401,
               param_4 + (longlong)iVar7 * (longlong)param_5);
  }
  gl_out_of_memory("glTexSubImage2D()",param_1,0x2d9,"GL_UpdateTexture");
  return;
}

