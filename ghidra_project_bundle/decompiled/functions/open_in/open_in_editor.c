/**
 * Function: open_in_editor
 * Address:  1402619e0
 * Signature: undefined open_in_editor(void)
 * Body size: 776 bytes
 */


CollapsibleSection * open_in_editor(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  QWidget *pQVar1;
  undefined8 uVar2;
  QFormLayout *this;
  CollapsibleSection *pCVar3;
  QObject *pQVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  code ****ppppcVar10;
  undefined4 in_stack_ffffffffffffff1c;
  QObject local_d0 [8];
  char *local_c8;
  undefined8 local_c0;
  longlong local_b8 [3];
  ulonglong local_a0;
  code ***local_98;
  undefined8 local_90;
  QFormLayout *local_80;
  CollapsibleSection *local_78;
  code ***local_70;
  undefined4 local_68;
  undefined8 local_60;
  ulonglong local_58;
  QObject *local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_78 = (CollapsibleSection *)FUN_140b65d30(0x68);
  QString::QString((QString *)&local_70,"Script");
  ldv::editor::CollapsibleSection::CollapsibleSection(local_78,(QString *)&local_70,param_3);
  QString::~QString((QString *)&local_70);
  pCVar3 = local_78;
  pQVar1 = (QWidget *)(local_78->CollapsibleSection_data).offset_0x38;
  local_80 = (QFormLayout *)FUN_140b65d30(0x20);
  QFormLayout::QFormLayout(local_80,pQVar1);
  this = local_80;
  FUN_1402655c0(local_80);
  puVar6 = (undefined8 *)FUN_1400ba4f0(*param_1,param_2,DAT_14151f7a0);
  if (param_1[0x1e] != 0) {
    FUN_140288a50(param_1[0x1e],&local_70,*puVar6);
    local_50 = (QObject *)FUN_140b65d30(0x28);
    QLineEdit::QLineEdit((QLineEdit *)local_50,pQVar1);
    local_98 = (code ***)&local_70;
    if (7 < local_58) {
      local_98 = local_70;
    }
    local_90 = local_60;
    uVar5 = FUN_140b6625c();
    FUN_14003e640(local_b8,uVar5,
                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98);
    pQVar4 = local_50;
    QString::fromStdString
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98);
    QLineEdit::setText((QLineEdit *)pQVar4,(QString *)&local_98);
    QString::~QString((QString *)&local_98);
    if (0xf < local_a0) {
      uVar7 = local_a0 + 1;
      lVar9 = local_b8[0];
      if (0xfff < uVar7) {
        lVar9 = *(longlong *)(local_b8[0] + -8);
        if (0x1f < (ulonglong)((local_b8[0] + -8) - lVar9)) goto LAB_140261ccf;
        uVar7 = local_a0 + 0x28;
      }
      thunk_FUN_140b68ba8(lVar9,uVar7);
    }
    QLineEdit::setReadOnly((QLineEdit *)pQVar4,true);
    QString::QString((QString *)local_b8,"File");
    FUN_1402663d0(this,local_b8,pQVar4);
    QString::~QString((QString *)local_b8);
    if (7 < local_58) {
      uVar7 = local_58 * 2 + 2;
      ppppcVar10 = (code ****)local_70;
      if (0xfff < uVar7) {
        ppppcVar10 = (code ****)local_70[-1];
        if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)ppppcVar10))) {
LAB_140261ccf:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        uVar7 = local_58 * 2 + 0x29;
      }
      thunk_FUN_140b68ba8(ppppcVar10,uVar7);
    }
  }
  local_50 = (QObject *)FUN_140b65d30(0x28);
  QString::QString((QString *)&local_70,"Open in Editor");
  QPushButton::QPushButton((QPushButton *)local_50,(QString *)&local_70,pQVar1);
  QString::~QString((QString *)&local_70);
  pQVar4 = local_50;
  local_c8 = "compileBtn";
  local_c0 = 10;
  QObject::setObjectName(local_50,&local_c8);
  uVar2 = *puVar6;
  local_70 = (code ***)clicked_exref;
  local_68 = 0;
  puVar8 = (undefined4 *)FUN_140b65d30(0x20);
  *puVar8 = 1;
  *(code **)(puVar8 + 2) = FUN_140263580;
  *(undefined8 **)(puVar8 + 4) = param_1;
  *(undefined8 *)(puVar8 + 6) = uVar2;
  QObject::connectImpl
            (local_d0,(void **)pQVar4,(QObject *)&local_70,(void **)pQVar4,(QSlotObjectBase *)0x0,
             (ConnectionType)puVar8,(int *)CONCAT44(in_stack_ffffffffffffff1c,1),(QMetaObject *)0x0)
  ;
  QMetaObject::Connection::~Connection((Connection *)local_d0);
  QFormLayout::addRow(this,(QWidget *)pQVar4);
  return pCVar3;
}

