/**
 * Function: cancel_playtest_start_f5
 * Address:  140093fb0
 * Signature: undefined cancel_playtest_start_f5(void)
 * Body size: 644 bytes
 */


void cancel_playtest_start_f5(longlong param_1)

{
  byte bVar1;
  QAction *pQVar2;
  QString local_50 [24];
  QIcon local_38 [8];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  bVar1 = *(byte *)(param_1 + 0x140);
  if (bVar1 == 0) {
    pQVar2 = *(QAction **)(param_1 + 0x43d70);
    QString::QString(local_50,":/icons/play.svg");
    QIcon::QIcon(local_38,local_50);
    QAction::setIcon(pQVar2,local_38);
    QIcon::~QIcon(local_38);
    QString::~QString(local_50);
    pQVar2 = *(QAction **)(param_1 + 0x43d70);
    QString::QString(local_50,"Play");
    QAction::setText(pQVar2,local_50);
    QString::~QString(local_50);
    pQVar2 = *(QAction **)(param_1 + 0x43d70);
    QString::QString(local_50,"Play (F5)");
    QAction::setToolTip(pQVar2,local_50);
  }
  else {
    pQVar2 = *(QAction **)(param_1 + 0x43d70);
    if (bVar1 == 1) {
      QString::QString(local_50,":/icons/stop.svg");
      QIcon::QIcon(local_38,local_50);
      QAction::setIcon(pQVar2,local_38);
      QIcon::~QIcon(local_38);
      QString::~QString(local_50);
      pQVar2 = *(QAction **)(param_1 + 0x43d70);
      QString::QString(local_50,"Stop");
      QAction::setText(pQVar2,local_50);
      QString::~QString(local_50);
      pQVar2 = *(QAction **)(param_1 + 0x43d70);
      QString::QString(local_50,"Cancel Playtest Start (F5)");
      QAction::setToolTip(pQVar2,local_50);
    }
    else {
      QString::QString(local_50,":/icons/stop.svg");
      QIcon::QIcon(local_38,local_50);
      QAction::setIcon(pQVar2,local_38);
      QIcon::~QIcon(local_38);
      QString::~QString(local_50);
      pQVar2 = *(QAction **)(param_1 + 0x43d70);
      QString::QString(local_50,"Stop");
      QAction::setText(pQVar2,local_50);
      QString::~QString(local_50);
      pQVar2 = *(QAction **)(param_1 + 0x43d70);
      QString::QString(local_50,"Stop (F5)");
      QAction::setToolTip(pQVar2,local_50);
    }
  }
  QString::~QString(local_50);
  QAction::setEnabled(*(QAction **)(param_1 + 0x43d70),true);
  QAction::setEnabled(*(QAction **)(param_1 + 0x43d78),1 < bVar1);
  QAction::setEnabled(*(QAction **)(param_1 + 0x43d80),bVar1 == 3);
  if (bVar1 == 0) {
    pQVar2 = *(QAction **)(param_1 + 0x43d88);
    QString::QString(local_50,"Client");
    QAction::setText(pQVar2,local_50);
    QString::~QString(local_50);
    QAction::setChecked(*(QAction **)(param_1 + 0x43d88),false);
  }
  return;
}

