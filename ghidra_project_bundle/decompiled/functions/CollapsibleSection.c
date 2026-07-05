/**
 * Function: CollapsibleSection
 * Address:  140265620
 * Signature: CollapsibleSection * __thiscall CollapsibleSection(CollapsibleSection * this, QString * param_1, undefined8 param_2)
 * Body size: 1234 bytes
 */


CollapsibleSection * __thiscall
ldv::editor::CollapsibleSection::CollapsibleSection
          (CollapsibleSection *this,QString *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  QWidget *pQVar2;
  longlong *plVar3;
  undefined8 uVar4;
  QObject *this_00;
  QLayout *pQVar5;
  CollapsibleSection *pCVar6;
  undefined1 uVar7;
  QString *pQVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int *local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  QLayout *local_88;
  QString local_80 [24];
  int *local_68;
  wchar_t *local_60;
  undefined8 local_58;
  CollapsibleSection *local_50;
  QWidget *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  QWidget::QWidget((QWidget *)this,param_2);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  QString::QString((QString *)&(this->CollapsibleSection_data).field_0x10,param_1);
  (this->CollapsibleSection_data).offset_0x28 = 0;
  (this->CollapsibleSection_data).offset_0x30 = 0;
  (this->CollapsibleSection_data).offset_0x38 = 0;
  (this->CollapsibleSection_data).offset_0x40 = 0;
  (this->CollapsibleSection_data).offset_0x48 = 1;
  local_50 = this;
  local_88 = (QLayout *)FUN_140b65d30(0x20);
  QVBoxLayout::QVBoxLayout((QVBoxLayout *)local_88,(QWidget *)local_50);
  pQVar5 = local_88;
  QLayout::setContentsMargins(local_88,0,0,0,0);
  (**(code **)(*(longlong *)pQVar5 + 0x60))(pQVar5,0);
  local_48 = (QWidget *)FUN_140b65d30(0x28);
  pCVar6 = local_50;
  QWidget::QWidget(local_48,local_50,0);
  pQVar2 = local_48;
  puVar1 = &(pCVar6->CollapsibleSection_data).offset_0x28;
  *puVar1 = local_48;
  local_68 = (int *)0x0;
  local_60 = L"sectionHeader";
  local_58 = 0xd;
  QString::QString(local_80,(QArrayDataPointer<char16_t> *)&local_68);
  QObject::doSetObjectName(&pQVar2->QObject,local_80);
  QString::~QString(local_80);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      free(local_68);
    }
  }
  pQVar2 = (QWidget *)*puVar1;
  QCursor::QCursor((QCursor *)local_80,0xd);
  QWidget::setCursor(pQVar2,(QCursor *)local_80);
  QCursor::~QCursor((QCursor *)local_80);
  QObject::installEventFilter
            ((QObject *)(local_50->CollapsibleSection_data).offset_0x28,(QObject *)local_50);
  local_48 = (QWidget *)FUN_140b65d30(0x20);
  QHBoxLayout::QHBoxLayout((QHBoxLayout *)local_48,(QWidget *)*puVar1);
  (local_50->CollapsibleSection_data).offset_0x30 = local_48;
  QLayout::setContentsMargins((QLayout *)local_48,6,4,6,4);
  plVar3 = (longlong *)(local_50->CollapsibleSection_data).offset_0x30;
  (**(code **)(*plVar3 + 0x60))(plVar3,6);
  local_48 = (QWidget *)FUN_140b65d30(0x28);
  uVar4 = *puVar1;
  local_68 = (int *)0x0;
  local_60 = L"▾";
  local_58 = 1;
  QString::QString(local_80,(QArrayDataPointer<char16_t> *)&local_68);
  pQVar2 = local_48;
  QLabel::QLabel((QLabel *)local_48,local_80,uVar4,0);
  pCVar6 = local_50;
  (local_50->CollapsibleSection_data).offset_0x40 = pQVar2;
  QString::~QString(local_80);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      free(local_68);
    }
  }
  this_00 = (QObject *)(pCVar6->CollapsibleSection_data).offset_0x40;
  local_68 = (int *)0x0;
  local_60 = L"sectionArrow";
  local_58 = 0xc;
  QString::QString(local_80,(QArrayDataPointer<char16_t> *)&local_68);
  QObject::doSetObjectName(this_00,local_80);
  QString::~QString(local_80);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      free(local_68);
    }
  }
  local_48 = (QWidget *)FUN_140b65d30(0x28);
  QLabel::QLabel((QLabel *)local_48,param_1,*puVar1,0);
  local_68 = (int *)0x0;
  local_60 = L"sectionTitle";
  local_58 = 0xc;
  QString::QString(local_80,(QArrayDataPointer<char16_t> *)&local_68);
  pQVar2 = local_48;
  QObject::doSetObjectName(&local_48->QObject,local_80);
  QString::~QString(local_80);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      free(local_68);
    }
  }
  QBoxLayout::addWidget
            ((QBoxLayout *)(local_50->CollapsibleSection_data).offset_0x30,
             (local_50->CollapsibleSection_data).offset_0x40,0,0);
  QBoxLayout::addWidget((QBoxLayout *)(local_50->CollapsibleSection_data).offset_0x30,pQVar2,0,0);
  QBoxLayout::addStretch((QBoxLayout *)(local_50->CollapsibleSection_data).offset_0x30,0);
  local_48 = (QWidget *)FUN_140b65d30(0x28);
  pCVar6 = local_50;
  QWidget::QWidget(local_48,local_50,0);
  pQVar2 = local_48;
  (pCVar6->CollapsibleSection_data).offset_0x38 = local_48;
  local_68 = (int *)0x0;
  local_60 = L"sectionBody";
  local_58 = 0xb;
  QString::QString(local_80,(QArrayDataPointer<char16_t> *)&local_68);
  QObject::doSetObjectName(&pQVar2->QObject,local_80);
  QString::~QString(local_80);
  if (local_68 != (int *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      free(local_68);
    }
  }
  QBoxLayout::addWidget((QBoxLayout *)pQVar5,*puVar1,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar5,(local_50->CollapsibleSection_data).offset_0x38,0,0);
  local_39 = 1;
  local_a0 = (int *)0x0;
  local_98 = L"section:";
  local_90 = 8;
  QString::QString((QString *)&local_68,(QArrayDataPointer<char16_t> *)&local_a0);
  pQVar8 = QString::append((QString *)&local_68,param_1);
  QString::QString(local_80,pQVar8);
  if (DAT_1416b8588 == 0) {
    uVar7 = 1;
  }
  else {
    lVar9 = FUN_14026c340(DAT_1416b8588 + 8,local_80);
    puVar10 = &local_39;
    if (lVar9 != *(longlong *)(DAT_1416b8588 + 8)) {
      puVar10 = (undefined1 *)(lVar9 + 0x38);
    }
    uVar7 = *puVar10;
  }
  pCVar6 = local_50;
  (local_50->CollapsibleSection_data).offset_0x48 = uVar7;
  QString::~QString(local_80);
  QString::~QString((QString *)&local_68);
  if (local_a0 != (int *)0x0) {
    LOCK();
    *local_a0 = *local_a0 + -1;
    UNLOCK();
    if (*local_a0 == 0) {
      free(local_a0);
    }
  }
  FUN_140265f90(pCVar6,(pCVar6->CollapsibleSection_data).offset_0x48);
  return local_50;
}

