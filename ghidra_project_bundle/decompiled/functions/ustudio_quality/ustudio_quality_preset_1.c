/**
 * Function: ustudio_quality_preset_1
 * Address:  1400938f0
 * Signature: undefined ustudio_quality_preset_1(void)
 * Body size: 434 bytes
 */


void ustudio_quality_preset_1(longlong param_1,int param_2)

{
  char *_Str;
  int iVar1;
  longlong lVar2;
  QString local_b0 [24];
  char *local_98;
  undefined8 local_90;
  size_t local_88;
  char *local_80;
  QVariant local_78 [32];
  QSettings local_58 [24];
  int *local_40;
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_2 < 1) {
    param_2 = 0;
  }
  iVar1 = 2;
  if (param_2 < 2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x43dd0) = iVar1;
  QSettings::QSettings(local_58,(QObject *)0x0);
  QVariant::QVariant(local_78,*(int *)(param_1 + 0x43dd0));
  local_98 = "studio/qualityPreset";
  local_90 = 0x14;
  QSettings::setValue(local_58,&local_98,local_78);
  QVariant::~QVariant(local_78);
  QSettings::~QSettings(local_58);
  if (*(longlong *)(param_1 + 0x43cd0) != 0) {
    FUN_140299b10(*(longlong *)(param_1 + 0x43cd0),*(undefined4 *)(param_1 + 0x43dd0));
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = FUN_1400bb330(*(longlong *)(param_1 + 0x28),DAT_14151f7b8,DAT_14151f7b8);
    if (lVar2 != 0) {
      *(bool *)(lVar2 + 0xc) = *(int *)(param_1 + 0x43dd0) != 0;
      FUN_1400ba7b0(*(undefined8 *)(param_1 + 0x28),DAT_14151f7b8,DAT_14151f7b8);
      *(undefined1 *)(param_1 + 0x138) = 1;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x43ce8);
  if (lVar2 != 0) {
    local_40 = (int *)0x0;
    local_38 = L"Studio quality preset: %1";
    local_30 = 0x19;
    QString::QString((QString *)local_58,(QArrayDataPointer<char16_t> *)&local_40);
    _Str = (&PTR_s_Performance_140de0240)[*(int *)(param_1 + 0x43dd0)];
    local_88 = strlen(_Str);
    local_80 = _Str;
    QString::fromUtf8(local_b0,&local_88);
    QString::arg((QString *)local_58,local_78,local_b0,0,0x20);
    FUN_1402826c0(lVar2,local_78);
    QString::~QString((QString *)local_78);
    QString::~QString(local_b0);
    QString::~QString((QString *)local_58);
    if (local_40 != (int *)0x0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 == 0) {
        free(local_40);
      }
    }
  }
  return;
}

