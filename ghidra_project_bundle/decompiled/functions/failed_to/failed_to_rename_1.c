/**
 * Function: failed_to_rename_1
 * Address:  1405aef00
 * Signature: undefined failed_to_rename_1(void)
 * Body size: 1243 bytes
 */


void failed_to_rename_1(int param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  QString *pQVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 in_stack_fffffffffffffee8;
  uint uVar12;
  QString local_e8 [16];
  longlong local_d8;
  QString local_d0 [24];
  QString local_b8 [24];
  QString local_a0 [24];
  QFileInfo local_88 [8];
  byte local_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  char local_78;
  longlong local_70;
  longlong local_68;
  longlong local_58 [3];
  ulonglong local_40;
  char local_31 [9];
  
  uVar12 = (uint)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  local_31[1] = -2;
  local_31[2] = -1;
  local_31[3] = -1;
  local_31[4] = -1;
  local_31[5] = -1;
  local_31[6] = -1;
  local_31[7] = -1;
  local_31[8] = -1;
  if (param_1 == 1) {
    QFileInfo::QFileInfo(local_88,(QString *)(param_2 + 0x18));
    local_31[0] = '\0';
    QFileInfo::fileName(local_88);
    QString::QString(local_d0,"New name:");
    QString::QString((QString *)&local_70,"Rename");
    lVar9 = (ulonglong)uVar12 << 0x20;
    QInputDialog::getText
              (local_e8,*(undefined8 *)(param_2 + 0x10),&local_70,local_d0,lVar9,(QString *)local_58
               ,local_31,0,0);
    QString::~QString((QString *)&local_70);
    QString::~QString(local_d0);
    QString::~QString((QString *)local_58);
    if ((local_31[0] == '\x01') && (local_d8 != 0)) {
      QFileInfo::absolutePath(local_88);
      pQVar6 = QString::operator+=((QString *)&local_70,0x2f);
      QString::QString((QString *)local_58,pQVar6);
      pQVar6 = QString::append((QString *)local_58,local_e8);
      QString::QString(local_d0,pQVar6);
      QString::~QString((QString *)local_58);
      QString::~QString((QString *)&local_70);
      bVar4 = QFile::rename((QString *)(param_2 + 0x18),local_d0);
      if (bVar4) {
        if ((*(char *)(param_2 + 0x30) == '\x01') &&
           (plVar7 = *(longlong **)(param_2 + 0x38), plVar7 != (longlong *)0x0)) {
          local_68 = plVar7[2];
          if (7 < (ulonglong)plVar7[3]) {
            plVar7 = (longlong *)*plVar7;
          }
          local_70 = (longlong)plVar7;
          uVar5 = FUN_140b6625c();
          FUN_14003e640(local_58,uVar5,&local_70);
          QString::fromStdString
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_70);
          if (0xf < local_40) {
            uVar8 = local_40 + 1;
            lVar9 = local_58[0];
            if (0xfff < uVar8) {
              lVar9 = *(longlong *)(local_58[0] + -8);
              if (0x1f < (ulonglong)((local_58[0] + -8) - lVar9)) goto LAB_1405af3c2;
              uVar8 = local_40 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar9,uVar8);
          }
          QDir::QDir((QDir *)local_58,(QString *)&local_70);
          QDir::relativeFilePath((QDir *)local_58,local_a0);
          QDir::~QDir((QDir *)local_58);
          QDir::QDir((QDir *)local_58,(QString *)&local_70);
          QDir::relativeFilePath((QDir *)local_58,local_b8);
          QDir::~QDir((QDir *)local_58);
          uVar2 = *(undefined8 *)(param_2 + 0x38);
          QString::toStdString(local_b8);
          FUN_140288ca0(uVar2,&local_80,local_58);
          if (0xf < local_40) {
            uVar8 = local_40 + 1;
            lVar9 = local_58[0];
            if (0xfff < uVar8) {
              lVar9 = *(longlong *)(local_58[0] + -8);
              if (0x1f < (ulonglong)((local_58[0] + -8) - lVar9)) goto LAB_1405af3c2;
              uVar8 = local_40 + 0x28;
            }
            thunk_FUN_140b68ba8(lVar9,uVar8);
          }
          if (local_78 == '\x01') {
            lVar9 = *(longlong *)(param_2 + 0x38);
            lVar11 = (((ulonglong)bStack_79 ^
                      ((ulonglong)bStack_7a ^
                      ((ulonglong)bStack_7b ^
                      ((ulonglong)bStack_7c ^
                      ((ulonglong)bStack_7d ^
                      ((ulonglong)bStack_7e ^
                      ((ulonglong)bStack_7f ^
                      ((ulonglong)local_80 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
                      0x100000001b3) * 0x100000001b3) * 0x100000001b3) * 0x100000001b3) *
                      0x100000001b3) * 0x100000001b3 & *(ulonglong *)(lVar9 + 0x70)) * 0x10;
            lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x58) + 8 + lVar11);
            if (lVar10 != *(longlong *)(lVar9 + 0x48)) {
              lVar3 = CONCAT17(bStack_79,
                               CONCAT16(bStack_7a,
                                        CONCAT15(bStack_7b,
                                                 CONCAT14(bStack_7c,
                                                          CONCAT13(bStack_7d,
                                                                   CONCAT12(bStack_7e,
                                                                            CONCAT11(bStack_7f,
                                                                                     local_80)))))))
              ;
              if (lVar3 != *(longlong *)(lVar10 + 0x10)) {
                do {
                  if (lVar10 == *(longlong *)(*(longlong *)(lVar9 + 0x58) + lVar11))
                  goto LAB_1405af2ee;
                  lVar10 = *(longlong *)(lVar10 + 8);
                } while (lVar3 != *(longlong *)(lVar10 + 0x10));
              }
              if (lVar10 != *(longlong *)(lVar9 + 0x48)) {
                uVar1 = *(undefined1 *)(lVar10 + 0x18);
                FUN_140289860();
                uVar2 = *(undefined8 *)(param_2 + 0x38);
                QString::toStdString(local_a0);
                FUN_140288d50(uVar2,CONCAT71((int7)((ulonglong)local_d0 >> 8),uVar1) & 0xffffffff,
                              local_58);
                if (0xf < local_40) {
                  uVar8 = local_40 + 1;
                  lVar9 = local_58[0];
                  if (0xfff < uVar8) {
                    lVar9 = *(longlong *)(local_58[0] + -8);
                    if (0x1f < (ulonglong)((local_58[0] + -8) - lVar9)) {
LAB_1405af3c2:
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                    uVar8 = local_40 + 0x28;
                  }
                  thunk_FUN_140b68ba8(lVar9,uVar8);
                }
              }
            }
          }
LAB_1405af2ee:
          QString::~QString(local_b8);
          QString::~QString(local_a0);
          QString::~QString((QString *)&local_70);
        }
        FUN_1402a2500(*(undefined8 *)(param_2 + 0x10));
      }
      else {
        QString::QString((QString *)&local_70,"Failed to rename \'%1\'.");
        QFileInfo::fileName(local_88);
        uVar8 = CONCAT62((int6)((ulonglong)lVar9 >> 0x10),0x20);
        QString::arg((QString *)&local_70,local_58,local_a0,0,uVar8);
        QString::QString(local_b8,"Error");
        QMessageBox::warning
                  (*(undefined8 *)(param_2 + 0x10),local_b8,local_58,0x400,
                   uVar8 & 0xffffffff00000000);
        QString::~QString(local_b8);
        QString::~QString((QString *)local_58);
        QString::~QString(local_a0);
        QString::~QString((QString *)&local_70);
      }
      QString::~QString(local_d0);
    }
    QString::~QString(local_e8);
    QFileInfo::~QFileInfo(local_88);
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    QString::~QString((QString *)(param_2 + 0x18));
    thunk_FUN_140b68ba8(param_2,0x40);
    return;
  }
  return;
}

