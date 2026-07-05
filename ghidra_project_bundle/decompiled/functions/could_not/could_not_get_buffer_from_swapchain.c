/**
 * Function: could_not_get_buffer_from_swapchain
 * Address:  140402c80
 * Signature: undefined could_not_get_buffer_from_swapchain(void)
 * Body size: 741 bytes
 */


undefined8
could_not_get_buffer_from_swapchain
          (longlong param_1,longlong *param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 local_68;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  uVar1 = *(undefined4 *)(&DAT_140e14d60 + (longlong)param_3 * 4);
  iVar2 = (**(code **)(*param_2 + 0x48))(param_2,param_4,&DAT_140e14d30,&local_48);
  if (iVar2 < 0) {
    s_error_code_s_0x08lx(param_1,"Could not get buffer from swapchain!",iVar2);
  }
  else {
    puVar3 = (undefined8 *)FUN_140160c70(1,0x50);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[4] = 0;
      FUN_140106140(puVar3 + 9,0);
      *(undefined4 *)(puVar3 + 3) = 1;
      lVar4 = FUN_140160c70(1,0x60);
      puVar3[2] = lVar4;
      if (lVar4 != 0) {
        uVar5 = FUN_140160c70(1,0x20);
        *(undefined8 *)(puVar3[2] + 0x18) = uVar5;
        *(undefined8 *)(puVar3[2] + 0x28) = 0;
        *(undefined8 *)(puVar3[2] + 0x48) = 0;
        *(undefined8 **)puVar3[2] = puVar3;
        *(undefined4 *)(puVar3[2] + 0x14) = 0;
        *(undefined4 *)(puVar3[2] + 8) = 0;
        *(undefined4 *)(puVar3[2] + 0x10) = 1;
        *(undefined4 *)(puVar3[2] + 0xc) = 0;
        (**(code **)(*local_48 + 0x50))(local_48,local_80);
        param_5[3] = local_70;
        param_5[4] = local_68;
        *(undefined8 *)(param_5 + 5) = 0x100000001;
        *param_5 = 0;
        param_5[2] = 2;
        param_5[7] = 0;
        param_5[1] = *(undefined4 *)(&DAT_140e14d90 + (longlong)param_3 * 4);
        *(undefined8 *)(param_5 + 0x12) = 0;
        puVar6 = (undefined8 *)FUN_140160c70(1,8);
        *(undefined8 **)(param_5 + 0xc) = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 *)(param_5 + 0xe) = 0x100000001;
          *puVar6 = puVar3;
          *(undefined8 **)(param_5 + 10) = puVar3;
          *(undefined1 *)(param_5 + 0x10) = 0;
          *puVar3 = param_5;
          *(undefined4 *)(puVar3 + 1) = 0;
          FUN_1403feeb0(param_1,0,puVar3 + 5);
          local_a4 = 0x168800000004;
          local_98 = 0x100000000;
          local_90 = 0;
          local_a8 = uVar1;
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0x90))
                    (*(longlong **)(param_1 + 0x50),local_48,&local_a8,puVar3[7]);
          FUN_1403feeb0(param_1,2,*(undefined8 *)(puVar3[2] + 0x18));
          local_c0 = 0x5b;
          if (param_3 != 1) {
            local_c0 = uVar1;
          }
          local_bc = 4;
          local_b4 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x50) + 0xa0))
                    (*(longlong **)(param_1 + 0x50),local_48,&local_c0,
                     *(undefined8 *)(*(longlong *)(puVar3[2] + 0x18) + 0x10));
          (**(code **)(*local_48 + 0x10))();
          uVar5 = 1;
          goto LAB_140402f2c;
        }
        FUN_140160cf0(puVar3[2]);
      }
      FUN_140160cf0(puVar3);
    }
    (**(code **)(*local_48 + 0x10))();
  }
  uVar5 = 0;
LAB_140402f2c:
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_e8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_e8);
}

