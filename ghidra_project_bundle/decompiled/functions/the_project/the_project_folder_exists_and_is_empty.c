/**
 * Function: the_project_folder_exists_and_is_empty
 * Address:  140285150
 * Signature: undefined the_project_folder_exists_and_is_empty(void)
 * Body size: 1816 bytes
 */


void the_project_folder_exists_and_is_empty(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  QChar *pQVar4;
  QChar *pQVar5;
  QString *pQVar6;
  longlong local_e8;
  QChar *local_e0;
  QString local_d8 [24];
  QString local_c0 [16];
  longlong local_b0;
  longlong local_a8;
  QChar *local_a0;
  longlong local_98;
  longlong local_90;
  QChar *local_88;
  QString local_78 [16];
  longlong local_68;
  longlong local_60;
  QChar *local_58;
  longlong local_50;
  longlong local_48;
  QChar *local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  QLineEdit::text(*(QLineEdit **)(param_1 + 0x28));
  QString::trimmed_helper((QString *)&local_48);
  lVar1 = local_38;
  QString::~QString((QString *)&local_48);
  QString::~QString(local_78);
  if (lVar1 == 0) {
    QString::QString((QString *)&local_48,"It would be a good idea to name your project.");
    FUN_140285fd0(param_1,(QString *)&local_48,0);
    pQVar6 = (QString *)&local_48;
    goto LAB_1402853aa;
  }
  QLineEdit::text(*(QLineEdit **)(param_1 + 0x30));
  QDir::fromNativeSeparators((QString *)&local_48);
  QDir::cleanPath(local_78);
  QString::~QString((QString *)&local_48);
  QString::~QString(local_c0);
  if (local_68 == 0) {
LAB_1402851fb:
    QString::QString((QString *)&local_48,"The path specified is invalid.");
    FUN_140285fd0(param_1,&local_48,0);
    pQVar6 = (QString *)&local_48;
  }
  else {
    bVar2 = QDir::isRelativePath(local_78);
    if (bVar2) goto LAB_1402851fb;
    QString::section(local_78,local_c0,0x2f,0xffffffffffffffff,0xffffffffffffffff,0);
    FUN_140284dc0(&local_48,local_c0);
    pQVar4 = QString::begin((QString *)&local_48);
    lVar1 = local_38;
    pQVar5 = QString::begin(local_c0);
    if (local_b0 == lVar1) {
      local_60 = lVar1;
      local_90 = lVar1;
      local_88 = pQVar5;
      local_58 = pQVar4;
      bVar2 = QtPrivate::equalStrings(&local_90,&local_60);
      QString::~QString((QString *)&local_48);
      if (!bVar2) goto LAB_140285372;
      QDir::currentPath();
      QDir::fromNativeSeparators((QString *)&local_48);
      QDir::cleanPath((QString *)&local_60);
      QString::~QString((QString *)&local_48);
      pQVar4 = QString::begin((QString *)&local_60);
      lVar1 = local_50;
      pQVar5 = QString::begin(local_78);
      if (local_68 == lVar1) {
        local_48 = lVar1;
        local_a8 = lVar1;
        local_a0 = pQVar5;
        local_40 = pQVar4;
        bVar2 = QtPrivate::equalStrings(&local_a8,&local_48);
        if (!bVar2) goto LAB_1402853bf;
        QString::~QString((QString *)&local_60);
        QString::~QString((QString *)&local_90);
LAB_140285450:
        QString::QString((QString *)&local_48,
                         "Creating a project at the working or executable directory is not allowed."
                        );
        FUN_140285fd0(param_1,&local_48,0);
        goto LAB_140285392;
      }
LAB_1402853bf:
      QCoreApplication::applicationDirPath();
      QDir::fromNativeSeparators((QString *)&local_48);
      QDir::cleanPath((QString *)&local_a8);
      QString::~QString((QString *)&local_48);
      pQVar4 = QString::begin((QString *)&local_a8);
      pQVar5 = QString::begin(local_78);
      if (local_68 == local_98) {
        local_48 = local_98;
        local_e8 = local_98;
        local_e0 = pQVar5;
        local_40 = pQVar4;
        bVar2 = QtPrivate::equalStrings(&local_e8,&local_48);
        QString::~QString((QString *)&local_a8);
        QString::~QString(local_d8);
        QString::~QString((QString *)&local_60);
        QString::~QString((QString *)&local_90);
        if (bVar2) goto LAB_140285450;
      }
      else {
        QString::~QString((QString *)&local_a8);
        QString::~QString(local_d8);
        QString::~QString((QString *)&local_60);
        QString::~QString((QString *)&local_90);
      }
      QDir::homePath();
      QDir::fromNativeSeparators((QString *)&local_48);
      QDir::cleanPath((QString *)&local_60);
      QString::~QString((QString *)&local_48);
      pQVar4 = QString::begin((QString *)&local_60);
      pQVar5 = QString::begin(local_78);
      if (local_68 == local_50) {
        local_48 = local_50;
        local_a8 = local_50;
        local_a0 = pQVar5;
        local_40 = pQVar4;
        bVar2 = QtPrivate::equalStrings(&local_a8,&local_48);
        if (!bVar2) goto LAB_140285514;
        QString::~QString((QString *)&local_60);
        QString::~QString((QString *)&local_90);
LAB_140285561:
        QString::QString((QString *)&local_48,
                         "You cannot create a project at the selected path. Please choose a subfolder."
                        );
        FUN_140285fd0(param_1,&local_48,0);
        goto LAB_140285392;
      }
LAB_140285514:
      QStandardPaths::writableLocation((StandardLocation)&local_a8);
      FUN_140284d40(&local_48,&local_a8);
      cVar3 = FUN_14006dec0(local_78,(QString *)&local_48);
      QString::~QString((QString *)&local_48);
      QString::~QString((QString *)&local_a8);
      QString::~QString((QString *)&local_60);
      QString::~QString((QString *)&local_90);
      if (cVar3 != '\0') goto LAB_140285561;
      *(undefined1 *)(param_1 + 0x90) = 1;
      bVar2 = QAbstractButton::isChecked(*(QAbstractButton **)(param_1 + 0x38));
      if (bVar2) {
        FUN_1402850d0(&local_48,local_78);
        QDir::QDir((QDir *)&local_90,(QString *)&local_48);
        bVar2 = QDir::exists((QDir *)&local_90);
        if (bVar2) {
          QDir::~QDir((QDir *)&local_90);
LAB_140285682:
          QDir::QDir((QDir *)&local_60,local_78);
          bVar2 = QDir::exists((QDir *)&local_60);
          QDir::~QDir((QDir *)&local_60);
          if (bVar2) {
            QString::QString((QString *)&local_60,"The project folder already exists and is empty.")
            ;
            FUN_140285fd0(param_1,&local_60,2);
          }
          else {
            QDir::QDir((QDir *)&local_60,(QString *)&local_48);
            bVar2 = QDir::exists((QDir *)&local_60);
            QDir::~QDir((QDir *)&local_60);
            if (bVar2) {
              QString::QString((QString *)&local_60,
                               "The project folder will be automatically created.");
              FUN_140285fd0(param_1,&local_60,2);
            }
            else {
              QString::QString((QString *)&local_60,
                               "The Luduvo project folder and project folder will be automatically created."
                              );
              FUN_140285fd0(param_1,&local_60,2);
            }
          }
          QString::~QString((QString *)&local_60);
          goto LAB_14028577f;
        }
        FUN_140284650(&local_60);
        cVar3 = FUN_14006dec0(&local_48,(QString *)&local_60);
        QString::~QString((QString *)&local_60);
        QDir::~QDir((QDir *)&local_90);
        if (cVar3 != '\0') goto LAB_140285682;
        QString::QString((QString *)&local_60,
                         "The parent directory of the path specified doesn\'t exist.");
        FUN_140285fd0(param_1,&local_60,0);
        QString::~QString((QString *)&local_60);
        QString::~QString((QString *)&local_48);
      }
      else {
        QDir::QDir((QDir *)&local_48,local_78);
        bVar2 = QDir::exists((QDir *)&local_48);
        QDir::~QDir((QDir *)&local_48);
        if (!bVar2) {
          QString::QString((QString *)&local_48,"The path specified doesn\'t exist.");
          FUN_140285fd0(param_1,&local_48,0);
          goto LAB_140285392;
        }
        QString::QString((QString *)&local_48,"The project folder exists and is empty.");
        FUN_140285fd0(param_1,&local_48,2);
LAB_14028577f:
        QString::~QString((QString *)&local_48);
        QDir::QDir((QDir *)&local_48,local_78);
        bVar2 = QDir::exists((QDir *)&local_48);
        QDir::~QDir((QDir *)&local_48);
        if (bVar2) {
          QDir::QDir((QDir *)&local_60,local_78);
          QDir::entryList((QDir *)&local_60,&local_48,0x6307,0xffffffff);
          QDir::~QDir((QDir *)&local_60);
          pQVar4 = local_40 + local_38 * 0x18;
          pQVar5 = local_40;
          do {
            if (pQVar5 == pQVar4) {
              if (*(char *)(param_1 + 0x90) == '\0') goto LAB_14028582d;
              goto LAB_14028585a;
            }
            bVar2 = QString::startsWith((QString *)pQVar5,0x2e,1);
            pQVar5 = pQVar5 + 0x18;
          } while (bVar2);
          *(undefined1 *)(param_1 + 0x90) = 0;
LAB_14028582d:
          QString::QString((QString *)&local_60,
                           "The selected path is not empty. Choosing an empty folder is highly recommended."
                          );
          FUN_140285fd0(param_1,&local_60,1);
          QString::~QString((QString *)&local_60);
LAB_14028585a:
          FUN_14000dd40(&local_48);
        }
      }
    }
    else {
      QString::~QString((QString *)&local_48);
LAB_140285372:
      QString::QString((QString *)&local_48,
                       "The directory name specified contains invalid characters or trailing whitespace."
                      );
      FUN_140285fd0(param_1,&local_48,0);
LAB_140285392:
      QString::~QString((QString *)&local_48);
    }
    pQVar6 = local_c0;
  }
  QString::~QString(pQVar6);
  pQVar6 = local_78;
LAB_1402853aa:
  QString::~QString(pQVar6);
  return;
}

