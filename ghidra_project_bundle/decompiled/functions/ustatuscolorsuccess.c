/**
 * Function: ustatuscolorsuccess
 * Address:  140241250
 * Signature: undefined ustatuscolorsuccess(void)
 * Body size: 11165 bytes
 */


QJsonDocument * ustatuscolorsuccess(longlong param_1,QJsonDocument *param_2)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  QJsonObject local_a8 [8];
  QString local_a0 [16];
  int *local_90;
  wchar_t *local_88;
  undefined8 local_80;
  QJsonObject local_78 [8];
  QJsonValue local_70 [24];
  int *local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  QJsonObject::QJsonObject(local_78);
  QJsonObject::QJsonObject(local_a8);
  QJsonValue::QJsonValue(local_70,(QString *)(param_1 + 8));
  QString::QString((QString *)&local_58,"name");
  QJsonObject::insert(local_a8,(QString *)&local_90,(QJsonValue *)&local_58);
  QString::~QString((QString *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QJsonValue::QJsonValue(local_70,(QString *)(param_1 + 0x20));
  QString::QString((QString *)&local_58,"version");
  QJsonObject::insert(local_a8,(QString *)&local_90,(QJsonValue *)&local_58);
  QString::~QString((QString *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QJsonValue::QJsonValue(local_70,(QString *)(param_1 + 0x38));
  QString::QString((QString *)&local_58,"author");
  QJsonObject::insert(local_a8,(QString *)&local_90,(QJsonValue *)&local_58);
  QString::~QString((QString *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QJsonValue::QJsonValue(local_70,local_a8);
  QString::QString((QString *)&local_58,"meta");
  QJsonObject::insert(local_78,(QString *)&local_90,(QJsonValue *)&local_58);
  QString::~QString((QString *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  local_58 = (int *)0x0;
  local_50 = L"backgroundColorMain1";
  local_48 = 0x14;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x50);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"backgroundColorMain2";
  local_48 = 0x14;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x60);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"backgroundColorMain3";
  local_48 = 0x14;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x70);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"backgroundColorMain4";
  local_48 = 0x14;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x80);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"backgroundColorWorkspace";
  local_48 = 0x18;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0xa0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"backgroundColorTabBar";
  local_48 = 0x15;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0xb0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"neutralColor";
  local_48 = 0xc;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0xc0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"neutralColorHovered";
  local_48 = 0x13;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0xd0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"neutralColorPressed";
  local_48 = 0x13;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0xe0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"neutralColorDisabled";
  local_48 = 0x14;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0xf0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"focusColor";
  local_48 = 10;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x110);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryColor";
  local_48 = 0xc;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x120);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryColorHovered";
  local_48 = 0x13;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x130);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryColorPressed";
  local_48 = 0x13;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x140);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryColorDisabled";
  local_48 = 0x14;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x150);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryColorForeground";
  local_48 = 0x16;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x170);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryColorForegroundHovered";
  local_48 = 0x1d;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x180);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryColorForegroundPressed";
  local_48 = 0x1d;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 400);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryColorForegroundDisabled";
  local_48 = 0x1e;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x1a0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryAlternativeColor";
  local_48 = 0x17;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x1c0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryAlternativeColorHovered";
  local_48 = 0x1e;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x1d0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryAlternativeColorPressed";
  local_48 = 0x1e;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x1e0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"primaryAlternativeColorDisabled";
  local_48 = 0x1f;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x1f0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryColor";
  local_48 = 0xe;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x210);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryColorHovered";
  local_48 = 0x15;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x220);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryColorPressed";
  local_48 = 0x15;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x230);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryColorDisabled";
  local_48 = 0x16;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x240);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryColorForeground";
  local_48 = 0x18;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x260);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryColorForegroundHovered";
  local_48 = 0x1f;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x270);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryColorForegroundPressed";
  local_48 = 0x1f;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x280);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryColorForegroundDisabled";
  local_48 = 0x20;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x290);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryAlternativeColor";
  local_48 = 0x19;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x2b0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryAlternativeColorHovered";
  local_48 = 0x20;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x2c0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryAlternativeColorPressed";
  local_48 = 0x20;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x2d0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"secondaryAlternativeColorDisabled";
  local_48 = 0x21;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x2e0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorSuccess";
  local_48 = 0x12;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x300);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorSuccessHovered";
  local_48 = 0x19;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x310);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorSuccessPressed";
  local_48 = 0x19;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 800);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorSuccessDisabled";
  local_48 = 0x1a;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x330);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorInfo";
  local_48 = 0xf;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x340);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorInfoHovered";
  local_48 = 0x16;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x350);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorInfoPressed";
  local_48 = 0x16;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x360);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorInfoDisabled";
  local_48 = 0x17;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x370);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorWarning";
  local_48 = 0x12;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x380);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorWarningHovered";
  local_48 = 0x19;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x390);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorWarningPressed";
  local_48 = 0x19;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x3a0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorWarningDisabled";
  local_48 = 0x1a;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x3b0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorError";
  local_48 = 0x10;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x3c0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorErrorHovered";
  local_48 = 0x17;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x3d0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorErrorPressed";
  local_48 = 0x17;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x3e0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"statusColorErrorDisabled";
  local_48 = 0x18;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x3f0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"shadowColor1";
  local_48 = 0xc;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x440);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"shadowColor2";
  local_48 = 0xc;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x450);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"shadowColor3";
  local_48 = 0xc;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x460);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"borderColor";
  local_48 = 0xb;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x480);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"borderColorHovered";
  local_48 = 0x12;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x490);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"borderColorPressed";
  local_48 = 0x12;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x4a0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"borderColorDisabled";
  local_48 = 0x13;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x4b0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"semiTransparentColor1";
  local_48 = 0x15;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x4d0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"semiTransparentColor2";
  local_48 = 0x15;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x4e0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"semiTransparentColor3";
  local_48 = 0x15;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x4f0);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  local_58 = (int *)0x0;
  local_50 = L"semiTransparentColor4";
  local_48 = 0x15;
  QString::QString((QString *)local_70,(QArrayDataPointer<char16_t> *)&local_58);
  FUN_140248470(local_78,local_70,param_1 + 0x500);
  QString::~QString((QString *)local_70);
  if (local_58 != (int *)0x0) {
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      free(local_58);
    }
  }
  bVar2 = *(bool *)(param_1 + 0x520);
  local_90 = (int *)0x0;
  local_88 = L"useSystemFonts";
  local_80 = 0xe;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,bVar2);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x524);
  local_90 = (int *)0x0;
  local_88 = L"fontSize";
  local_80 = 8;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x528);
  local_90 = (int *)0x0;
  local_88 = L"fontSizeMonospace";
  local_80 = 0x11;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x52c);
  local_90 = (int *)0x0;
  local_88 = L"fontSizeH1";
  local_80 = 10;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x530);
  local_90 = (int *)0x0;
  local_88 = L"fontSizeH2";
  local_80 = 10;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x534);
  local_90 = (int *)0x0;
  local_88 = L"fontSizeH3";
  local_80 = 10;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x538);
  local_90 = (int *)0x0;
  local_88 = L"fontSizeH4";
  local_80 = 10;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x53c);
  local_90 = (int *)0x0;
  local_88 = L"fontSizeH5";
  local_80 = 10;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x540);
  local_90 = (int *)0x0;
  local_88 = L"fontSizeS1";
  local_80 = 10;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x544);
  local_90 = (int *)0x0;
  local_88 = L"animationDuration";
  local_80 = 0x11;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x548);
  local_90 = (int *)0x0;
  local_88 = L"focusAnimationDuration";
  local_80 = 0x16;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x54c);
  local_90 = (int *)0x0;
  local_88 = L"sliderAnimationDuration";
  local_80 = 0x17;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  dVar1 = *(double *)(param_1 + 0x550);
  local_90 = (int *)0x0;
  local_88 = L"borderRadius";
  local_80 = 0xc;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,dVar1);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  dVar1 = *(double *)(param_1 + 0x558);
  local_90 = (int *)0x0;
  local_88 = L"checkBoxBorderRadius";
  local_80 = 0x14;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,dVar1);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  dVar1 = *(double *)(param_1 + 0x568);
  local_90 = (int *)0x0;
  local_88 = L"menuBarItemBorderRadius";
  local_80 = 0x17;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,dVar1);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x570);
  local_90 = (int *)0x0;
  local_88 = L"borderWidth";
  local_80 = 0xb;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x574);
  local_90 = (int *)0x0;
  local_88 = L"controlHeightLarge";
  local_80 = 0x12;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x578);
  local_90 = (int *)0x0;
  local_88 = L"controlHeightMedium";
  local_80 = 0x13;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x57c);
  local_90 = (int *)0x0;
  local_88 = L"controlHeightSmall";
  local_80 = 0x12;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x580);
  local_90 = (int *)0x0;
  local_88 = L"controlDefaultWidth";
  local_80 = 0x13;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x584);
  local_90 = (int *)0x0;
  local_88 = L"dialMarkLength";
  local_80 = 0xe;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x588);
  local_90 = (int *)0x0;
  local_88 = L"dialMarkThickness";
  local_80 = 0x11;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x58c);
  local_90 = (int *)0x0;
  local_88 = L"dialTickLength";
  local_80 = 0xe;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x590);
  local_90 = (int *)0x0;
  local_88 = L"dialTickSpacing";
  local_80 = 0xf;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x594);
  local_90 = (int *)0x0;
  local_88 = L"dialGrooveThickness";
  local_80 = 0x13;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x598);
  local_90 = (int *)0x0;
  local_88 = L"focusBorderWidth";
  local_80 = 0x10;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x59c);
  QString::QString((QString *)&local_58,"iconSize");
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,(QString *)&local_90,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  iVar3 = *(int *)(param_1 + 0x5a4);
  QString::QString((QString *)&local_58,"iconSizeMedium");
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,(QString *)&local_90,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  iVar3 = *(int *)(param_1 + 0x5ac);
  QString::QString((QString *)&local_58,"iconSizeLarge");
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,(QString *)&local_90,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  iVar3 = *(int *)(param_1 + 0x5b4);
  QString::QString((QString *)&local_58,"iconSizeExtraSmall");
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,(QString *)&local_90,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  iVar3 = *(int *)(param_1 + 0x5bc);
  local_90 = (int *)0x0;
  local_88 = L"sliderTickSize";
  local_80 = 0xe;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5c0);
  local_90 = (int *)0x0;
  local_88 = L"sliderTickSpacing";
  local_80 = 0x11;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5c4);
  local_90 = (int *)0x0;
  local_88 = L"sliderTickThickness";
  local_80 = 0x13;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5c8);
  local_90 = (int *)0x0;
  local_88 = L"sliderGrooveHeight";
  local_80 = 0x12;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5cc);
  local_90 = (int *)0x0;
  local_88 = L"progressBarGrooveHeight";
  local_80 = 0x17;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5d0);
  local_90 = (int *)0x0;
  local_88 = L"spacing";
  local_80 = 7;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5d4);
  local_90 = (int *)0x0;
  local_88 = L"scrollBarThicknessFull";
  local_80 = 0x16;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5d8);
  local_90 = (int *)0x0;
  local_88 = L"scrollBarThicknessSmall";
  local_80 = 0x17;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5dc);
  local_90 = (int *)0x0;
  local_88 = L"scrollBarMargin";
  local_80 = 0xf;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5e0);
  local_90 = (int *)0x0;
  local_88 = L"tabBarPaddingTop";
  local_80 = 0x10;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5e4);
  local_90 = (int *)0x0;
  local_88 = L"tabBarTabMaxWidth";
  local_80 = 0x11;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  iVar3 = *(int *)(param_1 + 0x5e8);
  local_90 = (int *)0x0;
  local_88 = L"tabBarTabMinWidth";
  local_80 = 0x11;
  QString::QString((QString *)&local_58,(QArrayDataPointer<char16_t> *)&local_90);
  QJsonValue::QJsonValue(local_70,iVar3);
  QJsonObject::insert(local_78,local_a0,(QJsonValue *)&local_58);
  QJsonValue::~QJsonValue(local_70);
  QString::~QString((QString *)&local_58);
  if (local_90 != (int *)0x0) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      free(local_90);
    }
  }
  QJsonDocument::QJsonDocument(param_2);
  QJsonDocument::setObject(param_2,local_78);
  QJsonObject::~QJsonObject(local_a8);
  QJsonObject::~QJsonObject(local_78);
  return param_2;
}

