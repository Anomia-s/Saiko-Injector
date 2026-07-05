/**
 * Function: end_configuratio_function_block
 * Address:  140a003c0
 * Signature: undefined end_configuratio_function_block(void)
 * Body size: 3311 bytes
 */


void end_configuratio_function_block
               (ulonglong param_1,longlong param_2,int param_3,undefined8 param_4,
               undefined8 *param_5)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char local_1e8 [4];
  char cStack_1e4;
  char cStack_1e3;
  char cStack_1e2;
  char cStack_1e1;
  char cStack_1e0;
  char cStack_1df;
  char cStack_1de;
  char cStack_1dd;
  char cStack_1dc;
  char cStack_1db;
  char cStack_1da;
  char cStack_1d9;
  undefined2 local_1d8;
  char cStack_1d6;
  ulonglong local_e0;
  int local_d8;
  char local_d4 [4];
  longlong local_d0;
  int local_c4;
  undefined8 *local_c0;
  ulonglong local_b8;
  int local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  char local_99;
  uint local_98;
  bool local_93;
  char local_92;
  char local_91;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  local_e0 = param_2;
  local_ac = FUN_140a8c980(param_5,"fold.comment",0);
  local_c4 = FUN_140a8c980(param_5,"fold.preprocessor",0);
  local_a8 = FUN_140a8c980(param_5,"fold.compact",1);
  lVar5 = (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,param_1);
  uVar4 = (**(code **)(*(longlong *)*param_5 + 0x38))((longlong *)*param_5,lVar5);
  lVar7 = param_5[0x1f6];
  if (((longlong)param_1 < lVar7) || ((longlong)param_5[0x1f7] <= (longlong)param_1)) {
    lVar7 = param_1 - 500;
    param_5[0x1f6] = lVar7;
    lVar13 = param_5[0x1f9];
    lVar6 = lVar13 + -4000;
    if ((longlong)(param_1 + 0xdac) <= lVar13) {
      lVar6 = lVar7;
    }
    if (lVar13 < (longlong)(param_1 + 0xdac) || lVar6 < 0) {
      lVar7 = 0;
      if (0 < lVar6) {
        lVar7 = lVar6;
      }
      param_5[0x1f6] = lVar7;
    }
    if (lVar7 + 4000 < lVar13) {
      lVar13 = lVar7 + 4000;
    }
    param_5[0x1f7] = lVar13;
    (**(code **)(*(longlong *)*param_5 + 0x18))
              ((longlong *)*param_5,param_5 + 1,lVar7,lVar13 - lVar7);
    *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
    lVar7 = param_5[0x1f6];
  }
  local_e0 = local_e0 + param_1;
  local_c0 = param_5 + 1;
  cVar15 = *(char *)((longlong)param_5 + (param_1 - lVar7) + 8);
  local_92 = (**(code **)(*(longlong *)*param_5 + 0x20))((longlong *)*param_5,param_1);
  FUN_1408d58e0(&local_d8,7,&DAT_14135fdac,0x80,1);
  local_b8 = 0;
  local_a0 = 0;
  local_a4 = uVar4 & 0xfff;
  local_98 = uVar4 & 0xfff;
  do {
    if (local_e0 <= param_1) {
      if (local_d0 != 0) {
        thunk_FUN_140b68ba8();
      }
      return;
    }
    uVar1 = param_1 + 1;
    lVar7 = param_5[0x1f6];
    if (((longlong)uVar1 < lVar7) || ((longlong)param_5[0x1f7] <= (longlong)uVar1)) {
      lVar7 = param_1 - 499;
      param_5[0x1f6] = lVar7;
      lVar13 = param_5[0x1f9];
      lVar6 = lVar13 + -4000;
      if ((longlong)(param_1 + 0xdad) <= lVar13) {
        lVar6 = lVar7;
      }
      if (lVar13 < (longlong)(param_1 + 0xdad) || lVar6 < 0) {
        if (lVar6 < 1) {
          lVar6 = 0;
        }
        param_5[0x1f6] = lVar6;
        lVar7 = lVar6;
      }
      if (lVar7 + 4000 < lVar13) {
        lVar13 = lVar7 + 4000;
      }
      param_5[0x1f7] = lVar13;
      (**(code **)(*(longlong *)*param_5 + 0x18))
                ((longlong *)*param_5,local_c0,lVar7,lVar13 - lVar7);
      *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
      lVar7 = param_5[0x1f6];
      local_91 = ' ';
      if ((lVar7 <= (longlong)uVar1) && ((longlong)uVar1 < (longlong)param_5[0x1f7]))
      goto LAB_140a006f0;
    }
    else {
LAB_140a006f0:
      local_91 = *(char *)((longlong)local_c0 + (uVar1 - lVar7));
    }
    local_99 = (**(code **)(*(longlong *)*param_5 + 0x20))((longlong *)*param_5,uVar1);
    bVar16 = cVar15 == '\r';
    bVar17 = local_91 != '\n';
    bVar18 = cVar15 == '\n';
    local_93 = bVar18 || bVar17 && bVar16;
    if ((local_ac != 0) && (local_92 == '\x01')) {
      if (param_3 == 1) {
        local_98 = local_98 - (byte)(~local_93 & local_99 != '\x01');
      }
      else {
        local_98 = local_98 + 1;
      }
    }
    if ((local_ac != 0 && (bVar18 || bVar17 && bVar16)) &&
       ((cVar2 = FUN_140a02e40(lVar5,param_5,0), cVar2 != '\0' ||
        (cVar2 = FUN_140a02e40(lVar5,param_5,1), cVar2 != '\0')))) {
      lVar7 = lVar5 + -1;
      cVar2 = FUN_140a02e40(lVar7,param_5,1);
      if (cVar2 == '\0') {
        bVar3 = FUN_140a02e40(lVar5 + 1,param_5,1);
        local_98 = local_98 + bVar3;
      }
      cVar2 = FUN_140a02e40(lVar7,param_5,1);
      if (cVar2 != '\0') {
        bVar3 = FUN_140a02e40(lVar5 + 1,param_5,1);
        local_98 = local_98 - (bVar3 ^ 1);
      }
      cVar2 = FUN_140a02e40(lVar7,param_5,0);
      if (cVar2 == '\0') {
        bVar3 = FUN_140a02e40(lVar5 + 1,param_5,0);
        local_98 = local_98 + bVar3;
      }
      cVar2 = FUN_140a02e40(lVar7,param_5,0);
      if (cVar2 != '\0') {
        bVar3 = FUN_140a02e40(lVar5 + 1,param_5,0);
        local_98 = local_98 - (bVar3 ^ 1);
      }
    }
    if ((local_c4 != 0 && (bVar18 || bVar17 && bVar16)) &&
       (cVar2 = FUN_140a03280(lVar5,param_5), cVar2 != '\0')) {
      cVar2 = FUN_140a03280(lVar5 + -1,param_5);
      if ((cVar2 == '\0') && (cVar2 = FUN_140a03280(lVar5 + 1,param_5), cVar2 != '\0')) {
        local_98 = local_98 + 1;
      }
      else {
        cVar2 = FUN_140a03280(lVar5 + -1,param_5);
        if (cVar2 != '\0') {
          bVar3 = FUN_140a03280(lVar5 + 1,param_5);
          local_98 = local_98 - (bVar3 ^ 1);
        }
      }
    }
    uVar4 = (uint)cVar15;
    uVar12 = local_b8;
    if (param_3 != 3) {
      uVar12 = param_1;
    }
    if (local_92 == '\x03') {
      local_b8 = uVar12;
    }
    if ((param_3 == 3) && (-1 < cVar15)) {
      pcVar8 = (char *)((ulonglong)uVar4 + local_d0);
      if (local_d8 <= (int)uVar4) {
        pcVar8 = local_d4;
      }
      if (*pcVar8 == '\x01') {
        if (-1 < local_91) {
          pcVar8 = (char *)(local_d0 + (ulonglong)(uint)(int)local_91);
          if (local_d8 <= local_91) {
            pcVar8 = local_d4;
          }
          if (*pcVar8 != '\0') goto LAB_140a0098e;
        }
        uVar12 = (param_1 - local_b8) + 1;
        if (0xfe < uVar12) {
          uVar12 = 0xff;
        }
        if (param_1 - local_b8 == -1) {
          uVar12 = 0;
        }
        else {
          lVar7 = param_5[0x1f6];
          uVar11 = 0;
          do {
            lVar13 = uVar11 + local_b8;
            if ((lVar13 < lVar7) || ((longlong)param_5[0x1f7] <= lVar13)) {
              lVar7 = lVar13 + -500;
              param_5[0x1f6] = lVar7;
              lVar6 = param_5[0x1f9];
              lVar9 = lVar6 + -4000;
              if (lVar13 + 0xdac <= lVar6) {
                lVar9 = lVar7;
              }
              if (lVar6 < lVar13 + 0xdac || lVar9 < 0) {
                if (lVar9 < 1) {
                  lVar9 = 0;
                }
                param_5[0x1f6] = lVar9;
                lVar7 = lVar9;
              }
              if (lVar7 + 4000 < lVar6) {
                lVar6 = lVar7 + 4000;
              }
              param_5[0x1f7] = lVar6;
              (**(code **)(*(longlong *)*param_5 + 0x18))
                        ((longlong *)*param_5,local_c0,lVar7,lVar6 - lVar7);
              *(undefined1 *)((longlong)param_5 + (param_5[0x1f7] - param_5[0x1f6]) + 8) = 0;
              lVar7 = param_5[0x1f6];
            }
            iVar14 = toupper((int)*(char *)((longlong)local_c0 + (lVar13 - lVar7)));
            local_1e8[uVar11] = (char)iVar14;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar12);
        }
        local_1e8[uVar12] = '\0';
        if ((((((CONCAT13(cStack_1e2,CONCAT12(cStack_1e3,CONCAT11(cStack_1e4,local_1e8[3]))) ==
                 0x4e4f49 &&
                 CONCAT13(local_1e8[3],CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0])))
                 == 0x49544341) ||
               (cStack_1e4 == '\0' &&
                CONCAT13(local_1e8[3],CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0]))) ==
                0x45534143)) ||
              (iVar14 = CONCAT13(local_1e8[3],
                                 CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0]))),
              iVar14 == 0x524f46 ||
              CONCAT17(cStack_1db,
                       CONCAT16(cStack_1dc,
                                CONCAT15(cStack_1dd,
                                         CONCAT14(cStack_1de,
                                                  CONCAT13(cStack_1df,
                                                           CONCAT12(cStack_1e0,
                                                                    CONCAT11(cStack_1e1,cStack_1e2))
                                                          ))))) == 0x4e4f4954415255 &&
              CONCAT17(cStack_1e1,
                       CONCAT16(cStack_1e2,
                                CONCAT15(cStack_1e3,
                                         CONCAT14(cStack_1e4,
                                                  CONCAT13(local_1e8[3],
                                                           CONCAT12(local_1e8[2],
                                                                    CONCAT11(local_1e8[1],
                                                                             local_1e8[0]))))))) ==
              0x52554749464e4f43)) ||
             (((cStack_1e0 == '\0' &&
                CONCAT17(cStack_1e1,
                         CONCAT16(cStack_1e2,
                                  CONCAT15(cStack_1e3,
                                           CONCAT14(cStack_1e4,
                                                    CONCAT13(local_1e8[3],
                                                             CONCAT12(local_1e8[2],
                                                                      CONCAT11(local_1e8[1],
                                                                               local_1e8[0])))))))
                == 0x4e4f4954434e5546 ||
               (CONCAT17(cStack_1da,
                         CONCAT16(cStack_1db,
                                  CONCAT15(cStack_1dc,
                                           CONCAT14(cStack_1dd,
                                                    CONCAT13(cStack_1de,
                                                             CONCAT12(cStack_1df,
                                                                      CONCAT11(cStack_1e0,cStack_1e1
                                                                              ))))))) ==
                0x4b434f4c425f4e &&
                CONCAT17(cStack_1e1,
                         CONCAT16(cStack_1e2,
                                  CONCAT15(cStack_1e3,
                                           CONCAT14(cStack_1e4,
                                                    CONCAT13(local_1e8[3],
                                                             CONCAT12(local_1e8[2],
                                                                      CONCAT11(local_1e8[1],
                                                                               local_1e8[0])))))))
                == 0x4e4f4954434e5546)) ||
              ((local_1e8[2] == '\0' && CONCAT11(local_1e8[1],local_1e8[0]) == 0x4649 ||
               ((CONCAT17(cStack_1dc,
                          CONCAT16(cStack_1dd,
                                   CONCAT15(cStack_1de,
                                            CONCAT14(cStack_1df,
                                                     CONCAT13(cStack_1e0,
                                                              CONCAT12(cStack_1e1,
                                                                       CONCAT11(cStack_1e2,
                                                                                cStack_1e3))))))) ==
                 0x504554535f4c41 &&
                 CONCAT17(cStack_1e1,
                          CONCAT16(cStack_1e2,
                                   CONCAT15(cStack_1e3,
                                            CONCAT14(cStack_1e4,
                                                     CONCAT13(local_1e8[3],
                                                              CONCAT12(local_1e8[2],
                                                                       CONCAT11(local_1e8[1],
                                                                                local_1e8[0])))))))
                 == 0x5f4c414954494e49 ||
                (CONCAT13(cStack_1e2,CONCAT12(cStack_1e3,CONCAT11(cStack_1e4,local_1e8[3]))) ==
                 0x544145 &&
                 CONCAT13(local_1e8[3],CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0])))
                 == 0x45504552)))))))) ||
            ((cStack_1e0 == '\0' &&
              CONCAT17(cStack_1e1,
                       CONCAT16(cStack_1e2,
                                CONCAT15(cStack_1e3,
                                         CONCAT14(cStack_1e4,
                                                  CONCAT13(local_1e8[3],
                                                           CONCAT12(local_1e8[2],
                                                                    CONCAT11(local_1e8[1],
                                                                             local_1e8[0]))))))) ==
              0x454352554f534552 ||
             (((((cStack_1e4 == '\0' &&
                  CONCAT13(local_1e8[3],CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0])))
                  == 0x50455453 ||
                 (CONCAT13(cStack_1e2,CONCAT12(cStack_1e3,CONCAT11(cStack_1e4,local_1e8[3]))) ==
                  0x544355 &&
                  CONCAT13(local_1e8[3],CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0])))
                  == 0x55525453)) ||
                (CONCAT17(cStack_1de,
                          CONCAT16(cStack_1df,
                                   CONCAT15(cStack_1e0,
                                            CONCAT14(cStack_1e1,
                                                     CONCAT13(cStack_1e2,
                                                              CONCAT12(cStack_1e3,
                                                                       CONCAT11(cStack_1e4,
                                                                                local_1e8[3])))))))
                 == 0x4e4f495449534e &&
                 CONCAT17(cStack_1e1,
                          CONCAT16(cStack_1e2,
                                   CONCAT15(cStack_1e3,
                                            CONCAT14(cStack_1e4,
                                                     CONCAT13(local_1e8[3],
                                                              CONCAT12(local_1e8[2],
                                                                       CONCAT11(local_1e8[1],
                                                                                local_1e8[0])))))))
                 == 0x495449534e415254)) ||
               ((iVar14 == 0x524156 ||
                 cStack_1e4 == '\0' &&
                 CONCAT13(local_1e8[3],CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0])))
                 == 0x45505954 ||
                (CONCAT11(cStack_1df,cStack_1e0) == 0x54 &&
                 CONCAT17(cStack_1e1,
                          CONCAT16(cStack_1e2,
                                   CONCAT15(cStack_1e3,
                                            CONCAT14(cStack_1e4,
                                                     CONCAT13(local_1e8[3],
                                                              CONCAT12(local_1e8[2],
                                                                       CONCAT11(local_1e8[1],
                                                                                local_1e8[0])))))))
                 == 0x55504e495f524156)))) ||
              (CONCAT17(cStack_1de,
                        CONCAT16(cStack_1df,
                                 CONCAT15(cStack_1e0,
                                          CONCAT14(cStack_1e1,
                                                   CONCAT13(cStack_1e2,
                                                            CONCAT12(cStack_1e3,
                                                                     CONCAT11(cStack_1e4,
                                                                              local_1e8[3]))))))) ==
               0x54555054554f5f &&
               CONCAT17(cStack_1e1,
                        CONCAT16(cStack_1e2,
                                 CONCAT15(cStack_1e3,
                                          CONCAT14(cStack_1e4,
                                                   CONCAT13(local_1e8[3],
                                                            CONCAT12(local_1e8[2],
                                                                     CONCAT11(local_1e8[1],
                                                                              local_1e8[0]))))))) ==
               0x5054554f5f524156)))))) ||
           (((CONCAT17(cStack_1de,
                       CONCAT16(cStack_1df,
                                CONCAT15(cStack_1e0,
                                         CONCAT14(cStack_1e1,
                                                  CONCAT13(cStack_1e2,
                                                           CONCAT12(cStack_1e3,
                                                                    CONCAT11(cStack_1e4,local_1e8[3]
                                                                            ))))))) ==
              0x54554f5f4e495f &&
              CONCAT17(cStack_1e1,
                       CONCAT16(cStack_1e2,
                                CONCAT15(cStack_1e3,
                                         CONCAT14(cStack_1e4,
                                                  CONCAT13(local_1e8[3],
                                                           CONCAT12(local_1e8[2],
                                                                    CONCAT11(local_1e8[1],
                                                                             local_1e8[0]))))))) ==
              0x4f5f4e495f524156 ||
             (cStack_1e0 == '\0' &&
              CONCAT17(cStack_1e1,
                       CONCAT16(cStack_1e2,
                                CONCAT15(cStack_1e3,
                                         CONCAT14(cStack_1e4,
                                                  CONCAT13(local_1e8[3],
                                                           CONCAT12(local_1e8[2],
                                                                    CONCAT11(local_1e8[1],
                                                                             local_1e8[0]))))))) ==
              0x504d45545f524156)) ||
            (((CONCAT17(cStack_1dc,
                        CONCAT16(cStack_1dd,
                                 CONCAT15(cStack_1de,
                                          CONCAT14(cStack_1df,
                                                   CONCAT13(cStack_1e0,
                                                            CONCAT12(cStack_1e1,
                                                                     CONCAT11(cStack_1e2,cStack_1e3)
                                                                    )))))) == 0x4c414e52455458 &&
               CONCAT17(cStack_1e1,
                        CONCAT16(cStack_1e2,
                                 CONCAT15(cStack_1e3,
                                          CONCAT14(cStack_1e4,
                                                   CONCAT13(local_1e8[3],
                                                            CONCAT12(local_1e8[2],
                                                                     CONCAT11(local_1e8[1],
                                                                              local_1e8[0]))))))) ==
               0x455458455f524156 ||
              (((CONCAT17(cStack_1de,
                          CONCAT16(cStack_1df,
                                   CONCAT15(cStack_1e0,
                                            CONCAT14(cStack_1e1,
                                                     CONCAT13(cStack_1e2,
                                                              CONCAT12(cStack_1e3,
                                                                       CONCAT11(cStack_1e4,
                                                                                local_1e8[3])))))))
                 == 0x5353454343415f &&
                 CONCAT17(cStack_1e1,
                          CONCAT16(cStack_1e2,
                                   CONCAT15(cStack_1e3,
                                            CONCAT14(cStack_1e4,
                                                     CONCAT13(local_1e8[3],
                                                              CONCAT12(local_1e8[2],
                                                                       CONCAT11(local_1e8[1],
                                                                                local_1e8[0])))))))
                 == 0x454343415f524156 ||
                (CONCAT17(cStack_1de,
                          CONCAT16(cStack_1df,
                                   CONCAT15(cStack_1e0,
                                            CONCAT14(cStack_1e1,
                                                     CONCAT13(cStack_1e2,
                                                              CONCAT12(cStack_1e3,
                                                                       CONCAT11(cStack_1e4,
                                                                                local_1e8[3])))))))
                 == 0x4749464e4f435f &&
                 CONCAT17(cStack_1e1,
                          CONCAT16(cStack_1e2,
                                   CONCAT15(cStack_1e3,
                                            CONCAT14(cStack_1e4,
                                                     CONCAT13(local_1e8[3],
                                                              CONCAT12(local_1e8[2],
                                                                       CONCAT11(local_1e8[1],
                                                                                local_1e8[0])))))))
                 == 0x464e4f435f524156)) ||
               (CONCAT17(cStack_1de,
                         CONCAT16(cStack_1df,
                                  CONCAT15(cStack_1e0,
                                           CONCAT14(cStack_1e1,
                                                    CONCAT13(cStack_1e2,
                                                             CONCAT12(cStack_1e3,
                                                                      CONCAT11(cStack_1e4,
                                                                               local_1e8[3])))))))
                == 0x4c41424f4c475f &&
                CONCAT17(cStack_1e1,
                         CONCAT16(cStack_1e2,
                                  CONCAT15(cStack_1e3,
                                           CONCAT14(cStack_1e4,
                                                    CONCAT13(local_1e8[3],
                                                             CONCAT12(local_1e8[2],
                                                                      CONCAT11(local_1e8[1],
                                                                               local_1e8[0])))))))
                == 0x424f4c475f524156)))) ||
             (CONCAT11(cStack_1e3,cStack_1e4) == 0x45 &&
              CONCAT13(local_1e8[3],CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0]))) ==
              0x4c494857)))))) {
          local_98 = local_98 + 1;
        }
        else {
          if ((CONCAT17(cStack_1de,
                        CONCAT16(cStack_1df,
                                 CONCAT15(cStack_1e0,
                                          CONCAT14(cStack_1e1,
                                                   CONCAT13(cStack_1e2,
                                                            CONCAT12(cStack_1e3,
                                                                     CONCAT11(cStack_1e4,
                                                                              local_1e8[3]))))))) !=
               0x4e4f495443415f ||
               CONCAT17(cStack_1e1,
                        CONCAT16(cStack_1e2,
                                 CONCAT15(cStack_1e3,
                                          CONCAT14(cStack_1e4,
                                                   CONCAT13(local_1e8[3],
                                                            CONCAT12(local_1e8[2],
                                                                     CONCAT11(local_1e8[1],
                                                                              local_1e8[0]))))))) !=
               0x495443415f444e45) &&
             (cStack_1e0 != '\0' ||
              CONCAT17(cStack_1e1,
                       CONCAT16(cStack_1e2,
                                CONCAT15(cStack_1e3,
                                         CONCAT14(cStack_1e4,
                                                  CONCAT13(local_1e8[3],
                                                           CONCAT12(local_1e8[2],
                                                                    CONCAT11(local_1e8[1],
                                                                             local_1e8[0]))))))) !=
              0x455341435f444e45)) {
            cVar2 = (char)((ushort)local_1d8 >> 8);
            auVar19[0] = -((char)local_1d8 == 'N');
            auVar19[1] = -(cVar2 == '\0');
            auVar19[2] = 0xff;
            auVar19[3] = 0xff;
            auVar19[4] = 0xff;
            auVar19[5] = 0xff;
            auVar19[6] = 0xff;
            auVar19[7] = 0xff;
            auVar19[8] = 0xff;
            auVar19[9] = 0xff;
            auVar19[10] = 0xff;
            auVar19[0xb] = 0xff;
            auVar19[0xc] = 0xff;
            auVar19[0xd] = 0xff;
            auVar19[0xe] = 0xff;
            auVar19[0xf] = 0xff;
            auVar21[0] = -(local_1e8[0] == 'E');
            auVar21[1] = -(local_1e8[1] == 'N');
            auVar21[2] = -(local_1e8[2] == 'D');
            auVar21[3] = -(local_1e8[3] == '_');
            auVar21[4] = -(cStack_1e4 == 'C');
            auVar21[5] = -(cStack_1e3 == 'O');
            auVar21[6] = -(cStack_1e2 == 'N');
            auVar21[7] = -(cStack_1e1 == 'F');
            auVar21[8] = -(cStack_1e0 == 'I');
            auVar21[9] = -(cStack_1df == 'G');
            auVar21[10] = -(cStack_1de == 'U');
            auVar21[0xb] = -(cStack_1dd == 'R');
            auVar21[0xc] = -(cStack_1dc == 'A');
            auVar21[0xd] = -(cStack_1db == 'T');
            auVar21[0xe] = -(cStack_1da == 'I');
            auVar21[0xf] = -(cStack_1d9 == 'O');
            auVar21 = auVar21 & auVar19;
            lVar7 = CONCAT17(cStack_1e1,
                             CONCAT16(cStack_1e2,
                                      CONCAT15(cStack_1e3,
                                               CONCAT14(cStack_1e4,
                                                        CONCAT13(local_1e8[3],
                                                                 CONCAT12(local_1e8[2],
                                                                          CONCAT11(local_1e8[1],
                                                                                   local_1e8[0])))))
                                     ));
            if (((lVar7 != 0x524f465f444e45 &&
                  (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar21[0xf] >> 7) << 0xf) != 0xffff) &&
                ((CONCAT17(cStack_1dc,
                           CONCAT16(cStack_1dd,
                                    CONCAT15(cStack_1de,
                                             CONCAT14(cStack_1df,
                                                      CONCAT13(cStack_1e0,
                                                               CONCAT12(cStack_1e1,
                                                                        CONCAT11(cStack_1e2,
                                                                                 cStack_1e3)))))))
                  != 0x4e4f4954434e55 ||
                  CONCAT17(cStack_1e1,
                           CONCAT16(cStack_1e2,
                                    CONCAT15(cStack_1e3,
                                             CONCAT14(cStack_1e4,
                                                      CONCAT13(local_1e8[3],
                                                               CONCAT12(local_1e8[2],
                                                                        CONCAT11(local_1e8[1],
                                                                                 local_1e8[0])))))))
                  != 0x434e55465f444e45 &&
                 (auVar20[0] = -(local_1e8[3] == '_'), auVar20[1] = -(cStack_1e4 == 'F'),
                 auVar20[2] = -(cStack_1e3 == 'U'), auVar20[3] = -(cStack_1e2 == 'N'),
                 auVar20[4] = -(cStack_1e1 == 'C'), auVar20[5] = -(cStack_1e0 == 'T'),
                 auVar20[6] = -(cStack_1df == 'I'), auVar20[7] = -(cStack_1de == 'O'),
                 auVar20[8] = -(cStack_1dd == 'N'), auVar20[9] = -(cStack_1dc == '_'),
                 auVar20[10] = -(cStack_1db == 'B'), auVar20[0xb] = -(cStack_1da == 'L'),
                 auVar20[0xc] = -(cStack_1d9 == 'O'), auVar20[0xd] = -((char)local_1d8 == 'C'),
                 auVar20[0xe] = -(cVar2 == 'K'), auVar20[0xf] = -(cStack_1d6 == '\0'),
                 auVar22[0] = -(local_1e8[0] == 'E'), auVar22[1] = -(local_1e8[1] == 'N'),
                 auVar22[2] = -(local_1e8[2] == 'D'), auVar22[3] = -(local_1e8[3] == '_'),
                 auVar22[4] = -(cStack_1e4 == 'F'), auVar22[5] = -(cStack_1e3 == 'U'),
                 auVar22[6] = -(cStack_1e2 == 'N'), auVar22[7] = -(cStack_1e1 == 'C'),
                 auVar22[8] = -(cStack_1e0 == 'T'), auVar22[9] = -(cStack_1df == 'I'),
                 auVar22[10] = -(cStack_1de == 'O'), auVar22[0xb] = -(cStack_1dd == 'N'),
                 auVar22[0xc] = -(cStack_1dc == '_'), auVar22[0xd] = -(cStack_1db == 'B'),
                 auVar22[0xe] = -(cStack_1da == 'L'), auVar22[0xf] = -(cStack_1d9 == 'O'),
                 auVar22 = auVar22 & auVar20,
                 (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) != 0xffff)))) &&
               ((CONCAT13(cStack_1e2,CONCAT12(cStack_1e3,CONCAT11(cStack_1e4,local_1e8[3]))) !=
                 0x46495f ||
                 CONCAT13(local_1e8[3],CONCAT12(local_1e8[2],CONCAT11(local_1e8[1],local_1e8[0])))
                 != 0x5f444e45 &&
                ((((CONCAT17(cStack_1de,
                             CONCAT16(cStack_1df,
                                      CONCAT15(cStack_1e0,
                                               CONCAT14(cStack_1e1,
                                                        CONCAT13(cStack_1e2,
                                                                 CONCAT12(cStack_1e3,
                                                                          CONCAT11(cStack_1e4,
                                                                                   local_1e8[3])))))
                                     )) != 0x5441455045525f ||
                    CONCAT17(cStack_1e1,
                             CONCAT16(cStack_1e2,
                                      CONCAT15(cStack_1e3,
                                               CONCAT14(cStack_1e4,
                                                        CONCAT13(local_1e8[3],
                                                                 CONCAT12(local_1e8[2],
                                                                          CONCAT11(local_1e8[1],
                                                                                   local_1e8[0])))))
                                     )) != 0x455045525f444e45 &&
                   (CONCAT17(cStack_1dc,
                             CONCAT16(cStack_1dd,
                                      CONCAT15(cStack_1de,
                                               CONCAT14(cStack_1df,
                                                        CONCAT13(cStack_1e0,
                                                                 CONCAT12(cStack_1e1,
                                                                          CONCAT11(cStack_1e2,
                                                                                   cStack_1e3)))))))
                    != 0x454352554f5345 ||
                    CONCAT17(cStack_1e1,
                             CONCAT16(cStack_1e2,
                                      CONCAT15(cStack_1e3,
                                               CONCAT14(cStack_1e4,
                                                        CONCAT13(local_1e8[3],
                                                                 CONCAT12(local_1e8[2],
                                                                          CONCAT11(local_1e8[1],
                                                                                   local_1e8[0])))))
                                     )) != 0x4f5345525f444e45)) &&
                  (cStack_1e0 != '\0' ||
                   CONCAT17(cStack_1e1,
                            CONCAT16(cStack_1e2,
                                     CONCAT15(cStack_1e3,
                                              CONCAT14(cStack_1e4,
                                                       CONCAT13(local_1e8[3],
                                                                CONCAT12(local_1e8[2],
                                                                         CONCAT11(local_1e8[1],
                                                                                  local_1e8[0]))))))
                           ) != 0x504554535f444e45)) &&
                 (((CONCAT17(cStack_1de,
                             CONCAT16(cStack_1df,
                                      CONCAT15(cStack_1e0,
                                               CONCAT14(cStack_1e1,
                                                        CONCAT13(cStack_1e2,
                                                                 CONCAT12(cStack_1e3,
                                                                          CONCAT11(cStack_1e4,
                                                                                   local_1e8[3])))))
                                     )) != 0x5443555254535f ||
                    CONCAT17(cStack_1e1,
                             CONCAT16(cStack_1e2,
                                      CONCAT15(cStack_1e3,
                                               CONCAT14(cStack_1e4,
                                                        CONCAT13(local_1e8[3],
                                                                 CONCAT12(local_1e8[2],
                                                                          CONCAT11(local_1e8[1],
                                                                                   local_1e8[0])))))
                                     )) != 0x555254535f444e45 &&
                   (CONCAT17(cStack_1da,
                             CONCAT16(cStack_1db,
                                      CONCAT15(cStack_1dc,
                                               CONCAT14(cStack_1dd,
                                                        CONCAT13(cStack_1de,
                                                                 CONCAT12(cStack_1df,
                                                                          CONCAT11(cStack_1e0,
                                                                                   cStack_1e1)))))))
                    != 0x4e4f495449534e ||
                    CONCAT17(cStack_1e1,
                             CONCAT16(cStack_1e2,
                                      CONCAT15(cStack_1e3,
                                               CONCAT14(cStack_1e4,
                                                        CONCAT13(local_1e8[3],
                                                                 CONCAT12(local_1e8[2],
                                                                          CONCAT11(local_1e8[1],
                                                                                   local_1e8[0])))))
                                     )) != 0x4e4152545f444e45)) &&
                  ((lVar7 != 0x5241565f444e45 &&
                    (cStack_1e0 != '\0' ||
                    CONCAT17(cStack_1e1,
                             CONCAT16(cStack_1e2,
                                      CONCAT15(cStack_1e3,
                                               CONCAT14(cStack_1e4,
                                                        CONCAT13(local_1e8[3],
                                                                 CONCAT12(local_1e8[2],
                                                                          CONCAT11(local_1e8[1],
                                                                                   local_1e8[0])))))
                                     )) != 0x455059545f444e45) &&
                   (CONCAT11(cStack_1df,cStack_1e0) != 0x45 ||
                    CONCAT17(cStack_1e1,
                             CONCAT16(cStack_1e2,
                                      CONCAT15(cStack_1e3,
                                               CONCAT14(cStack_1e4,
                                                        CONCAT13(local_1e8[3],
                                                                 CONCAT12(local_1e8[2],
                                                                          CONCAT11(local_1e8[1],
                                                                                   local_1e8[0])))))
                                     )) != 0x4c4948575f444e45)))))))))) goto LAB_140a0098e;
          }
          if ((int)local_98 < 0x402) {
            local_98 = 0x401;
          }
          local_98 = local_98 - 1;
        }
      }
    }
