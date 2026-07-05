/**
 * Function: https
 * Address:  14096a3d0
 * Signature: void __thiscall https(void * this, undefined8 param_1, undefined8 param_2, undefined4 param_3, longlong * param_4)
 * Body size: 9191 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
https(void *this,undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_2108 [32];
  longlong **local_20e8;
  undefined1 local_20e0;
  int local_20cc;
  char *local_20c8;
  byte *local_20c0;
  char *local_20b8;
  byte *local_20b0;
  longlong local_20a8;
  longlong local_20a0;
  char *local_2098;
  longlong local_2090;
  char *local_2088;
  char *local_2080;
  int local_2078;
  char local_2074;
  longlong local_2070;
  undefined1 local_2068 [16];
  undefined8 *local_2058 [2];
  ulonglong local_2048;
  ulonglong local_2040;
  ulonglong local_2020;
  longlong local_2018;
  undefined8 local_2008;
  undefined2 local_2000;
  int local_1ffc;
  undefined8 local_1ff8;
  longlong lStack_1ff0;
  uint uStack_1fe8;
  longlong local_1fe0;
  longlong *local_1fd8;
  undefined1 local_1fd0;
  undefined8 local_1028;
  undefined8 local_1020;
  int local_1018;
  undefined4 local_1014;
  undefined8 local_1010;
  undefined1 local_1008;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_2108;
  local_1fd8 = param_4;
  local_1028 = 0x7fffffff;
  local_1020 = 0;
  iVar2 = (**(code **)(*param_4 + 0x88))(param_4);
  local_1014 = 0;
  local_1018 = iVar2;
  local_1010 = (**(code **)(*param_4 + 0x10))(param_4);
  local_68 = (undefined1  [16])0x0;
  local_58 = 0;
  local_50 = (**(code **)*param_4)(param_4);
  local_1fd0 = 0;
  local_1008 = 0;
  if ((0x12 < iVar2 - 0x3a4U) || ((0x60011U >> (iVar2 - 0x3a4U & 0x1f) & 1) == 0)) {
    if (iVar2 == 0xfde9) {
      local_1014 = 1;
      goto LAB_14096a4c6;
    }
    if (iVar2 != 0x551) goto LAB_14096a4c6;
  }
  local_1014 = 2;
LAB_14096a4c6:
  local_20e8 = &local_1fd8;
  local_20e0 = 0xff;
  FUN_1408c6740(local_2058,param_1,param_2,param_3);
  if (local_2020 < local_2048) {
    local_20c8 = (char *)((longlong)this + 0x904);
    local_20a0 = (longlong)this + 0x8f0;
    local_2080 = (char *)((longlong)this + 0x8f4);
    local_2088 = (char *)((longlong)this + 0x8e4);
    local_20a8 = (longlong)this + 0x4b8;
    local_20b0 = (byte *)((longlong)this + 0x91c);
    local_20b8 = (char *)((longlong)this + 0x94);
    local_2098 = (char *)((longlong)this + 0x84);
    local_20c0 = (byte *)((longlong)this + 0x8d4);
    local_2090 = (longlong)this + 0xa0;
    local_20cc = 2;
LAB_14096a5d0:
    do {
      iVar2 = local_1ffc;
      puVar12 = local_2058[0];
      uVar11 = (undefined1)local_1ffc;
      iVar3 = local_1ffc;
      switch(local_1ffc) {
      case 1:
      case 8:
        uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
        uVar13 = local_2058[0][0x3ef];
        if (uVar16 == uVar13 - 1) {
LAB_14096abfa:
          lVar17 = uVar16 + 1;
        }
        else {
          if (uVar16 < uVar13) goto LAB_14096ac07;
          lVar8 = local_2058[0][0x3ee];
          lVar17 = uVar16 + 1;
          if ((0 < lVar8) && (3999 < (lVar17 - uVar13) + lVar8)) {
            (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                      ((longlong *)*local_2058[0],lVar8,local_2058[0] + 0x1fa);
            uVar13 = puVar12[0x3ef];
            puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
            puVar12[0x3ee] = 0;
            lVar8 = 0;
          }
          if (lVar8 + (uVar16 - uVar13) + 1 < 4000) {
            for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
              lVar8 = puVar12[0x3ee];
              puVar12[0x3ee] = lVar8 + 1;
              *(undefined1 *)((longlong)puVar12 + lVar8 + 0xfd0) = uVar11;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar12 + 0x60))
                      ((longlong *)*puVar12,(uVar16 - uVar13) + 1,iVar2);
          }
        }
LAB_14096ac00:
        puVar12[0x3ef] = lVar17;
        goto LAB_14096ac07;
      case 2:
      case 4:
        if (local_1ff8._4_4_ == 0x22) {
          if ((*(char *)((longlong)this + 0x914) != '\0') || (*(int *)((longlong)this + 0x910) != 1)
             ) goto LAB_14096ac31;
          local_1ffc = 10;
          FUN_1408c69d0(local_2058);
          *(undefined4 *)((longlong)this + 0x910) = 0;
          *(undefined1 *)((longlong)this + 0x914) = 0;
          goto switchD_14096a5ea_caseD_a;
        }
        iVar3 = 3;
        if (local_2000._1_1_ == '\0') {
          if (local_1ff8._4_4_ == 0x5c) {
            if (*(char *)((longlong)this + 0x1b) == '\x01') {
              uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
              uVar13 = local_2058[0][0x3ef];
              if (uVar16 == uVar13 - 1) {
LAB_14096aa26:
                puVar12[0x3ef] = uVar16 + 1;
              }
              else if (uVar13 <= uVar16) {
                lVar17 = local_2058[0][0x3ee];
                if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                  (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                            ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                  uVar13 = puVar12[0x3ef];
                  puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                  puVar12[0x3ee] = 0;
                  lVar17 = 0;
                }
                if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                  for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                    lVar17 = puVar12[0x3ee];
                    puVar12[0x3ee] = lVar17 + 1;
                    *(undefined1 *)((longlong)puVar12 + lVar17 + 0xfd0) = uVar11;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*puVar12 + 0x60))
                            ((longlong *)*puVar12,(uVar16 - uVar13) + 1,iVar2);
                }
                goto LAB_14096aa26;
              }
              puVar12 = local_2058[0];
              local_1ffc = 5;
              *(undefined4 *)((longlong)this + 0x78) = 0;
              if ((ulonglong)uStack_1fe8 == 0x75) {
                *(undefined4 *)((longlong)this + 0x78) = 5;
              }
              else {
                if (-1 < (int)uStack_1fe8) {
                  pcVar5 = (char *)((ulonglong)uStack_1fe8 + *(longlong *)((longlong)this + 0x98));
                  if (*(int *)((longlong)this + 0x90) <= (int)uStack_1fe8) {
                    pcVar5 = local_20b8;
                  }
                  if (*pcVar5 != '\0') goto LAB_14096c385;
                }
                uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
                uVar13 = local_2058[0][0x3ef];
                if (uVar16 == uVar13 - 1) {
LAB_14096bede:
                  puVar12[0x3ef] = uVar16 + 1;
                }
                else if (uVar13 <= uVar16) {
                  lVar17 = local_2058[0][0x3ee];
                  if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                    (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                              ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                    uVar13 = puVar12[0x3ef];
                    puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                    puVar12[0x3ee] = 0;
                    lVar17 = 0;
                  }
                  if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                    for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                      lVar17 = puVar12[0x3ee];
                      puVar12[0x3ee] = lVar17 + 1;
                      *(undefined1 *)((longlong)puVar12 + lVar17 + 0xfd0) = 5;
                    }
                  }
                  else {
                    (**(code **)(*(longlong *)*puVar12 + 0x60))
                              ((longlong *)*puVar12,(uVar16 - uVar13) + 1,5);
                  }
                  goto LAB_14096bede;
                }
                local_1ffc = 0xd;
              }
            }
LAB_14096c385:
            if (local_2020 < local_2048) {
              local_2000 = CONCAT11(local_2000._1_1_,local_2000._1_1_);
              if (local_2000._1_1_ == '\x01') {
                local_2018 = local_2018 + 1;
                local_2008 = (**(code **)(*(longlong *)*local_2058[0] + 0x30))();
              }
              local_2020 = local_2020 + lStack_1ff0;
              local_1ff8 = CONCAT44(uStack_1fe8,local_1ff8._4_4_);
              lStack_1ff0 = local_1fe0;
              FUN_1408c6cd0(local_2058);
              local_20cc = iVar2;
            }
            else {
              local_2000 = 0x100;
              local_1ff8 = 0x2000000020;
              uStack_1fe8 = 0x20;
              local_20cc = iVar2;
            }
            goto switchD_14096a5ea_caseD_a;
          }
          cVar1 = FUN_1408de0e0(local_2058,"https://");
          if ((((cVar1 == '\0') && (cVar1 = FUN_1408de0e0(local_2058,"http://"), cVar1 == '\0')) &&
              (cVar1 = FUN_1408de0e0(local_2058,&DAT_14137ac1e), cVar1 == '\0')) &&
             (((cVar1 = FUN_1408de0e0(local_2058,"git://"), cVar1 == '\0' &&
               (cVar1 = FUN_1408de0e0(local_2058,"svn://"), cVar1 == '\0')) &&
              ((cVar1 = FUN_1408de0e0(local_2058,"ftp://"), cVar1 == '\0' &&
               (cVar1 = FUN_1408de0e0(local_2058), cVar1 == '\0')))))) {
            if ((ulonglong)local_1ff8._4_4_ == 0x3a) {
              *(int *)((longlong)this + 0x910) = *(int *)((longlong)this + 0x910) + 1;
            }
            else if (local_1ff8._4_4_ == 0x40) {
              FUN_14096c9c0(local_2068,local_20a0);
              cVar1 = FUN_14096c7d0(local_20a8,local_2068,local_2058,&local_1fd8);
              if (cVar1 != '\0') {
                local_20cc = local_1ffc;
                FUN_1408c6890(local_2058);
              }
            }
            else if ((longlong)local_1ff8 < 0) {
              *(byte *)((longlong)this + 0x914) = *(byte *)((longlong)this + 0x914) | 1;
            }
            else {
              pbVar6 = (byte *)((ulonglong)local_1ff8._4_4_ + *(longlong *)((longlong)this + 0x920))
              ;
              if (*(int *)((longlong)this + 0x918) <= (int)local_1ff8._4_4_) {
                pbVar6 = local_20b0;
              }
              *(byte *)((longlong)this + 0x914) = *(byte *)((longlong)this + 0x914) | *pbVar6 ^ 1;
            }
            goto switchD_14096a5ea_caseD_a;
          }
          puVar12 = local_2058[0];
          local_20cc = local_1ffc;
          uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
          uVar13 = local_2058[0][0x3ef];
          if (uVar16 != uVar13 - 1) {
            iVar3 = 9;
            if (uVar16 < uVar13) break;
            lVar17 = local_2058[0][0x3ee];
            if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
              (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                        ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
              uVar13 = puVar12[0x3ef];
              puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
              puVar12[0x3ee] = 0;
              lVar17 = 0;
            }
            if ((uVar16 - uVar13) + lVar17 + 1 < 4000) {
              for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                lVar17 = puVar12[0x3ee];
                puVar12[0x3ee] = lVar17 + 1;
                *(char *)((longlong)puVar12 + lVar17 + 0xfd0) = (char)local_20cc;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar12 + 0x60))
                        ((longlong *)*puVar12,(uVar16 - uVar13) + 1,local_20cc);
            }
          }
          puVar12[0x3ef] = uVar16 + 1;
          iVar3 = 9;
        }
        break;
      case 3:
        if ((char)local_2000 == '\x01') {
          uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
          uVar13 = local_2058[0][0x3ef];
          if (uVar16 != uVar13 - 1) {
            if (uVar13 <= uVar16) {
              lVar8 = local_2058[0][0x3ee];
              lVar17 = uVar16 + 1;
              if ((0 < lVar8) && (3999 < (lVar17 - uVar13) + lVar8)) {
                (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                          ((longlong *)*local_2058[0],lVar8,local_2058[0] + 0x1fa);
                uVar13 = puVar12[0x3ef];
                puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                puVar12[0x3ee] = 0;
                lVar8 = 0;
              }
              if (lVar8 + (uVar16 - uVar13) + 1 < 4000) {
                for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                  lVar8 = puVar12[0x3ee];
                  puVar12[0x3ee] = lVar8 + 1;
                  *(undefined1 *)((longlong)puVar12 + lVar8 + 0xfd0) = 3;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar12 + 0x60))
                          ((longlong *)*puVar12,(uVar16 - uVar13) + 1,3);
              }
              goto LAB_14096ac00;
            }
            goto LAB_14096ac07;
          }
          goto LAB_14096abfa;
        }
        break;
      case 5:
        iVar2 = *(int *)((longlong)this + 0x78);
        *(int *)((longlong)this + 0x78) = iVar2 + -1;
        if (iVar2 < 2) {
          if ((ulonglong)local_1ff8._4_4_ == 0x5c) {
            *(undefined4 *)((longlong)this + 0x78) = 0;
            if ((ulonglong)uStack_1fe8 == 0x75) {
              *(undefined4 *)((longlong)this + 0x78) = 5;
            }
            else {
              if (-1 < (int)uStack_1fe8) {
                pcVar5 = (char *)((ulonglong)uStack_1fe8 + *(longlong *)((longlong)this + 0x98));
                if (*(int *)((longlong)this + 0x90) <= (int)uStack_1fe8) {
                  pcVar5 = local_20b8;
                }
                if (*pcVar5 != '\0') goto LAB_14096c2ab;
              }
              uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
              uVar13 = local_2058[0][0x3ef];
              if (uVar16 == uVar13 - 1) {
LAB_14096b89c:
                puVar12[0x3ef] = uVar16 + 1;
              }
              else if (uVar13 <= uVar16) {
                lVar17 = local_2058[0][0x3ee];
                if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                  (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                            ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                  uVar13 = puVar12[0x3ef];
                  puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                  puVar12[0x3ee] = 0;
                  lVar17 = 0;
                }
                if ((uVar16 - uVar13) + lVar17 + 1 < 4000) {
                  for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                    lVar17 = puVar12[0x3ee];
                    puVar12[0x3ee] = lVar17 + 1;
                    *(undefined1 *)((longlong)puVar12 + lVar17 + 0xfd0) = 5;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*puVar12 + 0x60))
                            ((longlong *)*puVar12,(uVar16 - uVar13) + 1,
                             CONCAT71((int7)(uVar13 >> 8),5));
                }
                goto LAB_14096b89c;
              }
              local_1ffc = 0xd;
            }
LAB_14096c2ab:
            if (local_2020 < local_2048) {
              local_2000 = CONCAT11(local_2000._1_1_,local_2000._1_1_);
              if (local_2000._1_1_ == '\x01') {
                local_2018 = local_2018 + 1;
                local_2008 = (**(code **)(*(longlong *)*local_2058[0] + 0x30))();
              }
              local_2020 = local_2020 + lStack_1ff0;
              local_1ff8 = CONCAT44(uStack_1fe8,local_1ff8._4_4_);
              lStack_1ff0 = local_1fe0;
              FUN_1408c6cd0(local_2058);
            }
            else {
              local_2000 = 0x100;
              local_1ff8 = 0x2000000020;
              uStack_1fe8 = 0x20;
            }
            goto switchD_14096a5ea_caseD_a;
          }
          if (local_1ff8._4_4_ == 0x22) {
            uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
            uVar13 = local_2058[0][0x3ef];
            if (uVar16 == uVar13 - 1) {
LAB_14096a9bc:
              puVar12[0x3ef] = uVar16 + 1;
            }
            else if (uVar13 <= uVar16) {
              lVar17 = local_2058[0][0x3ee];
              if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                          ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                uVar13 = puVar12[0x3ef];
                puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                puVar12[0x3ee] = 0;
                lVar17 = 0;
              }
              if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                  lVar17 = puVar12[0x3ee];
                  puVar12[0x3ee] = lVar17 + 1;
                  *(undefined1 *)((longlong)puVar12 + lVar17 + 0xfd0) = 5;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar12 + 0x60))
                          ((longlong *)*puVar12,(uVar16 - uVar13) + 1,5);
              }
              goto LAB_14096a9bc;
            }
            local_1ffc = local_20cc;
            goto LAB_14096ac31;
          }
          uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
          uVar13 = local_2058[0][0x3ef];
          if (uVar16 == uVar13 - 1) {
LAB_14096b673:
            puVar12[0x3ef] = uVar16 + 1;
          }
          else if (uVar13 <= uVar16) {
            lVar17 = local_2058[0][0x3ee];
            if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
              (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                        ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
              uVar13 = puVar12[0x3ef];
              puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
              puVar12[0x3ee] = 0;
              lVar17 = 0;
            }
            if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
              for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                lVar17 = puVar12[0x3ee];
                puVar12[0x3ee] = lVar17 + 1;
                *(undefined1 *)((longlong)puVar12 + lVar17 + 0xfd0) = 5;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar12 + 0x60))
                        ((longlong *)*puVar12,(uVar16 - uVar13) + 1,5);
            }
            goto LAB_14096b673;
          }
          local_1ffc = local_20cc;
joined_r0x00014096ae22:
          iVar3 = 3;
          if (local_2000._1_1_ == '\0') goto switchD_14096a5ea_caseD_a;
          break;
        }
        if (-1 < (longlong)local_1ff8) {
          pcVar5 = (char *)((ulonglong)local_1ff8._4_4_ + *(longlong *)((longlong)this + 0x88));
          if (*(int *)((longlong)this + 0x80) <= (int)local_1ff8._4_4_) {
            pcVar5 = local_2098;
          }
          if (*pcVar5 != '\0') goto switchD_14096a5ea_caseD_a;
        }
        uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
        uVar13 = local_2058[0][0x3ef];
        if (uVar16 == uVar13 - 1) goto LAB_14096bb49;
        iVar3 = 0xd;
        if (uVar16 < uVar13) break;
        lVar8 = local_2058[0][0x3ee];
        lVar17 = uVar16 + 1;
        if ((0 < lVar8) && (3999 < (lVar17 - uVar13) + lVar8)) {
          (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                    ((longlong *)*local_2058[0],lVar8,local_2058[0] + 0x1fa);
          uVar13 = puVar12[0x3ef];
          puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
          puVar12[0x3ee] = 0;
          lVar8 = 0;
        }
        if ((uVar16 - uVar13) + lVar8 + 1 < 4000) {
          for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
            lVar8 = puVar12[0x3ee];
            puVar12[0x3ee] = lVar8 + 1;
            *(undefined1 *)((longlong)puVar12 + lVar8 + 0xfd0) = 5;
          }
        }
        else {
          (**(code **)(*(longlong *)*puVar12 + 0x60))
                    ((longlong *)*puVar12,(uVar16 - uVar13) + 1,CONCAT71((int7)(uVar13 >> 8),5));
        }
        goto LAB_14096bb4f;
      case 6:
        if (local_2000._1_1_ == '\x01') {
          uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
          uVar13 = local_2058[0][0x3ef];
          if (uVar16 != uVar13 - 1) {
            if (uVar13 <= uVar16) {
              lVar8 = local_2058[0][0x3ee];
              lVar17 = uVar16 + 1;
              if ((0 < lVar8) && (3999 < (lVar17 - uVar13) + lVar8)) {
                (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                          ((longlong *)*local_2058[0],lVar8,local_2058[0] + 0x1fa);
                uVar13 = puVar12[0x3ef];
                puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                puVar12[0x3ee] = 0;
                lVar8 = 0;
              }
              if (lVar8 + (uVar16 - uVar13) + 1 < 4000) {
                for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                  lVar8 = puVar12[0x3ee];
                  puVar12[0x3ee] = lVar8 + 1;
                  *(undefined1 *)((longlong)puVar12 + lVar8 + 0xfd0) = 6;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar12 + 0x60))
                          ((longlong *)*puVar12,(uVar16 - uVar13) + 1,6);
              }
              goto LAB_14096ac00;
            }
            goto LAB_14096ac07;
          }
          goto LAB_14096abfa;
        }
        break;
      case 7:
        cVar1 = FUN_1408de0e0(local_2058);
        if (cVar1 != '\0') {
          if (local_2020 < local_2048) {
            local_2000 = CONCAT11(local_2000._1_1_,local_2000._1_1_);
            if (local_2000._1_1_ == '\x01') {
              local_2018 = local_2018 + 1;
              local_2008 = (**(code **)(*(longlong *)*local_2058[0] + 0x30))();
            }
            local_2020 = local_2020 + lStack_1ff0;
            local_1ff8 = CONCAT44(uStack_1fe8,local_1ff8._4_4_);
            lStack_1ff0 = local_1fe0;
            FUN_1408c6cd0(local_2058);
          }
          else {
            local_2000 = 0x100;
            local_1ff8 = 0x2000000020;
            uStack_1fe8 = 0x20;
          }
          goto LAB_14096ac31;
        }
      default:
switchD_14096a5ea_caseD_a:
        iVar3 = local_1ffc;
        if (local_1ffc == 0) {
LAB_14096ac4a:
          puVar12 = local_2058[0];
          if ((ulonglong)local_1ff8._4_4_ == 0x22) {
            *(undefined4 *)((longlong)this + 0x910) = 0;
            *(undefined1 *)((longlong)this + 0x914) = 0;
            uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
            uVar13 = local_2058[0][0x3ef];
            if (uVar16 == uVar13 - 1) {
LAB_14096aca8:
              puVar12[0x3ef] = uVar16 + 1;
            }
            else if (uVar13 <= uVar16) {
              lVar17 = local_2058[0][0x3ee];
              if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                          ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                uVar13 = puVar12[0x3ef];
                puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                puVar12[0x3ee] = 0;
                lVar17 = 0;
              }
              if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                  lVar17 = puVar12[0x3ee];
                  puVar12[0x3ee] = lVar17 + 1;
                  *(undefined1 *)((longlong)puVar12 + lVar17 + 0xfd0) = 0;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar12 + 0x60))
                          ((longlong *)*puVar12,(uVar16 - uVar13) + 1,0);
              }
              goto LAB_14096aca8;
            }
            local_1ffc = 2;
            cVar1 = FUN_14096ca20(&local_1fd8);
            iVar2 = local_1ffc;
            puVar12 = local_2058[0];
            if (cVar1 != '\0') {
              uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
              uVar13 = local_2058[0][0x3ef];
              if (uVar16 == uVar13 - 1) {
LAB_14096ae09:
                puVar12[0x3ef] = uVar16 + 1;
              }
              else if (uVar13 <= uVar16) {
                lVar17 = local_2058[0][0x3ee];
                if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                  (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                            ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                  uVar13 = puVar12[0x3ef];
                  puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                  puVar12[0x3ee] = 0;
                  lVar17 = 0;
                }
                if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                  for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                    lVar17 = puVar12[0x3ee];
                    puVar12[0x3ee] = lVar17 + 1;
                    *(char *)((longlong)puVar12 + lVar17 + 0xfd0) = (char)iVar2;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*puVar12 + 0x60))
                            ((longlong *)*puVar12,(uVar16 - uVar13) + 1,iVar2);
                }
                goto LAB_14096ae09;
              }
              local_1ffc = 4;
            }
LAB_14096b900:
            iVar2 = local_1ff8._4_4_;
LAB_14096b907:
            if (9 < iVar2 - 0x30U) goto LAB_14096b950;
            bVar14 = true;
            if ((local_2000 & 1) == 0) {
              if (((uint)local_1ff8 < 0x2e) && ((0x280100003e00U >> (local_1ff8 & 0x3f) & 1) != 0))
              goto LAB_14096b938;
              if (-1 < (int)(uint)local_1ff8) {
                pbVar6 = (byte *)((local_1ff8 & 0xffffffff) + *(longlong *)((longlong)this + 0x8d8))
                ;
                if (*(int *)((longlong)this + 0x8d0) <= (int)(uint)local_1ff8) {
                  pbVar6 = local_20c0;
                }
                bVar9 = *pbVar6;
                iVar3 = tolower(iVar2);
                goto joined_r0x00014096b9bf;
              }
              goto LAB_14096b953;
            }
LAB_14096b938:
            bVar9 = 1;
            iVar3 = tolower(iVar2);
joined_r0x00014096b9bf:
            bVar10 = bVar9;
            if (iVar3 == 0x65) goto LAB_14096b962;
LAB_14096b9d0:
            bVar15 = false;
            bVar9 = bVar10;
            if (iVar2 == 0x2d) goto LAB_14096b9dd;
LAB_14096b9d8:
            bVar9 = bVar10;
            if (iVar2 == 0x2b) goto LAB_14096b9dd;
            if (bVar14) {
              bVar19 = (uint)local_1ff8 - 0x30 < 10;
              iVar3 = tolower((uint)local_1ff8);
              bVar21 = iVar3 == 0x65;
              bVar18 = false;
              goto LAB_14096baac;
            }
            if ((iVar2 != 0x2e) || (9 < (uint)local_1ff8 - 0x30)) goto LAB_14096baa6;
            bVar20 = uStack_1fe8 - 0x30 < 10;
            bVar21 = false;
            bVar18 = false;
            bVar19 = false;
          }
          else {
            if (-1 < (longlong)local_1ff8) {
              pbVar6 = (byte *)((ulonglong)local_1ff8._4_4_ + *(longlong *)((longlong)this + 0x8d8))
              ;
              if (*(int *)((longlong)this + 0x8d0) <= (int)local_1ff8._4_4_) {
                pbVar6 = local_20c0;
              }
              if (*pbVar6 != 1) goto LAB_14096ad2b;
              uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
              uVar13 = local_2058[0][0x3ef];
              if (uVar16 == uVar13 - 1) {
LAB_14096ad1f:
                puVar12[0x3ef] = uVar16 + 1;
              }
              else if (uVar13 <= uVar16) {
                lVar17 = local_2058[0][0x3ee];
                if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                  (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                            ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                  uVar13 = puVar12[0x3ef];
                  puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                  puVar12[0x3ee] = 0;
                  lVar17 = 0;
                }
                if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                  for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                    lVar17 = puVar12[0x3ee];
                    puVar12[0x3ee] = lVar17 + 1;
                    *(undefined1 *)((longlong)puVar12 + lVar17 + 0xfd0) = 0;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*puVar12 + 0x60))
                            ((longlong *)*puVar12,(uVar16 - uVar13) + 1,0);
                }
                goto LAB_14096ad1f;
              }
              local_1ffc = 8;
              goto LAB_14096b900;
            }
LAB_14096ad2b:
            if (*(char *)((longlong)this + 0x1a) != '\x01') {
LAB_14096af2f:
              iVar2 = local_1ff8._4_4_;
              if (-1 < (longlong)(int)local_1ff8._4_4_) {
                iVar2 = *(int *)((longlong)this + 0x900);
                pcVar5 = (char *)((longlong)(int)local_1ff8._4_4_ +
                                 *(longlong *)((longlong)this + 0x908));
                if (iVar2 <= (int)local_1ff8._4_4_) {
                  pcVar5 = local_20c8;
                }
                if (*pcVar5 == '\x01') {
                  local_2074 = *local_20c8;
                  local_2078 = iVar2;
                  local_2070 = thunk_FUN_140b65d30((longlong)iVar2);
                  if (0 < iVar2) {
                    lVar17 = 0;
                    do {
                      *(undefined1 *)(local_2070 + lVar17) =
                           *(undefined1 *)(*(longlong *)((longlong)this + 0x908) + lVar17);
                      lVar17 = lVar17 + 1;
                    } while (lVar17 < local_2078);
                  }
                  cVar1 = FUN_14096c7d0(local_2090,&local_2078,local_2058,&local_1fd8);
                  iVar2 = local_1ffc;
                  puVar12 = local_2058[0];
                  if (cVar1 != '\0') {
                    uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
                    uVar13 = local_2058[0][0x3ef];
                    if (uVar16 == uVar13 - 1) {
LAB_14096b01b:
                      puVar12[0x3ef] = uVar16 + 1;
                    }
                    else if (uVar13 <= uVar16) {
                      lVar17 = local_2058[0][0x3ee];
                      if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                        (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                                  ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                        uVar13 = puVar12[0x3ef];
                        puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                        puVar12[0x3ee] = 0;
                        lVar17 = 0;
                      }
                      if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                        for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                          lVar17 = puVar12[0x3ee];
                          puVar12[0x3ee] = lVar17 + 1;
                          *(char *)((longlong)puVar12 + lVar17 + 0xfd0) = (char)iVar2;
                        }
                      }
                      else {
                        (**(code **)(*(longlong *)*puVar12 + 0x60))
                                  ((longlong *)*puVar12,(uVar16 - uVar13) + 1,iVar2);
                      }
                      goto LAB_14096b01b;
                    }
                    local_1ffc = 0xb;
                  }
                }
                goto LAB_14096b900;
              }
              goto LAB_14096b907;
            }
            cVar1 = FUN_1408de0e0(local_2058);
            iVar2 = local_1ffc;
            puVar12 = local_2058[0];
            if (cVar1 == '\0') {
              if ((*(char *)((longlong)this + 0x1a) != '\x01') ||
                 (cVar1 = FUN_1408de0e0(local_2058), iVar2 = local_1ffc, puVar12 = local_2058[0],
                 cVar1 == '\0')) goto LAB_14096af2f;
              uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
              uVar13 = local_2058[0][0x3ef];
              if (uVar16 == uVar13 - 1) {
LAB_14096af23:
                puVar12[0x3ef] = uVar16 + 1;
              }
              else if (uVar13 <= uVar16) {
                lVar17 = local_2058[0][0x3ee];
                if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                  (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                            ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                  uVar13 = puVar12[0x3ef];
                  puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                  puVar12[0x3ee] = 0;
                  lVar17 = 0;
                }
                if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                  for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                    lVar17 = puVar12[0x3ee];
                    puVar12[0x3ee] = lVar17 + 1;
                    *(char *)((longlong)puVar12 + lVar17 + 0xfd0) = (char)iVar2;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*puVar12 + 0x60))
                            ((longlong *)*puVar12,(uVar16 - uVar13) + 1,iVar2);
                }
                goto LAB_14096af23;
              }
              local_1ffc = 6;
              goto LAB_14096b900;
            }
            uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
            uVar13 = local_2058[0][0x3ef];
            if (uVar16 == uVar13 - 1) {
LAB_14096ad8c:
              puVar12[0x3ef] = uVar16 + 1;
            }
            else if (uVar13 <= uVar16) {
              lVar17 = local_2058[0][0x3ee];
              if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                          ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                uVar13 = puVar12[0x3ef];
                puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                puVar12[0x3ee] = 0;
                lVar17 = 0;
              }
              if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
                for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                  lVar17 = puVar12[0x3ee];
                  puVar12[0x3ee] = lVar17 + 1;
                  *(char *)((longlong)puVar12 + lVar17 + 0xfd0) = (char)iVar2;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar12 + 0x60))
                          ((longlong *)*puVar12,(uVar16 - uVar13) + 1,iVar2);
              }
              goto LAB_14096ad8c;
            }
            local_1ffc = 7;
            if (local_2020 < local_2048) {
              local_2000 = CONCAT11(local_2000._1_1_,local_2000._1_1_);
              if (local_2000._1_1_ == '\x01') {
                local_2018 = local_2018 + 1;
                local_2008 = (**(code **)(*(longlong *)*local_2058[0] + 0x30))();
              }
              local_2020 = local_2020 + lStack_1ff0;
              local_1ff8 = CONCAT44(uStack_1fe8,local_1ff8._4_4_);
              lStack_1ff0 = local_1fe0;
              FUN_1408c6cd0(local_2058);
              goto LAB_14096b900;
            }
            local_2000 = 0x100;
            local_1ff8 = 0x2000000020;
            uStack_1fe8 = 0x20;
            iVar2 = 0x20;
LAB_14096b950:
            bVar14 = false;
LAB_14096b953:
            bVar9 = 0;
            bVar10 = 0;
            iVar3 = tolower(iVar2);
            if (iVar3 != 0x65) goto LAB_14096b9d0;
LAB_14096b962:
            bVar10 = bVar9;
            if (9 < (uint)local_1ff8 - 0x30) goto LAB_14096b9d0;
            bVar15 = (uStack_1fe8 - 0x2b & 0xfffffffd) == 0 || uStack_1fe8 - 0x30 < 10;
            if (iVar2 != 0x2d) goto LAB_14096b9d8;
LAB_14096b9dd:
            iVar3 = (uint)local_1ff8;
            uVar13 = local_1ff8 & 0xffffffff;
            iVar4 = tolower((uint)local_1ff8);
            if ((iVar4 == 0x65) && (uStack_1fe8 - 0x30 < 10)) {
              bVar18 = true;
            }
            else if ((iVar3 - 9U < 5) || (iVar3 == 0x20)) {
LAB_14096ba18:
              bVar18 = uStack_1fe8 - 0x30 < 10;
            }
            else {
              bVar10 = bVar9;
              if (-1 < iVar3) {
                pbVar6 = (byte *)(uVar13 + *(longlong *)((longlong)this + 0x8d8));
                if (*(int *)((longlong)this + 0x8d0) <= iVar3) {
                  pbVar6 = local_20c0;
                }
                if (*pbVar6 == 1) goto LAB_14096ba18;
              }
LAB_14096baa6:
              bVar18 = false;
              bVar9 = bVar10;
            }
            bVar21 = false;
            bVar19 = false;
            bVar10 = bVar9;
LAB_14096baac:
            bVar20 = false;
          }
          iVar4 = local_1ffc;
          puVar12 = local_2058[0];
          if ((((((bVar10 & 1) != 0 || bVar15) || (bVar18)) || (bVar19)) || ((bVar20 || (bVar21))))
             || ((bool)(bVar14 & (uint)local_1ff8 == 0x2e))) {
            uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
            uVar13 = local_2058[0][0x3ef];
            if (uVar16 != uVar13 - 1) {
              iVar3 = 1;
              if (uVar16 < uVar13) break;
              lVar17 = local_2058[0][0x3ee];
              if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
                (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                          ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
                uVar13 = puVar12[0x3ef];
                puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                puVar12[0x3ee] = 0;
                lVar17 = 0;
              }
              if ((uVar16 - uVar13) + lVar17 + 1 < 4000) {
                for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                  lVar17 = puVar12[0x3ee];
                  puVar12[0x3ee] = lVar17 + 1;
                  *(char *)((longlong)puVar12 + lVar17 + 0xfd0) = (char)iVar4;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar12 + 0x60))
                          ((longlong *)*puVar12,(uVar16 - uVar13) + 1);
              }
            }
            puVar12[0x3ef] = uVar16 + 1;
            iVar3 = 1;
          }
          else {
            iVar3 = local_1ffc;
            if (((local_1ffc == 0) && (4 < iVar2 - 9U)) && (iVar2 != 0x20)) {
              uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
              uVar13 = local_2058[0][0x3ef];
              if (uVar16 == uVar13 - 1) {
LAB_14096bb49:
                lVar17 = uVar16 + 1;
                puVar12 = local_2058[0];
              }
              else {
                iVar3 = 0xd;
                if (uVar16 < uVar13) break;
                lVar8 = local_2058[0][0x3ee];
                lVar17 = uVar16 + 1;
                if ((0 < lVar8) && (3999 < (lVar17 - uVar13) + lVar8)) {
                  (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                            ((longlong *)*local_2058[0],lVar8,local_2058[0] + 0x1fa);
                  uVar13 = puVar12[0x3ef];
                  puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                  puVar12[0x3ee] = 0;
                  lVar8 = 0;
                }
                if ((uVar16 - uVar13) + lVar8 + 1 < 4000) {
                  for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                    lVar8 = puVar12[0x3ee];
                    puVar12[0x3ee] = lVar8 + 1;
                    *(undefined1 *)((longlong)puVar12 + lVar8 + 0xfd0) = 0;
                  }
                }
                else {
                  (**(code **)(*(longlong *)*puVar12 + 0x60))
                            ((longlong *)*puVar12,(uVar16 - uVar13) + 1);
                }
              }
LAB_14096bb4f:
              puVar12[0x3ef] = lVar17;
              iVar3 = 0xd;
            }
          }
        }
        break;
      case 9:
      case 0xc:
        lVar17 = (longlong)(int)local_1ff8._4_4_;
        uVar7 = local_1ff8._4_4_;
        if (lVar17 < 0) {
LAB_14096a752:
          uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
          uVar13 = local_2058[0][0x3ef];
          if (uVar16 == uVar13 - 1) {
LAB_14096a78a:
            puVar12[0x3ef] = uVar16 + 1;
            uVar7 = local_1ff8._4_4_;
          }
          else if (uVar13 <= uVar16) {
            lVar17 = local_2058[0][0x3ee];
            if ((0 < lVar17) && (3999 < ((uVar16 + 1) - uVar13) + lVar17)) {
              (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                        ((longlong *)*local_2058[0],lVar17,local_2058[0] + 0x1fa);
              uVar13 = puVar12[0x3ef];
              puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
              puVar12[0x3ee] = 0;
              lVar17 = 0;
            }
            if (lVar17 + (uVar16 - uVar13) + 1 < 4000) {
              for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                lVar17 = puVar12[0x3ee];
                puVar12[0x3ee] = lVar17 + 1;
                *(undefined1 *)((longlong)puVar12 + lVar17 + 0xfd0) = uVar11;
              }
            }
            else {
              (**(code **)(*(longlong *)*puVar12 + 0x60))
                        ((longlong *)*puVar12,(uVar16 - uVar13) + 1,iVar2);
            }
            goto LAB_14096a78a;
          }
          local_1ffc = local_20cc;
        }
        else {
          pcVar5 = (char *)(*(longlong *)((longlong)this + 0x8f8) + lVar17);
          if (*(int *)((longlong)this + 0x8f0) <= (int)local_1ff8._4_4_) {
            pcVar5 = local_2080;
          }
          if ((local_1ffc == 0xc) && (*pcVar5 == '\0')) goto LAB_14096a752;
          pcVar5 = (char *)(lVar17 + *(longlong *)((longlong)this + 0x8e8));
          if (*(int *)((longlong)this + 0x8e0) <= (int)local_1ff8._4_4_) {
            pcVar5 = local_2088;
          }
          if (*pcVar5 == '\0') goto LAB_14096a752;
        }
        if (uVar7 != 0x22) {
          goto joined_r0x00014096ae22;
        }
LAB_14096ac31:
        FUN_1408c69d0(local_2058);
        goto switchD_14096a5ea_caseD_a;
      case 0xb:
        if (-1 < (longlong)(int)local_1ff8._4_4_) {
          pcVar5 = (char *)((longlong)(int)local_1ff8._4_4_ + *(longlong *)((longlong)this + 0x908))
          ;
          if (*(int *)((longlong)this + 0x900) <= (int)local_1ff8._4_4_) {
            pcVar5 = local_20c8;
          }
          if (*pcVar5 != '\0') goto switchD_14096a5ea_caseD_a;
        }
        uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
        uVar13 = local_2058[0][0x3ef];
        if (uVar16 == uVar13 - 1) goto LAB_14096abfa;
        if (uVar13 <= uVar16) {
          lVar8 = local_2058[0][0x3ee];
          lVar17 = uVar16 + 1;
          if ((0 < lVar8) && (3999 < (lVar17 - uVar13) + lVar8)) {
            (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                      ((longlong *)*local_2058[0],lVar8,local_2058[0] + 0x1fa);
            uVar13 = puVar12[0x3ef];
            puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
            puVar12[0x3ee] = 0;
            lVar8 = 0;
          }
          if (lVar8 + (uVar16 - uVar13) + 1 < 4000) {
            for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
              lVar8 = puVar12[0x3ee];
              puVar12[0x3ee] = lVar8 + 1;
              *(undefined1 *)((longlong)puVar12 + lVar8 + 0xfd0) = 0xb;
            }
          }
          else {
            (**(code **)(*(longlong *)*puVar12 + 0x60))
                      ((longlong *)*puVar12,(uVar16 - uVar13) + 1,0xb);
          }
          goto LAB_14096ac00;
        }
LAB_14096ac07:
        local_1ffc = 0;
        goto LAB_14096ac4a;
      case 0xd:
        if (local_2000._1_1_ == '\x01') {
          uVar16 = (-1 - (ulonglong)(local_2040 < local_2020)) + local_2020;
          uVar13 = local_2058[0][0x3ef];
          if (uVar16 != uVar13 - 1) {
            if (uVar13 <= uVar16) {
              lVar8 = local_2058[0][0x3ee];
              lVar17 = uVar16 + 1;
              if ((0 < lVar8) && (3999 < (lVar17 - uVar13) + lVar8)) {
                (**(code **)(*(longlong *)*local_2058[0] + 0x68))
                          ((longlong *)*local_2058[0],lVar8,local_2058[0] + 0x1fa);
                uVar13 = puVar12[0x3ef];
                puVar12[0x3f0] = puVar12[0x3f0] + puVar12[0x3ee];
                puVar12[0x3ee] = 0;
                lVar8 = 0;
              }
              if (lVar8 + (uVar16 - uVar13) + 1 < 4000) {
                for (; uVar13 <= uVar16; uVar13 = uVar13 + 1) {
                  lVar8 = puVar12[0x3ee];
                  puVar12[0x3ee] = lVar8 + 1;
                  *(undefined1 *)((longlong)puVar12 + lVar8 + 0xfd0) = 0xd;
                }
              }
              else {
                (**(code **)(*(longlong *)*puVar12 + 0x60))
                          ((longlong *)*puVar12,(uVar16 - uVar13) + 1,0xd);
              }
              goto LAB_14096ac00;
            }
            goto LAB_14096ac07;
          }
          goto LAB_14096abfa;
        }
      }
      local_1ffc = iVar3;
      if (local_2020 < local_2048) {
        local_2000 = CONCAT11(local_2000._1_1_,local_2000._1_1_);
        if (local_2000._1_1_ == '\x01') {
          lVar17 = local_2018 + 2;
          local_2018 = local_2018 + 1;
          local_2008 = (**(code **)(*(longlong *)*local_2058[0] + 0x30))
                                 ((longlong *)*local_2058[0],lVar17);
        }
        local_2020 = local_2020 + lStack_1ff0;
        local_1ff8 = CONCAT44(uStack_1fe8,local_1ff8._4_4_);
        lStack_1ff0 = local_1fe0;
        FUN_1408c6cd0(local_2058);
        if (local_2048 <= local_2020) break;
        goto LAB_14096a5d0;
      }
      local_2000 = 0x100;
      local_1ff8 = 0x2000000020;
      uStack_1fe8 = 0x20;
    } while (local_2020 < local_2048);
  }
  FUN_1408c6b70(local_2058);
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_2108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_2108);
}

