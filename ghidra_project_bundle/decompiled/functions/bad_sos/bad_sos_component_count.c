/**
 * Function: bad_sos_component_count
 * Address:  140486d60
 * Signature: undefined bad_sos_component_count(void)
 * Body size: 10037 bytes
 */


/* WARNING: Removing unreachable block (ram,0x000140486dee) */

void * bad_sos_component_count
                 (longlong param_1,uint *param_2,uint *param_3,int *param_4,uint param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  void *pvVar6;
  bool bVar7;
  undefined4 uVar8;
  uint3 uVar9;
  byte bVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  longlong *plVar22;
  byte bVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong lVar31;
  void *pvVar32;
  code *pcVar33;
  undefined8 uVar34;
  uint uVar35;
  uint uVar36;
  char *pcVar37;
  ulonglong uVar38;
  byte *pbVar39;
  char *pcVar40;
  longlong *plVar41;
  longlong *plVar42;
  ulonglong uVar43;
  longlong lVar44;
  uint *puVar45;
  longlong *plVar46;
  undefined1 *puVar47;
  byte *pbVar48;
  ulonglong uVar49;
  int *piVar50;
  int iVar51;
  uint *puVar52;
  int iVar53;
  uint *puVar54;
  longlong lVar55;
  ulonglong uVar56;
  int iVar57;
  int iVar58;
  undefined2 uVar59;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  int local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  uint *local_1c0;
  longlong *local_1b8;
  uint *local_1b0;
  longlong *local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  longlong local_168;
  uint *local_160;
  uint *local_158;
  int *local_150;
  longlong local_148 [3];
  int local_130 [42];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_208;
  plVar29 = calloc(1,0x4888);
  if (plVar29 == (longlong *)0x0) {
    *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x220) = "outofmem";
    pvVar32 = (void *)0x0;
    goto LAB_14048946b;
  }
  *plVar29 = param_1;
  plVar29[0x90e] = (longlong)FUN_140494da0;
  plVar29[0x90f] = (longlong)FUN_140495210;
  plVar29[0x910] = (longlong)FUN_140495310;
  lVar31 = cpuid_Version_info(1);
  uVar8 = *(undefined4 *)(lVar31 + 4);
  if ((*(uint *)(lVar31 + 8) & 0x4000000) != 0) {
    plVar29[0x90e] = (longlong)FUN_140495590;
    plVar29[0x90f] = (longlong)FUN_140495da0;
    plVar29[0x910] = (longlong)FUN_140496000;
  }
  *(undefined4 *)(*plVar29 + 8) = 0;
  if (param_5 < 5) {
    *(undefined4 *)(plVar29 + 0x90d) = 0;
    *(undefined1 (*) [16])(plVar29 + 0x8db) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plVar29 + 0x8e7) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plVar29 + 0x8f3) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(plVar29 + 0x8ff) = (undefined1  [16])0x0;
    local_1d0 = plVar29;
    local_160 = param_2;
    local_158 = param_3;
    local_150 = param_4;
    iVar25 = FUN_140494c50(plVar29,0,uVar8);
    plVar29 = local_1d0;
    if (iVar25 == 0) {
LAB_1404893ca:
      plVar29 = local_1d0;
      iVar25 = *(int *)(*local_1d0 + 8);
      if ((longlong)iVar25 < 1) goto LAB_14048945f;
      pvVar32 = (void *)0x0;
      lVar31 = 0;
      do {
        pvVar6 = *(void **)((longlong)plVar29 + lVar31 + 0x46d8);
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
          puVar2 = (undefined8 *)((longlong)plVar29 + lVar31 + 0x46d0);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        pvVar6 = *(void **)((longlong)plVar29 + lVar31 + 0x46e0);
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
          *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46e0) = 0;
          *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46f0) = 0;
        }
        pvVar6 = *(void **)((longlong)plVar29 + lVar31 + 0x46e8);
        if (pvVar6 != (void *)0x0) {
          free(pvVar6);
          *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46e8) = 0;
        }
        lVar31 = lVar31 + 0x60;
      } while ((longlong)iVar25 * 0x60 != lVar31);
    }
    else {
      puVar54 = (uint *)(local_1d0 + 0x8d4);
      bVar23 = FUN_1404963a0(local_1d0);
      local_198 = plVar29 + 1;
      local_1c8 = plVar29 + 0x6d1;
      local_188 = plVar29 + 0x349;
      local_180 = plVar29 + 0x417;
      plVar42 = plVar29;
LAB_140486f41:
      if (bVar23 == 0xda) {
        iVar25 = FUN_14048fe40(*plVar42);
        lVar31 = *plVar42;
        pbVar48 = *(byte **)(lVar31 + 0xc0);
        if (pbVar48 < *(byte **)(lVar31 + 200)) {
          pbVar39 = pbVar48 + 1;
        }
        else {
          if (*(int *)(lVar31 + 0x30) == 0) {
            *(undefined4 *)((longlong)plVar42 + 0x4854) = 0;
            pcVar37 = "bad SOS component count";
            goto LAB_1404893b0;
          }
          pbVar48 = (byte *)(lVar31 + 0x38);
          iVar28 = (**(code **)(lVar31 + 0x10))
                             (*(undefined8 *)(lVar31 + 0x28),pbVar48,*(undefined4 *)(lVar31 + 0x34))
          ;
          *(int *)(lVar31 + 0xb8) =
               *(int *)(lVar31 + 0xb8) + (*(int *)(lVar31 + 0xc0) - *(int *)(lVar31 + 0xd0));
          if (iVar28 == 0) {
            *(undefined4 *)(lVar31 + 0x30) = 0;
            pbVar39 = (byte *)(lVar31 + 0x39);
            *(undefined1 *)(lVar31 + 0x38) = 0;
          }
          else {
            pbVar39 = pbVar48 + iVar28;
          }
          *(byte **)(lVar31 + 200) = pbVar39;
          pbVar39 = (byte *)(lVar31 + 0x39);
        }
        *(byte **)(lVar31 + 0xc0) = pbVar39;
        bVar23 = *pbVar48;
        *(uint *)((longlong)plVar42 + 0x4854) = (uint)bVar23;
        if ((0xfb < (byte)(bVar23 - 5)) &&
           (lVar31 = *plVar42, (int)(uint)bVar23 <= *(int *)(lVar31 + 8))) {
          if (iVar25 != (uint)bVar23 * 2 + 6) {
            pcVar37 = "bad SOS len";
            goto LAB_1404893b0;
          }
          lVar44 = 0;
          do {
            pbVar48 = *(byte **)(lVar31 + 0xc0);
            if (pbVar48 < *(byte **)(lVar31 + 200)) {
              *(byte **)(lVar31 + 0xc0) = pbVar48 + 1;
              uVar36 = (uint)*pbVar48;
              lVar31 = *plVar42;
              pbVar48 = *(byte **)(lVar31 + 0xc0);
              if (*(byte **)(lVar31 + 200) <= pbVar48) goto LAB_140487189;
LAB_14048708b:
              *(byte **)(lVar31 + 0xc0) = pbVar48 + 1;
              bVar23 = *pbVar48;
              lVar31 = *plVar42;
              iVar25 = *(int *)(lVar31 + 8);
joined_r0x0001404871d1:
              uVar56 = (ulonglong)iVar25;
              if (0 < (longlong)uVar56) goto LAB_1404870aa;
LAB_14048720d:
              uVar38 = 0;
            }
            else {
              if (*(int *)(lVar31 + 0x30) == 0) {
                uVar36 = 0;
                lVar31 = *plVar42;
                pbVar48 = *(byte **)(lVar31 + 0xc0);
                if (*(byte **)(lVar31 + 200) <= pbVar48) goto LAB_140487189;
                goto LAB_14048708b;
              }
              pbVar48 = (byte *)(lVar31 + 0x38);
              iVar25 = (**(code **)(lVar31 + 0x10))
                                 (*(undefined8 *)(lVar31 + 0x28),pbVar48,
                                  *(undefined4 *)(lVar31 + 0x34));
              *(int *)(lVar31 + 0xb8) =
                   *(int *)(lVar31 + 0xb8) + (*(int *)(lVar31 + 0xc0) - *(int *)(lVar31 + 0xd0));
              if (iVar25 == 0) {
                *(undefined4 *)(lVar31 + 0x30) = 0;
                pbVar39 = (byte *)(lVar31 + 0x39);
                *(undefined1 *)(lVar31 + 0x38) = 0;
                uVar36 = 0;
              }
              else {
                pbVar39 = pbVar48 + iVar25;
                uVar36 = (uint)*pbVar48;
              }
              *(byte **)(lVar31 + 200) = pbVar39;
              *(longlong *)(lVar31 + 0xc0) = lVar31 + 0x39;
              lVar31 = *local_1d0;
              pbVar48 = *(byte **)(lVar31 + 0xc0);
              plVar42 = local_1d0;
              if (pbVar48 < *(byte **)(lVar31 + 200)) goto LAB_14048708b;
LAB_140487189:
              if (*(int *)(lVar31 + 0x30) == 0) {
                bVar23 = 0;
                lVar31 = *plVar42;
                iVar25 = *(int *)(lVar31 + 8);
                goto joined_r0x0001404871d1;
              }
              pbVar48 = (byte *)(lVar31 + 0x38);
              iVar25 = (**(code **)(lVar31 + 0x10))
                                 (*(undefined8 *)(lVar31 + 0x28),pbVar48,
                                  *(undefined4 *)(lVar31 + 0x34));
              *(int *)(lVar31 + 0xb8) =
                   *(int *)(lVar31 + 0xb8) + (*(int *)(lVar31 + 0xc0) - *(int *)(lVar31 + 0xd0));
              if (iVar25 == 0) {
                *(undefined4 *)(lVar31 + 0x30) = 0;
                pbVar39 = (byte *)(lVar31 + 0x39);
                *(undefined1 *)(lVar31 + 0x38) = 0;
                bVar23 = 0;
              }
              else {
                pbVar39 = pbVar48 + iVar25;
                bVar23 = *pbVar48;
              }
              *(byte **)(lVar31 + 200) = pbVar39;
              *(longlong *)(lVar31 + 0xc0) = lVar31 + 0x39;
              lVar31 = *plVar42;
              uVar56 = (ulonglong)*(int *)(lVar31 + 8);
              if ((longlong)uVar56 < 1) goto LAB_14048720d;
LAB_1404870aa:
              uVar38 = 0;
              puVar52 = puVar54;
              while (*puVar52 != uVar36) {
                uVar38 = uVar38 + 1;
                puVar52 = puVar52 + 0x18;
                if (uVar56 == uVar38) goto LAB_1404893ca;
              }
            }
            plVar42 = local_1d0;
            if ((int)uVar38 == (int)uVar56) goto LAB_1404893ca;
            puVar54[(uVar38 & 0xffffffff) * 0x18 + 4] = (uint)(bVar23 >> 4);
            if (0x3f < bVar23) {
              pcVar37 = "bad DC huff";
              goto LAB_1404893b0;
            }
            puVar54[(uVar38 & 0xffffffff) * 0x18 + 5] = bVar23 & 0xf;
            if (3 < (bVar23 & 0xf)) {
              pcVar37 = "bad AC huff";
              goto LAB_1404893b0;
            }
            *(int *)((longlong)local_1d0 + lVar44 * 4 + 0x4858) = (int)uVar38;
            lVar44 = lVar44 + 1;
          } while (lVar44 < *(int *)((longlong)local_1d0 + 0x4854));
          pbVar48 = *(byte **)(lVar31 + 0xc0);
          if (pbVar48 < *(byte **)(lVar31 + 200)) {
LAB_14048729a:
            *(byte **)(lVar31 + 0xc0) = pbVar48 + 1;
            lVar31 = *plVar42;
            *(uint *)((longlong)plVar42 + 0x4834) = (uint)*pbVar48;
            pbVar48 = *(byte **)(lVar31 + 0xc0);
            if (pbVar48 < *(byte **)(lVar31 + 200)) goto LAB_1404872fa;
LAB_1404872c5:
            if (*(int *)(lVar31 + 0x30) != 0) {
              FUN_14048bcd0(lVar31);
              pbVar48 = *(byte **)(lVar31 + 0xc0);
              goto LAB_1404872fa;
            }
            *(undefined4 *)(plVar42 + 0x907) = 0;
            pbVar48 = *(byte **)(lVar31 + 0xc0);
            if (*(byte **)(lVar31 + 200) <= pbVar48) goto LAB_140487325;
LAB_14048735e:
            *(byte **)(lVar31 + 0xc0) = pbVar48 + 1;
            bVar23 = *pbVar48;
          }
          else {
            if (*(int *)(lVar31 + 0x30) != 0) {
              FUN_14048bcd0(lVar31);
              pbVar48 = *(byte **)(lVar31 + 0xc0);
              goto LAB_14048729a;
            }
            *(undefined4 *)((longlong)local_1d0 + 0x4834) = 0;
            pbVar48 = *(byte **)(lVar31 + 0xc0);
            if (*(byte **)(lVar31 + 200) <= pbVar48) goto LAB_1404872c5;
LAB_1404872fa:
            *(byte **)(lVar31 + 0xc0) = pbVar48 + 1;
            lVar31 = *plVar42;
            *(uint *)(plVar42 + 0x907) = (uint)*pbVar48;
            pbVar48 = *(byte **)(lVar31 + 0xc0);
            if (pbVar48 < *(byte **)(lVar31 + 200)) goto LAB_14048735e;
LAB_140487325:
            if (*(int *)(lVar31 + 0x30) != 0) {
              FUN_14048bcd0(lVar31);
              pbVar48 = *(byte **)(lVar31 + 0xc0);
              goto LAB_14048735e;
            }
            bVar23 = 0;
          }
          *(uint *)((longlong)plVar42 + 0x483c) = (uint)(bVar23 >> 4);
          *(uint *)(plVar42 + 0x908) = bVar23 & 0xf;
          iVar25 = *(int *)((longlong)plVar42 + 0x4834);
          if ((int)plVar42[0x906] == 0) {
            if ((iVar25 != 0) || ((0xf < bVar23 || ((bVar23 & 0xf) != 0)))) {
LAB_1404892bd:
              pcVar37 = "bad SOS";
              goto LAB_1404893b0;
            }
            *(undefined4 *)(plVar42 + 0x907) = 0x3f;
          }
          else if ((((0x3f < iVar25) || (0x3f < (int)plVar42[0x907])) ||
                   ((int)plVar42[0x907] < iVar25)) || ((0xdf < bVar23 || (0xd < (bVar23 & 0xf)))))
          goto LAB_1404892bd;
          iVar25 = (int)plVar42[0x90d];
          if (iVar25 == 0) {
            iVar25 = 0x7fffffff;
          }
          plVar42[0x904] = 0;
          *(undefined4 *)((longlong)plVar42 + 0x482c) = 0;
          *(undefined4 *)(plVar42 + 0x8fb) = 0;
          *(undefined4 *)(plVar42 + 0x8ef) = 0;
          *(undefined4 *)(plVar42 + 0x8e3) = 0;
          *(undefined4 *)(plVar42 + 0x8d7) = 0;
          *(undefined1 *)(plVar42 + 0x905) = 0xff;
          *(int *)((longlong)plVar42 + 0x486c) = iVar25;
          *(undefined4 *)((longlong)plVar42 + 0x4844) = 0;
          if ((int)plVar42[0x906] == 0) {
            if (*(int *)((longlong)plVar42 + 0x4854) == 1) {
              lVar31 = plVar42[0x90b];
              lVar44 = (longlong)(int)lVar31;
              iVar25 = (int)(puVar54[lVar44 * 0x18 + 8] + 7) >> 3;
              bVar7 = true;
              local_1b0 = puVar54;
              if ((0 < iVar25) &&
                 (uVar36 = (int)(puVar54[lVar44 * 0x18 + 7] + 7) >> 3, 0 < (int)uVar36)) {
                local_1c0 = (uint *)CONCAT44(local_1c0._4_4_,iVar25);
                iVar25 = 0;
                local_1b8 = (longlong *)((ulonglong)local_1b8 & 0xffffffff00000000);
                do {
                  lVar30 = 0;
                  do {
                    plVar42 = local_1d0;
                    local_1d8 = plVar29 + (longlong)(int)puVar54[lVar44 * 0x18 + 3] * 0x10 + 0x691;
                    local_1e8 = local_1c8 + (longlong)(int)puVar54[lVar44 * 0x18 + 5] * 0x80;
                    local_1e0 = (int)lVar31;
                    iVar28 = cant_merge_dc_and_ac
                                       (local_1d0,local_148,
                                        local_198 + (longlong)(int)puVar54[lVar44 * 0x18 + 4] * 0xd2
                                       );
                    if (iVar28 == 0) goto LAB_14048836a;
                    (*(code *)plVar42[0x90e])
                              ((longlong)(int)(iVar25 * puVar54[lVar44 * 0x18 + 9]) +
                               *(longlong *)(puVar54 + lVar44 * 0x18 + 0xc) + lVar30,
                               puVar54[lVar44 * 0x18 + 9],local_148);
                    iVar28 = *(int *)((longlong)plVar42 + 0x486c);
                    *(int *)((longlong)plVar42 + 0x486c) = iVar28 + -1;
                    if (iVar28 < 2) {
                      if (*(int *)((longlong)plVar42 + 0x4824) < 0x18) {
                        FUN_140498930(plVar42);
                      }
                      if ((*(byte *)(plVar42 + 0x905) & 0xf8) != 0xd0) goto LAB_140487f27;
                      plVar42[0x904] = 0;
                      *(undefined4 *)((longlong)plVar42 + 0x482c) = 0;
                      *(undefined4 *)(plVar42 + 0x8fb) = 0;
                      *(undefined4 *)(plVar42 + 0x8ef) = 0;
                      *(undefined4 *)(plVar42 + 0x8e3) = 0;
                      *(undefined4 *)(plVar42 + 0x8d7) = 0;
                      *(undefined1 *)(plVar42 + 0x905) = 0xff;
                      iVar28 = (int)plVar42[0x90d];
                      if (iVar28 == 0) {
                        iVar28 = 0x7fffffff;
                      }
                      *(int *)((longlong)plVar42 + 0x486c) = iVar28;
                      *(undefined4 *)((longlong)plVar42 + 0x4844) = 0;
                    }
                    lVar30 = lVar30 + 8;
                  } while ((ulonglong)uVar36 << 3 != lVar30);
                  iVar28 = (int)local_1b8 + 1;
                  iVar25 = iVar25 + 8;
                  local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,iVar28);
                } while (iVar28 != (int)local_1c0);
LAB_140487f27:
                bVar7 = true;
              }
            }
            else {
              iVar28 = *(int *)((longlong)plVar42 + 0x4694);
              bVar7 = true;
              local_1b0 = puVar54;
              if ((0 < iVar28) && (iVar53 = (int)plVar42[0x8d2], 0 < iVar53)) {
                local_1a0 = local_1a0 & 0xffffffff00000000;
                do {
                  if (0 < iVar53) {
                    local_1c0 = (uint *)((ulonglong)local_1c0 & 0xffffffff00000000);
                    iVar28 = iVar25;
                    do {
                      iVar25 = *(int *)((longlong)plVar42 + 0x4854);
                      if (0 < iVar25) {
                        plVar42 = (longlong *)0x0;
                        do {
                          plVar41 = (longlong *)
                                    (longlong)
                                    *(int *)((longlong)local_1d0 + (longlong)plVar42 * 4 + 0x4858);
                          uVar36 = puVar54[(longlong)plVar41 * 0x18 + 2];
                          local_1b8 = plVar41;
                          if ((0 < (int)uVar36) &&
                             (uVar26 = puVar54[(longlong)plVar41 * 0x18 + 1], 0 < (int)uVar26)) {
                            iVar25 = 0;
                            local_1a8 = plVar42;
                            do {
                              plVar46 = local_1d0;
                              if (0 < (int)uVar26) {
                                iVar28 = 0;
                                do {
                                  uVar36 = puVar54[(longlong)plVar41 * 0x18 + 2];
                                  local_1d8 = plVar29 + (longlong)
                                                        (int)puVar54[(longlong)plVar41 * 0x18 + 3] *
                                                        0x10 + 0x691;
                                  local_1e8 = local_1c8 +
                                              (longlong)(int)puVar54[(longlong)plVar41 * 0x18 + 5] *
                                              0x80;
                                  local_1e0 = (int)local_1b8;
                                  iVar53 = cant_merge_dc_and_ac
                                                     (plVar46,local_148,
                                                      local_198 +
                                                      (longlong)
                                                      (int)puVar54[(longlong)plVar41 * 0x18 + 4] *
                                                      0xd2);
                                  if (iVar53 == 0) goto LAB_14048836a;
                                  (*(code *)plVar46[0x90e])
                                            ((longlong)(int)((uVar26 * (int)local_1c0 + iVar28) * 8)
                                             + (longlong)
                                               (int)((uVar36 * (int)local_1a0 + iVar25) *
                                                     puVar54[(longlong)plVar41 * 0x18 + 9] * 8) +
                                               *(longlong *)
                                                (puVar54 + (longlong)plVar41 * 0x18 + 0xc),
                                             puVar54[(longlong)plVar41 * 0x18 + 9],local_148);
                                  iVar28 = iVar28 + 1;
                                  uVar26 = puVar54[(longlong)plVar41 * 0x18 + 1];
                                } while (iVar28 < (int)uVar26);
                                uVar36 = puVar54[(longlong)plVar41 * 0x18 + 2];
                                plVar42 = local_1a8;
                              }
                              iVar25 = iVar25 + 1;
                            } while (iVar25 < (int)uVar36);
                            iVar25 = *(int *)((longlong)local_1d0 + 0x4854);
                            puVar54 = local_1b0;
                          }
                          plVar42 = (longlong *)((longlong)plVar42 + 1);
                        } while ((longlong)plVar42 < (longlong)iVar25);
                        iVar28 = *(int *)((longlong)local_1d0 + 0x486c);
                        plVar42 = local_1d0;
                      }
                      bVar7 = true;
                      iVar25 = iVar28 + -1;
                      *(int *)((longlong)plVar42 + 0x486c) = iVar25;
                      if (iVar28 < 2) {
                        if (*(int *)((longlong)plVar42 + 0x4824) < 0x18) {
                          FUN_140498930(plVar42);
                        }
                        if ((*(byte *)(plVar42 + 0x905) & 0xf8) != 0xd0) goto LAB_14048836c;
                        plVar42[0x904] = 0;
                        *(undefined4 *)((longlong)plVar42 + 0x482c) = 0;
                        *(undefined4 *)(plVar42 + 0x8fb) = 0;
                        *(undefined4 *)(plVar42 + 0x8ef) = 0;
                        *(undefined4 *)(plVar42 + 0x8e3) = 0;
                        *(undefined4 *)(plVar42 + 0x8d7) = 0;
                        *(undefined1 *)(plVar42 + 0x905) = 0xff;
                        iVar25 = (int)plVar42[0x90d];
                        if (iVar25 == 0) {
                          iVar25 = 0x7fffffff;
                        }
                        *(int *)((longlong)plVar42 + 0x486c) = iVar25;
                        *(undefined4 *)((longlong)plVar42 + 0x4844) = 0;
                      }
                      iVar57 = (int)local_1c0 + 1;
                      iVar53 = (int)plVar42[0x8d2];
                      local_1c0 = (uint *)CONCAT44(local_1c0._4_4_,iVar57);
                      iVar28 = iVar25;
                    } while (iVar57 < iVar53);
                    iVar28 = *(int *)((longlong)plVar42 + 0x4694);
                  }
                  bVar7 = true;
                  iVar57 = (int)local_1a0 + 1;
                  local_1a0 = CONCAT44(local_1a0._4_4_,iVar57);
                } while (iVar57 < iVar28);
              }
            }
            goto LAB_14048836c;
          }
          if (*(int *)((longlong)plVar42 + 0x4854) == 1) {
            local_168 = (longlong)(int)plVar42[0x90b];
            local_1c0 = (uint *)(local_168 * 0x60);
            local_170 = (int)((puVar54 + 8)[local_168 * 0x18] + 7) >> 3;
            local_1b0 = puVar54;
            if ((0 < local_170) &&
               (local_16c = (int)((puVar54 + 7)[local_168 * 0x18] + 7) >> 3, 0 < local_16c)) {
              local_1c0 = (uint *)((longlong)local_1c0 + (longlong)puVar54);
              local_178 = 0;
              do {
                iVar25 = 0;
                do {
                  plVar42 = local_180;
                  lVar31 = (longlong)(int)((local_1c0[0x16] * local_178 + iVar25) * 0x40) * 2 +
                           *(longlong *)(local_1c0 + 0x14);
                  uVar56 = (ulonglong)*(int *)((longlong)local_1d0 + 0x4834);
                  local_1a0 = CONCAT44(local_1a0._4_4_,iVar25);
                  if (uVar56 == 0) {
                    iVar25 = cant_merge_dc_and_ac
                                       (local_1d0,lVar31,
                                        local_198 + (longlong)(int)local_1c0[4] * 0xd2);
                    if (iVar25 == 0) goto LAB_1404893ca;
                  }
                  else {
                    lVar44 = (longlong)(int)local_1c0[5];
                    plVar41 = local_188 + lVar44 * 0xd2;
                    iVar25 = *(int *)((longlong)local_1d0 + 0x4844);
                    bVar23 = (byte)(int)local_1d0[0x908];
                    local_1b8 = plVar41;
                    if (*(int *)((longlong)local_1d0 + 0x483c) == 0) {
                      if (iVar25 == 0) {
                        local_1a8 = local_1c8 + lVar44 * 0x80;
                        plVar46 = local_1a8;
                        do {
                          while( true ) {
                            while( true ) {
                              plVar1 = local_1d0;
                              if (*(int *)((longlong)local_1d0 + 0x4824) < 0x10) {
                                FUN_140498930(local_1d0);
                              }
                              plVar22 = local_1d0;
                              uVar36 = *(uint *)(plVar1 + 0x904);
                              uVar38 = (ulonglong)(uVar36 >> 0x17);
                              sVar5 = *(short *)((longlong)plVar46 + uVar38 * 2);
                              uVar26 = (uint)sVar5;
                              iVar25 = (int)uVar56;
                              if (sVar5 == 0) break;
                              uVar35 = uVar26 & 0xf;
                              if (*(int *)((longlong)plVar1 + 0x4824) < (int)uVar35)
                              goto LAB_1404893a9;
                              lVar30 = (longlong)iVar25 + (ulonglong)(uVar26 >> 4 & 0xf);
                              *(uint *)(plVar1 + 0x904) = uVar36 << (sbyte)uVar35;
                              *(uint *)((longlong)plVar1 + 0x4824) =
                                   *(int *)((longlong)plVar1 + 0x4824) - uVar35;
                              uVar36 = (int)lVar30 + 1;
                              uVar56 = (ulonglong)uVar36;
                              *(short *)(lVar31 + (ulonglong)(byte)(&DAT_140e1a7d0)[lVar30] * 2) =
                                   (short)((uVar26 >> 8) << (bVar23 & 0x1f));
                              if ((int)plVar1[0x907] < (int)uVar36) goto LAB_1404876fa;
                            }
                            if (*(int *)((longlong)plVar1 + 0x4824) < 0x10) {
                              FUN_140498930(local_1d0);
                              uVar36 = *(uint *)(plVar22 + 0x904);
                              uVar38 = (ulonglong)(uVar36 >> 0x17);
                            }
                            plVar46 = local_1d0;
                            uVar56 = (ulonglong)*(byte *)((longlong)plVar41 + uVar38);
                            if (uVar56 == 0xff) {
                              lVar30 = 0;
                              do {
                                lVar55 = lVar30;
                                lVar30 = lVar55 + 1;
                              } while (*(uint *)((longlong)plVar42 +
                                                lVar55 * 4 + lVar44 * 0x690 + -0x44) <=
                                       uVar36 >> 0x10);
                              iVar28 = *(int *)((longlong)local_1d0 + 0x4824);
                              if (lVar30 == 8) goto LAB_14048939b;
                              if ((iVar28 < (int)(lVar55 + 10)) ||
                                 (uVar26 = (uVar36 >> (0x17U - (char)lVar30 & 0x1f) &
                                           *(uint *)(&UNK_140e1a854 + lVar30 * 4)) +
                                           *(int *)((longlong)plVar42 + lVar30 * 4 + lVar44 * 0x690)
                                 , 0xff < uVar26)) goto LAB_1404893a9;
                              iVar28 = (iVar28 - (int)lVar30) + -9;
                              *(int *)((longlong)local_1d0 + 0x4824) = iVar28;
                              *(uint *)(local_1d0 + 0x904) = uVar36 << ((byte)(lVar55 + 10) & 0x1f);
                              uVar56 = (ulonglong)uVar26;
                            }
                            else {
                              bVar3 = *(byte *)((longlong)plVar41 + uVar56 + 0x500);
                              iVar28 = *(int *)((longlong)local_1d0 + 0x4824) - (uint)bVar3;
                              if (*(int *)((longlong)local_1d0 + 0x4824) < (int)(uint)bVar3)
                              goto LAB_1404893a9;
                              *(uint *)(local_1d0 + 0x904) = uVar36 << (bVar3 & 0x1f);
                              *(int *)((longlong)local_1d0 + 0x4824) = iVar28;
                            }
                            bVar3 = *(byte *)((longlong)plVar41 + uVar56 + 0x400);
                            uVar26 = bVar3 & 0xf;
                            bVar10 = bVar3 >> 4;
                            uVar36 = (uint)bVar10;
                            if ((bVar3 & 0xf) == 0) break;
                            lVar30 = (longlong)iVar25 + (ulonglong)uVar36;
                            bVar3 = (&DAT_140e1a7d0)[lVar30];
                            if (iVar28 < (int)uVar26) {
                              FUN_140498930(local_1d0);
                              iVar28 = *(int *)((longlong)plVar46 + 0x4824);
                              plVar41 = local_1b8;
                            }
                            iVar25 = 0;
                            if ((int)uVar26 <= iVar28) {
                              uVar36 = *(uint *)(local_1d0 + 0x904);
                              uVar27 = uVar36 << (sbyte)uVar26 | uVar36 >> 0x20 - (sbyte)uVar26;
                              uVar35 = *(uint *)(&DAT_140e1a830 + uVar26 * 4);
                              *(uint *)(local_1d0 + 0x904) = ~uVar35 & uVar27;
                              *(uint *)((longlong)local_1d0 + 0x4824) = iVar28 - uVar26;
                              iVar25 = 0;
                              if (-1 < (int)uVar36) {
                                iVar25 = *(int *)(&DAT_140e1a880 + uVar26 * 4);
                              }
                              iVar25 = (uVar27 & uVar35) + iVar25;
                            }
                            uVar36 = (int)lVar30 + 1;
                            uVar56 = (ulonglong)uVar36;
                            *(short *)(lVar31 + (ulonglong)bVar3 * 2) =
                                 (short)(iVar25 << (bVar23 & 0x1f));
                            plVar46 = local_1a8;
                            if ((int)local_1d0[0x907] < (int)uVar36) goto LAB_1404876fa;
                          }
                          if (bVar3 < 0xf0) {
                            iVar25 = 1 << bVar10;
                            *(int *)((longlong)local_1d0 + 0x4844) = iVar25;
                            if (0xf < bVar3) {
                              if (iVar28 < (int)uVar36) {
                                FUN_140498930(local_1d0);
                                iVar28 = *(int *)((longlong)plVar46 + 0x4824);
                              }
                              uVar26 = 0;
                              if ((int)uVar36 <= iVar28) {
                                uVar26 = *(uint *)(local_1d0 + 0x904) << bVar10 |
                                         *(uint *)(local_1d0 + 0x904) >> 0x20 - bVar10;
                                uVar35 = *(uint *)(&DAT_140e1a830 + (ulonglong)uVar36 * 4);
                                *(uint *)(local_1d0 + 0x904) = ~uVar35 & uVar26;
                                uVar26 = uVar26 & uVar35;
                                *(uint *)((longlong)local_1d0 + 0x4824) = iVar28 - uVar36;
                              }
                              iVar25 = uVar26 + *(int *)((longlong)local_1d0 + 0x4844);
                            }
                            goto LAB_1404876ed;
                          }
                          uVar56 = (ulonglong)(iVar25 + 0x10U);
                          plVar46 = local_1a8;
                        } while ((int)(iVar25 + 0x10U) <= (int)local_1d0[0x907]);
                      }
                      else {
LAB_1404876ed:
                        *(int *)((longlong)local_1d0 + 0x4844) = iVar25 + -1;
                      }
                    }
                    else if (iVar25 == 0) {
                      local_174 = (0x10000 << (bVar23 & 0x1f)) >> 0x10;
                      local_190 = CONCAT44(local_190._4_4_,local_174);
                      local_174 = -local_174;
                      local_1a8 = local_180 + lVar44 * 0xd2;
                      do {
                        plVar46 = local_1a8;
                        plVar41 = local_1b8;
                        plVar42 = local_1d0;
                        if (*(int *)((longlong)local_1d0 + 0x4824) < 0x10) {
                          FUN_140498930(local_1d0);
                        }
                        plVar1 = local_1d0;
                        uVar36 = *(uint *)(plVar42 + 0x904);
                        uVar38 = (ulonglong)
                                 *(byte *)((longlong)plVar41 + (ulonglong)(uVar36 >> 0x17));
                        if (uVar38 == 0xff) {
                          lVar44 = 0;
                          do {
                            lVar30 = lVar44;
                            lVar44 = lVar30 + 1;
                          } while (*(uint *)((longlong)plVar46 + lVar30 * 4 + -0x44) <=
                                   uVar36 >> 0x10);
                          iVar28 = *(int *)((longlong)local_1d0 + 0x4824);
                          if (lVar44 == 8) goto LAB_14048939b;
                          if ((iVar28 < (int)(lVar30 + 10)) ||
                             (uVar26 = (uVar36 >> (0x17U - (char)lVar44 & 0x1f) &
                                       *(uint *)(&UNK_140e1a854 + lVar44 * 4)) +
                                       *(int *)((longlong)plVar46 + lVar44 * 4), 0xff < uVar26))
                          goto LAB_1404893a9;
                          iVar53 = uVar36 << ((byte)(lVar30 + 10) & 0x1f);
                          iVar25 = (iVar28 - (int)lVar44) + -9;
                          *(int *)((longlong)local_1d0 + 0x4824) = iVar25;
                          *(int *)(local_1d0 + 0x904) = iVar53;
                          uVar38 = (ulonglong)uVar26;
                        }
                        else {
                          bVar23 = *(byte *)((longlong)plVar41 + uVar38 + 0x500);
                          iVar25 = *(int *)((longlong)plVar42 + 0x4824) - (uint)bVar23;
                          if (*(int *)((longlong)plVar42 + 0x4824) < (int)(uint)bVar23)
                          goto LAB_1404893a9;
                          iVar53 = uVar36 << (bVar23 & 0x1f);
                          *(int *)(plVar42 + 0x904) = iVar53;
                          *(int *)((longlong)plVar42 + 0x4824) = iVar25;
                        }
                        bVar23 = *(byte *)((longlong)plVar41 + uVar38 + 0x400);
                        bVar3 = bVar23 >> 4;
                        uVar36 = (uint)bVar3;
                        uVar38 = (ulonglong)uVar36;
                        if ((bVar23 & 0xf) == 0) {
                          uVar59 = 0;
                          uVar43 = 0xf;
                          if (bVar23 < 0xf0) {
                            *(int *)((longlong)local_1d0 + 0x4844) = ~(-1 << bVar3);
                            uVar43 = 0x40;
                            if (0xf < bVar23) {
                              if (iVar25 < (int)uVar36) {
                                FUN_140498930(local_1d0);
                                iVar25 = *(int *)((longlong)plVar1 + 0x4824);
                              }
                              uVar59 = 0;
                              uVar26 = 0;
                              if ((int)uVar36 <= iVar25) {
                                uVar26 = *(uint *)(local_1d0 + 0x904) << bVar3 |
                                         *(uint *)(local_1d0 + 0x904) >> 0x20 - bVar3;
                                uVar35 = *(uint *)(&DAT_140e1a830 + uVar38 * 4);
                                *(uint *)(local_1d0 + 0x904) = ~uVar35 & uVar26;
                                uVar26 = uVar26 & uVar35;
                                *(uint *)((longlong)local_1d0 + 0x4824) = iVar25 - uVar36;
                              }
                              *(int *)((longlong)local_1d0 + 0x4844) =
                                   *(int *)((longlong)local_1d0 + 0x4844) + uVar26;
                            }
                          }
LAB_140487957:
                          iVar25 = (int)local_1d0[0x907];
                          uVar38 = uVar43;
                          uVar36 = (uint)local_190;
                        }
                        else {
                          if ((bVar23 & 0xf) != 1) goto LAB_1404893a9;
                          if (iVar25 < 1) {
                            FUN_140498930(local_1d0);
                            iVar25 = *(int *)((longlong)plVar1 + 0x4824);
                            if (0 < iVar25) {
                              iVar53 = (int)plVar1[0x904];
                              goto LAB_140487894;
                            }
LAB_1404878b4:
                            uVar59 = (undefined2)local_174;
                            uVar43 = uVar38;
                            goto LAB_140487957;
                          }
LAB_140487894:
                          *(int *)(local_1d0 + 0x904) = iVar53 * 2;
                          *(int *)((longlong)local_1d0 + 0x4824) = iVar25 + -1;
                          if (-1 < iVar53) goto LAB_1404878b4;
                          uVar59 = (undefined2)local_190;
                          iVar25 = (int)local_1d0[0x907];
                          uVar36 = (uint)local_190;
                        }
                        if ((int)uVar56 <= iVar25) {
                          uVar43 = (longlong)(int)uVar56;
                          do {
                            plVar42 = local_1d0;
                            uVar49 = (ulonglong)(byte)(&DAT_140e1a7d0)[uVar43];
                            if (*(short *)(lVar31 + uVar49 * 2) == 0) {
                              if ((int)uVar38 == 0) {
                                uVar56 = (ulonglong)((int)uVar43 + 1);
                                *(undefined2 *)(lVar31 + uVar49 * 2) = uVar59;
                                iVar25 = (int)local_1d0[0x907];
                                break;
                              }
                              uVar38 = (ulonglong)((int)uVar38 - 1);
                            }
                            else {
                              iVar25 = *(int *)((longlong)local_1d0 + 0x4824);
                              if (iVar25 < 1) {
                                FUN_140498930(local_1d0);
                                iVar25 = *(int *)((longlong)plVar42 + 0x4824);
                                if (iVar25 < 1) goto LAB_140487983;
                              }
                              lVar44 = plVar42[0x904];
                              *(int *)(plVar42 + 0x904) = (int)lVar44 * 2;
                              *(int *)((longlong)plVar42 + 0x4824) = iVar25 + -1;
                              if (((int)lVar44 < 0) &&
                                 (sVar5 = *(short *)(lVar31 + uVar49 * 2),
                                 (uVar36 & (int)sVar5) == 0)) {
                                sVar11 = (short)uVar36;
                                if (sVar5 < 1) {
                                  sVar11 = -sVar11;
                                }
                                *(short *)(lVar31 + uVar49 * 2) = sVar5 + sVar11;
                              }
                            }
LAB_140487983:
                            uVar56 = uVar43 + 1;
                            iVar25 = (int)local_1d0[0x907];
                            bVar7 = (longlong)uVar43 < (longlong)iVar25;
                            uVar43 = uVar56;
                          } while (bVar7);
                        }
                      } while ((int)uVar56 <= iVar25);
                    }
                    else {
                      *(int *)((longlong)local_1d0 + 0x4844) = iVar25 + -1;
                      if (*(int *)((longlong)local_1d0 + 0x4834) <= (int)local_1d0[0x907]) {
                        uVar36 = (0x10000 << (bVar23 & 0x1f)) >> 0x10;
                        do {
                          plVar42 = local_1d0;
                          uVar38 = (ulonglong)(byte)(&DAT_140e1a7d0)[uVar56];
                          if (*(short *)(lVar31 + uVar38 * 2) != 0) {
                            iVar25 = *(int *)((longlong)local_1d0 + 0x4824);
                            if (iVar25 < 1) {
                              FUN_140498930(local_1d0);
                              iVar25 = *(int *)((longlong)plVar42 + 0x4824);
                              if (iVar25 < 1) goto LAB_140487632;
                            }
                            lVar44 = plVar42[0x904];
                            *(int *)(plVar42 + 0x904) = (int)lVar44 * 2;
                            *(int *)((longlong)plVar42 + 0x4824) = iVar25 + -1;
                            if (((int)lVar44 < 0) &&
                               (sVar5 = *(short *)(lVar31 + uVar38 * 2), (uVar36 & (int)sVar5) == 0)
                               ) {
                              uVar26 = -uVar36;
                              if (0 < sVar5) {
                                uVar26 = uVar36;
                              }
                              *(short *)(lVar31 + uVar38 * 2) = (short)uVar26 + sVar5;
                            }
                          }
LAB_140487632:
                          bVar7 = (longlong)uVar56 < (longlong)(int)plVar42[0x907];
                          uVar56 = uVar56 + 1;
                        } while (bVar7);
                      }
                    }
                  }
LAB_1404876fa:
                  plVar42 = local_1d0;
                  iVar25 = *(int *)((longlong)local_1d0 + 0x486c);
                  *(int *)((longlong)local_1d0 + 0x486c) = iVar25 + -1;
                  if (iVar25 < 2) {
                    if (*(int *)((longlong)local_1d0 + 0x4824) < 0x18) {
                      FUN_140498930(local_1d0);
                    }
                    bVar23 = *(byte *)(plVar42 + 0x905);
                    if ((bVar23 & 0xf8) != 0xd0) goto LAB_140488380;
                    local_1d0[0x904] = 0;
                    *(undefined4 *)((longlong)local_1d0 + 0x482c) = 0;
                    *(undefined4 *)(local_1d0 + 0x8fb) = 0;
                    *(undefined4 *)(local_1d0 + 0x8ef) = 0;
                    *(undefined4 *)(local_1d0 + 0x8e3) = 0;
                    *(undefined4 *)(local_1d0 + 0x8d7) = 0;
                    *(undefined1 *)(local_1d0 + 0x905) = 0xff;
                    iVar25 = (int)local_1d0[0x90d];
                    if (iVar25 == 0) {
                      iVar25 = 0x7fffffff;
                    }
                    *(int *)((longlong)local_1d0 + 0x486c) = iVar25;
                    *(undefined4 *)((longlong)local_1d0 + 0x4844) = 0;
                  }
                  iVar25 = (int)local_1a0 + 1;
                } while (iVar25 != local_16c);
                local_178 = local_178 + 1;
              } while (local_178 != local_170);
            }
          }
          else {
            iVar28 = *(int *)((longlong)plVar42 + 0x4694);
            local_1b0 = puVar54;
            if ((0 < iVar28) && (iVar53 = (int)local_1d0[0x8d2], 0 < iVar53)) {
              iVar57 = 0;
              do {
                if (0 < iVar53) {
                  iVar28 = 0;
                  plVar42 = local_1d0;
                  puVar54 = local_1b0;
                  do {
                    iVar53 = *(int *)((longlong)plVar42 + 0x4854);
                    if (0 < iVar53) {
                      lVar31 = 0;
                      puVar52 = puVar54;
                      do {
                        lVar44 = (longlong)*(int *)((longlong)local_1d0 + lVar31 * 4 + 0x4858);
                        uVar36 = puVar52[lVar44 * 0x18 + 2];
                        puVar54 = puVar52;
                        if ((0 < (int)uVar36) &&
                           (uVar26 = puVar52[lVar44 * 0x18 + 1], 0 < (int)uVar26)) {
                          iVar25 = 0;
                          do {
                            if (0 < (int)uVar26) {
                              iVar53 = 0;
                              do {
                                iVar51 = cant_merge_dc_and_ac
                                                   (local_1d0,
                                                    (longlong)
                                                    (int)((uVar26 * iVar28 + iVar53 +
                                                          (puVar52[lVar44 * 0x18 + 2] * iVar57 +
                                                          iVar25) * puVar52[lVar44 * 0x18 + 0x16]) *
                                                         0x40) * 2 +
                                                    *(longlong *)(puVar52 + lVar44 * 0x18 + 0x14),
                                                    local_198 +
                                                    (longlong)(int)puVar52[lVar44 * 0x18 + 4] * 0xd2
                                                   );
                                if (iVar51 == 0) goto LAB_1404893ca;
                                iVar53 = iVar53 + 1;
                                uVar26 = puVar52[lVar44 * 0x18 + 1];
                              } while (iVar53 < (int)uVar26);
                              uVar36 = puVar52[lVar44 * 0x18 + 2];
                              puVar54 = local_1b0;
                            }
                            iVar25 = iVar25 + 1;
                          } while (iVar25 < (int)uVar36);
                          iVar53 = *(int *)((longlong)local_1d0 + 0x4854);
                        }
                        lVar31 = lVar31 + 1;
                        puVar52 = puVar54;
                      } while (lVar31 < iVar53);
                      iVar25 = *(int *)((longlong)local_1d0 + 0x486c);
                      plVar42 = local_1d0;
                    }
                    *(int *)((longlong)plVar42 + 0x486c) = iVar25 + -1;
                    bVar7 = iVar25 < 2;
                    iVar25 = iVar25 + -1;
                    if (bVar7) {
                      if (*(int *)((longlong)plVar42 + 0x4824) < 0x18) {
                        FUN_140498930(plVar42);
                      }
                      bVar23 = *(byte *)(plVar42 + 0x905);
                      if ((bVar23 & 0xf8) != 0xd0) goto LAB_140488380;
                      local_1d0[0x904] = 0;
                      *(undefined4 *)((longlong)local_1d0 + 0x482c) = 0;
                      *(undefined4 *)(local_1d0 + 0x8fb) = 0;
                      *(undefined4 *)(local_1d0 + 0x8ef) = 0;
                      *(undefined4 *)(local_1d0 + 0x8e3) = 0;
                      *(undefined4 *)(local_1d0 + 0x8d7) = 0;
                      *(undefined1 *)(local_1d0 + 0x905) = 0xff;
                      iVar25 = (int)local_1d0[0x90d];
                      if (iVar25 == 0) {
                        iVar25 = 0x7fffffff;
                      }
                      *(int *)((longlong)local_1d0 + 0x486c) = iVar25;
                      *(undefined4 *)((longlong)local_1d0 + 0x4844) = 0;
                      plVar42 = local_1d0;
                      puVar54 = local_1b0;
                    }
                    iVar28 = iVar28 + 1;
                    iVar53 = (int)plVar42[0x8d2];
                  } while (iVar28 < iVar53);
                  iVar28 = *(int *)((longlong)plVar42 + 0x4694);
                }
                iVar57 = iVar57 + 1;
              } while (iVar57 < iVar28);
            }
          }
          goto LAB_140488374;
        }
        pcVar37 = "bad SOS component count";
        goto LAB_1404893b0;
      }
      if (bVar23 == 0xdc) {
        iVar25 = FUN_14048fe40(*plVar42);
        iVar28 = FUN_14048fe40(*plVar42);
        if (iVar25 == 4) {
          if (iVar28 == *(int *)(*plVar42 + 4)) goto LAB_140486f94;
          pcVar37 = "bad DNL height";
        }
        else {
          pcVar37 = "bad DNL len";
        }
        goto LAB_1404893b0;
      }
      if (bVar23 == 0xd9) {
        puVar52 = (uint *)*plVar42;
        if (((int)plVar42[0x906] != 0) && (0 < (int)puVar52[2])) {
          plVar41 = (longlong *)0x0;
          local_1b0 = puVar54;
          do {
            iVar25 = (int)(puVar54[(longlong)plVar41 * 0x18 + 8] + 7) >> 3;
            local_198 = (longlong *)CONCAT44(local_198._4_4_,iVar25);
            if ((0 < iVar25) &&
               (uVar36 = (int)(puVar54[(longlong)plVar41 * 0x18 + 7] + 7) >> 3, 0 < (int)uVar36)) {
              iVar25 = 0;
              local_188 = plVar41;
              do {
                uVar56 = 0;
                do {
                  lVar31 = *(longlong *)(puVar54 + (longlong)plVar41 * 0x18 + 0x14);
                  lVar55 = (longlong)
                           (int)((puVar54[(longlong)plVar41 * 0x18 + 0x16] * iVar25 + (int)uVar56) *
                                0x40);
                  plVar46 = (longlong *)(lVar31 + lVar55 * 2);
                  lVar44 = (longlong)(int)puVar54[(longlong)plVar41 * 0x18 + 3];
                  lVar30 = lVar44 * 0x80;
                  plVar1 = plVar29 + lVar44 * 0x10 + 0x691;
                  if ((plVar46 < plVar42 + lVar44 * 0x10 + 0x6a1) &&
                     (plVar1 < (longlong *)(lVar31 + lVar55 * 2 + 0x80))) {
                    lVar31 = lVar31 + lVar55 * 2;
                    lVar44 = 0;
                    do {
                      *(short *)(lVar31 + lVar44 * 2) =
                           *(short *)(lVar31 + lVar44 * 2) *
                           *(short *)((longlong)plVar42 + lVar44 * 2 + lVar30 + 0x3488);
                      *(short *)(lVar31 + 2 + lVar44 * 2) =
                           *(short *)(lVar31 + 2 + lVar44 * 2) *
                           *(short *)((longlong)plVar42 + lVar44 * 2 + lVar30 + 0x348a);
                      *(short *)(lVar31 + 4 + lVar44 * 2) =
                           *(short *)(lVar31 + 4 + lVar44 * 2) *
                           *(short *)((longlong)plVar42 + lVar44 * 2 + lVar30 + 0x348c);
                      *(short *)(lVar31 + 6 + lVar44 * 2) =
                           *(short *)(lVar31 + 6 + lVar44 * 2) *
                           *(short *)((longlong)plVar42 + lVar44 * 2 + lVar30 + 0x348e);
                      lVar44 = lVar44 + 4;
                    } while (lVar44 != 0x40);
                  }
                  else {
                    sVar5 = *(short *)((longlong)plVar1 + 2);
                    sVar11 = *(short *)((longlong)plVar1 + 4);
                    sVar12 = *(short *)((longlong)plVar1 + 6);
                    lVar31 = plVar1[1];
                    sVar13 = *(short *)((longlong)plVar1 + 10);
                    sVar14 = *(short *)((longlong)plVar1 + 0xc);
                    sVar15 = *(short *)((longlong)plVar1 + 0xe);
                    lVar44 = plVar1[2];
                    sVar16 = *(short *)((longlong)plVar1 + 0x12);
                    sVar17 = *(short *)((longlong)plVar1 + 0x14);
                    sVar18 = *(short *)((longlong)plVar1 + 0x16);
                    lVar30 = plVar1[3];
                    sVar19 = *(short *)((longlong)plVar1 + 0x1a);
                    sVar20 = *(short *)((longlong)plVar1 + 0x1c);
                    sVar21 = *(short *)((longlong)plVar1 + 0x1e);
                    *(short *)plVar46 = (short)*plVar46 * (short)*plVar1;
                    *(short *)((longlong)plVar46 + 2) = *(short *)((longlong)plVar46 + 2) * sVar5;
                    *(short *)((longlong)plVar46 + 4) = *(short *)((longlong)plVar46 + 4) * sVar11;
                    *(short *)((longlong)plVar46 + 6) = *(short *)((longlong)plVar46 + 6) * sVar12;
                    *(short *)(plVar46 + 1) = (short)plVar46[1] * (short)lVar31;
                    *(short *)((longlong)plVar46 + 10) = *(short *)((longlong)plVar46 + 10) * sVar13
                    ;
                    *(short *)((longlong)plVar46 + 0xc) =
                         *(short *)((longlong)plVar46 + 0xc) * sVar14;
                    *(short *)((longlong)plVar46 + 0xe) =
                         *(short *)((longlong)plVar46 + 0xe) * sVar15;
                    *(short *)(plVar46 + 2) = (short)plVar46[2] * (short)lVar44;
                    *(short *)((longlong)plVar46 + 0x12) =
                         *(short *)((longlong)plVar46 + 0x12) * sVar16;
                    *(short *)((longlong)plVar46 + 0x14) =
                         *(short *)((longlong)plVar46 + 0x14) * sVar17;
                    *(short *)((longlong)plVar46 + 0x16) =
                         *(short *)((longlong)plVar46 + 0x16) * sVar18;
                    *(short *)(plVar46 + 3) = (short)plVar46[3] * (short)lVar30;
                    *(short *)((longlong)plVar46 + 0x1a) =
                         *(short *)((longlong)plVar46 + 0x1a) * sVar19;
                    *(short *)((longlong)plVar46 + 0x1c) =
                         *(short *)((longlong)plVar46 + 0x1c) * sVar20;
                    *(short *)((longlong)plVar46 + 0x1e) =
                         *(short *)((longlong)plVar46 + 0x1e) * sVar21;
                    sVar5 = *(short *)((longlong)plVar1 + 0x22);
                    sVar11 = *(short *)((longlong)plVar1 + 0x24);
                    sVar12 = *(short *)((longlong)plVar1 + 0x26);
                    lVar31 = plVar1[5];
                    sVar13 = *(short *)((longlong)plVar1 + 0x2a);
                    sVar14 = *(short *)((longlong)plVar1 + 0x2c);
                    sVar15 = *(short *)((longlong)plVar1 + 0x2e);
                    lVar44 = plVar1[6];
                    sVar16 = *(short *)((longlong)plVar1 + 0x32);
                    sVar17 = *(short *)((longlong)plVar1 + 0x34);
                    sVar18 = *(short *)((longlong)plVar1 + 0x36);
                    lVar30 = plVar1[7];
                    sVar19 = *(short *)((longlong)plVar1 + 0x3a);
                    sVar20 = *(short *)((longlong)plVar1 + 0x3c);
                    sVar21 = *(short *)((longlong)plVar1 + 0x3e);
                    *(short *)(plVar46 + 4) = (short)plVar1[4] * (short)plVar46[4];
                    *(short *)((longlong)plVar46 + 0x22) =
                         sVar5 * *(short *)((longlong)plVar46 + 0x22);
                    *(short *)((longlong)plVar46 + 0x24) =
                         sVar11 * *(short *)((longlong)plVar46 + 0x24);
                    *(short *)((longlong)plVar46 + 0x26) =
                         sVar12 * *(short *)((longlong)plVar46 + 0x26);
                    *(short *)(plVar46 + 5) = (short)lVar31 * (short)plVar46[5];
                    *(short *)((longlong)plVar46 + 0x2a) =
                         sVar13 * *(short *)((longlong)plVar46 + 0x2a);
                    *(short *)((longlong)plVar46 + 0x2c) =
                         sVar14 * *(short *)((longlong)plVar46 + 0x2c);
                    *(short *)((longlong)plVar46 + 0x2e) =
                         sVar15 * *(short *)((longlong)plVar46 + 0x2e);
                    *(short *)(plVar46 + 6) = (short)lVar44 * (short)plVar46[6];
                    *(short *)((longlong)plVar46 + 0x32) =
                         sVar16 * *(short *)((longlong)plVar46 + 0x32);
                    *(short *)((longlong)plVar46 + 0x34) =
                         sVar17 * *(short *)((longlong)plVar46 + 0x34);
                    *(short *)((longlong)plVar46 + 0x36) =
                         sVar18 * *(short *)((longlong)plVar46 + 0x36);
                    *(short *)(plVar46 + 7) = (short)lVar30 * (short)plVar46[7];
                    *(short *)((longlong)plVar46 + 0x3a) =
                         sVar19 * *(short *)((longlong)plVar46 + 0x3a);
                    *(short *)((longlong)plVar46 + 0x3c) =
                         sVar20 * *(short *)((longlong)plVar46 + 0x3c);
                    *(short *)((longlong)plVar46 + 0x3e) =
                         sVar21 * *(short *)((longlong)plVar46 + 0x3e);
                    sVar5 = *(short *)((longlong)plVar1 + 0x42);
                    sVar11 = *(short *)((longlong)plVar1 + 0x44);
                    sVar12 = *(short *)((longlong)plVar1 + 0x46);
                    lVar31 = plVar1[9];
                    sVar13 = *(short *)((longlong)plVar1 + 0x4a);
                    sVar14 = *(short *)((longlong)plVar1 + 0x4c);
                    sVar15 = *(short *)((longlong)plVar1 + 0x4e);
                    lVar44 = plVar1[10];
                    sVar16 = *(short *)((longlong)plVar1 + 0x52);
                    sVar17 = *(short *)((longlong)plVar1 + 0x54);
                    sVar18 = *(short *)((longlong)plVar1 + 0x56);
                    lVar30 = plVar1[0xb];
                    sVar19 = *(short *)((longlong)plVar1 + 0x5a);
                    sVar20 = *(short *)((longlong)plVar1 + 0x5c);
                    sVar21 = *(short *)((longlong)plVar1 + 0x5e);
                    *(short *)(plVar46 + 8) = (short)plVar46[8] * (short)plVar1[8];
                    *(short *)((longlong)plVar46 + 0x42) =
                         *(short *)((longlong)plVar46 + 0x42) * sVar5;
                    *(short *)((longlong)plVar46 + 0x44) =
                         *(short *)((longlong)plVar46 + 0x44) * sVar11;
                    *(short *)((longlong)plVar46 + 0x46) =
                         *(short *)((longlong)plVar46 + 0x46) * sVar12;
                    *(short *)(plVar46 + 9) = (short)plVar46[9] * (short)lVar31;
                    *(short *)((longlong)plVar46 + 0x4a) =
                         *(short *)((longlong)plVar46 + 0x4a) * sVar13;
                    *(short *)((longlong)plVar46 + 0x4c) =
                         *(short *)((longlong)plVar46 + 0x4c) * sVar14;
                    *(short *)((longlong)plVar46 + 0x4e) =
                         *(short *)((longlong)plVar46 + 0x4e) * sVar15;
                    *(short *)(plVar46 + 10) = (short)plVar46[10] * (short)lVar44;
                    *(short *)((longlong)plVar46 + 0x52) =
                         *(short *)((longlong)plVar46 + 0x52) * sVar16;
                    *(short *)((longlong)plVar46 + 0x54) =
                         *(short *)((longlong)plVar46 + 0x54) * sVar17;
                    *(short *)((longlong)plVar46 + 0x56) =
                         *(short *)((longlong)plVar46 + 0x56) * sVar18;
                    *(short *)(plVar46 + 0xb) = (short)plVar46[0xb] * (short)lVar30;
                    *(short *)((longlong)plVar46 + 0x5a) =
                         *(short *)((longlong)plVar46 + 0x5a) * sVar19;
                    *(short *)((longlong)plVar46 + 0x5c) =
                         *(short *)((longlong)plVar46 + 0x5c) * sVar20;
                    *(short *)((longlong)plVar46 + 0x5e) =
                         *(short *)((longlong)plVar46 + 0x5e) * sVar21;
                    sVar5 = *(short *)((longlong)plVar1 + 0x62);
                    sVar11 = *(short *)((longlong)plVar1 + 100);
                    sVar12 = *(short *)((longlong)plVar1 + 0x66);
                    lVar31 = plVar1[0xd];
                    sVar13 = *(short *)((longlong)plVar1 + 0x6a);
                    sVar14 = *(short *)((longlong)plVar1 + 0x6c);
                    sVar15 = *(short *)((longlong)plVar1 + 0x6e);
                    lVar44 = plVar1[0xe];
                    sVar16 = *(short *)((longlong)plVar1 + 0x72);
                    sVar17 = *(short *)((longlong)plVar1 + 0x74);
                    sVar18 = *(short *)((longlong)plVar1 + 0x76);
                    lVar30 = plVar1[0xf];
                    sVar19 = *(short *)((longlong)plVar1 + 0x7a);
                    sVar20 = *(short *)((longlong)plVar1 + 0x7c);
                    sVar21 = *(short *)((longlong)plVar1 + 0x7e);
                    *(short *)(plVar46 + 0xc) = (short)plVar46[0xc] * (short)plVar1[0xc];
                    *(short *)((longlong)plVar46 + 0x62) =
                         *(short *)((longlong)plVar46 + 0x62) * sVar5;
                    *(short *)((longlong)plVar46 + 100) =
                         *(short *)((longlong)plVar46 + 100) * sVar11;
                    *(short *)((longlong)plVar46 + 0x66) =
                         *(short *)((longlong)plVar46 + 0x66) * sVar12;
                    *(short *)(plVar46 + 0xd) = (short)plVar46[0xd] * (short)lVar31;
                    *(short *)((longlong)plVar46 + 0x6a) =
                         *(short *)((longlong)plVar46 + 0x6a) * sVar13;
                    *(short *)((longlong)plVar46 + 0x6c) =
                         *(short *)((longlong)plVar46 + 0x6c) * sVar14;
                    *(short *)((longlong)plVar46 + 0x6e) =
                         *(short *)((longlong)plVar46 + 0x6e) * sVar15;
                    *(short *)(plVar46 + 0xe) = (short)plVar46[0xe] * (short)lVar44;
                    *(short *)((longlong)plVar46 + 0x72) =
                         *(short *)((longlong)plVar46 + 0x72) * sVar16;
                    *(short *)((longlong)plVar46 + 0x74) =
                         *(short *)((longlong)plVar46 + 0x74) * sVar17;
                    *(short *)((longlong)plVar46 + 0x76) =
                         *(short *)((longlong)plVar46 + 0x76) * sVar18;
                    *(short *)(plVar46 + 0xf) = (short)plVar46[0xf] * (short)lVar30;
                    *(short *)((longlong)plVar46 + 0x7a) =
                         *(short *)((longlong)plVar46 + 0x7a) * sVar19;
                    *(short *)((longlong)plVar46 + 0x7c) =
                         *(short *)((longlong)plVar46 + 0x7c) * sVar20;
                    *(short *)((longlong)plVar46 + 0x7e) =
                         *(short *)((longlong)plVar46 + 0x7e) * sVar21;
                  }
                  (*(code *)local_1d0[0x90e])
                            ((longlong)(int)(iVar25 * 8 * puVar54[(longlong)plVar41 * 0x18 + 9]) +
                             *(longlong *)(puVar54 + (longlong)plVar41 * 0x18 + 0xc) + uVar56 * 8);
                  uVar56 = uVar56 + 1;
                } while (uVar56 != uVar36);
                iVar25 = iVar25 + 1;
              } while (iVar25 != (uint)local_198);
              puVar52 = (uint *)*local_1d0;
              plVar41 = local_188;
              puVar54 = local_1b0;
            }
            plVar41 = (longlong *)((longlong)plVar41 + 1);
          } while ((longlong)plVar41 < (longlong)(int)puVar52[2]);
        }
      }
      else {
        iVar25 = bad_dht_header(plVar42);
        if (iVar25 != 0) goto LAB_140486f94;
        puVar52 = (uint *)*plVar42;
      }
      plVar29 = local_1d0;
      uVar36 = puVar52[2];
      lVar31 = (longlong)(int)uVar36;
      uVar26 = (2 < lVar31) + 1 + (uint)(2 < lVar31);
      if (param_5 != 0) {
        uVar26 = param_5;
      }
      if (lVar31 == 3) {
        uVar9 = (uint3)(param_5 >> 8);
        uVar56 = CONCAT71((uint7)uVar9,1);
        if ((int)local_1d0[0x90a] != 3) {
          if (*(int *)((longlong)local_1d0 + 0x484c) == 0) {
            uVar56 = (ulonglong)CONCAT31(uVar9,(int)local_1d0[0x909] == 0);
          }
          else {
            uVar56 = 0;
          }
        }
      }
      else {
        uVar56 = 0;
      }
      uVar35 = 1;
      if ((uVar56 & 1) != 0) {
        uVar35 = uVar36;
      }
      if (2 < (int)uVar26) {
        uVar35 = uVar36;
      }
      if (uVar36 != 3) {
        uVar35 = uVar36;
      }
      if ((int)uVar35 < 1) {
        if ((int)uVar36 < 1) goto LAB_14048945f;
        pvVar32 = (void *)0x0;
        lVar44 = 0;
        do {
          pvVar6 = *(void **)((longlong)plVar29 + lVar44 + 0x46d8);
          if (pvVar6 != (void *)0x0) {
            free(pvVar6);
            puVar2 = (undefined8 *)((longlong)plVar29 + lVar44 + 0x46d0);
            *puVar2 = 0;
            puVar2[1] = 0;
          }
          pvVar6 = *(void **)((longlong)plVar29 + lVar44 + 0x46e0);
          if (pvVar6 != (void *)0x0) {
            free(pvVar6);
            *(undefined8 *)((longlong)plVar29 + lVar44 + 0x46e0) = 0;
            *(undefined8 *)((longlong)plVar29 + lVar44 + 0x46f0) = 0;
          }
          pvVar6 = *(void **)((longlong)plVar29 + lVar44 + 0x46e8);
          if (pvVar6 != (void *)0x0) {
            free(pvVar6);
            *(undefined8 *)((longlong)plVar29 + lVar44 + 0x46e8) = 0;
          }
          lVar44 = lVar44 + 0x60;
        } while (lVar31 * 0x60 != lVar44);
      }
      else {
        local_188 = (longlong *)CONCAT44(local_188._4_4_,(int)uVar56);
        local_198 = (longlong *)CONCAT44(local_198._4_4_,uVar26);
        local_78 = (undefined1  [16])0x0;
        local_88 = (undefined1  [16])0x0;
        local_1b0 = (uint *)(ulonglong)uVar35;
        uVar36 = *puVar52;
        lVar31 = (longlong)local_1b0 * 0x30;
        lVar44 = 0;
        do {
          pvVar32 = malloc((ulonglong)(uVar36 + 3));
          plVar42 = local_198;
          plVar29 = local_1d0;
          *(void **)((longlong)local_1d0 + lVar44 * 2 + 0x46e8) = pvVar32;
          if (pvVar32 == (void *)0x0) {
            uVar36 = puVar52[2];
            if (0 < (longlong)(int)uVar36) {
              lVar31 = 0;
              do {
                pvVar32 = *(void **)((longlong)plVar29 + lVar31 + 0x46d8);
                if (pvVar32 != (void *)0x0) {
                  free(pvVar32);
                  puVar2 = (undefined8 *)((longlong)plVar29 + lVar31 + 0x46d0);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                }
                pvVar32 = *(void **)((longlong)plVar29 + lVar31 + 0x46e0);
                if (pvVar32 != (void *)0x0) {
                  free(pvVar32);
                  *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46e0) = 0;
                  *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46f0) = 0;
                }
                pvVar32 = *(void **)((longlong)plVar29 + lVar31 + 0x46e8);
                if (pvVar32 != (void *)0x0) {
                  free(pvVar32);
                  *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46e8) = 0;
                }
                lVar31 = lVar31 + 0x60;
              } while ((longlong)(int)uVar36 * 0x60 != lVar31);
              goto LAB_140488bcb;
            }
            *(char **)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x220) =
                 "outofmem";
            pvVar32 = (void *)0x0;
            goto LAB_140489462;
          }
          uVar56 = (longlong)(int)local_1d0[0x8d1] /
                   (longlong)*(int *)((longlong)local_1d0 + lVar44 * 2 + 0x46a4);
          iVar25 = (int)uVar56;
          *(int *)((longlong)local_130 + lVar44) = iVar25;
          iVar28 = *(int *)((longlong)local_1d0 + 0x468c) /
                   *(int *)((longlong)local_1d0 + lVar44 * 2 + 0x46a8);
          *(int *)((longlong)local_130 + lVar44 + 4) = iVar28;
          *(int *)((longlong)local_130 + lVar44 + 0xc) = iVar28 >> 1;
          uVar36 = *puVar52;
          *(int *)((longlong)local_130 + lVar44 + 8) =
               (int)((ulonglong)((iVar25 + uVar36) - 1) / (uVar56 & 0xffffffff));
          *(undefined4 *)((longlong)local_130 + lVar44 + 0x10) = 0;
          uVar34 = *(undefined8 *)((longlong)local_1d0 + lVar44 * 2 + 0x46d0);
          *(undefined8 *)((longlong)local_148 + lVar44 + 0x10) = uVar34;
          *(undefined8 *)((longlong)local_148 + lVar44 + 8) = uVar34;
          if (iVar25 == 2) {
            pcVar33 = FUN_1404980f0;
            if (iVar28 != 1) {
              if (iVar28 != 2) goto LAB_140488877;
              pcVar33 = (code *)local_1d0[0x910];
            }
          }
          else if (iVar25 == 1) {
            pcVar33 = FUN_1404982e0;
            if (iVar28 == 2) {
              pcVar33 = (code *)&LAB_140497f10;
            }
            if (iVar28 == 1) {
              pcVar33 = FUN_140497f00;
            }
          }
          else {
LAB_140488877:
            pcVar33 = FUN_1404982e0;
          }
          *(code **)((longlong)local_148 + lVar44) = pcVar33;
          lVar44 = lVar44 + 0x30;
        } while (lVar31 != lVar44);
        if ((((int)(uVar36 | (uint)local_198) < 0) ||
            ((((uVar26 = puVar52[1], uVar36 != 0 &&
               ((int)(0x7fffffff / (ulonglong)uVar36) < (int)(uint)local_198)) ||
              (uVar36 = uVar36 * (uint)local_198, (int)(uVar26 | uVar36) < 0)) ||
             ((uVar26 != 0 && ((int)(0x7fffffff / (ulonglong)uVar26) < (int)uVar36)))))) ||
           ((uVar36 * uVar26 == 0x7fffffff ||
            (pvVar32 = malloc((longlong)(int)(uVar36 * uVar26 + 1)), puVar54 = local_1b0,
            pvVar32 == (void *)0x0)))) {
          plVar29 = local_1d0;
          uVar36 = puVar52[2];
          if (0 < (longlong)(int)uVar36) {
            lVar31 = 0;
            do {
              pvVar32 = *(void **)((longlong)plVar29 + lVar31 + 0x46d8);
              if (pvVar32 != (void *)0x0) {
                free(pvVar32);
                puVar2 = (undefined8 *)((longlong)plVar29 + lVar31 + 0x46d0);
                *puVar2 = 0;
                puVar2[1] = 0;
              }
              pvVar32 = *(void **)((longlong)plVar29 + lVar31 + 0x46e0);
              if (pvVar32 != (void *)0x0) {
                free(pvVar32);
                *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46e0) = 0;
                *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46f0) = 0;
              }
              pvVar32 = *(void **)((longlong)plVar29 + lVar31 + 0x46e8);
              if (pvVar32 != (void *)0x0) {
                free(pvVar32);
                *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46e8) = 0;
              }
              lVar31 = lVar31 + 0x60;
            } while ((longlong)(int)uVar36 * 0x60 != lVar31);
          }
