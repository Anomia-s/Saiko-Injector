/**
 * Function: move_to_trash
 * Address:  1405af7a0
 * Signature: undefined move_to_trash(void)
 * Body size: 653 bytes
 */


void move_to_trash(int param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  StandardButton SVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 local_a8;
  char local_a0;
  QString local_90 [24];
  longlong local_78;
  longlong local_70;
  QFileInfo local_60 [8];
  longlong local_58 [3];
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_1 == 1) {
    QString::QString((QString *)&local_78,"Move \'%1\' to trash?");
    QFileInfo::QFileInfo(local_60,(QString *)(param_2 + 0x18));
    QFileInfo::fileName(local_60);
    uVar5 = CONCAT62((int6)((ulonglong)in_stack_ffffffffffffff48 >> 0x10),0x20);
    QString::arg((QString *)&local_78,(QString *)local_58,local_90,0,uVar5);
    QString::QString((QString *)&local_a8,"Move to Trash");
    SVar3 = QMessageBox::question
                      (*(undefined8 *)(param_2 + 0x10),&local_a8,(QString *)local_58,0x14000,
                       uVar5 & 0xffffffff00000000);
    QString::~QString((QString *)&local_a8);
    QString::~QString((QString *)local_58);
    QString::~QString(local_90);
    QFileInfo::~QFileInfo(local_60);
    QString::~QString((QString *)&local_78);
    if (SVar3 != 0x4000) {
      return;
    }
    cVar2 = failed_to_move_1_to_trash(*(undefined8 *)(param_2 + 0x10),(QString *)(param_2 + 0x18));
    if (cVar2 == '\0') {
      return;
    }
    if ((*(char *)(param_2 + 0x30) == '\x01') &&
       (plVar1 = *(longlong **)(param_2 + 0x38), plVar1 != (longlong *)0x0)) {
      local_70 = plVar1[2];
      local_78 = (longlong)plVar1;
      if (7 < (ulonglong)plVar1[3]) {
        local_78 = *plVar1;
      }
      uVar4 = FUN_140b6625c();
      FUN_14003e640((QString *)local_58,uVar4,&local_78);
      QString::fromStdString
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_78);
      if (0xf < local_40) {
        uVar5 = local_40 + 1;
        lVar6 = local_58[0];
        if (0xfff < uVar5) {
          lVar6 = *(longlong *)(local_58[0] + -8);
          if (0x1f < (ulonglong)((local_58[0] + -8) - lVar6)) goto LAB_1405afa14;
          uVar5 = local_40 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar6,uVar5);
      }
      QDir::QDir((QDir *)local_58,(QString *)&local_78);
      QDir::relativeFilePath((QDir *)local_58,local_90);
      QDir::~QDir((QDir *)local_58);
      QString::toStdString(local_90);
      FUN_140288ca0(plVar1,&local_a8,(QString *)local_58);
      if (0xf < local_40) {
        uVar5 = local_40 + 1;
        lVar6 = local_58[0];
        if (0xfff < uVar5) {
          lVar6 = *(longlong *)(local_58[0] + -8);
          if (0x1f < (ulonglong)((local_58[0] + -8) - lVar6)) {
LAB_1405afa14:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar5 = local_40 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar6,uVar5);
      }
      if (local_a0 == '\x01') {
        FUN_140289860(plVar1,local_a8);
      }
      QString::~QString(local_90);
      QString::~QString((QString *)&local_78);
    }
    FUN_1402a2500(*(undefined8 *)(param_2 + 0x10));
  }
  else if ((param_1 == 0) && (param_2 != 0)) {
    QString::~QString((QString *)(param_2 + 0x18));
    thunk_FUN_140b68ba8(param_2,0x40);
    return;
  }
  return;
}

