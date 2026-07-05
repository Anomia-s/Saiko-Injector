/**
 * Function: gl_updatetexturenv
 * Address:  140428ce0
 * Signature: undefined gl_updatetexturenv(void)
 * Body size: 369 bytes
 */


void gl_updatetexturenv(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                       undefined4 param_5,undefined8 param_6,int param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x2c0);
  uVar1 = *(undefined4 *)(lVar2 + 0x28);
  puVar3 = *(undefined4 **)(param_2 + 0xf0);
  FUN_14042a660();
  *(undefined8 *)(lVar2 + 0x218) = 0;
  (**(code **)(lVar2 + 0x40))(uVar1,*puVar3);
  (**(code **)(lVar2 + 0x120))(0xcf5,1);
  (**(code **)(lVar2 + 0x120))(0xcf2,param_5);
  (**(code **)(lVar2 + 400))
            (uVar1,0,*param_3,param_3[1],param_3[2],param_3[3],puVar3[4],puVar3[5],param_4);
  (**(code **)(lVar2 + 0x120))(0xcf2,param_7 / 2);
  (**(code **)(lVar2 + 0x40))(uVar1,puVar3[0x12]);
  (**(code **)(lVar2 + 400))
            (uVar1,0,*param_3 / 2,param_3[1] / 2,(param_3[2] - (param_3[2] + 1 >> 0x1f)) + 1 >> 1,
             (param_3[3] - (param_3[3] + 1 >> 0x1f)) + 1 >> 1,0x190a,0x1401,param_6);
  gl_out_of_memory("glTexSubImage2D()",param_1,0x31b,"GL_UpdateTextureNV");
  return;
}

