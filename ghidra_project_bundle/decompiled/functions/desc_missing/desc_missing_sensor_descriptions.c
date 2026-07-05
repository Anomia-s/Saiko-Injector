/**
 * Function: desc_missing_sensor_descriptions
 * Address:  140449bf0
 * Signature: undefined desc_missing_sensor_descriptions(void)
 * Body size: 1290 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 desc_missing_sensor_descriptions(uint *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_88 [32];
  undefined2 local_68;
  undefined8 local_60;
  char *local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  httplib::ClientImpl::vfunction4();
  if (param_1 == (uint *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid",&DAT_14135d880);
  }
  else if (*param_1 < 0x88) {
    pcVar9 = "Invalid desc, should be initialized with SDL_INIT_INTERFACE()";
LAB_140449c25:
    FUN_1400fbed0(pcVar9);
  }
  else {
    puVar5 = (undefined4 *)FUN_140160c70(1,0x110);
    if (puVar5 == (undefined4 *)0x0) {
      httplib::ClientImpl::vfunction4();
      goto LAB_14044a092;
    }
    memcpy(puVar5 + 10,param_1,0x88);
    *(undefined1 (*) [16])(puVar5 + 0x16) = (undefined1  [16])0x0;
    local_58 = *(char **)(puVar5 + 0x14);
    if (local_58 == (char *)0x0) {
      if ((ushort)(puVar5[0xb] - 1) < 9) {
        local_58 = (&PTR_s_Virtual_Controller_140e16240)[puVar5[0xb] - 1 & 0xffff];
      }
      else {
        local_58 = "Virtual Joystick";
      }
    }
    uVar6 = FUN_1400fcda0(local_58);
    *(undefined8 *)(puVar5 + 2) = uVar6;
    uVar14 = 0xffffffff;
    if (*(short *)(puVar5 + 0xb) == 1) {
      if ((puVar5[0x11] == 0) && (uVar1 = *(ushort *)((longlong)puVar5 + 0x36), uVar1 != 0)) {
        uVar8 = 0x1f;
        if (uVar1 - 1 < 0x1f) {
          uVar8 = uVar1 - 1;
        }
        uVar15 = 0;
        uVar11 = 0;
        if (uVar1 < 8) {
LAB_140449d90:
          do {
            uVar15 = uVar15 | 1 << (uVar11 & 0x1f);
            if ((uint)uVar1 <= uVar11 + 1) break;
            bVar17 = uVar11 < 0x1f;
            uVar11 = uVar11 + 1;
          } while (bVar17);
        }
        else {
          uVar11 = uVar8 + 1 & 0x38;
          auVar18 = _DAT_140e16290;
          auVar19 = _DAT_140dede60;
          if (((uVar11 != 8) && (auVar18 = _DAT_140e162c0, auVar19 = _DAT_140e162d0, uVar11 != 0x10)
              ) && (auVar18 = _DAT_140e162e0, auVar19 = _DAT_140e162f0, uVar11 == 0x18)) {
            auVar18 = _DAT_140e162a0;
            auVar19 = _DAT_140e162b0;
          }
          auVar19 = auVar19 | auVar18;
          auVar18._0_8_ = auVar19._8_8_;
          auVar18._8_4_ = auVar19._8_4_;
          auVar18._12_4_ = auVar19._12_4_;
          uVar15 = SUB164(auVar18 | auVar19,4) | SUB164(auVar18 | auVar19,0);
          if (uVar8 + 1 != uVar11) goto LAB_140449d90;
        }
        puVar5[0x11] = uVar15;
      }
      uVar8 = puVar5[0x12];
      uVar1 = *(ushort *)(puVar5 + 0xd);
      if (uVar1 < 2 || uVar8 != 0) {
        if (uVar1 == 0) goto LAB_140449e74;
      }
      else {
        puVar5[0x12] = 3;
        uVar8 = 3;
        if (3 < uVar1) {
          uVar8 = 0xf;
          if (5 < uVar1) {
            uVar8 = 0x3f;
          }
          puVar5[0x12] = uVar8;
        }
      }
      uVar15 = uVar8 & 1;
      uVar11 = (uint)uVar1;
      if (uVar11 <= uVar15) goto LAB_140449e74;
      uVar13 = uVar15 + 1;
      if ((uVar8 & 2) == 0) {
        uVar13 = uVar15;
      }
      if (uVar11 <= uVar13) goto LAB_140449e74;
      uVar15 = uVar13 + 1;
      if ((uVar8 & 4) == 0) {
        uVar15 = uVar13;
      }
      if (uVar11 <= uVar15) goto LAB_140449e74;
      uVar11 = uVar15 + 1;
      if ((uVar8 & 8) == 0) {
        uVar11 = uVar15;
      }
      if (uVar1 <= uVar11) goto LAB_140449e74;
      uVar15 = -(uint)((uVar8 & 0x10) == 0) | uVar11;
      uVar13 = uVar11 + 1;
      if ((uVar8 & 0x10) == 0) {
        uVar13 = uVar11;
      }
      if (uVar13 < uVar1) {
        uVar14 = -(uint)((uVar8 & 0x20) == 0) | uVar13;
      }
    }
    else {
LAB_140449e74:
      uVar15 = 0xffffffff;
    }
    local_48 = (undefined1)*(short *)(puVar5 + 0xb);
    local_50 = 0x76;
    local_60 = 0;
    local_68 = 0;
    FUN_14012cfb0(&local_40,0xff,*(undefined2 *)(puVar5 + 0xc),
                  *(undefined2 *)((longlong)puVar5 + 0x32));
    *(undefined8 *)(puVar5 + 5) = local_40;
    *(undefined8 *)(puVar5 + 7) = uStack_38;
    if (*(short *)(puVar5 + 0xd) == 0) {
LAB_140449efd:
      if (*(short *)((longlong)puVar5 + 0x36) != 0) {
        lVar7 = FUN_140160c70(*(short *)((longlong)puVar5 + 0x36),1);
        *(longlong *)(puVar5 + 0x30) = lVar7;
        if (lVar7 == 0) goto LAB_14044a08a;
      }
      if (*(short *)((longlong)puVar5 + 0x3a) != 0) {
        lVar7 = FUN_140160c70(*(short *)((longlong)puVar5 + 0x3a),1);
        *(longlong *)(puVar5 + 0x32) = lVar7;
        if (lVar7 == 0) goto LAB_14044a08a;
      }
      if (*(short *)(puVar5 + 0xe) != 0) {
        lVar7 = FUN_140160c70(*(short *)(puVar5 + 0xe),8);
        *(longlong *)(puVar5 + 0x34) = lVar7;
        if (lVar7 == 0) goto LAB_14044a08a;
      }
      if (*(short *)(puVar5 + 0xf) != 0) {
        if (*(longlong *)(param_1 + 0xc) == 0) {
          FUN_14044a100(puVar5);
          pcVar9 = "desc missing touchpad descriptions";
          goto LAB_140449c25;
        }
        lVar7 = FUN_140160c70(*(short *)(puVar5 + 0xf),0x10);
        *(longlong *)(puVar5 + 0x36) = lVar7;
        if (lVar7 == 0) goto LAB_14044a08a;
        if (*(short *)(puVar5 + 0xf) != 0) {
          lVar12 = 0;
          uVar16 = 0;
          do {
            lVar2 = *(longlong *)(param_1 + 0xc);
            *(uint *)(lVar7 + lVar12 * 2) = (uint)*(ushort *)(lVar2 + lVar12);
            uVar6 = FUN_140160c70(*(undefined2 *)(lVar2 + lVar12),0x10);
            *(undefined8 *)(*(longlong *)(puVar5 + 0x36) + 8 + lVar12 * 2) = uVar6;
            lVar7 = *(longlong *)(puVar5 + 0x36);
            if (*(longlong *)(lVar7 + 8 + lVar12 * 2) == 0) goto LAB_14044a08a;
            uVar16 = uVar16 + 1;
            lVar12 = lVar12 + 8;
          } while (uVar16 < *(ushort *)(puVar5 + 0xf));
        }
      }
      if (*(short *)((longlong)puVar5 + 0x3e) != 0) {
        if (*(longlong *)(param_1 + 0xe) == 0) {
          FUN_14044a100(puVar5);
          pcVar9 = "desc missing sensor descriptions";
          goto LAB_140449c25;
        }
        lVar7 = FUN_140160c70(*(short *)((longlong)puVar5 + 0x3e),0x18);
        *(longlong *)(puVar5 + 0x38) = lVar7;
        if (lVar7 == 0) goto LAB_14044a08a;
        if (*(short *)((longlong)puVar5 + 0x3e) != 0) {
          lVar7 = 0;
          uVar16 = 0;
          do {
            lVar12 = *(longlong *)(param_1 + 0xe);
            *(undefined4 *)(*(longlong *)(puVar5 + 0x38) + lVar7) =
                 *(undefined4 *)(lVar12 + uVar16 * 8);
            *(undefined4 *)(*(longlong *)(puVar5 + 0x38) + 8 + lVar7) =
                 *(undefined4 *)(lVar12 + 4 + uVar16 * 8);
            uVar16 = uVar16 + 1;
            lVar7 = lVar7 + 0x18;
          } while (uVar16 < *(ushort *)((longlong)puVar5 + 0x3e));
        }
      }
      uVar4 = FUN_1403d8eb0();
      *puVar5 = uVar4;
      puVar3 = DAT_1416f19a8;
      puVar10 = puVar5;
      if (DAT_1416f19a8 != (undefined4 *)0x0) {
        do {
          puVar10 = puVar3;
          puVar3 = *(undefined4 **)(puVar10 + 0x42);
        } while (puVar3 != (undefined4 *)0x0);
        *(undefined4 **)(puVar10 + 0x42) = puVar5;
        uVar4 = *puVar5;
        puVar10 = DAT_1416f19a8;
      }
      DAT_1416f19a8 = puVar10;
      FUN_14012b7b0(uVar4);
      uVar4 = *puVar5;
      goto LAB_14044a094;
    }
    lVar7 = FUN_140160c70(*(short *)(puVar5 + 0xd),2);
    *(longlong *)(puVar5 + 0x2e) = lVar7;
    if (lVar7 != 0) {
      if (-1 < (int)uVar15) {
        *(undefined2 *)(lVar7 + (ulonglong)uVar15 * 2) = 0x8000;
      }
      if (-1 < (int)uVar14) {
        *(undefined2 *)(*(longlong *)(puVar5 + 0x2e) + (ulonglong)uVar14 * 2) = 0x8000;
      }
      goto LAB_140449efd;
    }
LAB_14044a08a:
    FUN_14044a100(puVar5);
  }
LAB_14044a092:
  uVar4 = 0;
LAB_14044a094:
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_88);
  }
  return uVar4;
}

