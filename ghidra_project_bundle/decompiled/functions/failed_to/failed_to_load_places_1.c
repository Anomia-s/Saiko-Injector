/**
 * Function: failed_to_load_places_1
 * Address:  1402b4260
 * Signature: undefined failed_to_load_places_1(void)
 * Body size: 1008 bytes
 */


void failed_to_load_places_1(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  QLabel *pQVar3;
  QListWidget *this;
  QListWidgetItem *pQVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  __int64 *p_Var10;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar11;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d0 [24];
  longlong local_b8 [5];
  QString local_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  QListWidgetItem *local_58;
  QListWidgetItem *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  QListWidget::clear(*(QListWidget **)(param_1 + 0xa8));
  lVar9 = *(longlong *)(param_1 + 0x90);
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar9 != lVar1) {
    do {
      uVar7 = *(ulonglong *)(lVar9 + 0x20);
      if (0xf < uVar7) {
        lVar2 = *(longlong *)(lVar9 + 8);
        uVar6 = uVar7 + 1;
        lVar8 = lVar2;
        if (0xfff < uVar6) {
          lVar8 = *(longlong *)(lVar2 + -8);
          if (0x1f < (ulonglong)((lVar2 + -8) - lVar8)) goto LAB_1402b463f;
          uVar6 = uVar7 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar8,uVar6);
      }
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0xf;
      *(undefined1 *)(lVar9 + 8) = 0;
      lVar9 = lVar9 + 0x30;
    } while (lVar9 != lVar1);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
  }
  pQVar3 = *(QLabel **)(param_1 + 0xc0);
  QString::QString((QString *)local_b8,"Loading places...");
  QLabel::setText(pQVar3,(QString *)local_b8);
  QString::~QString((QString *)local_b8);
  QCoreApplication::processEvents(0);
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0xf;
  FUN_1405b2510(&local_78,param_1 + 0x28);
  if ((undefined8 *)(param_1 + 0x90) != &local_78) {
    FUN_140094820();
    *(undefined8 *)(param_1 + 0x90) = local_78;
    *(undefined8 *)(param_1 + 0x98) = uStack_70;
    *(undefined8 *)(param_1 + 0xa0) = local_68;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  FUN_140094820(&local_78);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (local_b8[2] == 0) {
    p_Var10 = *(__int64 **)(param_1 + 0x90);
    local_58 = *(QListWidgetItem **)(param_1 + 0x98);
    if ((QListWidgetItem *)p_Var10 != local_58) {
      do {
        QString::fromStdString
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_90);
        uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        if (0 < p_Var10[5]) {
          QString::QString((QString *)local_d0,"   (%1 visits)");
          in_stack_ffffffffffffff18 = CONCAT44(uVar11,10);
          QString::arg((QString *)local_d0,(QString *)&local_78,p_Var10[5],0,
                       in_stack_ffffffffffffff18,0x20);
          QString::append(local_90,(QString *)&local_78);
          QString::~QString((QString *)&local_78);
          QString::~QString((QString *)local_d0);
        }
        local_50 = (QListWidgetItem *)FUN_140b65d30(0x28);
        QListWidgetItem::QListWidgetItem(local_50,local_90,(QListWidget *)0x0,0);
        QVariant::QVariant((QVariant *)&local_78,*p_Var10);
        pQVar4 = local_50;
        (**(code **)(*(longlong *)local_50 + 0x18))(local_50,0x100,(QString *)&local_78);
        QVariant::~QVariant((QVariant *)&local_78);
        this = *(QListWidget **)(param_1 + 0xa8);
        iVar5 = QListWidget::count(this);
        QListWidget::insertItem(this,iVar5,pQVar4);
        QString::~QString(local_90);
        uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        p_Var10 = p_Var10 + 6;
      } while ((QListWidgetItem *)p_Var10 != local_58);
    }
    pQVar3 = *(QLabel **)(param_1 + 0xc0);
    local_50 = *(QListWidgetItem **)(param_1 + 0x90);
    local_58 = *(QListWidgetItem **)(param_1 + 0x98);
    if (local_50 == local_58) {
      QString::QString((QString *)&local_78,
                       "No existing places. Fill in a title and publish as new!");
    }
    else {
      QString::QString(local_90,"%1 place(s) found.");
      QString::arg(local_90,&local_78,
                   (*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90) >> 4) *
                   -0x5555555555555555,0,CONCAT44(uVar11,10),0x20);
    }
    QLabel::setText(pQVar3,(QString *)&local_78);
    QString::~QString((QString *)&local_78);
    if (local_50 != local_58) {
      QString::~QString(local_90);
    }
  }
  else {
    pQVar3 = *(QLabel **)(param_1 + 0xc0);
    QString::QString(local_90,"Failed to load places: %1");
    QString::fromStdString(local_d0);
    QString::arg(local_90,&local_78,local_d0,0,0x20);
    QLabel::setText(pQVar3,(QString *)&local_78);
    QString::~QString((QString *)&local_78);
    QString::~QString((QString *)local_d0);
    QString::~QString(local_90);
  }
  if (0xf < (ulonglong)local_b8[3]) {
    uVar7 = local_b8[3] + 1;
    lVar9 = local_b8[0];
    if (0xfff < uVar7) {
      lVar9 = *(longlong *)(local_b8[0] + -8);
      if (0x1f < (ulonglong)((local_b8[0] + -8) - lVar9)) {
LAB_1402b463f:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = local_b8[3] + 0x28;
    }
    thunk_FUN_140b68ba8(lVar9,uVar7);
  }
  return;
}

