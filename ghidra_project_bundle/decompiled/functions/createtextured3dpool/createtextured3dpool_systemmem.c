/**
 * Function: createtextured3dpool_systemmem
 * Address:  140425890
 * Signature: undefined createtextured3dpool_systemmem(void)
 * Body size: 682 bytes
 */


undefined8
createtextured3dpool_systemmem
          (longlong *param_1,undefined1 *param_2,int param_3,int param_4,int param_5,uint param_6,
          void *param_7,int param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  char *pcVar5;
  size_t _Size;
  uint uVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  int local_68 [2];
  void *local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  puVar10 = (undefined8 *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    local_90 = *(undefined4 *)(param_2 + 0x14);
    local_78 = 0;
    local_88 = 2;
    local_98 = 0;
    local_80 = puVar10;
    iVar2 = (**(code **)(*param_1 + 0xb8))
                      (param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),1);
    if ((iVar2 < 0) &&
       (cVar1 = outofvideomemory("CreateTexture(D3DPOOL_SYSTEMMEM)",iVar2), cVar1 == '\0')) {
      uVar3 = 0;
      goto LAB_140425b04;
    }
  }
  local_50 = param_3 + param_5;
  local_4c = param_4 + param_6;
  local_98 = 0;
  local_58 = param_3;
  local_54 = param_4;
  iVar2 = (**(code **)(*(longlong *)*puVar10 + 0x98))((longlong *)*puVar10,0,local_68,&local_58);
  if (iVar2 < 0) {
    pcVar5 = "LockRect()";
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x10);
    if ((uVar6 & 0xf0000000) == 0x10000000 || uVar6 == 0) {
      uVar4 = uVar6 & 0xff;
    }
    else {
      uVar4 = 2;
      if (((uVar6 != 0x32595559) && (uVar6 != 0x55595659)) && (uVar6 != 0x59565955)) {
        uVar4 = (uVar6 == 0x30313050) + 1;
      }
    }
    param_5 = uVar4 * param_5;
    if (param_5 == local_68[0] && param_5 == param_8) {
      memcpy(local_60,param_7,(longlong)(int)param_6 * (longlong)param_8);
    }
    else if (0 < (int)param_6) {
      if (param_8 <= param_5) {
        param_5 = param_8;
      }
      if (local_68[0] <= param_5) {
        param_5 = local_68[0];
      }
      _Size = (size_t)param_5;
      lVar7 = (longlong)param_8;
      uVar6 = param_6 & 3;
      pvVar8 = local_60;
      if (3 < param_6) {
        param_6 = param_6 & 0x7ffffffc;
        local_70 = puVar10;
        do {
          memcpy(pvVar8,param_7,_Size);
          lVar9 = (longlong)local_68[0];
          memcpy((void *)(lVar9 + (longlong)pvVar8),(void *)((longlong)param_7 + lVar7),_Size);
          param_7 = (void *)((longlong)param_7 + lVar7 + lVar7);
          pvVar8 = (void *)((longlong)local_68[0] + lVar9 + (longlong)pvVar8);
          memcpy(pvVar8,param_7,_Size);
          param_7 = (void *)((longlong)param_7 + lVar7);
          pvVar8 = (void *)((longlong)local_68[0] + (longlong)pvVar8);
          memcpy(pvVar8,param_7,_Size);
          param_7 = (void *)((longlong)param_7 + lVar7);
          pvVar8 = (void *)((longlong)local_68[0] + (longlong)pvVar8);
          param_6 = param_6 - 4;
          puVar10 = local_70;
        } while (param_6 != 0);
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        memcpy(pvVar8,param_7,_Size);
        param_7 = (void *)((longlong)param_7 + lVar7);
        pvVar8 = (void *)((longlong)pvVar8 + (longlong)local_68[0]);
      }
    }
    iVar2 = (**(code **)(*(longlong *)*puVar10 + 0xa0))((longlong *)*puVar10,0);
    if (-1 < iVar2) {
      *param_2 = 1;
      uVar3 = 1;
      goto LAB_140425b04;
    }
    pcVar5 = "UnlockRect()";
  }
  uVar3 = outofvideomemory(pcVar5,iVar2);
LAB_140425b04:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_b8);
  }
  return uVar3;
}

