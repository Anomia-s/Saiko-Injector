/**
 * Function: unable_to_update_effect
 * Address:  1406539d0
 * Signature: undefined unable_to_update_effect(void)
 * Body size: 563 bytes
 */


undefined8 unable_to_update_effect(longlong param_1,longlong param_2,short *param_3)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  cVar5 = haptic_unknown_effect_type(0,&local_78);
  if (cVar5 != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x50);
    iVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_78,0x3d9);
    if (iVar6 == -0x7ffbfdfb) {
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x40))();
      iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x68))
                        ((longlong *)**(undefined8 **)(param_1 + 0x28),DAT_1416f2178,9);
      if (iVar6 < 0) goto LAB_140653a6b;
LAB_140653a79:
      iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x38))();
      if (-1 < iVar6) {
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x50);
        iVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_78,0x3d9);
        goto LAB_140653aa7;
      }
    }
    else {
LAB_140653a6b:
      if ((iVar6 == -0x7ff8ffe2) || (iVar6 == -0x7ff8fff4)) goto LAB_140653a79;
LAB_140653aa7:
      if (-1 < iVar6) {
        sVar1 = *param_3;
        lVar3 = *(longlong *)(param_2 + 0x48);
        FUN_140160cf0(*(undefined8 *)(lVar3 + 0x30));
        *(undefined8 *)(lVar3 + 0x30) = 0;
        FUN_140160cf0(*(undefined8 *)(lVar3 + 0x20));
        *(undefined8 *)(lVar3 + 0x20) = 0;
        lVar8 = *(longlong *)(lVar3 + 0x40);
        if (lVar8 != 0) {
          if (SBORROW2(0,sVar1)) {
            FUN_140160cf0(*(undefined8 *)(lVar8 + 0x10));
            *(undefined8 *)(lVar8 + 0x10) = 0;
            lVar8 = *(longlong *)(lVar3 + 0x40);
          }
          FUN_140160cf0(lVar8);
          *(undefined8 *)(lVar3 + 0x40) = 0;
        }
        FUN_140160cf0(*(undefined8 *)(lVar3 + 0x28));
        *(undefined8 *)(lVar3 + 0x28) = 0;
        puVar4 = *(undefined4 **)(param_2 + 0x48);
        *(longlong *)(puVar4 + 0x10) = local_38;
        *(undefined8 *)(puVar4 + 0x12) = uStack_30;
        *(undefined8 *)(puVar4 + 0xc) = local_48;
        *(undefined8 *)(puVar4 + 0xe) = uStack_40;
        *(undefined8 *)(puVar4 + 8) = local_58;
        *(undefined8 *)(puVar4 + 10) = uStack_50;
        *(undefined8 *)(puVar4 + 4) = local_68;
        *(undefined8 *)(puVar4 + 6) = uStack_60;
        *puVar4 = (undefined4)local_78;
        puVar4[1] = local_78._4_4_;
        puVar4[2] = (undefined4)uStack_70;
        puVar4[3] = uStack_70._4_4_;
        uVar7 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
        goto LAB_140653bd7;
      }
    }
    FUN_1400fbed0("Haptic error %s","Unable to update effect");
  }
  sVar1 = *param_3;
  FUN_140160cf0(local_48);
  local_48 = 0;
  FUN_140160cf0(local_58);
  lVar3 = local_38;
  local_58 = 0;
  if (local_38 != 0) {
    if (SBORROW2(0,sVar1)) {
      FUN_140160cf0(*(undefined8 *)(local_38 + 0x10));
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    FUN_140160cf0(local_38);
    local_38 = 0;
  }
  FUN_140160cf0(uStack_50);
  uVar7 = 0;
LAB_140653bd7:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_98)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_98);
}

