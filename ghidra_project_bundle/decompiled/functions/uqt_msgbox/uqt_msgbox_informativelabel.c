/**
 * Function: uqt_msgbox_informativelabel
 * Address:  14007d6d0
 * Signature: void __thiscall uqt_msgbox_informativelabel(void * this, QWidget * param_1)
 * Body size: 2690 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall uqt_msgbox_informativelabel(void *this,QWidget *param_1)

{
  ulonglong uVar1;
  char cVar2;
  bool bVar3;
  FocusPolicy FVar4;
  longlong lVar5;
  QObject *pQVar6;
  QObject *pQVar7;
  QWidget *pQVar8;
  QWidget *pQVar9;
  QLayout *this_00;
  QAbstractItemDelegate *pQVar10;
  code *pcVar11;
  QChar *pQVar12;
  QChar *pQVar13;
  QTextDocument *this_01;
  int iVar14;
  ulonglong local_d0;
  QChar *local_c8;
  ulonglong local_c0;
  QChar *local_b8;
  QChar *local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  ComboboxItemViewFilter *local_98;
  int *local_90;
  wchar_t *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  LineEditButtonEventFilter *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_1 == (QWidget *)0x0) {
    return;
  }
  QCommonStyle::polish(this,(QWidget *)param_1);
  lVar5 = (**(code **)((longlong)param_1->QObject + 8))(param_1,"QLineEditIconButton");
  if (lVar5 != 0) {
    local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x30);
    pQVar6 = (QObject *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
    oclero::qlementine::LineEditButtonEventFilter::LineEditButtonEventFilter
              (local_50,this,*(longlong *)((longlong)this + 0x10) + 0x6a0,pQVar6);
    QObject::installEventFilter(&param_1->QObject,(QObject *)local_50);
    QWidget::setSizePolicy(param_1,0);
    iVar14 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x580);
    QWidget::setFixedSize(param_1,iVar14,iVar14);
  }
  pQVar7 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar7 != (QObject *)0x0) {
    QWidget::minimumSize(param_1);
    if (((int)local_78 == 0) && (local_78._4_4_ == -1)) {
      QWidget::setMinimumSize(param_1,0,1);
    }
  }
  cVar2 = FUN_14025cc30(param_1);
  if (cVar2 != '\0') {
    QFont::QFont((QFont *)&local_78,(QFont *)(*(longlong *)&param_1[1].field_0x8 + 0x38));
    QFont::setWeight((QFont *)&local_78,700);
    QWidget::setFont(param_1,(QFont *)&local_78);
    QFont::~QFont((QFont *)&local_78);
  }
  cVar2 = FUN_14025cad0(param_1);
  if (cVar2 == '\0') {
    cVar2 = FUN_14025cc10(param_1);
  }
  else {
    QWidget::setAttribute(param_1,0x4a,true);
    QWidget::setAttribute(param_1,4,false);
    cVar2 = FUN_14025cc10(param_1);
  }
  if (cVar2 == '\0') {
    cVar2 = FUN_14025cc80(param_1);
  }
  else {
    QWidget::setAttribute(param_1,2,true);
    cVar2 = FUN_14025cc80(param_1);
  }
  if (cVar2 == '\0') {
    cVar2 = FUN_14025ce40(param_1);
  }
  else {
    local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x28);
    QObject::QObject((QObject *)local_50,(QObject *)param_1);
    local_50->vftablePtr =
         (LineEditButtonEventFilter_vftable *)
         &oclero::qlementine::WidgetWithFocusFrameEventFilter::vftable;
    (local_50->LineEditButtonEventFilter_data).offset_0x8 = (ExternalRefCountData *)param_1;
    (local_50->LineEditButtonEventFilter_data).offset_0x10 = (QObject *)0x0;
    *(undefined1 *)&(local_50->LineEditButtonEventFilter_data).offset_0x18 = 0;
    local_98 = (ComboboxItemViewFilter *)FUN_140b65d30(0x28);
    QFocusFrame::QFocusFrame((QFocusFrame *)local_98,(QWidget *)param_1);
    (local_50->LineEditButtonEventFilter_data).offset_0x10 = (QObject *)local_98;
    QObject::installEventFilter(&param_1->QObject,(QObject *)local_50);
    cVar2 = FUN_14025ce40(param_1);
  }
  if (cVar2 != '\0') {
    QWidget::setFocusPolicy(param_1,1);
  }
  pQVar8 = (QWidget *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar8 != (QWidget *)0x0) {
    QWidget::setBackgroundRole(pQVar8,0x11);
    QWidget::setAutoFillBackground(pQVar8,false);
    QWidget::setAttribute(pQVar8,0x78,true);
    QWidget::setAttribute(pQVar8,4,false);
    QWidget::setAttribute(pQVar8,9,true);
    QWidget::setWindowFlag(pQVar8,0x800,true);
    QWidget::setWindowFlag(pQVar8,0x40000000,true);
    QVariant::QVariant((QVariant *)&local_78,false);
    QObject::doSetProperty
              ((QObject *)pQVar8,"_q_windowsDropShadow",(QVariant *)&local_78,(QVariant *)&local_78)
    ;
    QVariant::~QVariant((QVariant *)&local_78);
    local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x28);
    QObject::QObject((QObject *)local_50,(QObject *)pQVar8);
    local_50->vftablePtr =
         (LineEditButtonEventFilter_vftable *)&oclero::qlementine::MenuEventFilter::vftable;
    (local_50->LineEditButtonEventFilter_data).offset_0x8 = (ExternalRefCountData *)pQVar8;
    *(undefined1 *)&(local_50->LineEditButtonEventFilter_data).offset_0x10 = 0;
    (local_50->LineEditButtonEventFilter_data).offset_0x18 = 0;
    QObject::installEventFilter((QObject *)pQVar8,(QObject *)local_50);
    QObject::installEventFilter((QObject *)pQVar8,(QObject *)local_50);
  }
  pQVar8 = (QWidget *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (((pQVar8 != (QWidget *)0x0) &&
      (pQVar9 = (QWidget *)QObject::parent((QObject *)pQVar8), pQVar9 != (QWidget *)0x0)) &&
     (lVar5 = (**(code **)((longlong)pQVar9->QObject + 8))(pQVar9,"QComboBoxPrivateContainer"),
     lVar5 != 0)) {
    QWidget::setAttribute(pQVar9,0x78,true);
    QWidget::setAttribute(pQVar9,4,false);
    QWidget::setAttribute(pQVar9,9,true);
    QWidget::setWindowFlag(pQVar9,0x800,true);
    QWidget::setWindowFlag(pQVar9,0x40000000,true);
    QVariant::QVariant((QVariant *)&local_78,false);
    QObject::doSetProperty
              ((QObject *)pQVar9,"_q_windowsDropShadow",(QVariant *)&local_78,(QVariant *)&local_78)
    ;
    QVariant::~QVariant((QVariant *)&local_78);
    iVar14 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x578) +
             *(int *)(*(longlong *)((longlong)this + 0x10) + 0x5d8);
    local_50 = this;
    this_00 = QWidget::layout(pQVar9);
    QLayout::setContentsMargins(this_00,iVar14,iVar14,iVar14,iVar14);
    pQVar9 = (QWidget *)QAbstractScrollArea::viewport((QAbstractScrollArea *)pQVar8);
    QWidget::setAutoFillBackground(pQVar9,false);
    pcVar11 = staticMetaObject_exref;
    pQVar9 = pQVar8;
    do {
      pQVar7 = (QObject *)0x0;
      if (pQVar9 == (QWidget *)0x0) break;
      pQVar9 = (QWidget *)QObject::parent(&pQVar9->QObject);
      pQVar7 = QMetaObject::cast((QMetaObject *)pcVar11,(QObject *)pQVar9);
    } while (pQVar7 == (QObject *)0x0);
    local_98 = (ComboboxItemViewFilter *)FUN_140b65d30(0x48);
    oclero::qlementine::ComboboxItemViewFilter::ComboboxItemViewFilter(local_98,pQVar7,pQVar8);
    this = local_50;
  }
  cVar2 = FUN_14025ceb0(param_1);
  if (cVar2 != '\0') {
    QWidget::minimumSize(param_1);
    if (local_78._4_4_ < 2) {
      (**(code **)((longlong)param_1->QObject + 0x60))(param_1,(QFont *)&local_78);
      if (0 < (int)local_78._4_4_) {
        (**(code **)((longlong)param_1->QObject + 0x60))(param_1,(QFont *)&local_78);
        QWidget::setMinimumHeight(param_1,local_78._4_4_);
      }
    }
  }
  cVar2 = FUN_14025cf70(param_1);
  if (cVar2 != '\0') {
    FVar4 = QWidget::focusPolicy(param_1);
    if (FVar4 == 0xf) {
      QWidget::setFocusPolicy(param_1,0xb);
    }
    local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x18);
    QObject::QObject((QObject *)local_50,(QObject *)param_1);
    local_50->vftablePtr =
         (LineEditButtonEventFilter_vftable *)
         &oclero::qlementine::MouseWheelBlockerEventFilter::vftable;
    (local_50->LineEditButtonEventFilter_data).offset_0x8 = (ExternalRefCountData *)param_1;
    QObject::installEventFilter(&param_1->QObject,(QObject *)local_50);
  }
  pQVar7 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar7 == (QObject *)0x0) {
    pQVar6 = (QObject *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
    if (pQVar6 == (QObject *)0x0) {
      pQVar8 = (QWidget *)
               QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
      if (pQVar8 != (QWidget *)0x0) {
        QObject::objectName((QObject *)pQVar8);
        local_b0 = (QChar *)0x0;
        local_a8 = L"qt_msgbox_informativelabel";
        local_a0 = 0x1a;
        QString::QString((QString *)&local_90,(QArrayDataPointer<char16_t> *)&local_b0);
        pQVar12 = QString::begin((QString *)&local_90);
        uVar1 = local_80;
        pQVar13 = QString::begin((QString *)&local_78);
        if (local_68 == uVar1) {
          local_d0 = uVar1;
          local_c0 = uVar1;
          local_c8 = pQVar12;
          local_b8 = pQVar13;
          bVar3 = QtPrivate::equalStrings(&local_c0,&local_d0);
        }
        else {
          bVar3 = false;
        }
        QString::~QString((QString *)&local_90);
        if (local_b0 != (QChar *)0x0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          UNLOCK();
          if (*(int *)local_b0 == 0) {
            free(local_b0);
          }
        }
        if (bVar3 != false) {
          QWidget::setForegroundRole(pQVar8,7);
        }
        QString::~QString((QString *)&local_78);
      }
    }
    else {
      local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x38);
      oclero::qlementine::TabBarButtonEventFilter::TabBarButtonEventFilter
                ((TabBarButtonEventFilter *)local_50,(QObject *)pQVar6);
      QObject::installEventFilter(pQVar6,(QObject *)local_50);
    }
  }
  else {
    QComboBox::setSizeAdjustPolicy((QComboBox *)pQVar7,0);
    pQVar10 = QComboBox::itemDelegate((QComboBox *)pQVar7);
    if ((pQVar10 == (QAbstractItemDelegate *)0x0) ||
       (pcVar11 = (code *)(*(code *)**(undefined8 **)pQVar10)(pQVar10),
       pcVar11 == staticMetaObject_exref || pcVar11 == staticMetaObject_exref)) {
      local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x28);
      oclero::qlementine::ComboBoxDelegate::ComboBoxDelegate
                ((ComboBoxDelegate *)local_50,pQVar7,this);
      QComboBox::setItemDelegate((QComboBox *)pQVar7,(QAbstractItemDelegate *)local_50);
      local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x20);
      QObject::QObject((QObject *)local_50,pQVar7);
      local_50->vftablePtr =
           (LineEditButtonEventFilter_vftable *)&oclero::qlementine::ComboboxFilter::vftable;
      (local_50->LineEditButtonEventFilter_data).offset_0x8 = (ExternalRefCountData *)pQVar7;
      *(undefined1 *)&(local_50->LineEditButtonEventFilter_data).offset_0x10 = 0;
      pQVar6 = (QObject *)QComboBox::view((QComboBox *)pQVar7);
      if ((pQVar6 != (QObject *)0x0) &&
         (pQVar6 = (QObject *)QObject::parent(pQVar6), pQVar6 != (QObject *)0x0)) {
        QObject::installEventFilter(pQVar6,(QObject *)local_50);
      }
    }
  }
  pQVar7 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar7 != (QObject *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    pQVar7 = qt_qFindChild_helper(pQVar7,(QFont *)&local_78,staticMetaObject_exref,1);
    if (pQVar7 != (QObject *)0x0) {
      this_01 = QTextEdit::document((QTextEdit *)pQVar7);
      QTextDocument::setDocumentMargin
                (this_01,(double)(*(int *)((((LineEditButtonEventFilter *)this)->
                                           LineEditButtonEventFilter_data).offset_0x8 + 0x5d8) * 2))
      ;
    }
  }
  pQVar8 = (QWidget *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar8 != (QWidget *)0x0) {
    QWidget::setFocusPolicy(pQVar8,0);
  }
  pQVar7 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar7 != (QObject *)0x0) {
    QAbstractSlider::setOrientation((QAbstractSlider *)pQVar7,1);
  }
  pQVar6 = (QObject *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar6 != (QObject *)0x0) {
    local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x18);
    QObject::QObject((QObject *)local_50,(QObject *)pQVar6);
    local_50->vftablePtr =
         (LineEditButtonEventFilter_vftable *)&oclero::qlementine::TextEditEventFilter::vftable;
    (local_50->LineEditButtonEventFilter_data).offset_0x8 = (ExternalRefCountData *)pQVar6;
    QObject::installEventFilter(pQVar6,(QObject *)local_50);
    local_90 = (int *)0x0;
    local_88 = L"qt_scrollarea_viewport";
    local_80 = 0x16;
    QString::QString((QString *)&local_78,(QArrayDataPointer<char16_t> *)&local_90);
    local_b0 = QString::begin((QString *)&local_78);
    local_a8 = (wchar_t *)(local_68 | 0x8000000000000000);
    pQVar8 = (QWidget *)qt_qFindChild_helper(pQVar6,&local_b0,staticMetaObject_exref,1);
    QString::~QString((QString *)&local_78);
    if (local_90 != (int *)0x0) {
      LOCK();
      *local_90 = *local_90 + -1;
      UNLOCK();
      if (*local_90 == 0) {
        free(local_90);
      }
    }
    if (pQVar8 != (QWidget *)0x0) {
      QWidget::setAutoFillBackground(pQVar8,false);
    }
  }
  pQVar6 = (QObject *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar6 != (QObject *)0x0) {
    local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x18);
    QObject::QObject((QObject *)local_50,(QObject *)pQVar6);
    local_50->vftablePtr =
         (LineEditButtonEventFilter_vftable *)&oclero::qlementine::TextEditEventFilter::vftable;
    (local_50->LineEditButtonEventFilter_data).offset_0x8 = (ExternalRefCountData *)pQVar6;
    QObject::installEventFilter(pQVar6,(QObject *)local_50);
    local_90 = (int *)0x0;
    local_88 = L"qt_scrollarea_viewport";
    local_80 = 0x16;
    QString::QString((QString *)&local_78,(QArrayDataPointer<char16_t> *)&local_90);
    local_b0 = QString::begin((QString *)&local_78);
    local_a8 = (wchar_t *)(local_68 | 0x8000000000000000);
    pQVar8 = (QWidget *)qt_qFindChild_helper(pQVar6,&local_b0,staticMetaObject_exref,1);
    QString::~QString((QString *)&local_78);
    if (local_90 != (int *)0x0) {
      LOCK();
      *local_90 = *local_90 + -1;
      UNLOCK();
      if (*local_90 == 0) {
        free(local_90);
      }
    }
    if (pQVar8 != (QWidget *)0x0) {
      QWidget::setAutoFillBackground(pQVar8,false);
    }
  }
  pQVar6 = (QObject *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
  if (pQVar6 == (QObject *)0x0) {
    pQVar6 = (QObject *)QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
    if (pQVar6 == (QObject *)0x0) {
      pQVar6 = (QObject *)
               QMetaObject::cast((QMetaObject *)staticMetaObject_exref,(QObject *)param_1);
      if (pQVar6 == (QObject *)0x0) {
        return;
      }
      local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x10);
      oclero::qlementine::LineEditMenuEventFilter::LineEditMenuEventFilter
                ((LineEditMenuEventFilter *)local_50,pQVar6);
    }
    else {
      local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x10);
      oclero::qlementine::LineEditMenuEventFilter::LineEditMenuEventFilter
                ((LineEditMenuEventFilter *)local_50,pQVar6);
    }
  }
  else {
    local_50 = (LineEditButtonEventFilter *)FUN_140b65d30(0x10);
    oclero::qlementine::LineEditMenuEventFilter::LineEditMenuEventFilter
              ((LineEditMenuEventFilter *)local_50,pQVar6);
  }
  QObject::installEventFilter(pQVar6,(QObject *)local_50);
  return;
}

