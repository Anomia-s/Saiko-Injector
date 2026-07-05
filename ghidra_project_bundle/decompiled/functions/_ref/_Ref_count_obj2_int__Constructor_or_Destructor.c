/**
 * Function: _Ref_count_obj2<int>_Constructor_or_Destructor
 * Address:  140261380
 * Signature: longlong __fastcall _Ref_count_obj2<int>_Constructor_or_Destructor(undefined8 * param_1, undefined8 param_2, undefined8 param_3)
 * Body size: 1037 bytes
 */


longlong std::_Ref_count_obj2<int>::_Ref_count_obj2<int>_Constructor_or_Destructor
                   (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  QWidget *pQVar1;
  undefined8 uVar2;
  QComboBox *this;
  CollapsibleSection *pCVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  QString *pQVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 in_stack_fffffffffffffebc;
  QArrayData *local_128 [2];
  code *local_118;
  undefined4 local_110;
  QString local_100 [24];
  QString local_e8 [24];
  QString local_d0 [24];
  QString local_b8 [24];
  QObject local_a0 [8];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  QArrayData *local_80;
  QString *local_78;
  longlong local_70;
  QComboBox *local_68;
  QFormLayout *local_60;
  CollapsibleSection *local_58;
  QString *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = (CollapsibleSection *)FUN_140b65d30(0x68);
  QString::QString((QString *)&local_118,"Shape");
  ldv::editor::CollapsibleSection::CollapsibleSection(local_58,(QString *)&local_118,param_3);
  QString::~QString((QString *)&local_118);
  pQVar1 = (QWidget *)(local_58->CollapsibleSection_data).offset_0x38;
  local_60 = (QFormLayout *)FUN_140b65d30(0x20);
  QFormLayout::QFormLayout(local_60,pQVar1);
  FUN_1402655c0(local_60);
  cVar4 = FUN_1400b9b40(*param_1,param_2,DAT_14151f6b0);
  uVar10 = 0;
  if (cVar4 == '\0') {
    cVar4 = FUN_1400b9b40(*param_1,param_2,DAT_14151f6b8);
    uVar10 = 1;
    if (cVar4 == '\0') {
      cVar4 = FUN_1400b9b40(*param_1,param_2,DAT_14151f6c0);
      uVar10 = 2;
      if (cVar4 == '\0') {
        cVar4 = FUN_1400b9b40(*param_1,param_2,DAT_14151f6c8);
        uVar10 = 3;
        if (cVar4 == '\0') {
          bVar5 = FUN_1400b9b40(*param_1,param_2,DAT_14151f6d0);
          uVar10 = bVar5 - 1 | 4;
        }
      }
    }
  }
  local_98 = param_2;
  local_90 = param_1;
  local_68 = (QComboBox *)FUN_140b65d30(0x28);
  QComboBox::QComboBox(local_68,(QWidget *)0x0);
  ldv::editor::PlainComboDelegate::PlainComboDelegate_Constructor_or_Destructor(local_68);
  local_50 = (QString *)&local_118;
  QString::QString((QString *)&local_118,"Box");
  local_50 = local_100;
  QString::QString(local_100,"Sphere");
  local_50 = local_e8;
  QString::QString(local_e8,"Cylinder");
  local_50 = local_d0;
  QString::QString(local_d0,"Cone");
  local_50 = local_b8;
  QString::QString(local_b8,"Wedge");
  pQVar7 = QArrayData::allocate(local_128,0x18,8,5,1);
  local_80 = local_128[0];
  local_78 = pQVar7;
  QString::QString(pQVar7,(QString *)&local_118);
  QString::QString(pQVar7 + 0x18,local_100);
  QString::QString(pQVar7 + 0x30,local_e8);
  QString::QString(pQVar7 + 0x48,local_d0);
  QString::QString(pQVar7 + 0x60,local_b8);
  this = local_68;
  local_70 = 5;
  iVar6 = QComboBox::count(local_68);
  QComboBox::insertItems(this,iVar6,(QList<QString> *)&local_80);
  uVar2 = local_98;
  if (local_80 != (QArrayData *)0x0) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + -1;
    UNLOCK();
    if (*(int *)local_80 == 0) {
      if (local_70 != 0) {
        lVar11 = local_70 * 0x18;
        pQVar7 = local_78;
        do {
          QString::~QString(pQVar7);
          pQVar7 = pQVar7 + 0x18;
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != 0);
      }
      free(local_80);
    }
  }
  QString::~QString(local_b8);
  QString::~QString(local_d0);
  QString::~QString(local_e8);
  QString::~QString(local_100);
  QString::~QString((QString *)&local_118);
  QComboBox::setCurrentIndex(this,uVar10);
  puVar8 = (undefined8 *)FUN_140b65d30(0x18);
  puVar8[1] = 0x100000001;
  *puVar8 = &vftable;
  *(uint *)(puVar8 + 2) = uVar10;
  local_118 = currentIndexChanged_exref;
  local_110 = 0;
  local_88 = puVar8;
  puVar9 = (undefined4 *)FUN_140b65d30(0x30);
  *puVar9 = 1;
  *(code **)(puVar9 + 2) =
       ldv::editor::_anon_41263C45::_anon_41263C45::ShapeChangeCmd::
       ShapeChangeCmd_Constructor_or_Destructor;
  *(undefined8 **)(puVar9 + 4) = local_90;
  *(undefined8 *)(puVar9 + 6) = uVar2;
  *(undefined8 **)(puVar9 + 8) = puVar8 + 2;
  *(undefined8 **)(puVar9 + 10) = puVar8;
  local_88 = (undefined8 *)0x0;
  QObject::connectImpl
            (local_a0,(void **)this,(QObject *)&local_118,(void **)this,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar9,(int *)CONCAT44(in_stack_fffffffffffffebc,1),(QMetaObject *)0x0)
  ;
  QMetaObject::Connection::~Connection((Connection *)local_a0);
  QString::QString((QString *)&local_118,"Type");
  FUN_1402663d0(local_60,(QString *)&local_118,this);
  pCVar3 = local_58;
  QString::~QString((QString *)&local_118);
  return (longlong)pCVar3;
}

