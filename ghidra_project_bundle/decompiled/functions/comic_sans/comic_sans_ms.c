/**
 * Function: comic_sans_ms
 * Address:  140a59d40
 * Signature: QFont * __thiscall comic_sans_ms(void * this, QFont * param_1, uint param_2)
 * Body size: 270 bytes
 */


QFont * __thiscall comic_sans_ms(void *this,QFont *param_1,uint param_2)

{
  QFont *this_00;
  QFont local_50 [16];
  QFont local_40 [24];
  QFont *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1;
  QFont::QFont(param_1);
  if (param_2 < 0xd) {
    if ((0x150U >> (param_2 & 0x1f) & 1) != 0) {
      QsciLexer::vfunction33(this,local_40);
      this_00 = local_28;
      QFont::swap(local_28,local_40);
      QFont::~QFont(local_40);
      QFont::setWeight(this_00,700);
      return local_28;
    }
    if ((0x1002U >> (param_2 & 0x1f) & 1) != 0) {
      QString::QString((QString *)local_40,"Comic Sans MS");
      QFont::QFont(local_50,(QString *)local_40,9,-1,false);
      QFont::swap(local_28,local_50);
      QFont::~QFont(local_50);
      QString::~QString((QString *)local_40);
      return local_28;
    }
  }
  QsciLexer::vfunction33(this,local_40);
  QFont::swap(local_28,local_40);
  QFont::~QFont(local_40);
  return local_28;
}

