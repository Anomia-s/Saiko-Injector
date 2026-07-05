/**
 * Function: QStyleOptionFocusRoundedRect
 * Address:  140075620
 * Signature: QStyleOptionFocusRoundedRect * __thiscall QStyleOptionFocusRoundedRect(QStyleOptionFocusRoundedRect * this)
 * Body size: 69 bytes
 */


QStyleOptionFocusRoundedRect * __thiscall
oclero::qlementine::QStyleOptionFocusRoundedRect::QStyleOptionFocusRoundedRect
          (QStyleOptionFocusRoundedRect *this)

{
  QStyleOptionFocusRect::QStyleOptionFocusRect(&this->QStyleOptionFocusRect);
  this->vftablePtr = &vftable;
  (this->QStyleOptionFocusRoundedRect_data).offset_0x48 = 0;
  (this->QStyleOptionFocusRoundedRect_data).offset_0x50 = 0;
  (this->QStyleOptionFocusRoundedRect_data).offset_0x58 = 0;
  (this->QStyleOptionFocusRoundedRect_data).offset_0x60 = 0;
  (this->QStyleOptionFocusRoundedRect_data).offset_0x68 = 0;
  QColor::QColor((QColor *)&(this->QStyleOptionFocusRoundedRect_data).field_0x70);
  return this;
}