LAB_140488bcb:
          lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          pcVar37 = "outofmem";
          goto LAB_140486e57;
        }
        if (uVar26 != 0) {
          local_1b8 = (longlong *)((ulonglong)plVar42 & 0xffffffff);
          local_1c0 = (uint *)(local_1d0 + 0x8d8);
          local_1a8 = (longlong *)((longlong)pvVar32 + 1);
          local_190 = (longlong)pvVar32 + 2;
          local_1a0 = (longlong)pvVar32 + 3;
          plVar29 = (longlong *)0x0;
          uVar36 = 0;
          do {
            local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,uVar36);
            uVar36 = *puVar52;
            piVar50 = local_130 + 4;
            puVar45 = (uint *)0x0;
            puVar52 = local_1c0;
            local_180 = plVar29;
            do {
              iVar25 = piVar50[-1];
              iVar28 = piVar50[-3];
              local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,piVar50[-4]);
              uVar34 = (**(code **)(piVar50 + -10))(*(longlong *)(puVar52 + 10));
              plVar42 = local_1b8;
              plVar29 = local_1d0;
              *(undefined8 *)(local_88 + (longlong)puVar45 * 8) = uVar34;
              piVar50[-1] = iVar25 + 1;
              if (iVar28 <= iVar25 + 1) {
                piVar50[-1] = 0;
                *(longlong *)(piVar50 + -8) = *(longlong *)(piVar50 + -6);
                iVar25 = *piVar50;
                *piVar50 = iVar25 + 1;
                if (iVar25 + 1 < (int)*puVar52) {
                  *(longlong *)(piVar50 + -6) =
                       *(longlong *)(piVar50 + -6) + (longlong)(int)puVar52[1];
                }
              }
              puVar45 = (uint *)((longlong)puVar45 + 1);
              puVar52 = puVar52 + 0x18;
              piVar50 = piVar50 + 0xc;
            } while (puVar54 != puVar45);
            iVar53 = (uint)local_198;
            iVar28 = (int)local_1c8;
            iVar25 = (int)local_180;
            if (2 < (int)(uint)local_198) {
              lVar31 = (ulonglong)((int)local_1c8 * (uint)local_198 * uVar36) + (longlong)pvVar32;
              puVar52 = (uint *)*local_1d0;
              if (puVar52[2] == 3) {
                if ((char)local_188 == '\0') {
LAB_1404890a4:
                  local_1e0 = (uint)local_198;
                  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,*puVar52);
                  (*(code *)local_1d0[0x90f])(lVar31,local_88._0_8_,local_88._8_8_,local_78._0_8_);
                  puVar52 = (uint *)*plVar29;
                }
                else if (*puVar52 != 0) {
                  puVar47 = (undefined1 *)(uVar36 * iVar25 + local_1a0);
                  uVar56 = 0;
                  do {
                    puVar47[-3] = *(undefined1 *)(local_88._0_8_ + uVar56);
                    puVar47[-2] = *(undefined1 *)(local_88._8_8_ + uVar56);
                    puVar47[-1] = *(undefined1 *)(local_78._0_8_ + uVar56);
                    *puVar47 = 0xff;
                    uVar56 = uVar56 + 1;
                    puVar47 = puVar47 + (longlong)local_1b8;
                  } while (uVar56 < *puVar52);
                }
              }
              else if (puVar52[2] == 4) {
                if (*(int *)((longlong)local_1d0 + 0x484c) == 2) {
                  local_1e0 = (uint)local_198;
                  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,*puVar52);
                  (*(code *)local_1d0[0x90f])(lVar31,local_88._0_8_,local_88._8_8_,local_78._0_8_);
                  puVar52 = (uint *)*plVar29;
                  if (*puVar52 != 0) {
                    pbVar48 = (byte *)((ulonglong)(uVar36 * iVar25) + local_190);
                    uVar56 = 0;
                    do {
                      bVar23 = *(byte *)(local_78._8_8_ + uVar56);
                      iVar28 = (pbVar48[-2] ^ 0xff) * (uint)bVar23;
                      pbVar48[-2] = (byte)((iVar28 + 0x80U >> 8) + iVar28 + 0x80 >> 8);
                      iVar28 = (pbVar48[-1] ^ 0xff) * (uint)bVar23;
                      pbVar48[-1] = (byte)((iVar28 + 0x80U >> 8) + iVar28 + 0x80 >> 8);
                      iVar28 = (*pbVar48 ^ 0xff) * (uint)bVar23;
                      *pbVar48 = (byte)((iVar28 + 0x80U >> 8) + iVar28 + 0x80 >> 8);
                      uVar56 = uVar56 + 1;
                      pbVar48 = pbVar48 + (longlong)plVar42;
                    } while (uVar56 < *puVar52);
                    goto LAB_140488c2f;
                  }
                }
                else {
                  if (*(int *)((longlong)local_1d0 + 0x484c) != 0) goto LAB_1404890a4;
                  if (*puVar52 != 0) {
                    puVar47 = (undefined1 *)(uVar36 * iVar25 + local_1a0);
                    uVar56 = 0;
                    do {
                      bVar23 = *(byte *)(local_78._8_8_ + uVar56);
                      iVar57 = (uint)*(byte *)(local_88._0_8_ + uVar56) * (uint)bVar23;
                      puVar47[-3] = (char)((iVar57 + 0x80U >> 8) + iVar57 + 0x80 >> 8);
                      iVar57 = (uint)*(byte *)(local_88._8_8_ + uVar56) * (uint)bVar23;
                      puVar47[-2] = (char)((iVar57 + 0x80U >> 8) + iVar57 + 0x80 >> 8);
                      iVar57 = (uint)*(byte *)(local_78._0_8_ + uVar56) * (uint)bVar23;
                      puVar47[-1] = (char)((iVar57 + 0x80U >> 8) + iVar57 + 0x80 >> 8);
                      *puVar47 = 0xff;
                      uVar56 = uVar56 + 1;
                      puVar47 = puVar47 + (longlong)local_1b8;
                    } while (uVar56 < *puVar52);
                  }
                }
              }
              else if (*puVar52 != 0) {
                puVar47 = (undefined1 *)(uVar36 * iVar25 + local_1a0);
                uVar56 = 0;
                do {
                  uVar4 = *(undefined1 *)(local_88._0_8_ + uVar56);
                  puVar47[-1] = uVar4;
                  puVar47[-2] = uVar4;
                  puVar47[-3] = uVar4;
                  *puVar47 = 0xff;
                  uVar56 = uVar56 + 1;
                  puVar47 = puVar47 + (longlong)local_1b8;
                } while (uVar56 < *puVar52);
              }
              goto LAB_140488c33;
            }
            puVar52 = (uint *)*local_1d0;
            if ((char)local_188 == '\0') {
              if (puVar52[2] == 4) {
                if (*(int *)((longlong)local_1d0 + 0x484c) == 2) {
                  if (*puVar52 != 0) {
                    puVar47 = (undefined1 *)((ulonglong)(uVar36 * iVar25) + (longlong)local_1a8);
                    uVar56 = 0;
                    do {
                      iVar28 = (*(byte *)(local_88._0_8_ + uVar56) ^ 0xff) *
                               (uint)*(byte *)(local_78._8_8_ + uVar56);
                      puVar47[-1] = (char)((iVar28 + 0x80U >> 8) + iVar28 + 0x80 >> 8);
                      *puVar47 = 0xff;
                      uVar56 = uVar56 + 1;
                      puVar47 = puVar47 + (longlong)local_1b8;
                    } while (uVar56 < *puVar52);
                    goto LAB_140488c2f;
                  }
                }
                else {
                  if (*(int *)((longlong)local_1d0 + 0x484c) != 0) goto LAB_14048902f;
                  if (*puVar52 != 0) {
                    puVar47 = (undefined1 *)((ulonglong)(uVar36 * iVar25) + (longlong)local_1a8);
                    uVar56 = 0;
                    do {
                      bVar23 = *(byte *)(local_78._8_8_ + uVar56);
                      iVar58 = (uint)*(byte *)(local_88._0_8_ + uVar56) * (uint)bVar23;
                      iVar57 = (uint)*(byte *)(local_88._8_8_ + uVar56) * (uint)bVar23;
                      iVar51 = (uint)*(byte *)(local_78._0_8_ + uVar56) * (uint)bVar23;
                      puVar47[-1] = (char)(((iVar51 + 0x80U >> 8) + iVar51 + 0x80 >> 8) * 0x1d +
                                           (iVar57 + (iVar57 + 0x80U >> 8) + 0x80 >> 8) * 0x96 +
                                           (iVar58 + (iVar58 + 0x80U >> 8) + 0x80 >> 8) * 0x4d >> 8)
                      ;
                      *puVar47 = 0xff;
                      uVar56 = uVar56 + 1;
                      puVar47 = puVar47 + (longlong)local_1b8;
                    } while (uVar56 < *puVar52);
                  }
                }
              }
              else {
LAB_14048902f:
                if ((uint)local_198 == 1) {
                  if (*puVar52 != 0) {
                    uVar56 = 0;
                    do {
                      *(undefined1 *)((longlong)pvVar32 + uVar56 + uVar36 * iVar25) =
                           *(undefined1 *)(local_88._0_8_ + uVar56);
                      uVar56 = uVar56 + 1;
                    } while (uVar56 < *puVar52);
                  }
                }
                else if (*puVar52 != 0) {
                  uVar56 = 0;
                  do {
                    *(undefined1 *)((longlong)pvVar32 + uVar56 * 2 + (ulonglong)(uVar36 * iVar25)) =
                         *(undefined1 *)(local_88._0_8_ + uVar56);
                    *(undefined1 *)
                     ((longlong)pvVar32 + uVar56 * 2 + (ulonglong)(uVar36 * iVar25) + 1) = 0xff;
                    uVar56 = uVar56 + 1;
                  } while (uVar56 < *puVar52);
                }
              }
            }
            else {
              if ((uint)local_198 == 1) {
                if (*puVar52 != 0) {
                  uVar56 = 0;
                  do {
                    bVar23 = *(byte *)(local_78._0_8_ + uVar56);
                    *(char *)((longlong)pvVar32 + uVar56 + uVar36 * iVar25) =
                         (char)((uint)bVar23 * 2 + ((uint)bVar23 + (uint)bVar23 * 8) * 3 +
                                (uint)*(byte *)(local_88._8_8_ + uVar56) * 0x96 +
                                (uint)*(byte *)(local_88._0_8_ + uVar56) * 0x4d >> 8);
                    uVar56 = uVar56 + 1;
                  } while (uVar56 < *puVar52);
                }
              }
              else if (*puVar52 != 0) {
                uVar56 = 0;
                do {
                  bVar23 = *(byte *)(local_78._0_8_ + uVar56);
                  *(char *)((longlong)pvVar32 + uVar56 * 2 + (ulonglong)(uVar36 * iVar25)) =
                       (char)((uint)bVar23 * 2 + ((uint)bVar23 + (uint)bVar23 * 8) * 3 +
                              (uint)*(byte *)(local_88._8_8_ + uVar56) * 0x96 +
                              (uint)*(byte *)(local_88._0_8_ + uVar56) * 0x4d >> 8);
                  *(undefined1 *)((longlong)pvVar32 + uVar56 * 2 + (ulonglong)(uVar36 * iVar25) + 1)
                       = 0xff;
                  uVar56 = uVar56 + 1;
                } while (uVar56 < *puVar52);
              }
LAB_140488c2f:
              iVar28 = (int)local_1c8;
            }
