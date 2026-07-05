/**
 * Function: EditorMainWindow
 * Address:  14008b840
 * Signature: EditorMainWindow * __thiscall EditorMainWindow(EditorMainWindow * this, undefined4 param_1, undefined8 param_2)
 * Body size: 1817 bytes
 */


EditorMainWindow * __thiscall
ldv::editor::EditorMainWindow::EditorMainWindow
          (EditorMainWindow *this,undefined4 param_1,undefined8 param_2)

{
  double dVar1;
  CDockManager *pCVar2;
  EditorMainWindow *pEVar3;
  bool bVar4;
  int iVar5;
  QToolBar *pQVar6;
  undefined4 *puVar7;
  int iVar8;
  uint in_stack_fffffffffffffe7c;
  QString local_170 [24];
  undefined1 local_158 [24];
  QString local_140 [24];
  char *local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  QObject local_c8 [8];
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code *local_a0 [4];
  QString *local_80;
  QSettings local_78 [16];
  CDockManager *local_68;
  code *local_60;
  wchar_t *pwStack_58;
  undefined8 local_50;
  EditorMainWindow *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  QMainWindow::QMainWindow((QMainWindow *)this,param_2,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_c0 = &(this->EditorMainWindow_data).field_0x10;
  local_40 = this;
  FUN_1400995a0();
  (local_40->EditorMainWindow_data).field_0x128 = 0;
  FUN_140009aa0(local_40 + 1);
  local_b8 = &(local_40->EditorMainWindow_data).field_0x128;
  local_40[0x34e].vftablePtr = (EditorMainWindow_vftable1 *)0x0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x8 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x48 = 0;
  local_40[0x34e].EditorMainWindow_data.field_0xa0 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x88 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x90 = 0;
  *(undefined4 *)&local_40[0x34e].EditorMainWindow_data.field_0x98 = 0;
  *(undefined4 *)&local_40[0x34e].EditorMainWindow_data.field_0xac = param_1;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xb0 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xb8 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xc0 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xc8 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xd0 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xd8 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xe0 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xe8 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xf0 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0xf8 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x100 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x108 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x110 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x118 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x120 = 0;
  *(undefined8 *)&local_40[0x34e].EditorMainWindow_data.field_0x128 = 0;
  local_40[0x34f].vftablePtr = (EditorMainWindow_vftable0 *)0x0;
  *(undefined8 *)&local_40[0x34f].field_0x8 = 0;
  local_40[0x34f].vftablePtr = (EditorMainWindow_vftable1 *)0x0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x8 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x10 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x18 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x20 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x28 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x30 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x38 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x40 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x48 = 0;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x50 = 0;
  *(undefined4 *)&local_40[0x34f].EditorMainWindow_data.field_0x58 = 2;
  *(undefined2 *)&local_40[0x34f].EditorMainWindow_data.field_0x5c = 1;
  *(undefined8 *)&local_40[0x34f].EditorMainWindow_data.field_0x60 = 0x3ff0000000000000;
  local_80 = (QString *)&local_40[0x34f].EditorMainWindow_data.field_0x68;
  local_60 = (code *)0x0;
  pwStack_58 = L"d3d12";
  local_50 = 5;
  QString::QString(local_80,(QArrayDataPointer<char16_t> *)&local_60);
  if (local_60 != (code *)0x0) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + -1;
    UNLOCK();
    if (*(int *)local_60 == 0) {
      free(local_60);
    }
  }
  pEVar3 = local_40;
  *(undefined4 *)&local_40[0x34f].EditorMainWindow_data.field_0x80 = 1;
  local_b0 = &local_40[0x34f].EditorMainWindow_data.field_0x88;
  QByteArray::QByteArray((QByteArray *)local_b0);
  local_a8 = &pEVar3[0x34f].EditorMainWindow_data.field_0xa0;
  local_60 = (code *)((ulonglong)local_60 & 0xffffffff00000000);
  FUN_14000ad50(local_a8,&local_60,local_a0);
  QString::QString((QString *)&local_60,"Luduvo Studio");
  pEVar3 = local_40;
  QWidget::setWindowTitle((QWidget *)local_40,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  local_60 = (code *)0x2d000000500;
  QWidget::resize((QWidget *)pEVar3,(QSize *)&local_60);
  QSettings::QSettings(local_78,(QObject *)0x0);
  ::QVariant::QVariant((QVariant *)local_a0,true);
  local_128 = "studio/vsync";
  local_120 = 0xc;
  QSettings::value(local_78,&local_60,&local_128,(QVariant *)local_a0);
  bVar4 = ::QVariant::toBool((QVariant *)&local_60);
  local_40[0x34f].EditorMainWindow_data.field_0x5c = bVar4;
  ::QVariant::~QVariant((QVariant *)&local_60);
  ::QVariant::~QVariant((QVariant *)local_a0);
  ::QVariant::QVariant((QVariant *)local_a0,1.0);
  local_118 = "studio/cameraSpeed";
  local_110 = 0x12;
  QSettings::value(local_78,&local_60,&local_118,(QVariant *)local_a0);
  dVar1 = ::QVariant::toDouble((QVariant *)&local_60,(bool *)0x0);
  *(double *)&local_40[0x34f].EditorMainWindow_data.field_0x60 = dVar1;
  ::QVariant::~QVariant((QVariant *)&local_60);
  ::QVariant::~QVariant((QVariant *)local_a0);
  local_108 = "studio/graphicsApi";
  local_100 = 0x12;
  bVar4 = QSettings::contains(local_78,&local_108);
  local_60 = (code *)0x0;
  pwStack_58 = L"d3d12";
  local_50 = 5;
  QString::QString(local_140,(QArrayDataPointer<char16_t> *)&local_60);
  if (local_60 != (code *)0x0) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + -1;
    UNLOCK();
    if (*(int *)local_60 == 0) {
      free(local_60);
    }
  }
  ::QVariant::QVariant((QVariant *)local_a0,local_140);
  local_f8 = "studio/graphicsApi";
  local_f0 = 0x12;
  QSettings::value(local_78,&local_60,&local_f8,(QVariant *)local_a0);
  ::QVariant::toString((QVariant *)&local_60);
  FUN_14008c4b0(local_170,local_158);
  QString::swap(local_80,local_170);
  QString::~QString(local_170);
  ::QVariant::~QVariant((QVariant *)&local_60);
  ::QVariant::~QVariant((QVariant *)local_a0);
  QString::~QString(local_140);
  if (!bVar4) {
    ::QVariant::QVariant((QVariant *)&local_60,local_80);
    local_e8 = "studio/graphicsApi";
    local_e0 = 0x12;
    QSettings::setValue(local_78,&local_e8,(QVariant *)&local_60);
    ::QVariant::~QVariant((QVariant *)&local_60);
  }
  ::QVariant::QVariant((QVariant *)local_a0,1);
  local_d8 = "studio/qualityPreset";
  local_d0 = 0x14;
  QSettings::value(local_78,&local_60,&local_d8,(QVariant *)local_a0);
  iVar5 = ::QVariant::toInt((QVariant *)&local_60,(bool *)0x0);
  iVar8 = 0;
  if (0 < iVar5) {
    iVar8 = iVar5;
  }
  iVar5 = 2;
  if (iVar8 < 2) {
    iVar5 = iVar8;
  }
  *(int *)&local_40[0x34f].EditorMainWindow_data.field_0x80 = iVar5;
  ::QVariant::~QVariant((QVariant *)&local_60);
  ::QVariant::~QVariant((QVariant *)local_a0);
  redabortreset_bluesreset();
  FUN_140269250();
  simulate_touch_input_with_mouse_clicks(local_40);
  pQVar6 = (QToolBar *)add_script_to_selected_entity(local_40);
  *(QToolBar **)&local_40[0x34e].EditorMainWindow_data.field_0x100 = pQVar6;
  QMainWindow::addToolBar((QMainWindow *)local_40,pQVar6);
  FUN_140279dd0(8,1);
  FUN_140279dd0(0x200000,1);
  FUN_140279dd0(0x800000,1);
  FUN_140279dd0(0x8000,0);
  FUN_140279dd0(2,0);
  FUN_140279dd0(0x4000,0);
  FUN_140279dd0(0x80,1);
  local_68 = (CDockManager *)FUN_140b65d30(0x38);
  pEVar3 = local_40;
  ads::CDockManager::CDockManager(local_68,(QObject *)local_40);
  pCVar2 = local_68;
  *(CDockManager **)&pEVar3[0x34e].EditorMainWindow_data.field_0xb0 = local_68;
  QString::QString((QString *)&local_60);
  QWidget::setStyleSheet((QWidget *)pCVar2,(QString *)&local_60);
  QString::~QString((QString *)&local_60);
  FUN_14027d880(pEVar3);
  FUN_14008c8b0(local_40);
  FUN_14008ccf0(local_40,0);
  local_68 = (CDockManager *)FUN_140b65d30(0x10);
  QTimer::QTimer((QTimer *)local_68,(QObject *)local_40);
  pCVar2 = local_68;
  QTimer::setInterval((QTimer *)local_68,300000);
  local_60 = auto_saved_recovery_file;
  pwStack_58 = (wchar_t *)((ulonglong)pwStack_58 & 0xffffffff00000000);
  local_a0[0] = timeout_exref;
  puVar7 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar7 = 1;
  *(undefined1 **)(puVar7 + 2) = &LAB_140085340;
  *(code **)(puVar7 + 4) = local_60;
  *(wchar_t **)(puVar7 + 6) = pwStack_58;
  QObject::connectImpl
            (local_c8,&pCVar2->vftablePtr,(QObject *)local_a0,&local_40->vftablePtr,
             (QSlotObjectBase *)&local_60,(ConnectionType)puVar7,
             (int *)((ulonglong)in_stack_fffffffffffffe7c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_c8);
  QTimer::start((QTimer *)pCVar2);
  QSettings::~QSettings(local_78);
  return local_40;
}

