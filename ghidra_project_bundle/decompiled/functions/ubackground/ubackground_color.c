/**
 * Function: ubackground_color
 * Address:  1402664e0
 * Signature: undefined ubackground_color(void)
 * Body size: 149 bytes
 */


int ubackground_color(longlong param_1)

{
  int iVar1;
  QString local_50 [24];
  int *local_38;
  wchar_t *local_30;
  undefined8 local_28;
  QFontMetrics local_20 [8];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  QFontMetrics::QFontMetrics(local_20,(QFont *)(param_1 + 0x38));
  local_38 = (int *)0x0;
  local_30 = L"Background Color ";
  local_28 = 0x11;
  QString::QString(local_50,(QArrayDataPointer<char16_t> *)&local_38);
  iVar1 = QFontMetrics::horizontalAdvance(local_20,local_50,-1);
  QString::~QString(local_50);
  if (local_38 != (int *)0x0) {
    LOCK();
    *local_38 = *local_38 + -1;
    UNLOCK();
    if (*local_38 == 0) {
      free(local_38);
    }
  }
  QFontMetrics::~QFontMetrics(local_20);
  return iVar1;
}