LAB_140488c33:
            uVar36 = iVar28 + 1;
            plVar29 = (longlong *)(ulonglong)(uint)(iVar25 + iVar53);
          } while (uVar36 < puVar52[1]);
        }
        piVar50 = local_150;
        plVar29 = local_1d0;
        uVar36 = puVar52[2];
        if (0 < (longlong)(int)uVar36) {
          lVar31 = 0;
          do {
            pvVar6 = *(void **)((longlong)plVar29 + lVar31 + 0x46d8);
            if (pvVar6 != (void *)0x0) {
              free(pvVar6);
              puVar2 = (undefined8 *)((longlong)plVar29 + lVar31 + 0x46d0);
              *puVar2 = 0;
              puVar2[1] = 0;
            }
            pvVar6 = *(void **)((longlong)plVar29 + lVar31 + 0x46e0);
            if (pvVar6 != (void *)0x0) {
              free(pvVar6);
              *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46e0) = 0;
              *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46f0) = 0;
            }
            pvVar6 = *(void **)((longlong)plVar29 + lVar31 + 0x46e8);
            if (pvVar6 != (void *)0x0) {
              free(pvVar6);
              *(undefined8 *)((longlong)plVar29 + lVar31 + 0x46e8) = 0;
            }
            lVar31 = lVar31 + 0x60;
          } while ((longlong)(int)uVar36 * 0x60 != lVar31);
          puVar52 = (uint *)*plVar29;
        }
        *local_160 = *puVar52;
        *local_158 = puVar52[1];
        if (piVar50 != (int *)0x0) {
          *piVar50 = (uint)(2 < (int)puVar52[2]) * 2 + 1;
        }
      }
    }
  }
  else {
    lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar37 = "bad req_comp";
LAB_140486e57:
    *(char **)(lVar31 + 0x220) = pcVar37;
LAB_14048945f:
    pvVar32 = (void *)0x0;
  }
