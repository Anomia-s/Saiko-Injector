/**
 * Function: vfunction15
 * Address:  140a58950
 * Signature: void __thiscall vfunction15(QsciListBoxQt * this, undefined4 param_1, undefined1 * param_2, uint param_3)
 * Body size: 495 bytes
 */


void __thiscall
QsciListBoxQt::vfunction15(QsciListBoxQt *this,undefined4 param_1,undefined1 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  QObject *pQVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong lVar15;
  QString local_78 [24];
  QString local_60 [16];
  longlong local_50;
  QByteArray local_48 [16];
  int local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_14081f2b0((this->Window_data).offset_0x10,local_60,param_1);
  pQVar6 = QObject::parent((QObject *)(this->Window_data).offset_0x10);
  lVar7 = (**(code **)(*(longlong *)pQVar6 + 8))(pQVar6,"QsciScintilla");
  if ((lVar7 == 0) || (cVar5 = FUN_14058e800(pQVar6), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    QString::operator=((QString *)(pQVar6 + 0x1b8),local_60);
    bVar4 = true;
  }
  if (((int)param_3 < 1) || (local_50 == 0)) {
    *param_2 = 0;
  }
  else {
    QByteArray::QByteArray(local_48);
    if (*(char *)((longlong)&(this->Window_data).offset_0x18 + 4) == '\x01') {
      QString::toUtf8_helper(local_78);
    }
    else {
      QString::toLatin1_helper(local_78);
    }
    QByteArray::swap(local_48,(QByteArray *)local_78);
    QByteArray::~QByteArray((QByteArray *)local_78);
    pcVar8 = QByteArray::data(local_48);
    puVar12 = param_2;
    if (local_38 != 0) {
      if (bVar4) {
        lVar7 = 0;
        do {
          if (param_3 == (uint)lVar7) break;
          if (pcVar8[lVar7] == ' ') goto LAB_140a58b17;
          puVar12 = puVar12 + 1;
          param_2[lVar7] = pcVar8[lVar7];
          lVar7 = lVar7 + 1;
        } while (local_38 != (int)lVar7);
      }
      else {
        uVar9 = local_38 - 1;
        uVar10 = uVar9;
        if (param_3 < uVar9) {
          uVar10 = param_3;
        }
        pcVar13 = pcVar8;
        if (0x1f < uVar10 && 0x1f < (ulonglong)((longlong)param_2 - (longlong)pcVar8)) {
          uVar11 = uVar10 + 1 & 0x1f;
          uVar14 = 0x20;
          if (uVar11 != 0) {
            uVar14 = (ulonglong)uVar11;
          }
          lVar7 = (uVar10 + 1) - uVar14;
          uVar9 = uVar9 - (int)lVar7;
          pcVar13 = pcVar8 + lVar7;
          param_3 = param_3 - (int)lVar7;
          puVar12 = param_2 + lVar7;
          lVar15 = 0;
          do {
            uVar1 = *(undefined8 *)(pcVar8 + lVar15 + 8);
            uVar2 = *(undefined8 *)(pcVar8 + lVar15 + 0x10);
            uVar3 = *(undefined8 *)(pcVar8 + lVar15 + 0x10 + 8);
            *(undefined8 *)(param_2 + lVar15) = *(undefined8 *)(pcVar8 + lVar15);
            *(undefined8 *)((longlong)(param_2 + lVar15) + 8) = uVar1;
            *(undefined8 *)(param_2 + lVar15 + 0x10) = uVar2;
            *(undefined8 *)((longlong)(param_2 + lVar15 + 0x10) + 8) = uVar3;
            lVar15 = lVar15 + 0x20;
          } while (lVar7 != lVar15);
        }
        lVar7 = 0;
        do {
          param_2 = puVar12;
          if (param_3 == (uint)lVar7) break;
          puVar12[lVar7] = pcVar13[lVar7];
          lVar7 = lVar7 + 1;
        } while (uVar9 + 1 != (int)lVar7);
      }
      puVar12 = param_2 + lVar7;
    }
LAB_140a58b17:
    *puVar12 = 0;
    QByteArray::~QByteArray(local_48);
  }
  QString::~QString(local_60);
  return;
}

