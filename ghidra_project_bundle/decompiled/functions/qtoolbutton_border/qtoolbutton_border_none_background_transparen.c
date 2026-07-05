/**
 * Function: qtoolbutton_border_none_background_transparen
 * Address:  140266910
 * Signature: undefined qtoolbutton_border_none_background_transparen(void)
 * Body size: 2964 bytes
 */


void qtoolbutton_border_none_background_transparen
               (QFormLayout *param_1,QString *param_2,float param_3,float param_4,float param_5,
               double param_6,longlong param_7)

{
  char *pcVar1;
  undefined8 *puVar2;
  void **ppvVar3;
  longlong *plVar4;
  QObject QVar5;
  QWidget *this;
  CleanSpinBox *this_00;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  QPaintDevice *pQVar9;
  QString *pQVar10;
  QWidget *pQVar11;
  undefined8 uVar12;
  QWidget *pQVar13;
  QPaintDevice QVar14;
  undefined4 *puVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 in_stack_fffffffffffffd1c;
  QObject local_2c8 [8];
  char *local_2c0;
  undefined8 local_2b8;
  char *local_2b0;
  undefined8 local_2a8;
  QObject local_2a0 [8];
  QObject local_298 [8];
  QObject local_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  QPaintDevice QStack_278;
  longlong local_270 [7];
  longlong *local_238;
  QObject local_230;
  QObject QStack_228;
  QPaintDevice local_220;
  QPaintDevice local_218;
  QObject QStack_210;
  undefined8 uStack_208;
  QPaintDevice QStack_200;
  int *piStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  QPaintDevice local_1d0;
  longlong *local_1a0;
  QObject local_198;
  QObject QStack_190;
  QPaintDevice local_188;
  QObject local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  QPaintDevice QStack_168;
  QFormLayout *local_160;
  code *local_158;
  undefined4 local_150;
  int *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  QPaintDevice local_118;
  int *local_108;
  wchar_t *pwStack_100;
  undefined8 local_f8;
  QObject local_e8;
  QWidget *local_e0;
  int *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  CleanSpinBox *local_c0;
  QString *local_b8;
  QWidget *local_b0;
  uint local_a4;
  QWidget *local_a0;
  undefined1 local_91;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  local_160 = param_1;
  local_b8 = param_2;
  local_a0 = (QWidget *)FUN_140b65d30(0x28);
  QWidget::QWidget(local_a0,0);
  pQVar13 = local_a0;
  local_2c0 = "vecHeader";
  local_2b8 = 9;
  QObject::setObjectName(&local_a0->QObject,&local_2c0);
  iVar7 = ubackground_color(*(undefined8 *)&pQVar13[1].field_0x8);
  QWidget::setFixedWidth(pQVar13,iVar7);
  local_b0 = (QWidget *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_b0,(QWidget *)pQVar13);
  pQVar11 = local_b0;
  uVar16 = 0;
  QLayout::setContentsMargins((QLayout *)local_b0,4,0,8,0);
  (**(code **)((longlong)pQVar11->QObject + 0x60))(pQVar11);
  local_218 = (QPaintDevice)((ulonglong)local_218 & 0xffffffffffffff00);
  if (DAT_1416b8588 != 0) {
    lVar8 = FUN_14026c340(DAT_1416b8588 + 8,local_b8);
    pQVar9 = &local_218;
    if (lVar8 != *(longlong *)(DAT_1416b8588 + 8)) {
      pQVar9 = (QPaintDevice *)(lVar8 + 0x38);
    }
    uVar16 = (uint)*(byte *)pQVar9;
  }
  local_e0 = (QWidget *)FUN_140b65d30(0x28);
  QToolButton::QToolButton((QToolButton *)local_e0,(QWidget *)0x0);
  this = local_e0;
  local_2b0 = "expandBtn";
  local_2a8 = 9;
  QObject::setObjectName(&local_e0->QObject,&local_2b0);
  QAbstractButton::setCheckable((QAbstractButton *)this,true);
  QToolButton::setAutoRaise((QToolButton *)this,true);
  local_a4 = uVar16;
  if ((char)uVar16 == '\0') {
    local_d8 = (int *)0x0;
    local_d0 = &DAT_1413a2adc;
    local_c8 = 1;
    local_91 = 1;
    QString::QString((QString *)&local_218,(QArrayDataPointer<char16_t> *)&local_d8);
  }
  else {
    local_d8 = (int *)0x0;
    local_d0 = &DAT_1413a2ad8;
    local_c8 = 1;
    QString::QString((QString *)&local_218,(QArrayDataPointer<char16_t> *)&local_d8);
  }
  QAbstractButton::setText((QAbstractButton *)this,(QString *)&local_218);
  QString::~QString((QString *)&local_218);
  if (local_d8 != (int *)0x0) {
    LOCK();
    *local_d8 = *local_d8 + -1;
    UNLOCK();
    if (*local_d8 == 0) {
      free(local_d8);
    }
  }
  QString::QString((QString *)&local_218,
                   "QToolButton { border: none; background: transparent; font-size: 10px; padding: 0; }"
                  );
  QWidget::setStyleSheet(this,(QString *)&local_218);
  QString::~QString((QString *)&local_218);
  local_c0 = (CleanSpinBox *)FUN_140b65d30(0x28);
  QLabel::QLabel((QLabel *)local_c0,local_b8,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar11,this,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar11,local_c0,0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar11,0);
  local_e8 = (QObject)FUN_140b65d30(0x28);
  QLineEdit::QLineEdit((QLineEdit *)local_e8,(QWidget *)0x0);
  local_108 = (int *)0x0;
  pwStack_100 = L"_summary";
  local_f8 = 8;
  QString::QString((QString *)&local_290,(QArrayDataPointer<char16_t> *)&local_108);
  QString::QString((QString *)&local_218,local_b8);
  QString::append((QString *)&local_218,(QString *)&local_290);
  QVar5 = local_e8;
  QObject::doSetObjectName((QObject *)local_e8,(QString *)&local_218);
  QString::~QString((QString *)&local_218);
  QString::~QString((QString *)&local_290);
  if (local_108 != (int *)0x0) {
    LOCK();
    *local_108 = *local_108 + -1;
    UNLOCK();
    if (*local_108 == 0) {
      free(local_108);
    }
  }
  QString::QString((QString *)&local_290,"%1, %2, %3");
  FUN_1402652e0(&local_108,SUB84((double)param_5,0));
  FUN_1402652e0(&local_158,SUB84((double)param_4,0));
  FUN_1402652e0(&local_140,SUB84((double)param_3,0));
  FUN_1402685c0(&local_290,&local_218,&local_140,&local_158,&local_108);
  QLineEdit::setText((QLineEdit *)QVar5,(QString *)&local_218);
  QString::~QString((QString *)&local_218);
  QString::~QString((QString *)&local_140);
  QString::~QString((QString *)&local_158);
  QString::~QString((QString *)&local_108);
  QString::~QString((QString *)&local_290);
  QFormLayout::addRow(local_160,(QWidget *)pQVar13,(QWidget *)QVar5);
  for (uVar16 = 0; uVar16 < 3; uVar16 = uVar16 + 1) {
    local_a0 = (QWidget *)FUN_140b65d30(0x28);
    QString::QString((QString *)&local_290,"    %1");
    local_b0 = (QWidget *)(ulonglong)uVar16;
    pcVar1 = (&PTR_DAT_140dfb520)[(longlong)local_b0];
    QString::QString((QString *)&local_158,pcVar1);
    QString::arg((QString *)&local_290,&local_218,(QString *)&local_158,0,0x20);
    pQVar11 = local_a0;
    QLabel::QLabel((QLabel *)local_a0,&local_218,0,0);
    QString::~QString((QString *)&local_218);
    QString::~QString((QString *)&local_158);
    QString::~QString((QString *)&local_290);
    QVariant::QVariant((QVariant *)&local_218,true);
    QObject::doSetProperty
              (&pQVar11->QObject,"isChildLabel",(QVariant *)&local_218,(QVariant *)&local_218);
    QVariant::~QVariant((QVariant *)&local_218);
    iVar7 = ubackground_color(*(undefined8 *)&pQVar11[1].field_0x8);
    QWidget::setFixedWidth(pQVar11,iVar7);
    local_c0 = (CleanSpinBox *)FUN_140b65d30(0x28);
    ldv::editor::CleanSpinBox::CleanSpinBox(local_c0,(QWidget *)0x0);
    local_140 = (int *)0x0;
    local_138 = &DAT_1413a4fc2;
    local_130 = 1;
    QString::QString((QString *)&local_158,(QArrayDataPointer<char16_t> *)&local_140);
    QString::QString((QString *)&local_290,local_b8);
    QString::append((QString *)&local_290,(QString *)&local_158);
    this_00 = local_c0;
    pQVar10 = QString::operator+=((QString *)&local_290,pcVar1);
    QString::QString((QString *)&local_218,pQVar10);
    QObject::doSetObjectName((QObject *)this_00,(QString *)&local_218);
    QString::~QString((QString *)&local_218);
    QString::~QString((QString *)&local_290);
    QString::~QString((QString *)&local_158);
    if (local_140 != (int *)0x0) {
      LOCK();
      *local_140 = *local_140 + -1;
      UNLOCK();
      if (*local_140 == 0) {
        free(local_140);
      }
    }
    QDoubleSpinBox::setSingleStep((QDoubleSpinBox *)this_00,param_6);
    fVar17 = param_4;
    if (uVar16 != 1) {
      fVar17 = param_5;
    }
    fVar18 = param_3;
    if (uVar16 != 0) {
      fVar18 = fVar17;
    }
    QDoubleSpinBox::setValue((QDoubleSpinBox *)this_00,(double)fVar18);
    pQVar13 = local_a0;
    QFormLayout::addRow(local_160,(QWidget *)local_a0,(QWidget *)this_00);
    pQVar11 = local_b0;
    (&local_108)[(longlong)local_b0] = (int *)pQVar13;
    (&local_128)[(longlong)pQVar11] = this_00;
    uVar6 = local_a4;
    (**(code **)((longlong)pQVar13->QObject + 0x58))(pQVar13,local_a4);
    (*this_00->vftablePtr->setVisible)(this_00,SUB41(uVar6,0));
  }
  local_290 = local_e8;
  QStack_278 = local_118;
  uStack_288 = (undefined4)local_128;
  uStack_284 = local_128._4_4_;
  uStack_280 = uStack_120;
  uStack_27c = uStack_11c;
  local_238 = (longlong *)0x0;
  puVar2 = *(undefined8 **)(param_7 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    local_238 = (longlong *)(**(code **)*puVar2)(puVar2,local_270);
  }
  local_220 = local_118;
  local_230._4_4_ = local_128._4_4_;
  local_230._0_4_ = (undefined4)local_128;
  QStack_228._4_4_ = uStack_11c;
  QStack_228._0_4_ = uStack_120;
  uVar16 = 0;
  do {
    ppvVar3 = (void **)(&local_128)[uVar16];
    local_218 = (QPaintDevice)valueChanged_exref;
    QStack_210 = (QObject)((ulonglong)QStack_210 & 0xffffffff00000000);
    pQVar11 = (QWidget *)FUN_140b65d30(0x88);
    *(undefined4 *)&pQVar11->QObject = 1;
    *(code **)&pQVar11->field_0x8 = FUN_14026cb70;
    *(undefined4 *)&pQVar11->QPaintDevice = local_290._0_4_;
    *(undefined4 *)&(pQVar11->QPaintDevice).field_0x4 = local_290._4_4_;
    *(undefined4 *)&pQVar11[1].QObject = uStack_288;
    *(undefined4 *)&pQVar11[1].QObject.field_0x4 = uStack_284;
    *(undefined4 *)&pQVar11[1].field_0x8 = uStack_280;
    *(undefined4 *)&pQVar11[1].field_0xc = uStack_27c;
    *(undefined4 *)&pQVar11[1].QPaintDevice = QStack_278._0_4_;
    *(undefined4 *)&pQVar11[1].QPaintDevice.field_0x4 = QStack_278._4_4_;
    *(undefined8 *)&pQVar11[4].field_0x8 = 0;
    if (local_238 != (longlong *)0x0) {
      local_b0 = pQVar11 + 2;
      local_a0 = pQVar11;
      uVar12 = (**(code **)*local_238)();
      *(undefined8 *)&local_a0[4].field_0x8 = uVar12;
      pQVar11 = local_a0;
    }
    *(QPaintDevice *)&pQVar11[5].field_0x8 = local_220;
    pQVar11[4].QPaintDevice = (QPaintDevice)local_230;
    pQVar11[5].QObject = QStack_228;
    QObject::connectImpl
              (local_2c8,ppvVar3,(QObject *)&local_218,ppvVar3,(QSlotObjectBase *)0x0,
               (ConnectionType)pQVar11,(int *)CONCAT44(in_stack_fffffffffffffd1c,1),
               (QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)local_2c8);
    QVar5 = local_e8;
    uVar16 = uVar16 + 1;
  } while (uVar16 < 3);
  local_218 = (QPaintDevice)local_e8;
  QStack_210._4_4_ = local_128._4_4_;
  QStack_210._0_4_ = (undefined4)local_128;
  uStack_208 = CONCAT44(uStack_11c,uStack_120);
  QStack_200 = local_118;
  piStack_1f8._0_4_ = local_290._0_4_;
  piStack_1f8._4_4_ = local_290._4_4_;
  uStack_1f0._0_4_ = uStack_288;
  uStack_1f0._4_4_ = uStack_284;
  local_1e8._0_4_ = uStack_280;
  local_1e8._4_4_ = uStack_27c;
  uStack_1e0 = QStack_278._0_4_;
  uStack_1dc = QStack_278._4_4_;
  local_1a0 = (longlong *)0x0;
  if (local_238 != (longlong *)0x0) {
    local_1a0 = (longlong *)(**(code **)*local_238)(local_238,&local_1d8);
  }
  pQVar11 = local_e0;
  plVar4 = local_1a0;
  local_188 = local_220;
  local_198 = local_230;
  QStack_190 = QStack_228;
  local_180 = QVar5;
  uStack_178 = (undefined4)local_128;
  uStack_174 = local_128._4_4_;
  uStack_170 = uStack_120;
  uStack_16c = uStack_11c;
  QStack_168 = local_118;
  local_158 = editingFinished_exref;
  local_150 = 0;
  pQVar13 = (QWidget *)FUN_140b65d30(200);
  *(undefined4 *)&pQVar13->QObject = 1;
  *(code **)&pQVar13->field_0x8 = FUN_14026ce60;
  pQVar13->QPaintDevice = local_218;
  pQVar13[1].QObject = QStack_210;
  *(undefined8 *)&pQVar13[1].field_0x8 = uStack_208;
  pQVar13[1].QPaintDevice = QStack_200;
  *(undefined4 *)&pQVar13[2].QObject = piStack_1f8._0_4_;
  *(undefined4 *)&pQVar13[2].QObject.field_0x4 = piStack_1f8._4_4_;
  *(undefined4 *)&pQVar13[2].field_0x8 = (undefined4)uStack_1f0;
  *(undefined4 *)&pQVar13[2].field_0xc = uStack_1f0._4_4_;
  *(undefined4 *)&pQVar13[2].QPaintDevice = (undefined4)local_1e8;
  *(undefined4 *)&pQVar13[2].QPaintDevice.field_0x4 = local_1e8._4_4_;
  *(undefined4 *)&pQVar13[3].QObject = uStack_1e0;
  *(undefined4 *)&pQVar13[3].QObject.field_0x4 = uStack_1dc;
  pQVar13[5].QPaintDevice = (QPaintDevice)0x0;
  if (plVar4 != (longlong *)0x0) {
    local_b0 = (QWidget *)&pQVar13[3].field_0x8;
    local_a0 = pQVar13;
    QVar14 = (QPaintDevice)(**(code **)*plVar4)(plVar4);
    local_a0[5].QPaintDevice = QVar14;
    pQVar13 = local_a0;
  }
  pQVar13[6].QPaintDevice = local_188;
  pQVar13[6].QObject = local_198;
  *(QObject *)&pQVar13[6].field_0x8 = QStack_190;
  QVar14._4_4_ = uStack_16c;
  QVar14._0_4_ = uStack_170;
  pQVar13[7].QObject = local_180;
  *(ulonglong *)&pQVar13[7].field_0x8 = CONCAT44(uStack_174,uStack_178);
  pQVar13[7].QPaintDevice = QVar14;
  pQVar13[8].QObject = (QObject)QStack_168;
  QObject::connectImpl
            (local_2a0,(void **)QVar5,(QObject *)&local_158,(void **)QVar5,(QSlotObjectBase *)0x0,
             (ConnectionType)pQVar13,(int *)CONCAT44(in_stack_fffffffffffffd1c,1),(QMetaObject *)0x0
            );
  QMetaObject::Connection::~Connection((Connection *)local_2a0);
  if (local_1a0 != (longlong *)0x0) {
    (**(code **)(*local_1a0 + 0x20))(local_1a0,local_1a0 != &local_1d8);
  }
  QString::QString((QString *)&local_218,local_b8);
  QStack_200 = (QPaintDevice)pQVar11;
  piStack_1f8 = local_108;
  uStack_1f0 = pwStack_100;
  local_1e8 = local_f8;
  uStack_1e0 = (undefined4)local_128;
  uStack_1dc = local_128._4_4_;
  local_1d8._0_4_ = uStack_120;
  local_1d8._4_4_ = uStack_11c;
  local_1d0 = local_118;
  local_158 = toggled_exref;
  local_150 = 0;
  puVar15 = (undefined4 *)FUN_140b65d30(0x60);
  *puVar15 = 1;
  *(code **)(puVar15 + 2) = FUN_14026d320;
  QString::QString((QString *)(puVar15 + 4),(QString *)&local_218);
  *(QPaintDevice *)(puVar15 + 10) = QStack_200;
  *(int **)(puVar15 + 0xc) = piStack_1f8;
  *(wchar_t **)(puVar15 + 0xe) = uStack_1f0;
  *(undefined8 *)(puVar15 + 0x10) = local_1e8;
  *(ulonglong *)(puVar15 + 0x12) = CONCAT44(uStack_1dc,uStack_1e0);
  *(ulonglong *)(puVar15 + 0x14) = CONCAT44(local_1d8._4_4_,(undefined4)local_1d8);
  *(QPaintDevice *)(puVar15 + 0x16) = local_1d0;
  QObject::connectImpl
            (local_298,(void **)pQVar11,(QObject *)&local_158,(void **)pQVar11,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar15,
             (int *)CONCAT44(in_stack_fffffffffffffd1c,1),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_298);
  QString::~QString((QString *)&local_218);
  if (local_238 != (longlong *)0x0) {
    (**(code **)(*local_238 + 0x20))(local_238,local_238 != local_270);
  }
  return;
}