LAB_140489462:
  free(plVar29);
LAB_14048946b:
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_208)) {
    return pvVar32;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_208);
LAB_14048836a:
  bVar7 = false;
LAB_14048836c:
  if (!bVar7) goto LAB_1404893ca;
LAB_140488374:
  bVar23 = *(byte *)(local_1d0 + 0x905);
LAB_140488380:
  puVar54 = local_1b0;
  plVar42 = local_1d0;
  if (bVar23 == 0xff) {
    while (lVar31 = *plVar42, *(longlong *)(lVar31 + 0x10) == 0) {
LAB_14048850f:
      if (*(ulonglong *)(lVar31 + 200) <= *(ulonglong *)(lVar31 + 0xc0)) goto LAB_140488523;
LAB_140488397:
      lVar31 = *plVar42;
      pcVar37 = *(char **)(lVar31 + 0xc0);
      if (pcVar37 < *(char **)(lVar31 + 200)) {
        *(char **)(lVar31 + 0xc0) = pcVar37 + 1;
        cVar24 = *pcVar37;
      }
      else if (*(int *)(lVar31 + 0x30) == 0) {
        cVar24 = '\0';
      }
      else {
        pcVar37 = (char *)(lVar31 + 0x38);
        iVar25 = (**(code **)(lVar31 + 0x10))
                           (*(undefined8 *)(lVar31 + 0x28),pcVar37,*(undefined4 *)(lVar31 + 0x34));
        *(int *)(lVar31 + 0xb8) =
             *(int *)(lVar31 + 0xb8) + (*(int *)(lVar31 + 0xc0) - *(int *)(lVar31 + 0xd0));
        if (iVar25 == 0) {
          *(undefined4 *)(lVar31 + 0x30) = 0;
          pcVar40 = (char *)(lVar31 + 0x39);
          *(undefined1 *)(lVar31 + 0x38) = 0;
          cVar24 = '\0';
        }
        else {
          pcVar40 = pcVar37 + iVar25;
          cVar24 = *pcVar37;
        }
        *(char **)(lVar31 + 200) = pcVar40;
        *(longlong *)(lVar31 + 0xc0) = lVar31 + 0x39;
      }
      while (cVar24 == -1) {
        lVar31 = *plVar42;
        if (*(longlong *)(lVar31 + 0x10) == 0) {
LAB_14048845f:
          if (*(ulonglong *)(lVar31 + 200) <= *(ulonglong *)(lVar31 + 0xc0)) goto LAB_140488523;
        }
        else {
          iVar25 = (**(code **)(lVar31 + 0x20))(*(undefined8 *)(lVar31 + 0x28));
          if (iVar25 != 0) {
            if (*(int *)(lVar31 + 0x30) != 0) goto LAB_14048845f;
            goto LAB_140488523;
          }
        }
        lVar31 = *plVar42;
        pcVar37 = *(char **)(lVar31 + 0xc0);
        if (pcVar37 < *(char **)(lVar31 + 200)) {
          *(char **)(lVar31 + 0xc0) = pcVar37 + 1;
          cVar24 = *pcVar37;
        }
        else if (*(int *)(lVar31 + 0x30) == 0) {
          cVar24 = '\0';
        }
        else {
          pcVar37 = (char *)(lVar31 + 0x38);
          iVar25 = (**(code **)(lVar31 + 0x10))
                             (*(undefined8 *)(lVar31 + 0x28),pcVar37,*(undefined4 *)(lVar31 + 0x34))
          ;
          *(int *)(lVar31 + 0xb8) =
               *(int *)(lVar31 + 0xb8) + (*(int *)(lVar31 + 0xc0) - *(int *)(lVar31 + 0xd0));
          if (iVar25 == 0) {
            *(undefined4 *)(lVar31 + 0x30) = 0;
            pcVar40 = (char *)(lVar31 + 0x39);
            *(undefined1 *)(lVar31 + 0x38) = 0;
            cVar24 = '\0';
          }
          else {
            pcVar40 = pcVar37 + iVar25;
            cVar24 = *pcVar37;
          }
          *(char **)(lVar31 + 200) = pcVar40;
          *(longlong *)(lVar31 + 0xc0) = lVar31 + 0x39;
        }
        if ((byte)(cVar24 - 1U) < 0xfe) goto LAB_140488525;
      }
    }
    iVar25 = (**(code **)(lVar31 + 0x20))(*(undefined8 *)(lVar31 + 0x28));
    if (iVar25 == 0) goto LAB_140488397;
    if (*(int *)(lVar31 + 0x30) != 0) goto LAB_14048850f;
LAB_140488523:
    cVar24 = -1;
LAB_140488525:
    *(char *)(plVar42 + 0x905) = cVar24;
  }
  bVar23 = FUN_1404963a0(plVar42);
  if ((bVar23 & 0xf8) == 0xd0) {
LAB_140486f94:
    bVar23 = FUN_1404963a0();
  }
  goto LAB_140486f41;
LAB_14048939b:
  *(int *)((longlong)local_1d0 + 0x4824) = iVar28 + -0x10;
LAB_1404893a9:
  pcVar37 = "bad huffman code";
LAB_1404893b0:
  *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x220)
       = pcVar37;
  goto LAB_1404893ca;
}

