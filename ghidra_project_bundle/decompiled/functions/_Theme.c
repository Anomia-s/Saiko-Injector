/**
 * Function: ~Theme
 * Address:  1400821b0
 * Signature: void __thiscall ~Theme(Theme * this)
 * Body size: 163 bytes
 */


void __thiscall oclero::qlementine::Theme::~Theme(Theme *this)

{
  this->vftablePtr = &vftable;
  QPalette::~QPalette((QPalette *)&(this->Theme_data).field_0x678);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x668);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x658);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x648);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x638);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x628);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x618);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x608);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x5f8);
  QFont::~QFont((QFont *)&(this->Theme_data).field_0x5e8);
  QString::~QString((QString *)&(this->Theme_data).field_0x30);
  QString::~QString((QString *)&(this->Theme_data).field_0x18);
                    /* WARNING: Could not recover jumptable at 0x000140082250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QString::~QString((QString *)&this->Theme_data);
  return;
}

