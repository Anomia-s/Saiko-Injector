/**
 * Function: wasapi_cant_get_render_client_service
 * Address:  14044b8e0
 * Signature: undefined wasapi_cant_get_render_client_service(void)
 * Body size: 1163 bytes
 */


undefined8 wasapi_cant_get_render_client_service(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  HANDLE pvVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  undefined1 auStack_b8 [32];
  uint *local_98;
  uint *local_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  longlong *local_70;
  longlong local_68;
  int local_5c;
  uint local_58;
  uint local_54;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x10);
  pvVar6 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)(*(longlong *)(param_1 + 200) + 0x28) = pvVar6;
  if (*(longlong *)(*(longlong *)(param_1 + 200) + 0x28) == 0) {
    if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b8)) {
      uVar9 = FUN_1403d7710("WASAPI can\'t create an event handle");
      return uVar9;
    }
    goto LAB_14044bd5e;
  }
  local_50 = (uint *)0x0;
  iVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_50);
  if (iVar4 < 0) {
    pcVar8 = "WASAPI can\'t determine mix format";
LAB_14044bcba:
    uVar9 = FUN_1403d7600(pcVar8,iVar4);
  }
  else {
    *(uint **)(*(longlong *)(param_1 + 200) + 8) = local_50;
    local_58 = (uint)*(byte *)((longlong)local_50 + 2);
    iVar4 = FUN_1403d7fe0();
    piVar7 = (int *)FUN_1401332b0(*(undefined4 *)(param_1 + 0x60));
    do {
      iVar1 = *piVar7;
      if (iVar1 == 0) {
        uVar9 = FUN_1400fbed0("%s: Unsupported audio format","wasapi");
        goto LAB_14044bcc1;
      }
      piVar7 = piVar7 + 1;
    } while (iVar1 != iVar4);
    local_68 = 0;
    local_5c = iVar4;
    iVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,&local_68,0);
    if (iVar4 < 0) {
      pcVar8 = "WASAPI can\'t determine minimum device period";
      goto LAB_14044bcba;
    }
    uVar11 = *(uint *)(param_1 + 0x68);
    uVar9 = 0x40000;
    if (uVar11 != local_50[1]) {
      local_50[1] = uVar11;
      uVar11 = local_50[1];
      local_50[2] = (uint)(*(ushort *)((longlong)local_50 + 0xe) >> 3) *
                    *(ushort *)((longlong)local_50 + 2) * uVar11;
      uVar9 = 0x88040000;
    }
    local_70 = (longlong *)0x0;
    local_54 = uVar11;
    iVar4 = (**(code **)*plVar2)(plVar2,&DAT_140e184d0,&local_70);
    if (iVar4 < 0) {
      uVar5 = 0;
LAB_14044bb64:
      local_90 = local_50;
      local_88 = 0;
      local_98 = (uint *)0x0;
      iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,0,uVar9,0);
    }
    else {
      local_74 = 0;
      local_78 = 0;
      local_7c = 0;
      local_80 = 0;
      local_90 = &local_80;
      local_98 = &local_7c;
      iVar4 = (**(code **)(*local_70 + 0x90))(local_70,local_50,&local_74,&local_78);
      uVar5 = local_78;
      if (iVar4 < 0) {
        bVar12 = false;
        uVar5 = 0;
      }
      else {
        dVar14 = (double)round((double)*(int *)(param_1 + 0x84) / (double)local_78);
        uVar5 = (int)(longlong)dVar14 * uVar5;
        uVar10 = local_80;
        if (uVar5 < local_80) {
          uVar10 = uVar5;
        }
        if (uVar5 < local_7c) {
          uVar10 = local_7c;
        }
        local_98 = (uint *)0x0;
        iVar4 = (**(code **)(*local_70 + 0xa0))(local_70,uVar9,uVar10,local_50);
        bVar12 = -1 < iVar4;
        uVar5 = 0;
        if (bVar12) {
          uVar5 = uVar10;
        }
      }
      (**(code **)(*local_70 + 0x10))();
      if (!bVar12) goto LAB_14044bb64;
    }
    if (iVar4 < 0) {
      pcVar8 = "WASAPI can\'t initialize audio client";
      goto LAB_14044bcba;
    }
    iVar4 = (**(code **)(*plVar2 + 0x68))
                      (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x28));
    if (iVar4 < 0) {
      pcVar8 = "WASAPI can\'t set event handle";
      goto LAB_14044bcba;
    }
    local_74 = 0;
    iVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_74);
    if (iVar4 < 0) {
      pcVar8 = "WASAPI can\'t determine buffer size";
      goto LAB_14044bcba;
    }
    if ((int)uVar5 < 1) {
      fVar13 = ceilf(((float)(int)uVar11 * ((float)local_68 / 10000.0)) / 1000.0);
      uVar5 = (uint)fVar13;
    }
    uVar11 = local_74;
    if ((int)uVar5 < (int)local_74) {
      uVar11 = uVar5;
    }
    cVar3 = FUN_1401338f0(param_1,&local_5c,uVar11);
    if (cVar3 != '\0') {
      *(uint *)(*(longlong *)(param_1 + 200) + 0x3c) =
           (*(uint *)(param_1 + 0x60) >> 3 & 0x1f) * *(int *)(param_1 + 100);
      if (*(char *)(param_1 + 0x94) == '\x01') {
        local_70 = (longlong *)0x0;
        iVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,&DAT_140e184e0,&local_70);
        if (iVar4 < 0) {
          pcVar8 = "WASAPI can\'t get capture client service";
        }
        else {
          *(longlong **)(*(longlong *)(param_1 + 200) + 0x20) = local_70;
          iVar4 = (**(code **)(*plVar2 + 0x50))(plVar2);
          if (-1 < iVar4) {
            FUN_14044bf10(param_1);
LAB_14044bd2d:
            uVar9 = 1;
            goto LAB_14044bcc1;
          }
          pcVar8 = "WASAPI can\'t start capture";
        }
      }
      else {
        local_70 = (longlong *)0x0;
        iVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,&DAT_140e184f0,&local_70);
        if (iVar4 < 0) {
          pcVar8 = "WASAPI can\'t get render client service";
        }
        else {
          *(longlong **)(*(longlong *)(param_1 + 200) + 0x18) = local_70;
          iVar4 = (**(code **)(*plVar2 + 0x50))(plVar2);
          if (-1 < iVar4) goto LAB_14044bd2d;
          pcVar8 = "WASAPI can\'t start playback";
        }
      }
      goto LAB_14044bcba;
    }
    uVar9 = 0;
  }
LAB_14044bcc1:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_b8)) {
    return uVar9;
  }
LAB_14044bd5e:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_b8);
}

