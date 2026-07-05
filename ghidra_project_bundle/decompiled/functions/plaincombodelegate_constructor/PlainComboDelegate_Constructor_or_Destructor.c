/**
 * Function: PlainComboDelegate_Constructor_or_Destructor
 * Address:  140266710
 * Signature: void __fastcall PlainComboDelegate_Constructor_or_Destructor(QComboBox * param_1)
 * Body size: 221 bytes
 */


void ldv::editor::PlainComboDelegate::PlainComboDelegate_Constructor_or_Destructor
               (QComboBox *param_1)

{
  QWidget *this;
  QAbstractItemView *this_00;
  QCursor local_38 [8];
  QAbstractItemDelegate *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_1 != (QComboBox *)0x0) {
    QComboBox::setEditable(param_1,true);
    QComboBox::setInsertPolicy(param_1,0);
    this = (QWidget *)QComboBox::lineEdit(param_1);
    if (this != (QWidget *)0x0) {
      QLineEdit::setReadOnly((QLineEdit *)this,true);
      QLineEdit::setFrame((QLineEdit *)this,false);
      QCursor::QCursor(local_38,0);
      QWidget::setCursor(this,local_38);
      QCursor::~QCursor(local_38);
      QWidget::setAttribute(this,0x33,true);
    }
    this_00 = QComboBox::view(param_1);
    if (this_00 != (QAbstractItemView *)0x0) {
      local_30 = (QAbstractItemDelegate *)FUN_140b65d30(0x10);
      QStyledItemDelegate::QStyledItemDelegate((QStyledItemDelegate *)local_30,(QObject *)this_00);
      *(PlainComboDelegate_vftable **)local_30 = &vftable;
      QAbstractItemView::setItemDelegate((QAbstractItemView *)this_00,local_30);
    }
  }
  return;
}

