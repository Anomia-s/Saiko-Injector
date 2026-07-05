/**
 * Function: CDockSplitter
 * Address:  1405997b0
 * Signature: CDockSplitter * __thiscall CDockSplitter(CDockSplitter * this, Orientation param_1, QWidget * param_2)
 * Body size: 91 bytes
 */


CDockSplitter * __thiscall
ads::CDockSplitter::CDockSplitter(CDockSplitter *this,Orientation param_1,QWidget *param_2)

{
  undefined8 *puVar1;
  
  QSplitter::QSplitter((QSplitter *)this,param_1,param_2);
  this->vftablePtr = &vftable;
  this->vftablePtr = &vftable;
  puVar1 = (undefined8 *)FUN_140b65d30(0x10);
  *puVar1 = this;
  *(undefined4 *)(puVar1 + 1) = 0;
  (this->CDockSplitter_data).offset_0x10 = puVar1;
  return this;
}

