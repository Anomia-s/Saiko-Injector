/**
 * Function: LexerSimple
 * Address:  140a8afa0
 * Signature: LexerSimple * __thiscall LexerSimple(LexerSimple * this, SetComponentCmd<Rotation> * param_1)
 * Body size: 411 bytes
 */


LexerSimple * __thiscall
Scintilla::LexerSimple::LexerSimple(LexerSimple *this,SetComponentCmd<Rotation> *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  SetComponentCmd<Rotation>_vftable *pSVar5;
  SetComponentCmd<Position>_vftable *pSVar6;
  char *_Str;
  size_t _Size;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  
  pSVar5 = ldv::editor::SetComponentCmd<Rotation>::vfunction4(param_1);
  pSVar6 = ldv::editor::SetComponentCmd<Position>::vfunction4((SetComponentCmd<Position> *)param_1);
  LexerBase::LexerBase((LexerBase *)this,pSVar6,pSVar5);
  this->vftablePtr = &vftable;
  (this->LexerSimple_data).offset_0x0 = param_1;
  plVar1 = &(this->LexerSimple_data).offset_0x8;
  (this->LexerSimple_data).offset_0x8 = 0;
  (this->LexerSimple_data).offset_0x10 = 0;
  (this->LexerSimple_data).offset_0x18 = 0;
  (this->LexerSimple_data).offset_0x20 = 0xf;
  iVar8 = 0;
  while( true ) {
    iVar4 = FUN_1408c4c40(param_1);
    if (iVar4 <= iVar8) break;
    uVar2 = (this->LexerSimple_data).offset_0x18;
    if (uVar2 != 0) {
      uVar3 = (this->LexerSimple_data).offset_0x20;
      if (uVar3 == uVar2) {
        FUN_140006210(plVar1,1,this,"\n",1);
      }
      else {
        (this->LexerSimple_data).offset_0x18 = uVar2 + 1;
        plVar7 = plVar1;
        if (0xf < uVar3) {
          plVar7 = (longlong *)(this->LexerSimple_data).offset_0x8;
        }
        *(undefined2 *)((longlong)plVar7 + uVar2) = 10;
      }
    }
    _Str = (char *)FUN_1408c4c60((this->LexerSimple_data).offset_0x0,iVar8);
    _Size = strlen(_Str);
    uVar2 = (this->LexerSimple_data).offset_0x18;
    uVar3 = (this->LexerSimple_data).offset_0x20;
    uVar9 = uVar3 - uVar2;
    if (uVar9 < _Size) {
      FUN_140006210(plVar1,_Size,uVar9,_Str,_Size);
    }
    else {
      (this->LexerSimple_data).offset_0x18 = _Size + uVar2;
      plVar7 = plVar1;
      if (0xf < uVar3) {
        plVar7 = (longlong *)(this->LexerSimple_data).offset_0x8;
      }
      memmove((void *)(uVar2 + (longlong)plVar7),_Str,_Size);
      *(undefined1 *)((longlong)plVar7 + _Size + uVar2) = 0;
    }
    iVar8 = iVar8 + 1;
    param_1 = (SetComponentCmd<Rotation> *)(this->LexerSimple_data).offset_0x0;
  }
  return this;
}

