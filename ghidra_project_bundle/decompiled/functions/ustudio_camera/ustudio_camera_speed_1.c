/**
 * Function: ustudio_camera_speed_1
 * Address:  140092ef0
 * Signature: undefined ustudio_camera_speed_1(void)
 * Body size: 376 bytes
 */


void ustudio_camera_speed_1(longlong param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  char *local_88;
  undefined8 local_80;
  QVariant local_78 [32];
  QSettings local_58 [24];
  int *local_40;
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  dVar2 = 0.1;
  if (0.1 <= param_2) {
    dVar2 = param_2;
  }
  *(ulonglong *)(param_1 + 0x43db0) =
       -(ulonglong)(10.0 < param_2) & 0x4024000000000000 |
       ~-(ulonglong)(10.0 < param_2) & (ulonglong)dVar2;
  QSettings::QSettings(local_58,(QObject *)0x0);
  QVariant::QVariant(local_78,*(double *)(param_1 + 0x43db0));
  local_88 = "studio/cameraSpeed";
  local_80 = 0x12;
  QSettings::setValue(local_58,&local_88,local_78);
  QVariant::~QVariant(local_78);
  QSettings::~QSettings(local_58);
  if (*(longlong *)(param_1 + 0x43cd0) != 0) {
    *(float *)(*(longlong *)(param_1 + 0x43cd0) + 0x1094c) = (float)*(double *)(param_1 + 0x43db0);
  }
  lVar1 = *(longlong *)(param_1 + 0x43ce8);
  if (lVar1 != 0) {
    local_40 = (int *)0x0;
    local_38 = L"Studio camera speed: %1";
    local_30 = 0x17;
    QString::QString((QString *)local_58,(QArrayDataPointer<char16_t> *)&local_40);
    QString::arg((QString *)local_58,local_78,*(undefined8 *)(param_1 + 0x43db0),0,0x66,1,0x20);
    FUN_1402826c0(lVar1,local_78);
    QString::~QString((QString *)local_78);
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

