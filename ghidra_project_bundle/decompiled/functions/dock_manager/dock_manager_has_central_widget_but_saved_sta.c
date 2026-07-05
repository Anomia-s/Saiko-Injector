/**
 * Function: dock_manager_has_central_widget_but_saved_sta
 * Address:  1402766e0
 * Signature: undefined dock_manager_has_central_widget_but_saved_sta(void)
 * Body size: 1430 bytes
 */


ulonglong dock_manager_has_central_widget_but_saved_sta
                    (undefined8 *param_1,longlong param_2,int param_3,char param_4)

{
  int *piVar1;
  QObject *this;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  __int64 _Var6;
  QChar *pQVar7;
  QChar *pQVar8;
  undefined7 extraout_var;
  int *piVar9;
  QXmlStreamAttribute *pQVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int *local_118;
  QChar *local_110;
  char *local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char *local_c8;
  undefined8 local_c0;
  QXmlStreamReader local_b8 [16];
  int *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int *local_88;
  int *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *local_68;
  char local_4a;
  char local_49 [9];
  
  local_49[1] = -2;
  local_49[2] = -1;
  local_49[3] = -1;
  local_49[4] = -1;
  local_49[5] = -1;
  local_49[6] = -1;
  local_49[7] = -1;
  local_49[8] = -1;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return 0;
  }
  local_4a = param_4;
  QXmlStreamReader::QXmlStreamReader(local_b8);
  QXmlStreamReader::readNextStartElement(local_b8);
  QXmlStreamReader::name(local_b8);
  if (local_a8 == (int *)0x17) {
    local_78 = local_a8;
    uStack_70 = (undefined4)uStack_a0;
    uStack_6c = uStack_a0._4_4_;
    local_98 = (int *)0x17;
    uStack_90 = "QtAdvancedDockingSystem";
    bVar2 = QtPrivate::equalStrings(&local_98,&local_78);
    if (bVar2) {
      QXmlStreamReader::attributes(local_b8);
      local_108 = "Version";
      local_100 = 7;
      QXmlStreamAttributes::value((QXmlStreamAttributes *)&local_78,&local_a8,&local_108);
      local_98 = local_a8;
      uStack_90 = (char *)uStack_a0;
      uVar5 = QString::toIntegral_helper(&local_98,local_49,10);
      if ((longlong)(int)uVar5 != uVar5) {
        local_49[0] = '\0';
        uVar5 = 0;
      }
      if (local_78 != (int *)0x0) {
        LOCK();
        *local_78 = *local_78 + -1;
        UNLOCK();
        if (*local_78 == 0) {
          if (local_68 != (int *)0x0) {
            pQVar10 = (QXmlStreamAttribute *)CONCAT44(uStack_6c,uStack_70);
            lVar13 = (longlong)local_68 * 0x68;
            do {
              QXmlStreamAttribute::~QXmlStreamAttribute(pQVar10);
              pQVar10 = pQVar10 + 0x68;
              lVar13 = lVar13 + -0x68;
            } while (lVar13 != 0);
          }
          free(local_78);
        }
      }
      uVar11 = 0;
      if ((1 < (longlong)uVar5) || (local_49[0] == '\0')) goto LAB_140276c57;
      FUN_1405710d0(local_b8,uVar5 & 0xffffffff);
      QXmlStreamReader::attributes(local_b8);
      local_f8 = "UserVersion";
      local_f0 = 0xb;
      QXmlStreamAttributes::value((QXmlStreamAttributes *)&local_78,&local_98,&local_f8);
      piVar1 = local_98;
      if (local_78 != (int *)0x0) {
        LOCK();
        *local_78 = *local_78 + -1;
        UNLOCK();
        if (*local_78 == 0) {
          if (local_68 != (int *)0x0) {
            pQVar10 = (QXmlStreamAttribute *)CONCAT44(uStack_6c,uStack_70);
            lVar13 = (longlong)local_68 * 0x68;
            do {
              QXmlStreamAttribute::~QXmlStreamAttribute(pQVar10);
              pQVar10 = pQVar10 + 0x68;
              lVar13 = lVar13 + -0x68;
            } while (lVar13 != 0);
          }
          free(local_78);
        }
      }
      if (piVar1 != (int *)0x0) {
        QXmlStreamReader::attributes(local_b8);
        local_e8 = "UserVersion";
        local_e0 = 0xb;
        QXmlStreamAttributes::value((QXmlStreamAttributes *)&local_78,&local_a8,&local_e8);
        local_98 = local_a8;
        uStack_90 = (char *)uStack_a0;
        _Var6 = QString::toIntegral_helper(&local_98,local_49,10);
        if ((int)_Var6 != _Var6) {
          local_49[0] = '\0';
          _Var6 = 0;
        }
        if (local_78 != (int *)0x0) {
          LOCK();
          *local_78 = *local_78 + -1;
          UNLOCK();
          if (*local_78 == 0) {
            if (local_68 != (int *)0x0) {
              pQVar10 = (QXmlStreamAttribute *)CONCAT44(uStack_6c,uStack_70);
              lVar13 = (longlong)local_68 * 0x68;
              do {
                QXmlStreamAttribute::~QXmlStreamAttribute(pQVar10);
                pQVar10 = pQVar10 + 0x68;
                lVar13 = lVar13 + -0x68;
              } while (lVar13 != 0);
            }
            free(local_78);
          }
        }
        uVar11 = 0;
        if ((param_3 != (int)_Var6) || (uVar11 = 0, local_49[0] == '\0')) goto LAB_140276c57;
      }
      if (param_1[0x15] == 0) {
LAB_140276a9d:
        iVar12 = 0;
        while( true ) {
          bVar2 = QXmlStreamReader::readNextStartElement(local_b8);
          if (!bVar2) break;
          QXmlStreamReader::name(local_b8);
          if (local_a8 == (int *)0x9) {
            local_78 = local_a8;
            uStack_70 = (undefined4)uStack_a0;
            uStack_6c = uStack_a0._4_4_;
            local_98 = (int *)0x9;
            uStack_90 = "Container";
            bVar3 = QtPrivate::equalStrings(&local_98,&local_78);
            if (bVar3) {
              cVar4 = FUN_1402765f0(param_1,iVar12,local_b8,local_4a);
              if (cVar4 == '\0') break;
              iVar12 = iVar12 + 1;
            }
          }
        }
        uVar11 = CONCAT71(extraout_var,bVar2) & 0xffffffff ^ 1;
        if (local_4a == '\0') {
          for (iVar12 = iVar12 + -1; (longlong)iVar12 < (longlong)param_1[3]; iVar12 = iVar12 + 1) {
            piVar1 = (int *)param_1[1];
            if ((piVar1 == (int *)0x0) || (1 < *piVar1)) {
              FUN_14027a7a0(param_1 + 1,0,0,0);
            }
            lVar14 = (longlong)iVar12 * 0x10;
            lVar13 = *(longlong *)(param_1[2] + lVar14);
            if (((lVar13 != 0) && (*(int *)(lVar13 + 4) != 0)) &&
               (this = *(QObject **)(param_1[2] + lVar14 + 8), this != (QObject *)0x0)) {
              piVar1 = (int *)*param_1;
              piVar9 = (int *)FUN_140570050(this);
              if (piVar1 != piVar9) {
                local_78 = (int *)&local_98;
                local_98 = piVar9;
                FUN_14027bc20(*(longlong *)(piVar1 + 0xc) + 0x38);
              }
              QObject::deleteLater(this);
            }
          }
        }
        goto LAB_140276c57;
      }
      QXmlStreamReader::attributes(local_b8);
      local_c8 = "CentralWidget";
      local_c0 = 0xd;
      QXmlStreamAttributes::value((QXmlStreamAttributes *)&local_78);
      if (local_78 != (int *)0x0) {
        LOCK();
        *local_78 = *local_78 + -1;
        UNLOCK();
        if (*local_78 == 0) {
          if (local_68 != (int *)0x0) {
            pQVar10 = (QXmlStreamAttribute *)CONCAT44(uStack_6c,uStack_70);
            lVar13 = (longlong)local_68 * 0x68;
            do {
              QXmlStreamAttribute::~QXmlStreamAttribute(pQVar10);
              pQVar10 = pQVar10 + 0x68;
              lVar13 = lVar13 + -0x68;
            } while (lVar13 != 0);
          }
          free(local_78);
        }
      }
      if (CONCAT44(uStack_d4,local_d8) == 0) {
        QMessageLogger::QMessageLogger((QMessageLogger *)&local_78,(char *)0x0,0,(char *)0x0);
        QMessageLogger::warning((QMessageLogger *)&local_78);
        QDebug::operator<<((QDebug *)&local_98,
                           "Dock manager has central widget but saved state does not have central widget."
                          );
      }
      else {
        local_98 = (int *)CONCAT44(uStack_d4,local_d8);
        uStack_90 = (char *)CONCAT44(uStack_cc,uStack_d0);
        QString::QString((QString *)&local_78,&local_98);
        QObject::objectName((QObject *)param_1[0x15]);
        pQVar7 = QString::begin((QString *)&local_78);
        pQVar8 = QString::begin((QString *)&local_98);
        if (local_88 == local_68) {
          local_a8 = local_68;
          local_118 = local_68;
          local_110 = pQVar8;
          uStack_a0 = pQVar7;
          bVar2 = QtPrivate::equalStrings(&local_118);
          QString::~QString((QString *)&local_98);
          QString::~QString((QString *)&local_78);
          if (bVar2) goto LAB_140276a9d;
        }
        else {
          QString::~QString((QString *)&local_98);
          QString::~QString((QString *)&local_78);
        }
        QMessageLogger::QMessageLogger((QMessageLogger *)&local_78,(char *)0x0,0,(char *)0x0);
        QMessageLogger::warning((QMessageLogger *)&local_78);
        QDebug::operator<<((QDebug *)&local_98,
                           "Object name of central widget does not match name of central widget in saved state."
                          );
      }
      QDebug::~QDebug((QDebug *)&local_98);
    }
  }
  uVar11 = 0;
LAB_140276c57:
  QXmlStreamReader::~QXmlStreamReader(local_b8);
  return uVar11;
}