LAB_140a0098e:
    iVar14 = local_a0 + (uint)(uVar4 - 0xe < 0xfffffffb && cVar15 != ' ');
    if (local_93 != false) {
      uVar4 = local_a4 | 0x1000;
      if (iVar14 != 0) {
        uVar4 = local_a4;
      }
      if (local_a8 == 0) {
        uVar4 = local_a4;
      }
      uVar10 = uVar4 | 0x2000;
      if (iVar14 < 1) {
        uVar10 = uVar4;
      }
      if ((int)local_98 <= (int)local_a4) {
        uVar10 = uVar4;
      }
      uVar4 = (**(code **)(*(longlong *)*param_5 + 0x38))((longlong *)*param_5,lVar5);
      if (uVar10 != uVar4) {
        (**(code **)(*(longlong *)*param_5 + 0x40))((longlong *)*param_5,lVar5,uVar10);
      }
      lVar5 = lVar5 + 1;
      iVar14 = 0;
      local_a4 = local_98;
    }
    cVar15 = local_91;
    param_3 = (int)local_92;
    local_a0 = iVar14;
    (**(code **)(*(longlong *)*param_5 + 0x40))((longlong *)*param_5,lVar5);
    local_92 = local_99;
    param_1 = uVar1;
  } while( true );
}

