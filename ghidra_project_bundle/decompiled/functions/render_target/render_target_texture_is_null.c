/**
 * Function: render_target_texture_is_null
 * Address:  14043d750
 * Signature: undefined render_target_texture_is_null(void)
 * Body size: 1297 bytes
 */


ulonglong render_target_texture_is_null
                    (longlong param_1,int *param_2,void *param_3,ulonglong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  void *_Dst;
  int *piVar8;
  int *piVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_98 [32];
  int local_78;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  puVar3 = *(undefined8 **)(param_1 + 0x2c0);
  if (param_4 != 0) {
    if (*(uint *)(puVar3 + 0xe) < param_4) {
      if (puVar3[0xd] != 0) {
        invalid_gpu_device(*puVar3);
      }
      if (puVar3[0xc] != 0) {
        invalid_gpu_device(*puVar3);
      }
      *(undefined4 *)(puVar3 + 0xe) = 0;
      uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
      local_58 = CONCAT44((int)param_4,1);
      lVar7 = invalid_gpu_device(*puVar3,&local_58);
      puVar3[0xd] = lVar7;
      if (lVar7 != 0) {
        local_60 = local_60 & 0xffffffff00000000;
        local_68 = param_4 << 0x20;
        lVar7 = invalid_gpu_device(*puVar3,&local_68);
        puVar3[0xc] = lVar7;
        if (lVar7 != 0) goto LAB_14043d826;
      }
    }
    else {
      lVar7 = puVar3[0xc];
LAB_14043d826:
      _Dst = (void *)invalid_gpu_device(*puVar3,lVar7,1);
      memcpy(_Dst,param_3,param_4);
      invalid_gpu_device(*puVar3,puVar3[0xc]);
      lVar7 = parameter_s_is_invalid(puVar3[0x11]);
      if (lVar7 != 0) {
        uStack_50 = 0;
        local_58 = puVar3[0xc];
        local_68 = puVar3[0xd];
        local_60 = param_4 << 0x20;
        parameter_s_is_invalid(lVar7,&local_58,&local_68,1);
        parameter_s_is_invalid(lVar7);
        goto LAB_14043d8a9;
      }
    }
    uVar10 = 0;
    goto LAB_14043dc2d;
  }
LAB_14043d8a9:
  plVar1 = puVar3 + 0x12;
  *(undefined4 *)(puVar3 + 0x16) = 0;
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    lVar7 = puVar3[8];
    *plVar1 = lVar7;
  }
  else {
    lVar7 = **(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0xf0);
    *plVar1 = lVar7;
  }
  if (lVar7 == 0) {
    uVar6 = FUN_1400fbed0("Render target texture is NULL");
    uVar10 = (ulonglong)uVar6;
    goto LAB_14043dc2d;
  }
  uVar11 = (undefined7)((ulonglong)param_1 >> 8);
  if (param_2 == (int *)0x0) {
LAB_14043dbf1:
    lVar7 = puVar3[0xf];
  }
  else {
    do {
      iVar2 = *param_2;
      piVar9 = param_2;
      switch(iVar2) {
      case 1:
        *(float *)(puVar3 + 0x1a) = (float)param_2[4];
        *(float *)((longlong)puVar3 + 0xd4) = (float)param_2[5];
        *(float *)(puVar3 + 0x1b) = (float)param_2[6];
        *(float *)((longlong)puVar3 + 0xdc) = (float)param_2[7];
        break;
      case 2:
        *(int *)(puVar3 + 0x1d) = (int)*(float *)(puVar3 + 0x1a) + param_2[3];
        *(int *)((longlong)puVar3 + 0xec) = (int)*(float *)((longlong)puVar3 + 0xd4) + param_2[4];
        *(int *)(puVar3 + 0x1e) = param_2[5];
        *(int *)((longlong)puVar3 + 0xf4) = param_2[6];
        *(char *)(puVar3 + 0x21) = (char)param_2[2];
        break;
      case 3:
        local_58 = *(undefined8 *)(param_2 + 5);
        uStack_50 = *(longlong *)(param_2 + 7);
        cVar5 = FUN_140118890(param_1);
        if (cVar5 != '\0') {
          FUN_1401188c0(&local_58);
        }
        fVar13 = (float)param_2[4];
        fVar14 = fVar13 * (float)local_58;
        fVar15 = fVar13 * (float)((ulonglong)local_58 >> 0x20);
        local_58 = CONCAT44(fVar15,fVar14);
        fVar13 = fVar13 * (float)uStack_50;
        uStack_50 = CONCAT44(uStack_50._4_4_,fVar13);
        *(float *)(puVar3 + 0x1f) = fVar14;
        *(float *)((longlong)puVar3 + 0xfc) = fVar15;
        *(float *)(puVar3 + 0x20) = fVar13;
        *(uint *)((longlong)puVar3 + 0x104) = uStack_50._4_4_;
        break;
      case 4:
        local_58 = *(undefined8 *)(param_2 + 5);
        uStack_50 = *(longlong *)(param_2 + 7);
        cVar5 = FUN_140118890(param_1);
        if (cVar5 != '\0') {
          FUN_1401188c0(&local_58);
        }
        fVar13 = (float)param_2[4];
        fVar14 = fVar13 * (float)local_58;
        fVar15 = fVar13 * (float)((ulonglong)local_58 >> 0x20);
        local_58 = CONCAT44(fVar15,fVar14);
        fVar13 = fVar13 * (float)uStack_50;
        uStack_50 = CONCAT44(uStack_50._4_4_,fVar13);
        *(float *)(puVar3 + 0x14) = fVar14;
        *(float *)((longlong)puVar3 + 0xa4) = fVar15;
        *(float *)(puVar3 + 0x15) = fVar13;
        *(uint *)((longlong)puVar3 + 0xac) = uStack_50._4_4_;
        *(undefined4 *)(puVar3 + 0x16) = 1;
        break;
      case 5:
      case 10:
        uVar6 = param_2[4];
        piVar4 = *(int **)(param_2 + 0x10);
        if ((piVar4 != (int *)0x0) && (*piVar4 == iVar2)) {
          while ((piVar8 = piVar4, *(longlong *)(piVar8 + 0xc) == *(longlong *)(param_2 + 0xc) &&
                 (piVar8[0xb] == param_2[0xb]))) {
            uVar6 = uVar6 + piVar8[4];
            piVar4 = *(int **)(piVar8 + 0x10);
            piVar9 = piVar8;
            if ((piVar4 == (int *)0x0) || (*piVar4 != iVar2)) break;
          }
        }
        iVar12 = param_2[2];
        local_78 = (uint)(iVar2 == 5) << 2;
LAB_14043d9e5:
        FUN_14043e4c0(puVar3,param_2,uVar6,iVar12);
        param_2 = piVar9;
        break;
      case 6:
        iVar12 = param_2[2];
        uVar6 = param_2[4];
        if (uVar6 < 3) {
          piVar4 = *(int **)(param_2 + 0x10);
          if ((piVar4 == (int *)0x0) || (*piVar4 != 6)) {
            local_78 = 2;
          }
          else {
            do {
              piVar8 = piVar4;
              if ((*(longlong *)(piVar8 + 4) != 2) || (piVar8[0xb] != param_2[0xb])) {
                local_78 = 2;
                goto LAB_14043d9e5;
              }
              piVar4 = *(int **)(piVar8 + 0x10);
              uVar6 = uVar6 + 2;
              piVar9 = piVar8;
            } while ((piVar4 != (int *)0x0) && (*piVar4 == 6));
            local_78 = 2;
          }
          goto LAB_14043d9e5;
        }
        local_78 = 3;
        FUN_14043e4c0(puVar3,param_2,uVar6,iVar12);
      }
      param_2 = *(int **)(param_2 + 0x10);
    } while (param_2 != (int *)0x0);
    if (*(int *)(puVar3 + 0x16) != 1) goto LAB_14043dbf1;
    if (puVar3[0xf] != 0) {
      parameter_s_is_invalid();
    }
    lVar7 = color_target_infos(puVar3[0x11],plVar1,1,0);
    puVar3[0xf] = lVar7;
    *(undefined4 *)(puVar3 + 0x16) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x109) = 0;
  }
  uVar10 = CONCAT71(uVar11,1);
  if (lVar7 != 0) {
    uVar10 = CONCAT71(uVar11,1);
    parameter_s_is_invalid();
    puVar3[0xf] = 0;
  }
LAB_14043dc2d:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_98);
  }
  return uVar10 & 0xffffffff;
}

