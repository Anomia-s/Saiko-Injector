/**
 * Function: cannot_create_1_2
 * Address:  1405ae180
 * Signature: undefined cannot_create_1_2(void)
 * Body size: 867 bytes
 */


void cannot_create_1_2(int param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  QString *pQVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_stack_fffffffffffffef8;
  uint uVar7;
  QString local_d8 [24];
  QString local_c0 [16];
  longlong local_b0;
  QString local_a8 [24];
  QString local_90 [24];
  QFile local_78 [16];
  longlong local_68;
  longlong local_60;
  longlong local_50 [3];
  ulonglong local_38;
  char local_29 [9];
  
  uVar7 = (uint)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  local_29[1] = -2;
  local_29[2] = -1;
  local_29[3] = -1;
  local_29[4] = -1;
  local_29[5] = -1;
  local_29[6] = -1;
  local_29[7] = -1;
  local_29[8] = -1;
  if (param_1 == 1) {
    local_29[0] = '\0';
    QString::QString((QString *)local_50,"NewScript.lua");
    QString::QString(local_a8,"Script name:");
    QString::QString((QString *)&local_68,"New Script");
    uVar5 = (ulonglong)uVar7 << 0x20;
    QInputDialog::getText
              (local_c0,*(undefined8 *)(param_2 + 0x10),&local_68,local_a8,uVar5,(QString *)local_50
               ,local_29,0,0);
    QString::~QString((QString *)&local_68);
    QString::~QString(local_a8);
    QString::~QString((QString *)local_50);
    if ((local_29[0] == '\x01') && (local_b0 != 0)) {
      QString::QString((QString *)local_50,(QString *)(param_2 + 0x18));
      QString::operator+=((QString *)local_50,0x2f);
      pQVar4 = QString::append((QString *)local_50,local_c0);
      QString::QString(local_a8,pQVar4);
      QString::~QString((QString *)local_50);
      QFile::QFile(local_78,local_a8);
      bVar2 = QFile::open(local_78,0x12);
      if (bVar2) {
        QIODevice::write((QIODevice *)local_78,"-- New Script\n");
        QFileDevice::close((QFileDevice *)local_78);
        lVar6 = *(longlong *)(param_2 + 0x10);
        plVar1 = *(longlong **)(lVar6 + 0x28);
        if (plVar1 != (longlong *)0x0) {
          local_60 = plVar1[2];
          local_68 = (longlong)plVar1;
          if (7 < (ulonglong)plVar1[3]) {
            local_68 = *plVar1;
          }
          uVar3 = FUN_140b6625c();
          FUN_14003e640(local_50,uVar3,&local_68);
          QString::fromStdString
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_68);
          if (0xf < local_38) {
            uVar5 = local_38 + 1;
            lVar6 = local_50[0];
            if (0xfff < uVar5) {
              lVar6 = *(longlong *)(local_50[0] + -8);
              if (0x1f < (ulonglong)((local_50[0] + -8) - lVar6)) goto LAB_1405ae4ca;
              uVar5 = local_38 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar6,uVar5);
          }
          QDir::QDir((QDir *)local_50,(QString *)&local_68);
          QDir::relativeFilePath((QDir *)local_50,local_90);
          QDir::~QDir((QDir *)local_50);
          QString::toStdString(local_90);
          FUN_140288d50(plVar1,0,local_50);
          if (0xf < local_38) {
            uVar5 = local_38 + 1;
            lVar6 = local_50[0];
            if (0xfff < uVar5) {
              lVar6 = *(longlong *)(local_50[0] + -8);
              if (0x1f < (ulonglong)((local_50[0] + -8) - lVar6)) {
LAB_1405ae4ca:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
              uVar5 = local_38 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar6,uVar5);
          }
          QString::~QString(local_90);
          QString::~QString((QString *)&local_68);
          lVar6 = *(longlong *)(param_2 + 0x10);
        }
        FUN_1402a2500(lVar6);
      }
      else {
        QString::QString((QString *)&local_68,"Cannot create \'%1\': %2");
        QIODevice::errorString((QIODevice *)local_78);
        FUN_14024b3a0(&local_68,local_50,local_c0,local_90);
        QString::QString(local_d8,"Error");
        QMessageBox::warning
                  (*(undefined8 *)(param_2 + 0x10),local_d8,local_50,0x400,
                   uVar5 & 0xffffffff00000000);
        QString::~QString(local_d8);
        QString::~QString((QString *)local_50);
        QString::~QString(local_90);
        QString::~QString((QString *)&local_68);
      }
      QFile::~QFile(local_78);
      QString::~QString(local_a8);
    }
    QString::~QString(local_c0);
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    QString::~QString((QString *)(param_2 + 0x18));
    thunk_FUN_140b68ba8(param_2,0x30);
    return;
  }
  return;
}

