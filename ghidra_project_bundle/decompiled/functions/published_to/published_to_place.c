/**
 * Function: published_to_place
 * Address:  140090020
 * Signature: undefined published_to_place(void)
 * Body size: 970 bytes
 */


void published_to_place(QMainWindow *param_1)

{
  QMainWindow *pQVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  QStatusBar *this;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_198 [232];
  QString local_b0 [24];
  undefined8 local_98;
  char *local_90;
  longlong local_88 [2];
  QPaintDevice local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  undefined8 uStack_60;
  QPaintDevice local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  QString local_40 [24];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_1[1].QWidget.QPaintDevice != (QPaintDevice)0x0) {
    pQVar1 = param_1 + 0x2d32;
    cVar2 = FUN_1402acfb0(pQVar1);
    if (cVar2 == '\0') {
      ldv::editor::LoginDialog::LoginDialog((LoginDialog *)local_198,pQVar1,param_1);
      iVar3 = QDialog::exec((QDialog *)local_198);
      if (iVar3 != 1) {
        ldv::editor::LoginDialog::LoginDialog_Constructor_or_Destructor((QDialog *)local_198);
        return;
      }
      if (param_1[0x2d3c].QWidget.QObject != (QObject)0x0) {
        FUN_1402a6eb0();
      }
      ldv::editor::LoginDialog::LoginDialog_Constructor_or_Destructor((QDialog *)local_198);
    }
    local_88[0] = 0;
    local_88[1] = 0;
    local_78 = (QPaintDevice)0x0;
    uStack_70 = 0xf;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = (QPaintDevice)0x0;
    uStack_50 = 0xf;
    local_48 = 0;
    https_apiluduvocom(pQVar1,local_40);
    QString::toStdString(local_40);
    if (0xf < uStack_70) {
      uVar4 = uStack_70 + 1;
      lVar6 = local_88[0];
      if (0xfff < uVar4) {
        lVar6 = *(longlong *)(local_88[0] + -8);
        if (0x1f < (ulonglong)((local_88[0] + -8) - lVar6)) goto LAB_1400903d1;
        uVar4 = uStack_70 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar6,uVar4);
    }
    local_88[0] = CONCAT71(local_198._1_7_,local_198[0]);
    local_78 = (QPaintDevice)local_198._16_8_;
    uStack_70 = local_198._24_8_;
    local_88[1] = local_198._8_8_;
    local_198._16_8_ = (QPaintDevice)0x0;
    local_198._24_8_ = 0xf;
    local_198[0] = 0;
    QString::~QString(local_40);
    auth_token(pQVar1,local_40);
    QString::toStdString(local_40);
    if (0xf < uStack_50) {
      uVar4 = uStack_50 + 1;
      uVar5 = local_68;
      if (0xfff < uVar4) {
        uVar5 = *(ulonglong *)(local_68 - 8);
        if (0x1f < (local_68 - 8) - uVar5) goto LAB_1400903d1;
        uVar4 = uStack_50 + 0x28;
      }
      thunk_FUN_140b68ba8(uVar5,uVar4);
    }
    local_68 = CONCAT71(local_198._1_7_,local_198[0]);
    local_58 = (QPaintDevice)local_198._16_8_;
    uStack_50 = local_198._24_8_;
    uStack_60 = local_198._8_8_;
    local_198._16_8_ = (QPaintDevice)0x0;
    local_198._24_8_ = 0xf;
    local_198[0] = 0;
    QString::~QString(local_40);
    lVar6 = *(longlong *)&param_1[0x2d33].QWidget.field_0x8;
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar6 + 0x38);
    }
    ldv::editor::PublishDialog::PublishDialog
              ((PublishDialog *)local_198,local_88,param_1[1].QWidget.QPaintDevice,uVar7,pQVar1,
               param_1);
    iVar3 = QDialog::exec((QDialog *)local_198);
    if ((iVar3 == 1) && (0 < (longlong)local_198._136_8_)) {
      FUN_1402ad7c0(pQVar1,local_198._136_8_);
      this = QMainWindow::statusBar(param_1);
      QString::number((__int64)local_b0,(int)local_198._136_8_);
      local_98 = 0x14;
      local_90 = "Published to place #";
      QString::fromUtf8(local_40,&local_98);
      QString::append(local_40,local_b0);
      QStatusBar::showMessage(this,local_40,5000);
      QString::~QString(local_40);
      QString::~QString(local_b0);
    }
    ldv::editor::PublishDialog::PublishDialog_Constructor_or_Destructor((QDialog *)local_198);
    if (0xf < uStack_50) {
      uVar4 = uStack_50 + 1;
      uVar5 = local_68;
      if (0xfff < uVar4) {
        uVar5 = *(ulonglong *)(local_68 - 8);
        if (0x1f < (local_68 - 8) - uVar5) goto LAB_1400903d1;
        uVar4 = uStack_50 + 0x28;
      }
      thunk_FUN_140b68ba8(uVar5,uVar4);
    }
    local_58 = (QPaintDevice)0x0;
    uStack_50 = 0xf;
    local_68 = local_68 & 0xffffffffffffff00;
    if (0xf < uStack_70) {
      uVar4 = uStack_70 + 1;
      lVar6 = local_88[0];
      if (0xfff < uVar4) {
        lVar6 = *(longlong *)(local_88[0] + -8);
        if (0x1f < (ulonglong)((local_88[0] + -8) - lVar6)) {
LAB_1400903d1:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar4 = uStack_70 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar6,uVar4);
    }
  }
  return;
}

