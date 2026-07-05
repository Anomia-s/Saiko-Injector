// FUN_140083f50 @ 140083f50

void FUN_140083f50(longlong param_1,double *param_2)

{
  undefined2 *puVar1;
  longlong *plVar2;
  State SVar3;
  WidgetAnimation<double> *this;
  
  this = *(WidgetAnimation<double> **)(param_1 + 0x58);
  if (this == (WidgetAnimation<double> *)0x0) {
    this = (WidgetAnimation<double> *)FUN_140b65d30(0x38);
    oclero::qlementine::WidgetAnimation<double>::WidgetAnimation<double>
              (this,*(QObject **)(param_1 + 0x60));
    plVar2 = *(longlong **)(param_1 + 0x58);
    *(WidgetAnimation<double> **)(param_1 + 0x58) = this;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
      this = *(WidgetAnimation<double> **)(param_1 + 0x58);
    }
  }
  puVar1 = &this[1].WidgetAnimation<double>_data.offset_0x8;
  if (((*param_2 == *(double *)puVar1) && (!NAN(*param_2) && !NAN(*(double *)puVar1))) &&
     (*(char *)((longlong)&(this->WidgetAnimation<double>_data).offset_0x8 + 1) != '\0')) {
    if ((this->WidgetAnimation<double>_data).offset_0xa == '\x01') {
      SVar3 = QAbstractAnimation::state
                        ((QAbstractAnimation *)&(this->WidgetAnimation<double>_data).field_0x10);
      if (SVar3 != 2) goto LAB_140083fdf;
    }
    return;
  }
LAB_140083fdf:
  FUN_140082a60(this,param_2);
  return;
}


