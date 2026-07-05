/**
 * Function: 1_entities_selected
 * Address:  1402a3b10
 * Signature: undefined 1_entities_selected(void)
 * Body size: 3501 bytes
 */


void __entities_selected(QScrollArea *param_1,QPaintDevice param_2,QScrollArea *param_3)

{
  uint uVar1;
  QObject QVar2;
  QPaintDevice QVar3;
  AstAttr_vftable *pAVar4;
  char *pcVar5;
  vfunction1 *pvVar6;
  QWidget *pQVar7;
  QLayout *pQVar8;
  char cVar9;
  QObject *this;
  AstAttr *pAVar10;
  AstAttr *pAVar11;
  AstAttr_vftable *pAVar12;
  longlong lVar13;
  size_t sVar14;
  QLabel *pQVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  code *pcVar19;
  QPaintDevice *pQVar20;
  code *pcVar21;
  longlong lVar22;
  ulonglong uVar23;
  void *pvVar24;
  QObject QVar25;
  QScrollArea *pQVar26;
  QLabel *pQVar27;
  ulonglong uVar28;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar29;
  undefined4 in_stack_fffffffffffffeec;
  QObject local_f8 [8];
  QPaintDevice local_f0;
  QScrollArea *local_e8;
  QString local_e0 [24];
  QPaintDevice *local_c8;
  QLabel *local_c0;
  QLabel *local_b8;
  AstAttr *local_b0;
  QWidget *local_a8;
  QLayout *local_a0;
  code *local_98;
  ulonglong uStack_90;
  size_t local_88;
  QLabel *pQStack_80;
  QScrollArea *local_78;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  param_1[1].QAbstractScrollArea.QFrame.QWidget.QPaintDevice = param_2;
  pQVar26 = param_1 + 2;
  local_78 = param_3;
  if (pQVar26 != param_3) {
    QVar25 = (param_3->QAbstractScrollArea).QFrame.QWidget.QObject;
    uVar28 = *(longlong *)&(param_3->QAbstractScrollArea).QFrame.QWidget.field_0x8 -
             (longlong)QVar25;
    uVar23 = (longlong)uVar28 >> 3;
    QVar2 = param_1[2].QAbstractScrollArea.QFrame.QWidget.QObject;
    if ((ulonglong)
        ((longlong)param_1[2].QAbstractScrollArea.QFrame.QWidget.QPaintDevice - (longlong)QVar2) <
        uVar28) {
      FUN_140094620(pQVar26,uVar23);
      QVar2 = (pQVar26->QAbstractScrollArea).QFrame.QWidget.QObject;
      memmove((void *)QVar2,(void *)QVar25,uVar28);
      pvVar24 = (void *)((longlong)QVar2 + uVar28);
    }
    else {
      sVar14 = *(longlong *)&param_1[2].QAbstractScrollArea.QFrame.QWidget.field_0x8 -
               (longlong)QVar2;
      lVar22 = uVar23 - ((longlong)sVar14 >> 3);
      if (uVar23 < (ulonglong)((longlong)sVar14 >> 3) || lVar22 == 0) {
        pvVar24 = (void *)((longlong)QVar2 + uVar28);
        memmove((void *)QVar2,(void *)QVar25,uVar28);
      }
      else {
        memmove((void *)QVar2,(void *)QVar25,sVar14);
        pvVar24 = *(void **)&param_1[2].QAbstractScrollArea.QFrame.QWidget.field_0x8;
        memmove(pvVar24,(void *)((longlong)QVar25 + sVar14),lVar22 * 8);
        pvVar24 = (void *)((longlong)pvVar24 + lVar22 * 8);
      }
    }
    *(void **)&param_1[2].QAbstractScrollArea.QFrame.QWidget.field_0x8 = pvVar24;
  }
  pQVar26 = local_78;
  param_1[3].QAbstractScrollArea.QFrame.QWidget.QObject = (QObject)0x0;
  local_c8 = &param_1[3].QAbstractScrollArea.QFrame.QWidget.QPaintDevice;
  QVar3 = param_1[3].QAbstractScrollArea.QFrame.QWidget.QPaintDevice;
  FUN_1402a6360(local_c8,local_c8,*(undefined8 *)((longlong)QVar3 + 8));
  *(QPaintDevice *)((longlong)QVar3 + 8) = QVar3;
  *(QPaintDevice *)QVar3 = QVar3;
  *(QPaintDevice *)((longlong)QVar3 + 0x10) = QVar3;
  param_1[4].QAbstractScrollArea.QFrame.QWidget.QObject = (QObject)0x0;
  if ((pQVar26->QAbstractScrollArea).QFrame.QWidget.QObject ==
      *(QObject *)&(pQVar26->QAbstractScrollArea).QFrame.QWidget.field_0x8) {
    FUN_1402a38f0(param_1);
    return;
  }
  this = (QObject *)QScrollArea::takeWidget(param_1);
  if (this != (QObject *)0x0) {
    QObject::deleteLater(this);
  }
  local_a8 = (QWidget *)FUN_140b65d30(0x28);
  QWidget::QWidget(local_a8,0,0);
  local_a0 = (QLayout *)FUN_140b65d30(0x20);
  pQVar7 = local_a8;
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_a0,(QWidget *)local_a8);
  pQVar8 = local_a0;
  QLayout::setContentsMargins(local_a0,8,8,8,8);
  (**(code **)(*(longlong *)pQVar8 + 0x60))(pQVar8,8);
  lVar22 = *(longlong *)&(pQVar26->QAbstractScrollArea).QFrame.QWidget.field_0x8;
  QVar25 = (pQVar26->QAbstractScrollArea).QFrame.QWidget.QObject;
  local_b8 = (QLabel *)FUN_140b65d30(0x28);
  if ((ulonglong)(lVar22 - (longlong)QVar25) < 0x2001) {
    QLineEdit::QLineEdit((QLineEdit *)local_b8,(QWidget *)pQVar7);
    QString::QString((QString *)&local_98,&DAT_14131f54b);
    pQVar27 = local_b8;
    QLineEdit::setPlaceholderText((QLineEdit *)local_b8,(QString *)&local_98);
    QString::~QString((QString *)&local_98);
    QLineEdit::setClearButtonEnabled((QLineEdit *)pQVar27,true);
    QBoxLayout::addWidget((QBoxLayout *)pQVar8,pQVar27,0);
    pAVar10 = (AstAttr *)FUN_14025f9f0();
    pAVar10 = Luau::AstAttr::vfunction5(pAVar10);
    pAVar11 = (AstAttr *)FUN_140269160();
    local_b0 = Luau::AstAttr::vfunction5(pAVar11);
    QVar25 = (local_78->QAbstractScrollArea).QFrame.QWidget.QObject;
    local_e8 = param_1;
    if (*(longlong *)&(local_78->QAbstractScrollArea).QFrame.QWidget.field_0x8 - (longlong)QVar25 ==
        8) {
      pQVar26 = *(QScrollArea **)QVar25;
      if ((pQVar26 == (QScrollArea *)0x0) ||
         (cVar9 = FUN_1400b8670(*(undefined8 *)param_2,pQVar26), cVar9 == '\0')) {
        *(undefined8 *)&param_1[3].QAbstractScrollArea.QFrame.QWidget.field_0x8 = 0;
        local_78 = (QScrollArea *)FUN_140b65d30(0x28);
        local_67 = 1;
        QString::QString((QString *)&local_98,"No selection");
        local_66 = 1;
        QLabel::QLabel((QLabel *)local_78,&local_98,0,0);
        pQVar8 = local_a0;
        pQVar7 = local_a8;
        local_66 = 0;
        QBoxLayout::addWidget((QBoxLayout *)local_a0,local_78,0,0);
        QString::~QString((QString *)&local_98);
        QBoxLayout::addStretch((QBoxLayout *)pQVar8,0);
        QScrollArea::setWidget(param_1,(QWidget *)pQVar7);
        return;
      }
      pAVar12 = pAVar10->vftablePtr;
      local_78 = pQVar26;
      if (*(AstAttr_vftable **)&pAVar10->AstNode_data != pAVar12) {
        lVar22 = 0;
        uVar23 = 0;
        pcVar21 = addWidget_exref;
        do {
          cVar9 = (**(code **)((longlong)&pAVar12->vfunction6 + lVar22))
                            (*(undefined8 *)param_2,pQVar26);
          if ((cVar9 != '\0') &&
             (lVar13 = (**(code **)((longlong)&pAVar10->vftablePtr->vfunction6 + lVar22))
                                 (param_2,pQVar26,local_a8), lVar13 != 0)) {
            (*pcVar21)(local_a0,lVar13,0);
            pcVar5 = *(char **)((longlong)&pAVar10->vftablePtr->vfunction1 + lVar22);
            local_88 = 0;
            pQStack_80 = (QLabel *)0x0;
            local_98 = (code *)0x0;
            uStack_90 = 0;
            sVar14 = strlen(pcVar5);
            if ((longlong)sVar14 < 0) goto LAB_1402a4906;
            if (sVar14 < 0x10) {
              pQStack_80 = (QLabel *)0xf;
              local_88 = sVar14;
              memcpy(&local_98,pcVar5,sVar14);
              *(undefined1 *)((longlong)&local_98 + sVar14) = 0;
            }
            else {
              pQVar27 = (QLabel *)(sVar14 | 0xf);
              local_c0 = pQVar27;
              if (pQVar27 < (QLabel *)0x17) {
                local_c0 = (QLabel *)0x16;
              }
              if (pQVar27 < (QLabel *)0xfff) {
                pcVar21 = (code *)FUN_140b65d30(&(local_c0->QFrame).QWidget.QObject.field_0x1);
              }
              else {
                lVar13 = FUN_140b65d30(&local_c0[1].QFrame.QWidget.QPaintDevice);
                pcVar21 = (code *)(lVar13 + 0x27U & 0xffffffffffffffe0);
                *(longlong *)(pcVar21 + -8) = lVar13;
              }
              pQStack_80 = local_c0;
              local_98 = pcVar21;
              local_88 = sVar14;
              memcpy(pcVar21,pcVar5,sVar14);
              pcVar21[sVar14] = (code)0x0;
              pcVar21 = addWidget_exref;
            }
            FUN_1402a6430(local_c8,local_e0,&local_98);
            pQVar26 = local_78;
            if ((QLabel *)0xf < pQStack_80) {
              pQVar20 = (QPaintDevice *)&(pQStack_80->QFrame).QWidget.QObject.field_0x1;
              pcVar19 = local_98;
              if ((undefined1 *)0xfff < pQVar20) {
                pcVar19 = *(code **)(local_98 + -8);
                if ((code *)0x1f < local_98 + (-8 - (longlong)pcVar19)) goto LAB_1402a455b;
                pQVar20 = &pQStack_80[1].QFrame.QWidget.QPaintDevice;
              }
              thunk_FUN_140b68ba8(pcVar19,pQVar20);
            }
          }
          uVar23 = uVar23 + 1;
          pAVar12 = pAVar10->vftablePtr;
          lVar22 = lVar22 + 0x28;
        } while (uVar23 < (ulonglong)
                          ((*(longlong *)&pAVar10->AstNode_data - (longlong)pAVar12 >> 3) *
                          -0x3333333333333333));
      }
      pAVar10 = (AstAttr *)local_b0->vftablePtr;
      pAVar11 = *(AstAttr **)&local_b0->AstNode_data;
      if (pAVar10 != pAVar11) {
        local_b0 = pAVar11;
        do {
          pvVar6 = pAVar10->vftablePtr->vfunction1;
          local_88 = 0;
          pQStack_80 = (QLabel *)0x0;
          local_98 = (code *)0x0;
          uStack_90 = 0;
          sVar14 = strlen((char *)pvVar6);
          if ((longlong)sVar14 < 0) {
LAB_1402a4906:
                    /* WARNING: Subroutine does not return */
            string_too_long();
          }
          if (sVar14 < 0x10) {
            pQStack_80 = (QLabel *)0xf;
            local_88 = sVar14;
            memcpy(&local_98,pvVar6,sVar14);
            *(undefined1 *)((longlong)&local_98 + sVar14) = 0;
          }
          else {
            pQVar15 = (QLabel *)(sVar14 | 0xf);
            pQVar27 = pQVar15;
            if (pQVar15 < (QLabel *)0x17) {
              pQVar27 = (QLabel *)0x16;
            }
            if (pQVar15 < (QLabel *)0xfff) {
              pcVar21 = (code *)FUN_140b65d30(&(pQVar27->QFrame).QWidget.QObject.field_0x1);
            }
            else {
              lVar22 = FUN_140b65d30(&pQVar27[1].QFrame.QWidget.QPaintDevice);
              pcVar21 = (code *)(lVar22 + 0x27U & 0xffffffffffffffe0);
              *(longlong *)(pcVar21 + -8) = lVar22;
            }
            local_98 = pcVar21;
            local_88 = sVar14;
            pQStack_80 = pQVar27;
            memcpy(pcVar21,pvVar6,sVar14);
            pcVar21[sVar14] = (code)0x0;
            pAVar11 = local_b0;
          }
          lVar22 = FUN_1402a4e70(local_c8,&local_98);
          pQVar26 = local_78;
          if ((QLabel *)0xf < pQStack_80) {
            pQVar20 = (QPaintDevice *)&(pQStack_80->QFrame).QWidget.QObject.field_0x1;
            pcVar21 = local_98;
            if ((undefined1 *)0xfff < pQVar20) {
              pcVar21 = *(code **)(local_98 + -8);
              if ((code *)0x1f < local_98 + (-8 - (longlong)pcVar21)) {
LAB_1402a455b:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
              pQVar20 = &pQStack_80[1].QFrame.QWidget.QPaintDevice;
            }
            thunk_FUN_140b68ba8(pcVar21,pQVar20);
          }
          if (((lVar22 == 0) &&
              (cVar9 = FUN_1400b9b40(*(undefined8 *)param_2,pQVar26,
                                     *(vfunction6 **)&pAVar10->AstNode_data), cVar9 != '\0')) &&
             (lVar22 = FUN_140269b50(param_2,pQVar26,pAVar10,local_a8,1), lVar22 != 0)) {
            QBoxLayout::addWidget((QBoxLayout *)local_a0,lVar22,0);
          }
          pAVar10 = (AstAttr *)&(pAVar10->AstNode_data).offset_0x18;
        } while (pAVar10 != pAVar11);
      }
      uVar16 = u_add_component(param_2,pQVar26,local_a8);
      QBoxLayout::addWidget((QBoxLayout *)local_a0,uVar16,0,0);
    }
    else {
      local_c0 = (QLabel *)FUN_140b65d30(0x28);
      local_6a = 1;
      QString::QString(local_e0,"%1 entities selected");
      local_69 = 1;
      QString::arg(local_e0,&local_98,
                   *(longlong *)&(local_78->QAbstractScrollArea).QFrame.QWidget.field_0x8 -
                   (longlong)(local_78->QAbstractScrollArea).QFrame.QWidget.QObject >> 3,0,
                   CONCAT44(uVar29,10),0x20);
      pQVar27 = local_c0;
      local_68 = 1;
      QLabel::QLabel(local_c0,&local_98,0);
      local_68 = 0;
      QBoxLayout::addWidget((QBoxLayout *)local_a0,pQVar27,0);
      QString::~QString((QString *)&local_98);
      QString::~QString(local_e0);
      pAVar12 = pAVar10->vftablePtr;
      if (*(AstAttr_vftable **)&pAVar10->AstNode_data != pAVar12) {
        uVar23 = 0;
        do {
          if (pAVar12[uVar23].vfunction5 != (vfunction5 *)0x0) {
            QVar2 = *(QObject *)&(local_78->QAbstractScrollArea).QFrame.QWidget.field_0x8;
            for (QVar25 = (local_78->QAbstractScrollArea).QFrame.QWidget.QObject; QVar25 != QVar2;
                QVar25 = (QObject)((longlong)QVar25 + 8)) {
              uVar16 = *(undefined8 *)QVar25;
              cVar9 = FUN_1400b8670(*(undefined8 *)param_2,uVar16);
              if ((cVar9 == '\0') ||
                 (uVar16 = (*pAVar10->vftablePtr[uVar23].vfunction6)(*(undefined8 *)param_2,uVar16),
                 (char)uVar16 == '\0')) goto LAB_1402a3fa0;
            }
            pAVar11 = (*pAVar10->vftablePtr[uVar23].vfunction5)((void *)param_2);
            if (pAVar11 != (AstAttr *)0x0) {
              QBoxLayout::addWidget((QBoxLayout *)local_a0,pAVar11,0);
              pvVar6 = pAVar10->vftablePtr[uVar23].vfunction1;
              local_88 = 0;
              pQStack_80 = (QLabel *)0x0;
              local_98 = (code *)0x0;
              uStack_90 = 0;
              sVar14 = strlen((char *)pvVar6);
              if ((longlong)sVar14 < 0) goto LAB_1402a4906;
              if (sVar14 < 0x10) {
                pQStack_80 = (QLabel *)0xf;
                local_88 = sVar14;
                memcpy(&local_98,pvVar6,sVar14);
                *(undefined1 *)((longlong)&local_98 + sVar14) = 0;
              }
              else {
                pQVar15 = (QLabel *)(sVar14 | 0xf);
                pQVar27 = (QLabel *)0x16;
                if ((QLabel *)0x16 < pQVar15) {
                  pQVar27 = pQVar15;
                }
                if (pQVar15 < (QLabel *)0xfff) {
                  pcVar21 = (code *)FUN_140b65d30(&(pQVar27->QFrame).QWidget.QObject.field_0x1);
                }
                else {
                  lVar22 = FUN_140b65d30(&pQVar27[1].QFrame.QWidget.QPaintDevice);
                  pcVar21 = (code *)(lVar22 + 0x27U & 0xffffffffffffffe0);
                  *(longlong *)(pcVar21 + -8) = lVar22;
                }
                local_98 = pcVar21;
                local_88 = sVar14;
                pQStack_80 = pQVar27;
                memcpy(pcVar21,pvVar6,sVar14);
                pcVar21[sVar14] = (code)0x0;
              }
              FUN_1402a6430(local_c8,local_e0,&local_98);
              if ((QLabel *)0xf < pQStack_80) {
                pQVar20 = (QPaintDevice *)&(pQStack_80->QFrame).QWidget.QObject.field_0x1;
                pcVar21 = local_98;
                if ((undefined1 *)0xfff < pQVar20) {
                  pcVar21 = *(code **)(local_98 + -8);
                  if ((code *)0x1f < local_98 + (-8 - (longlong)pcVar21)) goto LAB_1402a455b;
                  pQVar20 = &pQStack_80[1].QFrame.QWidget.QPaintDevice;
                }
                thunk_FUN_140b68ba8(pcVar21,pQVar20);
              }
            }
          }
LAB_1402a3fa0:
          uVar23 = uVar23 + 1;
          pAVar12 = pAVar10->vftablePtr;
        } while (uVar23 < (ulonglong)
                          ((*(longlong *)&pAVar10->AstNode_data - (longlong)pAVar12 >> 3) *
                          -0x3333333333333333));
      }
      pAVar12 = local_b0->vftablePtr;
      pAVar4 = *(AstAttr_vftable **)&local_b0->AstNode_data;
      if (pAVar12 != pAVar4) {
        local_f0 = param_2;
        do {
          pcVar5 = *(char **)pAVar12->vfunction1;
          local_88 = 0;
          pQStack_80 = (QLabel *)0x0;
          local_98 = (code *)0x0;
          uStack_90 = 0;
          sVar14 = strlen(pcVar5);
          if ((longlong)sVar14 < 0) goto LAB_1402a4906;
          if (sVar14 < 0x10) {
            pQStack_80 = (QLabel *)0xf;
            local_88 = sVar14;
            memcpy(&local_98,pcVar5,sVar14);
            *(undefined1 *)((longlong)&local_98 + sVar14) = 0;
          }
          else {
            pQVar15 = (QLabel *)(sVar14 | 0xf);
            pQVar27 = (QLabel *)0x16;
            if ((QLabel *)0x16 < pQVar15) {
              pQVar27 = pQVar15;
            }
            if (pQVar15 < (QLabel *)0xfff) {
              pcVar21 = (code *)FUN_140b65d30(&(pQVar27->QFrame).QWidget.QObject.field_0x1);
            }
            else {
              lVar22 = FUN_140b65d30(&pQVar27[1].QFrame.QWidget.QPaintDevice);
              pcVar21 = (code *)(lVar22 + 0x27U & 0xffffffffffffffe0);
              *(longlong *)(pcVar21 + -8) = lVar22;
            }
            local_98 = pcVar21;
            local_88 = sVar14;
            pQStack_80 = pQVar27;
            memcpy(pcVar21,pcVar5,sVar14);
            pcVar21[sVar14] = (code)0x0;
            param_2 = local_f0;
          }
          lVar22 = FUN_1402a4e70(local_c8,&local_98);
          if ((QLabel *)0xf < pQStack_80) {
            pQVar20 = (QPaintDevice *)&(pQStack_80->QFrame).QWidget.QObject.field_0x1;
            pcVar21 = local_98;
            if ((undefined1 *)0xfff < pQVar20) {
              pcVar21 = *(code **)(local_98 + -8);
              if ((code *)0x1f < local_98 + (-8 - (longlong)pcVar21)) goto LAB_1402a455b;
              pQVar20 = &pQStack_80[1].QFrame.QWidget.QPaintDevice;
            }
            thunk_FUN_140b68ba8(pcVar21,pQVar20);
          }
          if (lVar22 == 0) {
            QVar2 = *(QObject *)&(local_78->QAbstractScrollArea).QFrame.QWidget.field_0x8;
            for (QVar25 = (local_78->QAbstractScrollArea).QFrame.QWidget.QObject; QVar25 != QVar2;
                QVar25 = (QObject)((longlong)QVar25 + 8)) {
              uVar16 = *(undefined8 *)QVar25;
              cVar9 = FUN_1400b8670(*(undefined8 *)param_2,uVar16);
              if ((cVar9 == '\0') ||
                 (cVar9 = FUN_1400b9b40(*(undefined8 *)param_2,uVar16,pAVar12->vfunction6),
                 cVar9 == '\0')) goto LAB_1402a418e;
            }
            lVar22 = FUN_14026b340(param_2,local_78,pAVar12);
            if (lVar22 != 0) {
              QBoxLayout::addWidget((QBoxLayout *)local_a0,lVar22,0);
            }
          }
LAB_1402a418e:
          pAVar12 = (AstAttr_vftable *)&pAVar12->vfunction5;
        } while (pAVar12 != pAVar4);
      }
    }
    local_98 = textChanged_exref;
    uStack_90 = uStack_90 & 0xffffffff00000000;
    puVar17 = (undefined4 *)FUN_140b65d30(0x18);
    pQVar8 = local_a0;
    *puVar17 = 1;
    *(code **)(puVar17 + 2) = FUN_1402a65e0;
    *(QLayout **)(puVar17 + 4) = local_a0;
    QObject::connectImpl
              (local_f8,(void **)local_b8,(QObject *)&local_98,(void **)local_b8,
               (QSlotObjectBase *)0x0,(ConnectionType)puVar17,
               (int *)CONCAT44(in_stack_fffffffffffffeec,1),(QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)local_f8);
    uVar23 = 0;
    QBoxLayout::addStretch((QBoxLayout *)pQVar8,0);
    pQVar26 = local_e8;
    QScrollArea::setWidget(local_e8,(QWidget *)local_a8);
    if (pQVar26[1].QAbstractScrollArea.QFrame.QWidget.QPaintDevice != (QPaintDevice)0x0) {
      QVar2 = *(QObject *)&pQVar26[2].QAbstractScrollArea.QFrame.QWidget.field_0x8;
      uVar23 = 0;
      for (QVar25 = pQVar26[2].QAbstractScrollArea.QFrame.QWidget.QObject; QVar25 != QVar2;
          QVar25 = (QObject)((longlong)QVar25 + 8)) {
        if (((*(longlong *)QVar25 != 0) &&
            (cVar9 = FUN_1400b8670(*(undefined8 *)
                                    pQVar26[1].QAbstractScrollArea.QFrame.QWidget.QPaintDevice,
                                   *(longlong *)QVar25), cVar9 != '\0')) &&
           ((plVar18 = (longlong *)
                       FUN_1400bca00(*(undefined8 *)
                                      pQVar26[1].QAbstractScrollArea.QFrame.QWidget.QPaintDevice),
            plVar18 != (longlong *)0x0 && (uVar1 = *(uint *)(plVar18 + 1), 0 < (int)uVar1)))) {
          lVar22 = *plVar18;
          if (uVar1 == 1) {
            uVar28 = 0;
          }
          else {
            uVar28 = 0;
            do {
              uVar23 = (uVar23 >> 2) + uVar23 * 0x40 + *(longlong *)(lVar22 + uVar28 * 8) +
                       0x9e3779b9 ^ uVar23;
              uVar23 = (uVar23 >> 2) + uVar23 * 0x40 + *(longlong *)(lVar22 + 8 + uVar28 * 8) +
                       0x9e3779b9 ^ uVar23;
              uVar28 = uVar28 + 2;
            } while ((uVar1 & 0x7ffffffe) != uVar28);
          }
          if ((uVar1 & 1) != 0) {
            uVar23 = uVar23 ^ (uVar23 >> 2) + uVar23 * 0x40 + *(longlong *)(lVar22 + uVar28 * 8) +
                              0x9e3779b9;
          }
        }
      }
    }
    *(ulonglong *)&pQVar26[3].QAbstractScrollArea.QFrame.QWidget.field_0x8 = uVar23;
  }
  else {
    local_63 = 1;
    QString::QString(local_e0,"%1 entities selected");
    local_62 = 1;
    QString::arg(local_e0,&local_98,
                 *(longlong *)&(local_78->QAbstractScrollArea).QFrame.QWidget.field_0x8 -
                 (longlong)(local_78->QAbstractScrollArea).QFrame.QWidget.QObject >> 3,0,10,0x20);
    pQVar27 = local_b8;
    local_61 = 1;
    QLabel::QLabel(local_b8,&local_98,0,0);
    local_61 = 0;
    QBoxLayout::addWidget((QBoxLayout *)pQVar8,pQVar27,0,0);
    QString::~QString((QString *)&local_98);
    QString::~QString(local_e0);
    local_78 = (QScrollArea *)FUN_140b65d30(0x28);
    local_65 = 1;
    QString::QString((QString *)&local_98,"Properties are summarized for large selections.");
    local_64 = 1;
    QLabel::QLabel((QLabel *)local_78,&local_98,0,0);
    local_64 = 0;
    QBoxLayout::addWidget((QBoxLayout *)pQVar8,local_78,0,0);
    QString::~QString((QString *)&local_98);
    QBoxLayout::addStretch((QBoxLayout *)pQVar8,0);
    QScrollArea::setWidget(param_1,(QWidget *)pQVar7);
    *(undefined8 *)&param_1[3].QAbstractScrollArea.QFrame.QWidget.field_0x8 = 0;
  }
  return;
}

