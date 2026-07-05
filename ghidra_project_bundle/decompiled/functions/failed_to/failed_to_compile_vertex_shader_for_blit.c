/**
 * Function: failed_to_compile_vertex_shader_for_blit
 * Address:  1403f61a0
 * Signature: undefined failed_to_compile_vertex_shader_for_blit(void)
 * Body size: 1084 bytes
 */


void failed_to_compile_vertex_shader_for_blit(longlong param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  ulonglong local_18;
  
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0xe0) = 0x200000000;
  uVar1 = FUN_140160c40(0x20);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  pvVar2 = (void *)FUN_140160c40(0xd4d);
  if (pvVar2 != (void *)0x0) {
    memcpy(pvVar2,&DAT_140e0dd60,0xd4d);
    puVar3 = (undefined8 *)FUN_140160c70(1,0x28);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      *puVar3 = pvVar2;
      puVar3[1] = 0xd4d;
      *(undefined8 **)(param_1 + 0x98) = puVar3;
      pvVar2 = (void *)FUN_140160c40(0x122b);
      if (pvVar2 != (void *)0x0) {
        memcpy(pvVar2,&DAT_140e0eab0,0x122b);
        puVar3 = (undefined8 *)FUN_140160c70(1,0x28);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 4) = 0;
          *(undefined4 *)(puVar3 + 2) = 1;
          *(undefined4 *)((longlong)puVar3 + 0x14) = 1;
          *(undefined4 *)(puVar3 + 3) = 1;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
          *puVar3 = pvVar2;
          puVar3[1] = 0x122b;
          *(undefined8 **)(param_1 + 0xa0) = puVar3;
          pvVar2 = (void *)FUN_140160c40(0x1283);
          if (pvVar2 != (void *)0x0) {
            memcpy(pvVar2,&DAT_140e0fce0,0x1283);
            puVar3 = (undefined8 *)FUN_140160c70(1,0x28);
            if (puVar3 != (undefined8 *)0x0) {
              *(undefined4 *)(puVar3 + 4) = 0;
              *(undefined4 *)(puVar3 + 2) = 1;
              *(undefined4 *)((longlong)puVar3 + 0x14) = 1;
              *(undefined4 *)(puVar3 + 3) = 1;
              *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
              *puVar3 = pvVar2;
              puVar3[1] = 0x1283;
              *(undefined8 **)(param_1 + 0xa8) = puVar3;
              pvVar2 = (void *)FUN_140160c40(0x123f);
              if (pvVar2 != (void *)0x0) {
                memcpy(pvVar2,&DAT_140e10f70,0x123f);
                puVar3 = (undefined8 *)FUN_140160c70(1,0x28);
                if (puVar3 != (undefined8 *)0x0) {
                  *(undefined4 *)(puVar3 + 4) = 0;
                  *(undefined4 *)(puVar3 + 2) = 1;
                  *(undefined4 *)((longlong)puVar3 + 0x14) = 1;
                  *(undefined4 *)(puVar3 + 3) = 1;
                  *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
                  *puVar3 = pvVar2;
                  puVar3[1] = 0x123f;
                  *(undefined8 **)(param_1 + 0xb0) = puVar3;
                  pvVar2 = (void *)FUN_140160c40(0x1297);
                  if (pvVar2 != (void *)0x0) {
                    memcpy(pvVar2,&DAT_140e121b0,0x1297);
                    puVar3 = (undefined8 *)FUN_140160c70(1,0x28);
                    if (puVar3 != (undefined8 *)0x0) {
                      *(undefined4 *)(puVar3 + 4) = 0;
                      *(undefined4 *)(puVar3 + 2) = 1;
                      *(undefined4 *)((longlong)puVar3 + 0x14) = 1;
                      *(undefined4 *)(puVar3 + 3) = 1;
                      *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
                      *puVar3 = pvVar2;
                      puVar3[1] = 0x1297;
                      *(undefined8 **)(param_1 + 0xb8) = puVar3;
                      pvVar2 = (void *)FUN_140160c40(0x12c3);
                      if (pvVar2 != (void *)0x0) {
                        memcpy(pvVar2,&DAT_140e13450,0x12c3);
                        puVar3 = (undefined8 *)FUN_140160c70(1,0x28);
                        if (puVar3 != (undefined8 *)0x0) {
                          *(undefined4 *)(puVar3 + 4) = 0;
                          puVar3[2] = 0x100000001;
                          puVar3[3] = 1;
                          *puVar3 = pvVar2;
                          puVar3[1] = 0x12c3;
                          *(undefined8 **)(param_1 + 0xc0) = puVar3;
                          local_48 = 0x200000002;
                          local_2c = 0;
                          local_58 = 0;
                          uStack_50 = 0x200000000;
                          local_34 = 0x447a000000000000;
                          local_40 = 0x3f80000000000000;
                          local_38 = 1;
                          lVar4 = FUN_1403f80c0(param_1,&local_58);
                          *(longlong *)(param_1 + 200) = lVar4;
                          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_1400fb950(9,"Failed to create blit nearest sampler!");
                          }
                          local_58 = 0x100000001;
                          uStack_50 = CONCAT44(uStack_50._4_4_,1);
                          lVar4 = FUN_1403f80c0(param_1,&local_58);
                          *(longlong *)(param_1 + 0xd0) = lVar4;
                          if (lVar4 != 0) {
                            if (DAT_1414ef3c0 != (local_18 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
                              FUN_140b65db0(local_18 ^ (ulonglong)auStack_78);
                            }
                            return;
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_1400fb950(9,"Failed to create blit linear sampler!");
                        }
                        FUN_140160cf0(pvVar2);
                      }
                      *(undefined8 *)(param_1 + 0xc0) = 0;
                    /* WARNING: Subroutine does not return */
                      FUN_1400fb950(9,"Failed to compile BlitFromCubeArray pixel shader!");
                    }
                    FUN_140160cf0(pvVar2);
                  }
                  *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Subroutine does not return */
                  FUN_1400fb950(9,"Failed to compile BlitFromCube pixel shader!");
                }
                FUN_140160cf0(pvVar2);
              }
              *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Subroutine does not return */
              FUN_1400fb950(9,"Failed to compile BlitFrom3D pixel shader!");
            }
            FUN_140160cf0(pvVar2);
          }
          *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_1400fb950(9,"Failed to compile BlitFrom2DArray pixel shader!");
        }
        FUN_140160cf0(pvVar2);
      }
      *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,"Failed to compile BlitFrom2D pixel shader!");
    }
    FUN_140160cf0(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1400fb950(9,"Failed to compile vertex shader for blit!");
}

