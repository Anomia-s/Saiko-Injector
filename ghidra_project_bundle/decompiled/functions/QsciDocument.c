/**
 * Function: QsciDocument
 * Address:  14074d0b0
 * Signature: QsciDocument * __thiscall QsciDocument(QsciDocument * this)
 * Body size: 66 bytes
 */


QsciDocument * __thiscall QsciDocument::QsciDocument(QsciDocument *this)

{
  undefined8 *puVar1;
  
  this->vftablePtr = &vftable;
  puVar1 = (undefined8 *)FUN_140b65d30(0x18);
  *puVar1 = 0;
  puVar1[1] = 0x100000000;
  *(undefined1 *)(puVar1 + 2) = 0;
  (this->QsciDocument_data).offset_0x0 = puVar1;
  return this;
}

