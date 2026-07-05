/**
 * Function: uqlementineresourcesiconsmessagebox_information_fg
 * Address:  140257280
 * Signature: undefined uqlementineresourcesiconsmessagebox_information_fg(void)
 * Body size: 236 bytes
 */


undefined8
uqlementineresourcesiconsmessagebox_information_fg
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  QString local_78 [24];
  int *local_60;
  wchar_t *local_58;
  undefined8 local_50;
  int *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = (int *)0x0;
  local_40 = L":/qlementine/resources/icons/messagebox_information_bg.svg";
  local_38 = 0x3a;
  QString::QString(local_78,(QArrayDataPointer<char16_t> *)&local_48);
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (*local_48 == 0) {
      free(local_48);
    }
  }
  local_60 = (int *)0x0;
  local_58 = L":/qlementine/resources/icons/messagebox_information_fg.svg";
  local_50 = 0x3a;
  QString::QString((QString *)&local_48,(QArrayDataPointer<char16_t> *)&local_60);
  if (local_60 != (int *)0x0) {
    LOCK();
    *local_60 = *local_60 + -1;
    UNLOCK();
    if (*local_60 == 0) {
      free(local_60);
    }
  }
  FUN_14024b900(param_1,local_78,param_3,&local_48,param_4,param_2);
  QString::~QString((QString *)&local_48);
  QString::~QString(local_78);
  return param_1;
}

