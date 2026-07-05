/**
 * Function: the_event_system_has_been_shut_down
 * Address:  140106590
 * Signature: undefined the_event_system_has_been_shut_down(void)
 * Body size: 1993 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint the_event_system_has_been_shut_down
               (longlong param_1,uint param_2,int param_3,uint param_4,uint param_5,char param_6)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  byte bVar26;
  int iVar27;
  longlong lVar28;
  uint *puVar29;
  longlong *plVar30;
  longlong *plVar31;
  int iVar32;
  uint uVar33;
  uint *puVar34;
  ulonglong uVar35;
  
  FUN_1401552a0(DAT_1415254b8);
  if (DAT_1415254c0 == '\0') {
    if (param_3 == 2) {
      FUN_1400fbed0("The event system has been shut down");
    }
    FUN_1401552c0(DAT_1415254b8);
    return 0xffffffff;
  }
  if (param_3 == 0) {
    if (param_1 == 0) {
      FUN_1401552c0(DAT_1415254b8);
      bVar26 = FUN_1400fbed0("Parameter \'%s\' is invalid","events");
      return (uint)bVar26;
    }
    if (0 < (int)param_2) {
      uVar35 = 0;
      uVar33 = 0;
      do {
        while (iVar32 = FUN_140106170(&DAT_1415254c4), iVar32 < 0xffff) {
          if (DAT_1415254e0 == (uint *)0x0) {
            puVar29 = (uint *)FUN_140160c40(0x98);
            if (puVar29 == (uint *)0x0) goto LAB_14010676e;
          }
          else {
            puVar29 = DAT_1415254e0;
            DAT_1415254e0 = *(uint **)(DAT_1415254e0 + 0x24);
          }
          puVar34 = (uint *)(uVar35 * 0x80 + param_1);
          if (0 < DAT_1415254ac) {
            sdl_event_gamepad_steam_handle_updated(puVar34);
          }
          uVar21 = *(undefined8 *)(puVar34 + 0x1e);
          *(undefined8 *)(puVar29 + 0x1c) = *(undefined8 *)(puVar34 + 0x1c);
          *(undefined8 *)(puVar29 + 0x1e) = uVar21;
          uVar21 = *(undefined8 *)(puVar34 + 0x1a);
          *(undefined8 *)(puVar29 + 0x18) = *(undefined8 *)(puVar34 + 0x18);
          *(undefined8 *)(puVar29 + 0x1a) = uVar21;
          uVar21 = *(undefined8 *)(puVar34 + 0x16);
          *(undefined8 *)(puVar29 + 0x14) = *(undefined8 *)(puVar34 + 0x14);
          *(undefined8 *)(puVar29 + 0x16) = uVar21;
          uVar21 = *(undefined8 *)(puVar34 + 0x12);
          *(undefined8 *)(puVar29 + 0x10) = *(undefined8 *)(puVar34 + 0x10);
          *(undefined8 *)(puVar29 + 0x12) = uVar21;
          uVar4 = *puVar34;
          uVar3 = puVar34[1];
          uVar6 = puVar34[2];
          uVar7 = puVar34[3];
          uVar8 = puVar34[4];
          uVar9 = puVar34[5];
          uVar10 = puVar34[6];
          uVar11 = puVar34[7];
          uVar12 = puVar34[8];
          uVar13 = puVar34[9];
          uVar14 = puVar34[10];
          uVar15 = puVar34[0xb];
          uVar16 = puVar34[0xd];
          uVar17 = puVar34[0xe];
          uVar18 = puVar34[0xf];
          puVar29[0xc] = puVar34[0xc];
          puVar29[0xd] = uVar16;
          puVar29[0xe] = uVar17;
          puVar29[0xf] = uVar18;
          puVar29[8] = uVar12;
          puVar29[9] = uVar13;
          puVar29[10] = uVar14;
          puVar29[0xb] = uVar15;
          puVar29[4] = uVar8;
          puVar29[5] = uVar9;
          puVar29[6] = uVar10;
          puVar29[7] = uVar11;
          *puVar29 = uVar4;
          puVar29[1] = uVar3;
          puVar29[2] = uVar6;
          puVar29[3] = uVar7;
          if (*puVar34 == 0x7f00) {
            FUN_140106160(&DAT_141524c50,1);
          }
          puVar29[0x20] = 0;
          puVar29[0x21] = 0;
          uVar4 = *puVar29;
          if ((int)uVar4 < 0x900) {
            if (uVar4 == 0x302) {
              lVar28 = *(longlong *)(puVar29 + 6);
              plVar30 = (longlong *)parameter_s_is_invalid(&DAT_1415254b0);
              plVar31 = plVar30;
              if (plVar30 != (longlong *)0x0) {
                do {
                  plVar31 = (longlong *)plVar31[1];
                  if (plVar31 == (longlong *)0x0) goto LAB_140106a47;
                } while (lVar28 != *plVar31);
                goto LAB_1401069fe;
              }
            }
            else if (uVar4 == 0x303) {
              lVar28 = *(longlong *)(puVar29 + 6);
              plVar30 = (longlong *)parameter_s_is_invalid(&DAT_1415254b0);
              plVar31 = plVar30;
              if (plVar30 != (longlong *)0x0) {
                do {
                  plVar31 = (longlong *)plVar31[1];
                  if (plVar31 == (longlong *)0x0) goto LAB_140106a47;
                } while (lVar28 != *plVar31);
                goto LAB_1401069fe;
              }
            }
            else if (uVar4 == 0x307) {
              lVar28 = *(longlong *)(puVar29 + 6);
              plVar30 = (longlong *)parameter_s_is_invalid(&DAT_1415254b0);
              plVar31 = plVar30;
              if (plVar30 != (longlong *)0x0) {
                do {
                  plVar31 = (longlong *)plVar31[1];
                  if (plVar31 == (longlong *)0x0) goto LAB_140106a47;
                } while (lVar28 != *plVar31);
                goto LAB_1401069fe;
              }
            }
          }
          else {
            if (4 < uVar4 - 0x1000) {
              if (uVar4 == 0x900) {
                lVar28 = *(longlong *)(puVar29 + 6);
                plVar30 = (longlong *)parameter_s_is_invalid(&DAT_1415254b0);
                plVar31 = plVar30;
                if (plVar30 != (longlong *)0x0) {
                  do {
                    plVar31 = (longlong *)plVar31[1];
                    if (plVar31 == (longlong *)0x0) goto LAB_140106a47;
                  } while (lVar28 != *plVar31);
                  goto LAB_1401069fe;
                }
              }
              goto LAB_140106a47;
            }
            lVar28 = *(longlong *)(puVar29 + 8);
            plVar30 = (longlong *)parameter_s_is_invalid(&DAT_1415254b0);
            plVar31 = plVar30;
            if (plVar30 != (longlong *)0x0) {
              do {
                plVar31 = (longlong *)plVar31[1];
                if (plVar31 == (longlong *)0x0) goto LAB_1401068d7;
              } while (lVar28 != *plVar31);
              if ((longlong *)*plVar30 == plVar31) {
                *plVar30 = plVar31[2];
                lVar28 = plVar31[1];
                if ((longlong *)plVar30[1] != plVar31) goto LAB_1401068a5;
LAB_140106ae2:
                plVar30[1] = lVar28;
                lVar5 = plVar31[2];
              }
              else {
                lVar28 = plVar31[1];
                if ((longlong *)plVar30[1] == plVar31) goto LAB_140106ae2;
LAB_1401068a5:
                lVar5 = plVar31[2];
              }
              if (lVar28 != 0) {
                *(longlong *)(lVar28 + 0x10) = lVar5;
              }
              if (lVar5 != 0) {
                *(longlong *)(lVar5 + 8) = plVar31[1];
              }
              plVar31[1] = 0;
              plVar31[2] = 0;
              plVar31[2] = *(longlong *)(puVar29 + 0x20);
              *(longlong **)(puVar29 + 0x20) = plVar31;
            }
LAB_1401068d7:
            lVar28 = *(longlong *)(puVar29 + 10);
            plVar30 = (longlong *)parameter_s_is_invalid(&DAT_1415254b0);
            plVar31 = plVar30;
            if (plVar30 != (longlong *)0x0) {
              do {
                plVar31 = (longlong *)plVar31[1];
                if (plVar31 == (longlong *)0x0) goto LAB_140106a47;
              } while (lVar28 != *plVar31);
LAB_1401069fe:
              if ((longlong *)*plVar30 == plVar31) {
                *plVar30 = plVar31[2];
                lVar28 = plVar31[1];
                if ((longlong *)plVar30[1] != plVar31) goto LAB_140106a15;
LAB_140106ab7:
                plVar30[1] = lVar28;
                lVar5 = plVar31[2];
              }
              else {
                lVar28 = plVar31[1];
                if ((longlong *)plVar30[1] == plVar31) goto LAB_140106ab7;
LAB_140106a15:
                lVar5 = plVar31[2];
              }
              if (lVar28 != 0) {
                *(longlong *)(lVar28 + 0x10) = lVar5;
              }
              if (lVar5 != 0) {
                *(longlong *)(lVar5 + 8) = plVar31[1];
              }
              plVar31[1] = 0;
              plVar31[2] = 0;
              plVar31[2] = *(longlong *)(puVar29 + 0x20);
              *(longlong **)(puVar29 + 0x20) = plVar31;
            }
          }
LAB_140106a47:
          puVar34 = puVar29;
          if (DAT_1415254d8 != (uint *)0x0) {
            *(uint **)(DAT_1415254d8 + 0x24) = puVar29;
            puVar34 = DAT_1415254d0;
          }
          DAT_1415254d0 = puVar34;
          puVar34 = puVar29;
          *(uint **)(puVar29 + 0x22) = DAT_1415254d8;
          DAT_1415254d8 = puVar34;
          puVar29[0x24] = 0;
          puVar29[0x25] = 0;
          iVar32 = FUN_140106160(&DAT_1415254c4,1);
          if (DAT_1415254c8 <= iVar32) {
            DAT_1415254c8 = iVar32 + 1;
          }
          _DAT_1415254e8 = _DAT_1415254e8 + 1;
          uVar33 = uVar33 + 1;
          uVar35 = uVar35 + 1;
          if (uVar35 == param_2) goto LAB_140106afa;
        }
        FUN_1400fbed0("Event queue is full (%d events)",iVar32);
LAB_14010676e:
        uVar35 = uVar35 + 1;
      } while (uVar35 != param_2);
      goto LAB_140106afa;
    }
  }
  else if (DAT_1415254d0 != (uint *)0x0) {
    uVar4 = (uint)(param_3 != 2 || param_1 == 0);
    if (param_1 == 0) {
      if (param_6 == '\0') {
        uVar33 = 0;
        puVar29 = DAT_1415254d0;
        do {
          uVar4 = *puVar29;
          puVar29 = *(uint **)(puVar29 + 0x24);
          uVar33 = uVar33 + (uVar4 != 0x7f00 && (uVar4 <= param_5 && param_4 <= uVar4));
        } while (puVar29 != (uint *)0x0);
      }
      else {
        iVar32 = 0;
        uVar33 = 0;
        puVar29 = DAT_1415254d0;
        do {
          uVar3 = *puVar29;
          puVar29 = *(uint **)(puVar29 + 0x24);
          if (uVar3 <= param_5 && param_4 <= uVar3) {
            if (uVar3 == 0x7f00) {
              iVar32 = iVar32 + uVar4;
              iVar27 = FUN_140106170(&DAT_141524c50);
              if (iVar32 < iVar27) goto LAB_140106b92;
            }
            uVar33 = uVar33 + 1;
          }
LAB_140106b92:
        } while (puVar29 != (uint *)0x0);
      }
    }
    else if (param_6 == '\0') {
      uVar33 = 0;
      puVar29 = DAT_1415254d0;
      if (param_3 == 2) {
        do {
          if ((int)param_2 <= (int)uVar33) break;
          puVar34 = *(uint **)(puVar29 + 0x24);
          uVar4 = *puVar29;
          if (uVar4 <= param_5 && param_4 <= uVar4) {
            lVar28 = (longlong)(int)uVar33 * 0x80;
            uVar21 = *(undefined8 *)(puVar29 + 0x1e);
            puVar1 = (undefined8 *)(param_1 + 0x70 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0x1c);
            puVar1[1] = uVar21;
            uVar21 = *(undefined8 *)(puVar29 + 0x1a);
            puVar1 = (undefined8 *)(param_1 + 0x60 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0x18);
            puVar1[1] = uVar21;
            uVar21 = *(undefined8 *)(puVar29 + 0x16);
            puVar1 = (undefined8 *)(param_1 + 0x50 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0x14);
            puVar1[1] = uVar21;
            uVar21 = *(undefined8 *)(puVar29 + 0x12);
            puVar1 = (undefined8 *)(param_1 + 0x40 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0x10);
            puVar1[1] = uVar21;
            uVar3 = *puVar29;
            uVar6 = puVar29[1];
            uVar7 = puVar29[2];
            uVar8 = puVar29[3];
            uVar9 = puVar29[4];
            uVar10 = puVar29[5];
            uVar11 = puVar29[6];
            uVar12 = puVar29[7];
            uVar13 = puVar29[8];
            uVar14 = puVar29[9];
            uVar15 = puVar29[10];
            uVar16 = puVar29[0xb];
            uVar17 = puVar29[0xd];
            uVar18 = puVar29[0xe];
            uVar19 = puVar29[0xf];
            puVar2 = (uint *)(param_1 + 0x30 + lVar28);
            *puVar2 = puVar29[0xc];
            puVar2[1] = uVar17;
            puVar2[2] = uVar18;
            puVar2[3] = uVar19;
            puVar2 = (uint *)(param_1 + 0x20 + lVar28);
            *puVar2 = uVar13;
            puVar2[1] = uVar14;
            puVar2[2] = uVar15;
            puVar2[3] = uVar16;
            puVar2 = (uint *)(param_1 + 0x10 + lVar28);
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar2[2] = uVar11;
            puVar2[3] = uVar12;
            puVar2 = (uint *)(param_1 + lVar28);
            *puVar2 = uVar3;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            FUN_140106f20(puVar29);
            uVar33 = uVar33 + (uVar4 != 0x7f00);
          }
          puVar29 = puVar34;
        } while (puVar34 != (uint *)0x0);
      }
      else {
        do {
          if ((int)param_2 <= (int)uVar33) break;
          puVar34 = *(uint **)(puVar29 + 0x24);
          uVar4 = *puVar29;
          if (uVar4 <= param_5 && param_4 <= uVar4) {
            lVar28 = (longlong)(int)uVar33 * 0x80;
            uVar21 = *(undefined8 *)(puVar29 + 0x1e);
            puVar1 = (undefined8 *)(param_1 + 0x70 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0x1c);
            puVar1[1] = uVar21;
            uVar21 = *(undefined8 *)(puVar29 + 0x1a);
            puVar1 = (undefined8 *)(param_1 + 0x60 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0x18);
            puVar1[1] = uVar21;
            uVar21 = *(undefined8 *)(puVar29 + 0x16);
            puVar1 = (undefined8 *)(param_1 + 0x50 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0x14);
            puVar1[1] = uVar21;
            uVar21 = *(undefined8 *)(puVar29 + 0x12);
            puVar1 = (undefined8 *)(param_1 + 0x40 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0x10);
            puVar1[1] = uVar21;
            uVar3 = *puVar29;
            uVar6 = puVar29[1];
            uVar7 = puVar29[2];
            uVar8 = puVar29[3];
            uVar21 = *(undefined8 *)(puVar29 + 4);
            uVar22 = *(undefined8 *)(puVar29 + 6);
            uVar23 = *(undefined8 *)(puVar29 + 8);
            uVar24 = *(undefined8 *)(puVar29 + 10);
            uVar25 = *(undefined8 *)(puVar29 + 0xe);
            puVar1 = (undefined8 *)(param_1 + 0x30 + lVar28);
            *puVar1 = *(undefined8 *)(puVar29 + 0xc);
            puVar1[1] = uVar25;
            puVar1 = (undefined8 *)(param_1 + 0x20 + lVar28);
            *puVar1 = uVar23;
            puVar1[1] = uVar24;
            puVar1 = (undefined8 *)(param_1 + 0x10 + lVar28);
            *puVar1 = uVar21;
            puVar1[1] = uVar22;
            puVar29 = (uint *)(param_1 + lVar28);
            *puVar29 = uVar3;
            puVar29[1] = uVar6;
            puVar29[2] = uVar7;
            puVar29[3] = uVar8;
            uVar33 = uVar33 + (uVar4 != 0x7f00);
          }
          puVar29 = puVar34;
        } while (puVar34 != (uint *)0x0);
      }
    }
    else {
      iVar32 = 0;
      uVar33 = 0;
      puVar29 = DAT_1415254d0;
      do {
        if ((int)param_2 <= (int)uVar33) break;
        puVar34 = *(uint **)(puVar29 + 0x24);
        uVar3 = *puVar29;
        if (uVar3 <= param_5 && param_4 <= uVar3) {
          lVar28 = (longlong)(int)uVar33 * 0x80;
          uVar21 = *(undefined8 *)(puVar29 + 0x1e);
          puVar1 = (undefined8 *)(param_1 + 0x70 + lVar28);
          *puVar1 = *(undefined8 *)(puVar29 + 0x1c);
          puVar1[1] = uVar21;
          uVar21 = *(undefined8 *)(puVar29 + 0x1a);
          puVar1 = (undefined8 *)(param_1 + 0x60 + lVar28);
          *puVar1 = *(undefined8 *)(puVar29 + 0x18);
          puVar1[1] = uVar21;
          uVar21 = *(undefined8 *)(puVar29 + 0x16);
          puVar1 = (undefined8 *)(param_1 + 0x50 + lVar28);
          *puVar1 = *(undefined8 *)(puVar29 + 0x14);
          puVar1[1] = uVar21;
          uVar21 = *(undefined8 *)(puVar29 + 0x12);
          puVar1 = (undefined8 *)(param_1 + 0x40 + lVar28);
          *puVar1 = *(undefined8 *)(puVar29 + 0x10);
          puVar1[1] = uVar21;
          uVar6 = *puVar29;
          uVar7 = puVar29[1];
          uVar8 = puVar29[2];
          uVar9 = puVar29[3];
          uVar10 = puVar29[4];
          uVar11 = puVar29[5];
          uVar12 = puVar29[6];
          uVar13 = puVar29[7];
          uVar14 = puVar29[8];
          uVar15 = puVar29[9];
          uVar16 = puVar29[10];
          uVar17 = puVar29[0xb];
          uVar18 = puVar29[0xd];
          uVar19 = puVar29[0xe];
          uVar20 = puVar29[0xf];
          puVar2 = (uint *)(param_1 + 0x30 + lVar28);
          *puVar2 = puVar29[0xc];
          puVar2[1] = uVar18;
          puVar2[2] = uVar19;
          puVar2[3] = uVar20;
          puVar29 = (uint *)(param_1 + 0x20 + lVar28);
          *puVar29 = uVar14;
          puVar29[1] = uVar15;
          puVar29[2] = uVar16;
          puVar29[3] = uVar17;
          puVar29 = (uint *)(param_1 + 0x10 + lVar28);
          *puVar29 = uVar10;
          puVar29[1] = uVar11;
          puVar29[2] = uVar12;
          puVar29[3] = uVar13;
          puVar29 = (uint *)(param_1 + lVar28);
          *puVar29 = uVar6;
          puVar29[1] = uVar7;
          puVar29[2] = uVar8;
          puVar29[3] = uVar9;
          if (param_3 == 2) {
            FUN_140106f20();
          }
          if (uVar3 == 0x7f00) {
            iVar32 = iVar32 + uVar4;
            iVar27 = FUN_140106170(&DAT_141524c50);
            if (iVar32 < iVar27) goto LAB_140106662;
          }
          uVar33 = uVar33 + 1;
        }
LAB_140106662:
        puVar29 = puVar34;
      } while (puVar34 != (uint *)0x0);
    }
    goto LAB_140106afa;
  }
  uVar33 = 0;
LAB_140106afa:
  FUN_1401552c0(DAT_1415254b8);
  if ((((param_3 == 0) && (0 < (int)uVar33)) && (lVar28 = FUN_140144860(), lVar28 != 0)) &&
     (*(longlong *)(lVar28 + 0x230) != 0)) {
    FUN_1401552a0(*(undefined8 *)(lVar28 + 0x318));
    if (*(longlong *)(lVar28 + 0x310) != 0) {
      (**(code **)(lVar28 + 0x230))(lVar28);
      *(undefined8 *)(lVar28 + 0x310) = 0;
    }
    FUN_1401552c0(*(undefined8 *)(lVar28 + 0x318));
  }
  return uVar33;
}

