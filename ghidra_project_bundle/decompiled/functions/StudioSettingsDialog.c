/**
 * Function: StudioSettingsDialog
 * Address:  1402bca60
 * Signature: StudioSettingsDialog * __thiscall StudioSettingsDialog(StudioSettingsDialog * this, undefined8 param_1)
 * Body size: 3058 bytes
 */


StudioSettingsDialog * __thiscall
ldv::editor::StudioSettingsDialog::StudioSettingsDialog
          (StudioSettingsDialog *this,undefined8 param_1)

{
  undefined8 *puVar1;
  QListWidget *this_00;
  QWidget *pQVar2;
  char *_Str;
  void **ppvVar3;
  void **ppvVar4;
  QAction *this_01;
  QAbstractButton *this_02;
  QWidget *pQVar5;
  QWidget *pQVar6;
  StudioSettingsDialog *pSVar7;
  int iVar8;
  QAction *pQVar9;
  undefined4 *puVar10;
  QActionGroup *pQVar11;
  uint uVar12;
  uint in_stack_fffffffffffffedc;
  QObject local_108 [8];
  size_t local_100;
  char *local_f8;
  QObject local_f0 [8];
  QObject local_e8 [8];
  QObject local_e0 [8];
  QObject local_d8 [8];
  QObject local_d0 [8];
  int *local_c8;
  wchar_t *local_c0;
  undefined8 local_b8;
  QActionGroup *local_b0;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  QLayout *local_90;
  QLayout *local_88;
  code *local_80;
  undefined4 local_78;
  QWidget *local_60;
  QWidget *local_58;
  StudioSettingsDialog *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  QDialog::QDialog((QDialog *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  (this->StudioSettingsDialog_data).offset_0x10 = 0;
  (this->StudioSettingsDialog_data).offset_0x18 = 0;
  (this->StudioSettingsDialog_data).offset_0x20 = 0;
  (this->StudioSettingsDialog_data).offset_0x28 = 0;
  (this->StudioSettingsDialog_data).offset_0x30 = 0;
  (this->StudioSettingsDialog_data).offset_0x38 = 0;
  (this->StudioSettingsDialog_data).offset_0x40 = 0;
  (this->StudioSettingsDialog_data).offset_0x48 = 0;
  (this->StudioSettingsDialog_data).offset_0x50 = 0;
  (this->StudioSettingsDialog_data).offset_0x58 = 0;
  local_50 = this;
  QString::QString((QString *)&local_80,"Studio Settings");
  pSVar7 = local_50;
  QWidget::setWindowTitle((QWidget *)local_50,(QString *)&local_80);
  QString::~QString((QString *)&local_80);
  QDialog::setModal((QDialog *)pSVar7,true);
  QDialog::setSizeGripEnabled((QDialog *)local_50,true);
  local_90 = (QLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_90,(QWidget *)local_50);
  QLayout::setContentsMargins(local_90,0x10,0x10,0x10,0x10);
  (**(code **)(*(longlong *)local_90 + 0x60))(local_90,0xc);
  local_58 = (QWidget *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_58);
  pQVar6 = local_58;
  (**(code **)(*(longlong *)local_58 + 0x60))(local_58,0x10);
  QBoxLayout::addLayout((QBoxLayout *)local_90,(QLayout *)pQVar6,1);
  local_60 = (QWidget *)FUN_140b65d30(0x28);
  pSVar7 = local_50;
  QListWidget::QListWidget((QListWidget *)local_60,(QWidget *)local_50);
  pQVar5 = local_60;
  puVar1 = &(pSVar7->StudioSettingsDialog_data).offset_0x10;
  *puVar1 = local_60;
  QString::QString((QString *)&local_80,"General");
  iVar8 = QListWidget::count((QListWidget *)pQVar5);
  QListWidget::insertItem((QListWidget *)pQVar5,iVar8,(QString *)&local_80);
  QString::~QString((QString *)&local_80);
  this_00 = (QListWidget *)*puVar1;
  QString::QString((QString *)&local_80,"Rendering");
  iVar8 = QListWidget::count(this_00);
  QListWidget::insertItem(this_00,iVar8,(QString *)&local_80);
  QString::~QString((QString *)&local_80);
  QWidget::setFixedWidth((QWidget *)*puVar1,0x96);
  QListWidget::setCurrentRow((QListWidget *)*puVar1,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*puVar1,0);
  local_60 = (QWidget *)FUN_140b65d30(0x28);
  pSVar7 = local_50;
  QStackedWidget::QStackedWidget((QStackedWidget *)local_60,(QWidget *)local_50);
  (pSVar7->StudioSettingsDialog_data).offset_0x18 = local_60;
  QBoxLayout::addWidget((QBoxLayout *)pQVar6);
  local_58 = (QWidget *)FUN_140b65d30(0x28);
  QWidget::QWidget(local_58,local_50);
  local_60 = (QWidget *)FUN_140b65d30(0x20);
  pQVar6 = local_58;
  QFormLayout::QFormLayout((QFormLayout *)local_60,(QWidget *)local_58);
  pQVar5 = local_60;
  QLayout::setContentsMargins((QLayout *)local_60,0,0,0,0);
  (**(code **)(*(longlong *)pQVar5 + 0x60))(pQVar5,0xc);
  local_88 = (QLayout *)FUN_140b65d30(0x28);
  QDoubleSpinBox::QDoubleSpinBox((QDoubleSpinBox *)local_88,(QWidget *)pQVar6);
  (local_50->StudioSettingsDialog_data).offset_0x20 = local_88;
  QDoubleSpinBox::setRange((QDoubleSpinBox *)local_88,0.1,10.0);
  QDoubleSpinBox::setDecimals((QDoubleSpinBox *)(local_50->StudioSettingsDialog_data).offset_0x20,1)
  ;
  QDoubleSpinBox::setSingleStep
            ((QDoubleSpinBox *)(local_50->StudioSettingsDialog_data).offset_0x20,0.1);
  pQVar2 = (QWidget *)(local_50->StudioSettingsDialog_data).offset_0x20;
  QString::QString((QString *)&local_80,"Camera Speed");
  QFormLayout::addRow((QFormLayout *)pQVar5,(QString *)&local_80,pQVar2);
  QString::~QString((QString *)&local_80);
  QStackedWidget::addWidget
            ((QStackedWidget *)(local_50->StudioSettingsDialog_data).offset_0x18,(QWidget *)pQVar6);
  local_60 = (QWidget *)FUN_140b65d30(0x28);
  QWidget::QWidget(local_60,local_50);
  local_88 = (QLayout *)FUN_140b65d30(0x20);
  QFormLayout::QFormLayout((QFormLayout *)local_88,(QWidget *)local_60);
  QLayout::setContentsMargins(local_88,0,0,0,0);
  (**(code **)(*(longlong *)local_88 + 0x60))(local_88,0xc);
  local_58 = (QWidget *)FUN_140b65d30(0x28);
  QToolButton::QToolButton((QToolButton *)local_58,(QWidget *)local_60);
  pQVar5 = local_58;
  (local_50->StudioSettingsDialog_data).offset_0x28 = local_58;
  QString::QString((QString *)&local_80,"Vulkan");
  QAbstractButton::setText((QAbstractButton *)pQVar5,(QString *)&local_80);
  QString::~QString((QString *)&local_80);
  QToolButton::setPopupMode((QToolButton *)(local_50->StudioSettingsDialog_data).offset_0x28,2);
  local_58 = (QWidget *)FUN_140b65d30(0x28);
  QMenu::QMenu((QMenu *)local_58,(QWidget *)(local_50->StudioSettingsDialog_data).offset_0x28);
  local_b0 = (QActionGroup *)FUN_140b65d30(0x10);
  pQVar5 = local_58;
  QActionGroup::QActionGroup(local_b0,(QObject *)local_58);
  pQVar11 = local_b0;
  QActionGroup::setExclusive(local_b0,true);
  QString::QString((QString *)&local_80,"Vulkan");
  pQVar9 = QWidget::addAction(pQVar5,(QString *)&local_80);
  QString::~QString((QString *)&local_80);
  QAction::setCheckable((QAction *)pQVar9,true);
  local_c8 = (int *)0x0;
  local_c0 = L"vulkan";
  local_b8 = 6;
  QString::QString((QString *)&local_a8,(QArrayDataPointer<char16_t> *)&local_c8);
  ::QVariant::QVariant((QVariant *)&local_80,(QString *)&local_a8);
  QAction::setData((QAction *)pQVar9,(QVariant *)&local_80);
  ::QVariant::~QVariant((QVariant *)&local_80);
  QString::~QString((QString *)&local_a8);
  if (local_c8 != (int *)0x0) {
    LOCK();
    *local_c8 = *local_c8 + -1;
    UNLOCK();
    if (*local_c8 == 0) {
      free(local_c8);
    }
  }
  QAction::setChecked((QAction *)pQVar9,true);
  QActionGroup::addAction(pQVar11,pQVar9);
  (local_50->StudioSettingsDialog_data).offset_0x38 = pQVar9;
  local_80 = triggered_exref;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(code **)(puVar10 + 2) = FUN_1402be4b0;
  *(StudioSettingsDialog **)(puVar10 + 4) = local_50;
  *(QAction **)(puVar10 + 6) = pQVar9;
  QObject::connectImpl
            (local_f0,(void **)pQVar9,(QObject *)&local_80,&local_50->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar10,
             (int *)((ulonglong)in_stack_fffffffffffffedc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_f0);
  QString::QString((QString *)&local_80,"D3D12");
  pQVar9 = QWidget::addAction(pQVar5,(QString *)&local_80);
  QString::~QString((QString *)&local_80);
  QAction::setCheckable((QAction *)pQVar9,true);
  local_c8 = (int *)0x0;
  local_c0 = L"d3d12";
  local_b8 = 5;
  QString::QString((QString *)&local_a8,(QArrayDataPointer<char16_t> *)&local_c8);
  ::QVariant::QVariant((QVariant *)&local_80,(QString *)&local_a8);
  QAction::setData((QAction *)pQVar9,(QVariant *)&local_80);
  ::QVariant::~QVariant((QVariant *)&local_80);
  QString::~QString((QString *)&local_a8);
  if (local_c8 != (int *)0x0) {
    LOCK();
    *local_c8 = *local_c8 + -1;
    UNLOCK();
    if (*local_c8 == 0) {
      free(local_c8);
    }
  }
  QActionGroup::addAction(pQVar11,pQVar9);
  (local_50->StudioSettingsDialog_data).offset_0x40 = pQVar9;
  local_80 = triggered_exref;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(code **)(puVar10 + 2) = FUN_1402be4b0;
  *(StudioSettingsDialog **)(puVar10 + 4) = local_50;
  *(QAction **)(puVar10 + 6) = pQVar9;
  QObject::connectImpl
            (local_e8,(void **)pQVar9,(QObject *)&local_80,&local_50->vftablePtr,
             (QSlotObjectBase *)0x0,(ConnectionType)puVar10,
             (int *)((ulonglong)in_stack_fffffffffffffedc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_e8);
  QToolButton::setMenu
            ((QToolButton *)(local_50->StudioSettingsDialog_data).offset_0x28,(QMenu *)pQVar5);
  pQVar2 = (QWidget *)(local_50->StudioSettingsDialog_data).offset_0x28;
  QString::QString((QString *)&local_80,"Graphics API");
  QFormLayout::addRow((QFormLayout *)local_88,(QString *)&local_80,pQVar2);
  QString::~QString((QString *)&local_80);
  local_58 = (QWidget *)FUN_140b65d30(0x28);
  QToolButton::QToolButton((QToolButton *)local_58,(QWidget *)local_60);
  (local_50->StudioSettingsDialog_data).offset_0x30 = local_58;
  QToolButton::setPopupMode((QToolButton *)local_58,2);
  local_58 = (QWidget *)FUN_140b65d30(0x28);
  QMenu::QMenu((QMenu *)local_58,(QWidget *)(local_50->StudioSettingsDialog_data).offset_0x30);
  pQVar11 = (QActionGroup *)FUN_140b65d30(0x10);
  local_b0 = pQVar11;
  QActionGroup::QActionGroup(pQVar11,(QObject *)local_58);
  QActionGroup::setExclusive(local_b0,true);
  uVar12 = 0;
  do {
    _Str = (&PTR_s_Performance_140de0240)[uVar12];
    local_100 = strlen(_Str);
    local_f8 = _Str;
    QString::fromUtf8((QString *)&local_80,&local_100);
    pQVar9 = QWidget::addAction(local_58,(QString *)&local_80);
    QString::~QString((QString *)&local_80);
    QAction::setCheckable((QAction *)pQVar9,true);
    ::QVariant::QVariant((QVariant *)&local_80,uVar12);
    QAction::setData((QAction *)pQVar9,(QVariant *)&local_80);
    ::QVariant::~QVariant((QVariant *)&local_80);
    QActionGroup::addAction(pQVar11,pQVar9);
    (&(local_50->StudioSettingsDialog_data).offset_0x48)[uVar12] = pQVar9;
    local_80 = triggered_exref;
    puVar10 = (undefined4 *)FUN_140b65d30(0x20);
    *puVar10 = 1;
    *(code **)(puVar10 + 2) = FUN_1402be600;
    *(StudioSettingsDialog **)(puVar10 + 4) = local_50;
    *(QAction **)(puVar10 + 6) = pQVar9;
    QObject::connectImpl
              (local_108,(void **)pQVar9,(QObject *)&local_80,&local_50->vftablePtr,
               (QSlotObjectBase *)0x0,(ConnectionType)puVar10,
               (int *)((ulonglong)in_stack_fffffffffffffedc << 0x20),(QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)local_108);
    uVar12 = uVar12 + 1;
  } while (uVar12 < 3);
  QToolButton::setMenu
            ((QToolButton *)(local_50->StudioSettingsDialog_data).offset_0x30,(QMenu *)local_58);
  pQVar2 = (QWidget *)(local_50->StudioSettingsDialog_data).offset_0x30;
  QString::QString((QString *)&local_80,"Quality Preset");
  QFormLayout::addRow((QFormLayout *)local_88,(QString *)&local_80,pQVar2);
  QString::~QString((QString *)&local_80);
  QStackedWidget::addWidget
            ((QStackedWidget *)(local_50->StudioSettingsDialog_data).offset_0x18,(QWidget *)local_60
            );
  local_58 = (QWidget *)FUN_140b65d30(0x28);
  QDialogButtonBox::QDialogButtonBox((QDialogButtonBox *)local_58,0x200000,local_50);
  pQVar5 = local_58;
  QBoxLayout::addWidget((QBoxLayout *)local_90,local_58,0,0);
  local_a8 = setCurrentIndex_exref;
  uStack_a0 = 0;
  ppvVar3 = (void **)(local_50->StudioSettingsDialog_data).offset_0x10;
  ppvVar4 = (void **)(local_50->StudioSettingsDialog_data).offset_0x18;
  local_80 = currentRowChanged_exref;
  local_78 = 0;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(undefined1 **)(puVar10 + 2) = &LAB_1400986f0;
  *(code **)(puVar10 + 4) = local_a8;
  *(ulonglong *)(puVar10 + 6) = CONCAT44(uStack_9c,uStack_a0);
  QObject::connectImpl
            (local_e0,ppvVar3,(QObject *)&local_80,ppvVar4,(QSlotObjectBase *)&local_a8,
             (ConnectionType)puVar10,(int *)((ulonglong)in_stack_fffffffffffffedc << 0x20),
             (QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_e0);
  local_a8 = FUN_14009e630;
  uStack_a0 = 0;
  ppvVar3 = (void **)(local_50->StudioSettingsDialog_data).offset_0x20;
  local_80 = valueChanged_exref;
  local_78 = 0;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(undefined1 **)(puVar10 + 2) = &LAB_140098680;
  *(code **)(puVar10 + 4) = local_a8;
  *(ulonglong *)(puVar10 + 6) = CONCAT44(uStack_9c,uStack_a0);
  QObject::connectImpl
            (local_d8,ppvVar3,(QObject *)&local_80,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_a8,(ConnectionType)puVar10,
             (int *)((ulonglong)in_stack_fffffffffffffedc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_d8);
  local_a8 = oclero::qlementine::QlementineStyle::vfunction51;
  uStack_a0 = 0;
  local_80 = rejected_exref;
  local_78 = 0;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(undefined1 **)(puVar10 + 2) = &LAB_140085340;
  *(code **)(puVar10 + 4) = local_a8;
  *(ulonglong *)(puVar10 + 6) = CONCAT44(uStack_9c,uStack_a0);
  QObject::connectImpl
            (local_d0,(void **)pQVar5,(QObject *)&local_80,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_a8,(ConnectionType)puVar10,
             (int *)((ulonglong)in_stack_fffffffffffffedc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_d0);
  this_01 = (QAction *)(local_50->StudioSettingsDialog_data).offset_0x50;
  if (this_01 != (QAction *)0x0) {
    QAction::setChecked(this_01,true);
    this_02 = (QAbstractButton *)(local_50->StudioSettingsDialog_data).offset_0x30;
    QAction::text(this_01);
    QAbstractButton::setText(this_02,(QString *)&local_80);
    QString::~QString((QString *)&local_80);
  }
  return local_50;
}

