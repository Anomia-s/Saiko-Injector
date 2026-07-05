/**
 * Function: a_lighter_version_of_the_secondary_color
 * Address:  140551440
 * Signature: undefined __thiscall a_lighter_version_of_the_secondary_color(void * this)
 * Body size: 15525 bytes
 */


void __thiscall
a_lighter_version_of_the_secondary_color(void *this,QFormLayout *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  _Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
  *local_c8;
  void *local_c0;
  QString *local_90;
  QString local_88 [24];
  QString local_70 [24];
  QWidget *local_58;
  QWidget *local_50;
  Label *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_48 = (Label *)FUN_140b65d30(0x30);
  iVar2 = param_3 * 3;
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Primary Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  param_3 = param_3 / 2;
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Background");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Used to highlight elements.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_1>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_1>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryColor");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x340,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)this = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_2>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_2>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryColorHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x350,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_3>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_3>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryColorPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x360,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x10) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_4>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_4>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryColorDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x370,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x18) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Foreground");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Text drawn over highlighted elements.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_5>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_5>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryColorForeground");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x390,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x20) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_6>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_6>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryColorForegroundHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x3a0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x28) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_7>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_7>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryColorForegroundPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x3b0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x30) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_8>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_8>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryColorForegroundDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x3c0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x38) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Alternative");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,
                   "Used to highlight elements over already highlighted elements.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_9>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_9>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryAlternativeColor");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x3e0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x40) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_10>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_10>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryAlternativeColorHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x3f0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x48) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_11>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_11>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryAlternativeColorPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x400,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x50) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_12>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_12>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"primaryAlternativeColorDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x410,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x58) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Secondary Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Background");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,
                   "A more neutral color, used for text and non-highlighted elements.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_13>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_13>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryColor");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x430,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x60) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_14>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_14>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryColorHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x440,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x68) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_15>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_15>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryColorPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x450,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x70) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_16>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_16>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryColorDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x460,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x78) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Foreground");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Text drawn over elements in secondary color.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_17>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_17>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryColorForeground");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x480,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x80) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_18>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_18>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryColorForegroundHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x490,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x88) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_19>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_19>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryColorForegroundPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x4a0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x90) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_20>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_20>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryColorForegroundDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x4b0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x98) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Secondary Alternative Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"A lighter version of the secondary color.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_21>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_21>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryAlternativeColor");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x4d0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xa0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_22>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_22>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryAlternativeColorHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x4e0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xa8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_23>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_23>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryAlternativeColorPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x4f0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xb0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_24>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_24>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"secondaryAlternativeColorDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x500,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xb8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Neutral Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Used for ??");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_25>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_25>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"neutralColor");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x2e0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xc0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_26>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_26>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"neutralColorHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x2f0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 200) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_27>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_27>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"neutralColorPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x300,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xd0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_28>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_28>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"neutralColorDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x310,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xd8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Semi-transparent Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Used for semi-transparent elements such as scrollbars.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_29>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_29>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"semiTransparentColor1");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x6f0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xe0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_30>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_30>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"semiTransparentColor2");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x700,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xe8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_31>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_31>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"semiTransparentColor3");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x710,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xf0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_32>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_32>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"semiTransparentColor4");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x720,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0xf8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Background Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Used for containers: windows, GroupBoxes, etc.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_33>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_33>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"Main background color (window, etc).");
  QString::QString(local_70,"backgroundColorMain1");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x270,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x100) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_34>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_34>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"backgroundColorMain2");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x280,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x108) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_35>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_35>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"backgroundColorMain3");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x290,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x110) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_36>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_36>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"backgroundColorMain4");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x2a0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x118) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Border Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,
                   "Used to draw the borders: ComboBox, GroupBox\'s border, etc.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_37>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_37>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"borderColor");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x6a0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x120) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_38>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_38>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"borderColorHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x6b0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x128) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_39>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_39>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"borderColorPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x6c0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x130) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_40>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_40>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"borderColorDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x6d0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x138) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Focus Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_41>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_41>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"Color for the focus border.");
  QString::QString(local_70,"focusColor");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x330,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x140) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Shadow Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_42>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_42>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"Shadow 1");
  QString::QString(local_70,"shadowColor1");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x660,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x148) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_43>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_43>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"Shadow 2");
  QString::QString(local_70,"shadowColor2");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x670,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x150) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_44>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_44>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"Shadow 3");
  QString::QString(local_70,"shadowColor3");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x680,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x158) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Status Color");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Displaying feedback to the user (success, error, etc.)");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Error");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_45>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_45>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorError");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x5e0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x160) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_46>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_46>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorErrorHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x5f0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x168) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_47>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_47>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorErrorPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x600,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x170) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_48>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_48>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorErrorDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x610,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x178) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Warning");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_49>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_49>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorWarning");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x5a0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x180) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_50>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_50>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorWarningHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x5b0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x188) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_51>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_51>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorWarningPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x5c0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 400) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_52>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_52>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorWarningDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x5d0,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x198) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Success");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_53>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_53>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorSuccess");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x520,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1a0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_54>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_54>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorSuccessHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x530,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1a8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_55>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_55>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorSuccessPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x540,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1b0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_56>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_56>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorSuccessDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x550,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1b8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Info");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_57>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_57>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorInfo");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x560,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1c0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_58>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_58>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorInfoHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x570,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1c8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_59>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_59>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorInfoPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x580,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1d0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_60>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_60>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorInfoDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x590,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1d8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,param_3,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Foreground");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,4,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Used to draw text over status colors.");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,0xffffffff,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_61>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_61>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorForeground");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x620,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1e0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_62>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_62>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorForegroundHovered");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x630,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1e8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_63>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_63>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorForegroundPressed");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x640,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1f0) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_64>,void,QColor_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_64>,void,QColor_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"");
  QString::QString(local_70,"statusColorForegroundDisabled");
  FUN_14054f710(&local_58,local_70,local_88,uVar1,(longlong)this + 0x650,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x1f8) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  local_48 = (Label *)FUN_140b65d30(0x30);
  QSpacerItem::QSpacerItem((QSpacerItem *)local_48,0,iVar2,0xd,0);
  (**(code **)(*(longlong *)param_2 + 0x68))(param_2,local_48);
  local_48 = (Label *)FUN_140b65d30(0x30);
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  QString::QString((QString *)&local_c8,"Metadata");
  oclero::qlementine::Label::Label(local_48,(QString *)&local_c8,3,uVar1);
  QFormLayout::addRow(param_2,(QWidget *)local_48);
  QString::~QString((QString *)&local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_65>,void,QString_const&___ptr64>
                        */
  local_c8 = &std::
              _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_65>,void,QString_const&___ptr64>
              ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"Name of the Qlementine theme");
  QString::QString(local_70,"name");
  FUN_14054fbe0(&local_58,local_70,local_88,uVar1,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x200) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_66>,void,QString_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_66>,void,QString_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"Author of the Qlementine theme");
  QString::QString(local_70,"author");
  FUN_14054fbe0(&local_58,local_70,local_88,uVar1,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x208) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_67>,void,QString_const&___ptr64>
                        */
  local_c8 = (_Func_impl_no_alloc<_public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64_::_1_::<lambda_65>,void,QString_const&___ptr64>_vftable
              *)&std::
                 _Func_impl_no_alloc<`public:_void___cdecl_oclero::qlementine::ThemeEditor::Impl::setupColorEditors(QFormLayout*___ptr64,int)___ptr64'::`1'::<lambda_67>,void,QString_const&___ptr64>
                 ::vftable;
  uVar1 = *(undefined8 *)((longlong)this + 0x218);
  local_c0 = this;
  local_90 = (QString *)&local_c8;
  QString::QString(local_88,"Version of the Qlementine theme");
  QString::QString(local_70,"version");
  FUN_14054fbe0(&local_58,local_70,local_88,uVar1,(QString *)&local_c8);
  QString::~QString(local_70);
  QString::~QString(local_88);
  if (local_90 != (QString *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x20))(local_90,local_90 != (QString *)&local_c8);
  }
  *(QWidget **)((longlong)this + 0x210) = local_50;
  QFormLayout::addRow(param_2,local_58,local_50);
  return;
}

