/**
 * Function: PlayerEmulator
 * Address:  1402d76c0
 * Signature: PlayerEmulator * __thiscall PlayerEmulator(PlayerEmulator * this, undefined8 param_1)
 * Body size: 4220 bytes
 */


PlayerEmulator * __thiscall
ldv::editor::PlayerEmulator::PlayerEmulator(PlayerEmulator *this,undefined8 param_1)

{
  PlayerEmulator_vftable0 *pPVar1;
  PlayerEmulator_vftable1 *pPVar2;
  QSpinBox *this_00;
  QWidget *pQVar3;
  QWidget *pQVar4;
  void **ppvVar5;
  code *pcVar6;
  PlayerEmulator *pPVar7;
  int iVar8;
  QString *pQVar9;
  undefined4 *puVar10;
  longlong lVar11;
  uint in_stack_fffffffffffffd2c;
  QArrayData *local_2b8 [2];
  QObject local_2a8 [8];
  QObject local_2a0 [8];
  QObject local_298 [8];
  QObject local_290 [8];
  PlayerEmulator_vftable1 **local_288;
  code *local_280;
  undefined4 local_278;
  QString local_268 [24];
  QString local_250 [24];
  QString local_238 [24];
  QString local_220 [24];
  QString local_208 [24];
  QString local_1f0 [24];
  QString local_1d8 [24];
  QString local_1c0 [24];
  QString local_1a8 [24];
  QString local_190 [24];
  QString local_178 [24];
  QString local_160 [24];
  QString local_148 [24];
  QString local_130 [24];
  QString local_118 [24];
  QString local_100 [24];
  QString local_e8 [24];
  QString local_d0 [24];
  QString local_b8 [24];
  undefined1 *local_a0;
  QGroupBox *local_98;
  QLayout *local_90;
  QFormLayout *local_88;
  PlayerEmulator_vftable0 *local_80;
  QString *local_78;
  QString *local_70;
  QArrayData *local_68;
  QString *pQStack_60;
  longlong local_58;
  PlayerEmulator *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_1,0);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  local_a0 = &(this->PlayerEmulator_data).field_0x10;
  local_50 = this;
  QString::QString((QString *)local_a0,"en_us");
  local_288 = &local_50[1].vftablePtr;
  QString::QString((QString *)local_288,"US");
  local_50[1].PlayerEmulator_data.field_0x10 = 0;
  *(undefined8 *)&local_50[1].PlayerEmulator_data.field_0x14 = 0;
  *(undefined8 *)((longlong)&local_50[2].vftablePtr + 4) = 0;
  *(undefined8 *)&local_50[2].field_0xc = 0;
  *(undefined8 *)((longlong)&local_50[2].vftablePtr + 4) = 0;
  *(undefined4 *)&local_50[2].PlayerEmulator_data.field_0x4 = 0;
  local_90 = (QLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_90,(QWidget *)local_50);
  QLayout::setContentsMargins(local_90,8,8,8,8);
  local_98 = (QGroupBox *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_280,"Player Emulation");
  QGroupBox::QGroupBox(local_98,(QString *)&local_280,(QWidget *)0x0);
  QString::~QString((QString *)&local_280);
  local_88 = (QFormLayout *)FUN_140b65d30(0x20);
  QFormLayout::QFormLayout(local_88,(QWidget *)local_98);
  local_80 = (PlayerEmulator_vftable0 *)FUN_140b65d30(0x28);
  QComboBox::QComboBox((QComboBox *)local_80,(QWidget *)0x0);
  local_50[2].vftablePtr = local_80;
  local_70 = (QString *)&local_280;
  QString::QString((QString *)&local_280,"en_us");
  local_70 = local_268;
  QString::QString(local_70,"es_es");
  local_70 = local_250;
  QString::QString(local_70,"fr_fr");
  local_70 = local_238;
  QString::QString(local_70,"de_de");
  local_70 = local_220;
  QString::QString(local_70,"pt_br");
  local_70 = local_208;
  QString::QString(local_70,"ja_jp");
  local_70 = local_1f0;
  QString::QString(local_70,"ko_kr");
  local_70 = local_1d8;
  QString::QString(local_70,"zh_cn");
  local_70 = local_1c0;
  QString::QString(local_70,"zh_tw");
  local_70 = local_1a8;
  QString::QString(local_70,"ru_ru");
  local_70 = local_190;
  QString::QString(local_70,"it_it");
  local_70 = local_178;
  QString::QString(local_70,"tr_tr");
  local_70 = local_160;
  QString::QString(local_70,"pl_pl");
  local_70 = local_148;
  QString::QString(local_70,"vi_vn");
  local_70 = local_130;
  QString::QString(local_70,"th_th");
  local_70 = local_118;
  QString::QString(local_118,"id_id");
  local_70 = local_100;
  QString::QString(local_100,"ms_my");
  local_70 = local_e8;
  QString::QString(local_e8,"ar_001");
  local_70 = local_d0;
  QString::QString(local_d0,"hi_in");
  local_70 = local_b8;
  QString::QString(local_b8,"bn_bd");
  pQVar9 = QArrayData::allocate(local_2b8,0x18,8,0x14,1);
  local_68 = local_2b8[0];
  local_58 = 0;
  pQStack_60 = pQVar9;
  QString::QString(pQVar9,(QString *)&local_280);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_268);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_250);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_238);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_220);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_208);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_1f0);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_1d8);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_1c0);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_1a8);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_190);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_178);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_160);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_148);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_130);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_118);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_100);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_e8);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_d0);
  local_58 = local_58 + 1;
  QString::QString(pQVar9 + local_58 * 0x18,local_b8);
  pPVar1 = local_80;
  local_58 = local_58 + 1;
  iVar8 = QComboBox::count((QComboBox *)local_80);
  QComboBox::insertItems((QComboBox *)pPVar1,iVar8,(QList<QString> *)&local_68);
  if (local_68 != (QArrayData *)0x0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 == 0) {
      if (local_58 != 0) {
        lVar11 = local_58 * 0x18;
        pQVar9 = pQStack_60;
        do {
          QString::~QString(pQVar9);
          pQVar9 = pQVar9 + 0x18;
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != 0);
      }
      free(local_68);
    }
  }
  QString::~QString(local_b8);
  QString::~QString(local_d0);
  QString::~QString(local_e8);
  QString::~QString(local_100);
  QString::~QString(local_118);
  QString::~QString(local_130);
  QString::~QString(local_148);
  QString::~QString(local_160);
  QString::~QString(local_178);
  QString::~QString(local_190);
  QString::~QString(local_1a8);
  QString::~QString(local_1c0);
  QString::~QString(local_1d8);
  QString::~QString(local_1f0);
  QString::~QString(local_208);
  QString::~QString(local_220);
  QString::~QString(local_238);
  QString::~QString(local_250);
  QString::~QString(local_268);
  QString::~QString((QString *)&local_280);
  pPVar1 = local_50[2].vftablePtr;
  QString::QString((QString *)&local_280,"Locale:");
  QFormLayout::addRow(local_88,(QString *)&local_280,(QWidget *)pPVar1);
  QString::~QString((QString *)&local_280);
  local_80 = (PlayerEmulator_vftable0 *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_280,"Pseudolocalize");
  pPVar1 = local_80;
  QCheckBox::QCheckBox((QCheckBox *)local_80,(QString *)&local_280,(QWidget *)0x0);
  pPVar7 = local_50;
  local_50[2].vftablePtr = (PlayerEmulator_vftable1 *)pPVar1;
  QString::~QString((QString *)&local_280);
  pPVar2 = pPVar7[2].vftablePtr;
  QString::QString((QString *)&local_280,"Swap characters to identify unlocalized text");
  QWidget::setToolTip((QWidget *)pPVar2,(QString *)&local_280);
  QString::~QString((QString *)&local_280);
  QFormLayout::addRow(local_88,(QWidget *)local_50[2].vftablePtr);
  local_80 = (PlayerEmulator_vftable0 *)FUN_140b65d30(0x28);
  QSpinBox::QSpinBox((QSpinBox *)local_80,(QWidget *)0x0);
  *(PlayerEmulator_vftable0 **)&local_50[2].PlayerEmulator_data = local_80;
  QSpinBox::setRange((QSpinBox *)local_80,0,200);
  this_00 = *(QSpinBox **)&local_50[2].PlayerEmulator_data;
  QString::QString((QString *)&local_280,"%");
  QSpinBox::setSuffix(this_00,(QString *)&local_280);
  QString::~QString((QString *)&local_280);
  pQVar3 = *(QWidget **)&local_50[2].PlayerEmulator_data;
  QString::QString((QString *)&local_280,"Extend text by percentage to identify UI overflow");
  QWidget::setToolTip(pQVar3,(QString *)&local_280);
  QString::~QString((QString *)&local_280);
  pQVar4 = *(QWidget **)&local_50[2].PlayerEmulator_data;
  QString::QString((QString *)&local_280,"Elongate:");
  QFormLayout::addRow(local_88,(QString *)&local_280,pQVar4);
  QString::~QString((QString *)&local_280);
  local_80 = (PlayerEmulator_vftable0 *)FUN_140b65d30(0x28);
  QComboBox::QComboBox((QComboBox *)local_80,(QWidget *)0x0);
  pPVar1 = local_80;
  *(PlayerEmulator_vftable0 **)&local_50[2].field_0x8 = local_80;
  local_78 = (QString *)&local_280;
  QString::QString(local_78,"US");
  local_78 = local_268;
  QString::QString(local_268,"GB");
  local_78 = local_250;
  QString::QString(local_250,"CA");
  local_78 = local_238;
  QString::QString(local_238,"AU");
  local_78 = local_220;
  QString::QString(local_220,"DE");
  local_78 = local_208;
  QString::QString(local_78,"FR");
  local_78 = local_1f0;
  QString::QString(local_78,"ES");
  local_78 = local_1d8;
  QString::QString(local_78,"BR");
  local_78 = local_1c0;
  QString::QString(local_78,"JP");
  local_78 = local_1a8;
  QString::QString(local_78,"KR");
  local_78 = local_190;
  QString::QString(local_78,"CN");
  local_78 = local_178;
  QString::QString(local_78,"IN");
  local_78 = local_160;
  QString::QString(local_78,"RU");
  local_78 = local_148;
  QString::QString(local_78,"MX");
  local_78 = local_130;
  QString::QString(local_78,"IT");
  local_78 = local_118;
  QString::QString(local_78,"TR");
  pQVar9 = QArrayData::allocate(local_2b8,0x18,8,0x10,1);
  local_68 = local_2b8[0];
  pQStack_60 = pQVar9;
  QString::QString(pQVar9,(QString *)&local_280);
  QString::QString(pQVar9 + 0x18,local_268);
  QString::QString(pQVar9 + 0x30,local_250);
  QString::QString(pQVar9 + 0x48,local_238);
  QString::QString(pQVar9 + 0x60,local_220);
  QString::QString(pQVar9 + 0x78,local_208);
  QString::QString(pQVar9 + 0x90,local_1f0);
  QString::QString(pQVar9 + 0xa8,local_1d8);
  QString::QString(pQVar9 + 0xc0,local_1c0);
  QString::QString(pQVar9 + 0xd8,local_1a8);
  QString::QString(pQVar9 + 0xf0,local_190);
  QString::QString(pQVar9 + 0x108,local_178);
  QString::QString(pQVar9 + 0x120,local_160);
  QString::QString(pQVar9 + 0x138,local_148);
  QString::QString(pQVar9 + 0x150,local_130);
  QString::QString(pQVar9 + 0x168,local_118);
  local_58 = 0x10;
  iVar8 = QComboBox::count((QComboBox *)pPVar1);
  QComboBox::insertItems((QComboBox *)pPVar1,iVar8,(QList<QString> *)&local_68);
  pPVar7 = local_50;
  if (local_68 != (QArrayData *)0x0) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + -1;
    UNLOCK();
    if (*(int *)local_68 == 0) {
      if (local_58 != 0) {
        lVar11 = local_58 * 0x18;
        pQVar9 = pQStack_60;
        do {
          QString::~QString(pQVar9);
          pQVar9 = pQVar9 + 0x18;
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != 0);
      }
      free(local_68);
    }
  }
  QString::~QString(local_118);
  QString::~QString(local_130);
  QString::~QString(local_148);
  QString::~QString(local_160);
  QString::~QString(local_178);
  QString::~QString(local_190);
  QString::~QString(local_1a8);
  QString::~QString(local_1c0);
  QString::~QString(local_1d8);
  QString::~QString(local_1f0);
  QString::~QString(local_208);
  QString::~QString(local_220);
  QString::~QString(local_238);
  QString::~QString(local_250);
  QString::~QString(local_268);
  QString::~QString((QString *)&local_280);
  pQVar3 = *(QWidget **)&pPVar7[2].field_0x8;
  QString::QString((QString *)&local_280,"Emulate player country/region for policy toggles");
  QWidget::setToolTip(pQVar3,(QString *)&local_280);
  QString::~QString((QString *)&local_280);
  pQVar4 = *(QWidget **)&local_50[2].field_0x8;
  QString::QString((QString *)&local_280,"Region:");
  QFormLayout::addRow(local_88,(QString *)&local_280,pQVar4);
  QString::~QString((QString *)&local_280);
  QBoxLayout::addWidget((QBoxLayout *)local_90,local_98,0,0);
  QBoxLayout::addStretch((QBoxLayout *)local_90,0);
  pcVar6 = currentIndexChanged_exref;
  local_68 = (QArrayData *)FUN_1402d8e90;
  pQStack_60 = (QString *)((ulonglong)pQStack_60 & 0xffffffff00000000);
  pPVar1 = local_50[2].vftablePtr;
  local_280 = currentIndexChanged_exref;
  local_278 = 0;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(undefined1 **)(puVar10 + 2) = &LAB_1400986f0;
  *(QArrayData **)(puVar10 + 4) = local_68;
  *(QString **)(puVar10 + 6) = pQStack_60;
  QObject::connectImpl
            (local_2a8,&pPVar1->vfunction1,(QObject *)&local_280,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_68,(ConnectionType)puVar10,
             (int *)((ulonglong)in_stack_fffffffffffffd2c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_2a8);
  local_68 = (QArrayData *)FUN_1402d8f10;
  pQStack_60 = (QString *)((ulonglong)pQStack_60 & 0xffffffff00000000);
  ppvVar5 = *(void ***)&local_50[2].field_0x8;
  local_280 = pcVar6;
  local_278 = 0;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(undefined1 **)(puVar10 + 2) = &LAB_1400986f0;
  *(QArrayData **)(puVar10 + 4) = local_68;
  *(QString **)(puVar10 + 6) = pQStack_60;
  QObject::connectImpl
            (local_2a0,ppvVar5,(QObject *)&local_280,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_68,(ConnectionType)puVar10,
             (int *)((ulonglong)in_stack_fffffffffffffd2c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_2a0);
  local_68 = (QArrayData *)&LAB_1402d8f90;
  pQStack_60 = (QString *)((ulonglong)pQStack_60 & 0xffffffff00000000);
  pPVar2 = local_50[2].vftablePtr;
  local_280 = toggled_exref;
  local_278 = 0;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(undefined1 **)(puVar10 + 2) = &LAB_140271f00;
  *(QArrayData **)(puVar10 + 4) = local_68;
  *(QString **)(puVar10 + 6) = pQStack_60;
  QObject::connectImpl
            (local_298,&pPVar2->vfunction1,(QObject *)&local_280,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_68,(ConnectionType)puVar10,
             (int *)((ulonglong)in_stack_fffffffffffffd2c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_298);
  local_68 = (QArrayData *)&LAB_1402d8fa0;
  pQStack_60 = (QString *)((ulonglong)pQStack_60 & 0xffffffff00000000);
  ppvVar5 = *(void ***)&local_50[2].PlayerEmulator_data;
  local_280 = valueChanged_exref;
  local_278 = 0;
  puVar10 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar10 = 1;
  *(undefined1 **)(puVar10 + 2) = &LAB_1400986f0;
  *(QArrayData **)(puVar10 + 4) = local_68;
  *(QString **)(puVar10 + 6) = pQStack_60;
  QObject::connectImpl
            (local_290,ppvVar5,(QObject *)&local_280,&local_50->vftablePtr,
             (QSlotObjectBase *)&local_68,(ConnectionType)puVar10,
             (int *)((ulonglong)in_stack_fffffffffffffd2c << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_290);
  return local_50;
}

