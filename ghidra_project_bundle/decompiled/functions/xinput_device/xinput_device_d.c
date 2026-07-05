/**
 * Function: xinput_device_d
 * Address:  140651c00
 * Signature: undefined xinput_device_d(void)
 * Body size: 689 bytes
 */


void xinput_device_d(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong unaff_RBP;
  int iVar8;
  char *pcVar9;
  ulonglong unaff_R12;
  undefined2 uVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined1 local_90;
  char local_88;
  undefined1 local_7c;
  char local_7b;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ushort local_54;
  ushort local_52;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  if (DAT_1416fdef0 == '\x01') {
    iVar8 = 3;
    do {
      iVar4 = (*DAT_1416fdeb0)(iVar8,1,&local_7c);
      cVar2 = local_7b;
      if (iVar4 == 0) {
        lVar7 = *param_1;
        cVar3 = FUN_140443f70();
        if (cVar2 != '\0' && cVar3 == '\0') {
          if (lVar7 != 0) {
            lVar5 = 0;
            do {
              if (((*(char *)(lVar7 + 0x20) == '\x01') && (*(char *)(lVar7 + 0x22) == (char)iVar8))
                 && (*(char *)(lVar7 + 0x21) == cVar2)) {
                if (lVar7 == *param_1) {
                  *param_1 = *(longlong *)(lVar7 + 0x578);
                }
                else if (lVar5 != 0) {
                  *(undefined8 *)(lVar5 + 0x578) = *(undefined8 *)(lVar7 + 0x578);
                }
                *(longlong *)(lVar7 + 0x578) = DAT_1416f1878;
                DAT_1416f1878 = lVar7;
                goto LAB_140651c60;
              }
              plVar1 = (longlong *)(lVar7 + 0x578);
              lVar5 = lVar7;
              lVar7 = *plVar1;
            } while (*plVar1 != 0);
          }
          pcVar9 = "XInput Device #%d";
          if ((byte)(cVar2 - 1U) < 0x13) {
            pcVar9 = (&PTR_s_XInput_Controller___d_14120f8e0)[(byte)(cVar2 - 1U)];
          }
          FUN_1400fd420(&DAT_1416fdf00,0x20,pcVar9,iVar8 + 1);
          unaff_RBP = CONCAT62((int6)(unaff_RBP >> 0x10),0x2a1);
          unaff_R12 = CONCAT62((int6)(unaff_R12 >> 0x10),0x45e);
          uVar10 = 0;
          if (DAT_1416fdeb8 != (code *)0x0) {
            iVar4 = (*DAT_1416fdeb8)(1,iVar8,0,&local_68);
            if (iVar4 == 0) {
              unaff_RBP = (ulonglong)local_52;
              if (local_52 == 0) {
                if ((local_68 & 0x20000) == 0) {
                  unaff_RBP = 0;
                }
                else {
                  local_54 = 0x45e;
                  unaff_RBP = 0x2a1;
                }
              }
              unaff_R12 = (ulonglong)local_54;
              uVar10 = local_50;
            }
          }
          cVar3 = FUN_14012d730(unaff_R12 & 0xffffffff,unaff_RBP & 0xffffffff,uVar10,&DAT_1416fdf00)
          ;
          if (cVar3 == '\0') {
            local_a8 = &DAT_1416fdf00;
            cVar3 = FUN_140126eb0(&PTR_sdl_joystick_thread_1415039e0,unaff_R12 & 0xffffffff,
                                  unaff_RBP & 0xffffffff,uVar10);
            if (cVar3 == '\0') {
              puVar6 = (uint *)FUN_140160c70(1,0x580);
              if (puVar6 != (uint *)0x0) {
                *(undefined1 *)(puVar6 + 8) = 1;
                lVar7 = bensussen_deutsch_associatesincbda
                                  (unaff_R12 & 0xffffffff,unaff_RBP & 0xffffffff,0,&DAT_1416fdf00);
                *(longlong *)(puVar6 + 4) = lVar7;
                if (lVar7 == 0) {
                  FUN_140160cf0(puVar6);
                }
                else {
                  FUN_1400fd420(puVar6 + 0x11c,0x104,"XInput#%u",iVar8);
                  local_88 = cVar2;
                  local_98 = &DAT_1416fdf00;
                  local_a8 = (undefined *)CONCAT62(local_a8._2_6_,uVar10);
                  local_90 = 0x78;
                  local_a0 = 0;
                  FUN_14012cfb0(&local_68,3,unaff_R12 & 0xffffffff,unaff_RBP & 0xffffffff);
                  *puVar6 = local_68;
                  puVar6[1] = uStack_64;
                  puVar6[2] = uStack_60;
                  puVar6[3] = uStack_5c;
                  *(char *)((longlong)puVar6 + 0x21) = cVar2;
                  *(char *)((longlong)puVar6 + 0x22) = (char)iVar8;
                  FUN_140447430(puVar6);
                }
              }
            }
          }
        }
      }
LAB_140651c60:
      bVar11 = iVar8 != 0;
      iVar8 = iVar8 + -1;
    } while (bVar11);
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

