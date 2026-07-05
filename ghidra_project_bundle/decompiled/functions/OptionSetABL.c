/**
 * Function: OptionSetABL
 * Address:  1409cdcc0
 * Signature: OptionSetABL * __thiscall OptionSetABL(OptionSetABL * this)
 * Body size: 2284 bytes
 */


OptionSetABL * __thiscall _anon_264A1A18::OptionSetABL::OptionSetABL(OptionSetABL *this)

{
  char *pcVar1;
  OptionSetABL_vftable *pOVar2;
  OptionSetABL_vftable *pOVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_60;
  longlong *local_58;
  undefined1 *local_50;
  OptionSet<_anon_264A1A18::OptionsABL>_data *local_48;
  OptionSet<_anon_264A1A18::OptionsABL>_data *local_40;
  OptionSetABL *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
                    /* inlined constructor: LexerABL::LexerABL */
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,0,0);
  this->vftablePtr = (OptionSetABL_vftable *)&LexerABL::vftable;
  local_38 = this;
  FUN_1408d58e0(&(this->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x10,7,&DAT_14135fdac,
                0x80,1);
  *(undefined4 *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x20 = 0x80;
  *(undefined1 *)((longlong)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x20 + 4)
       = 0;
  uVar4 = thunk_FUN_140b65d30(0x80);
  (local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x28 = uVar4;
  lVar5 = 0;
  do {
    *(undefined1 *)((local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x28 + lVar5) = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 < *(int *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x20);
  *(undefined1 *)((local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x28 + 0x21) = 1;
  *(undefined4 *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x30 = 0x80;
  *(undefined1 *)((longlong)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x30 + 4)
       = 0;
  uVar6 = thunk_FUN_140b65d30(0x80);
  *(undefined8 *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).field_0x38 = uVar6;
  lVar5 = 0;
  do {
    *(undefined1 *)
     (*(longlong *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).field_0x38 + lVar5) = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 < (int)(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x30);
  *(undefined1 *)
   (*(longlong *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).field_0x38 + 0x2b) = 1;
  *(undefined1 *)
   (*(longlong *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).field_0x38 + 0x2d) = 1;
  *(undefined1 *)
   (*(longlong *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).field_0x38 + 0x2f) = 1;
  *(undefined1 *)
   (*(longlong *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).field_0x38 + 0x2a) = 1;
  *(undefined1 *)
   (*(longlong *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).field_0x38 + 0x25) = 1;
  *(undefined4 *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x40 = 0x80;
  *(undefined1 *)((longlong)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x40 + 4)
       = 0;
  uVar4 = thunk_FUN_140b65d30(0x80);
  (local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x48 = uVar4;
  lVar5 = 0;
  do {
    *(undefined1 *)((local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x48 + lVar5) = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 < *(int *)&(local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x40);
  *(undefined1 *)((local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x48 + 0x3d) = 1;
  *(undefined1 *)((local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x48 + 0x21) = 1;
  *(undefined1 *)((local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x48 + 0x3c) = 1;
  *(undefined1 *)((local_38->OptionSet<_anon_264A1A18::OptionsABL>_data).offset_0x48 + 0x3e) = 1;
  *(undefined4 *)&local_38[1].vftablePtr = 0x80;
  *(undefined1 *)((longlong)&local_38[1].vftablePtr + 4) = 0;
  uVar6 = thunk_FUN_140b65d30(0x80);
  local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x0 = uVar6;
  lVar5 = 0;
  do {
    *(undefined1 *)(local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x0 + lVar5) = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 < *(int *)&local_38[1].vftablePtr);
  *(undefined1 *)(local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x0 + 0x7c) = 1;
  *(undefined1 *)(local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x0 + 0x26) = 1;
  *(undefined4 *)&local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x8 = 0x80;
  local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0xc = 0;
  lVar5 = thunk_FUN_140b65d30(0x80);
  local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x10 = lVar5;
  lVar5 = 0;
  do {
    *(undefined1 *)(local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x10 + lVar5) = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 < *(int *)&local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x8);
  local_60 = &local_38[1].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x18;
  FUN_140a8b860(local_60,0);
  local_58 = &local_38[0xd].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x10;
  FUN_140a8b860(local_58,0);
  local_50 = &local_38[0x19].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x8;
  FUN_140a8b860(local_50,0);
  local_48 = &local_38[0x25].OptionSet<_anon_264A1A18::OptionsABL>_data;
  FUN_140a8b860(local_48,0);
  *(undefined4 *)&local_38[0x31].vftablePtr = 0x1010100;
  *(undefined1 *)((longlong)&local_38[0x31].vftablePtr + 4) = 0;
                    /* inlined constructor:
                       Scintilla::OptionSet<_anon_264A1A18::OptionsABL>::OptionSet<_anon_264A1A18::OptionsABL>
                        */
  local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x0 =
       &Scintilla::OptionSet<_anon_264A1A18::OptionsABL>::vftable;
  *(undefined8 *)&local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x8 = 0;
  local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x10 = 0;
  lVar5 = FUN_140b65d30(0x68);
  local_40 = &local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data;
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  *(longlong *)(lVar5 + 0x10) = lVar5;
  *(undefined2 *)(lVar5 + 0x18) = 0x101;
  *(longlong *)&local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x8 = lVar5;
  *(undefined8 *)&local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x18 = 0;
  local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x20 = 0;
  local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x28 = 0;
  local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x30 = 0xf;
  *(undefined8 *)&local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38 = 0;
  local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x40 = 0;
  local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 = 0;
  local_38[0x32].vftablePtr = (OptionSetABL_vftable *)0xf;
  local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x0 = &vftable;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0xf;
  FUN_1408e8d40(local_40,"fold",0,&local_108);
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (char *)0x0;
  uStack_c0 = 0;
  local_c8 = (char *)FUN_140b65d30(0x40);
  local_b8 = 0x37;
  uStack_b0 = 0x3f;
  builtin_strncpy(local_c8,"Set this property to 0 to disable syntax based folding.",0x38);
  FUN_1408e8d40(local_40,"fold.abl.syntax.based",1,&local_c8);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (char *)0x0;
  uStack_a0 = 0;
  local_a8 = (char *)FUN_140b65d30(0x70);
  local_98 = 99;
  uStack_90 = 0x6f;
  builtin_strncpy(local_a8,
                  "This option enables folding multi-line comments and explicit fold points when using the ABL lexer. "
                  ,100);
  FUN_1408e8d40(local_40,"fold.comment",2,&local_a8);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (char *)0x0;
  uStack_80 = 0;
  local_88 = (char *)FUN_140b65d30(0x60);
  local_78 = 0x52;
  uStack_70 = 0x5f;
  builtin_strncpy(local_88,
                  "Set this property to 0 to disable folding multi-line comments when fold.comment=1."
                  ,0x53);
  FUN_1408e8d40(local_40,"fold.abl.comment.multiline",3,&local_88);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xf;
  FUN_1408e8d40(local_40,"fold.compact",4,&local_e8);
  puVar8 = &local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38;
  pOVar2 = (OptionSetABL_vftable *)
           local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  if (pOVar2 != (OptionSetABL_vftable *)0x0) {
    pOVar3 = local_38[0x32].vftablePtr;
    if (pOVar3 == pOVar2) {
      FUN_140006210(puVar8,1,local_38,"\n",1);
    }
    else {
      local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 =
           (ulonglong)((longlong)&pOVar2->vfunction1 + 1);
      puVar7 = puVar8;
      if ((OptionSetABL_vftable *)0xf < pOVar3) {
        puVar7 = *(undefined1 **)
                  &local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38;
      }
      *(undefined2 *)(puVar7 + (longlong)pOVar2) = 10;
    }
  }
  uVar4 = local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  pOVar2 = local_38[0x32].vftablePtr;
  if ((longlong)pOVar2 - uVar4 < 0x20) {
    FUN_140006210(puVar8,0x20,local_38,"Primary keywords and identifiers",0x20);
    pOVar2 = (OptionSetABL_vftable *)
             local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  }
  else {
    local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 = uVar4 + 0x20;
    puVar7 = puVar8;
    if ((OptionSetABL_vftable *)0xf < pOVar2) {
      puVar7 = *(undefined1 **)&local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38
      ;
    }
    builtin_strncpy(puVar7 + uVar4,"Primary keywords and identifiers",0x21);
    pOVar2 = (OptionSetABL_vftable *)
             local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  }
  if (pOVar2 != (OptionSetABL_vftable *)0x0) {
    pOVar3 = local_38[0x32].vftablePtr;
    if (pOVar3 == pOVar2) {
      FUN_140006210(puVar8,1,local_38,"\n",1);
    }
    else {
      local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 =
           (ulonglong)((longlong)&pOVar2->vfunction1 + 1);
      puVar7 = puVar8;
      if ((OptionSetABL_vftable *)0xf < pOVar3) {
        puVar7 = *(undefined1 **)
                  &local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38;
      }
      *(undefined2 *)(puVar7 + (longlong)pOVar2) = 10;
    }
  }
  uVar4 = local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  pOVar2 = local_38[0x32].vftablePtr;
  if ((longlong)pOVar2 - uVar4 < 0x45) {
    FUN_140006210(puVar8,0x45,local_38,
                  "Keywords that opens a block, only when used to begin a syntactic line",0x45);
    pOVar2 = (OptionSetABL_vftable *)
             local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  }
  else {
    local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 = uVar4 + 0x45;
    puVar7 = puVar8;
    if ((OptionSetABL_vftable *)0xf < pOVar2) {
      puVar7 = *(undefined1 **)&local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38
      ;
    }
    pcVar1 = puVar7 + uVar4 + 0x30;
    pcVar1[0] = 'e';
    pcVar1[1] = 'g';
    pcVar1[2] = 'i';
    pcVar1[3] = 'n';
    pcVar1[4] = ' ';
    pcVar1[5] = 'a';
    pcVar1[6] = ' ';
    pcVar1[7] = 's';
    pcVar1[8] = 'y';
    pcVar1[9] = 'n';
    pcVar1[10] = 't';
    pcVar1[0xb] = 'a';
    pcVar1[0xc] = 'c';
    pcVar1[0xd] = 't';
    pcVar1[0xe] = 'i';
    pcVar1[0xf] = 'c';
    pcVar1 = puVar7 + uVar4 + 0x20;
    pcVar1[0] = 'y';
    pcVar1[1] = ' ';
    pcVar1[2] = 'w';
    pcVar1[3] = 'h';
    pcVar1[4] = 'e';
    pcVar1[5] = 'n';
    pcVar1[6] = ' ';
    pcVar1[7] = 'u';
    pcVar1[8] = 's';
    pcVar1[9] = 'e';
    pcVar1[10] = 'd';
    pcVar1[0xb] = ' ';
    pcVar1[0xc] = 't';
    pcVar1[0xd] = 'o';
    pcVar1[0xe] = ' ';
    pcVar1[0xf] = 'b';
    pcVar1 = puVar7 + uVar4 + 0x10;
    pcVar1[0] = 'e';
    pcVar1[1] = 'n';
    pcVar1[2] = 's';
    pcVar1[3] = ' ';
    pcVar1[4] = 'a';
    pcVar1[5] = ' ';
    pcVar1[6] = 'b';
    pcVar1[7] = 'l';
    pcVar1[8] = 'o';
    pcVar1[9] = 'c';
    pcVar1[10] = 'k';
    pcVar1[0xb] = ',';
    pcVar1[0xc] = ' ';
    pcVar1[0xd] = 'o';
    pcVar1[0xe] = 'n';
    pcVar1[0xf] = 'l';
    pcVar1 = puVar7 + uVar4;
    pcVar1[0] = 'K';
    pcVar1[1] = 'e';
    pcVar1[2] = 'y';
    pcVar1[3] = 'w';
    pcVar1[4] = 'o';
    pcVar1[5] = 'r';
    pcVar1[6] = 'd';
    pcVar1[7] = 's';
    pcVar1[8] = ' ';
    pcVar1[9] = 't';
    pcVar1[10] = 'h';
    pcVar1[0xb] = 'a';
    pcVar1[0xc] = 't';
    pcVar1[0xd] = ' ';
    pcVar1[0xe] = 'o';
    pcVar1[0xf] = 'p';
    *(undefined8 *)(puVar7 + uVar4 + 0x3d) = 0x656e696c20636974;
    puVar7[uVar4 + 0x45] = 0;
    pOVar2 = (OptionSetABL_vftable *)
             local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  }
  if (pOVar2 != (OptionSetABL_vftable *)0x0) {
    pOVar3 = local_38[0x32].vftablePtr;
    if (pOVar3 == pOVar2) {
      FUN_140006210(puVar8,1,local_38,"\n",1);
    }
    else {
      local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 =
           (ulonglong)((longlong)&pOVar2->vfunction1 + 1);
      puVar7 = puVar8;
      if ((OptionSetABL_vftable *)0xf < pOVar3) {
        puVar7 = *(undefined1 **)
                  &local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38;
      }
      *(undefined2 *)(puVar7 + (longlong)pOVar2) = 10;
    }
  }
  uVar4 = local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  pOVar2 = local_38[0x32].vftablePtr;
  if ((longlong)pOVar2 - uVar4 < 0x38) {
    FUN_140006210(puVar8,0x38,local_38,"Keywords that opens a block anywhere in a syntactic line",
                  0x38);
    pOVar2 = (OptionSetABL_vftable *)
             local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  }
  else {
    local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 = uVar4 + 0x38;
    puVar7 = puVar8;
    if ((OptionSetABL_vftable *)0xf < pOVar2) {
      puVar7 = *(undefined1 **)&local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38
      ;
    }
    pcVar1 = puVar7 + uVar4 + 0x20;
    pcVar1[0] = 'h';
    pcVar1[1] = 'e';
    pcVar1[2] = 'r';
    pcVar1[3] = 'e';
    pcVar1[4] = ' ';
    pcVar1[5] = 'i';
    pcVar1[6] = 'n';
    pcVar1[7] = ' ';
    pcVar1[8] = 'a';
    pcVar1[9] = ' ';
    pcVar1[10] = 's';
    pcVar1[0xb] = 'y';
    pcVar1[0xc] = 'n';
    pcVar1[0xd] = 't';
    pcVar1[0xe] = 'a';
    pcVar1[0xf] = 'c';
    pcVar1 = puVar7 + uVar4 + 0x10;
    pcVar1[0] = 'e';
    pcVar1[1] = 'n';
    pcVar1[2] = 's';
    pcVar1[3] = ' ';
    pcVar1[4] = 'a';
    pcVar1[5] = ' ';
    pcVar1[6] = 'b';
    pcVar1[7] = 'l';
    pcVar1[8] = 'o';
    pcVar1[9] = 'c';
    pcVar1[10] = 'k';
    pcVar1[0xb] = ' ';
    pcVar1[0xc] = 'a';
    pcVar1[0xd] = 'n';
    pcVar1[0xe] = 'y';
    pcVar1[0xf] = 'w';
    pcVar1 = puVar7 + uVar4;
    pcVar1[0] = 'K';
    pcVar1[1] = 'e';
    pcVar1[2] = 'y';
    pcVar1[3] = 'w';
    pcVar1[4] = 'o';
    pcVar1[5] = 'r';
    pcVar1[6] = 'd';
    pcVar1[7] = 's';
    pcVar1[8] = ' ';
    pcVar1[9] = 't';
    pcVar1[10] = 'h';
    pcVar1[0xb] = 'a';
    pcVar1[0xc] = 't';
    pcVar1[0xd] = ' ';
    pcVar1[0xe] = 'o';
    pcVar1[0xf] = 'p';
    *(undefined8 *)(puVar7 + uVar4 + 0x30) = 0x656e696c20636974;
    puVar7[uVar4 + 0x38] = 0;
    pOVar2 = (OptionSetABL_vftable *)
             local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  }
  if (pOVar2 != (OptionSetABL_vftable *)0x0) {
    pOVar3 = local_38[0x32].vftablePtr;
    if (pOVar3 == pOVar2) {
      FUN_140006210(puVar8,1,local_38,"\n",1);
    }
    else {
      local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 =
           (ulonglong)((longlong)&pOVar2->vfunction1 + 1);
      puVar7 = puVar8;
      if ((OptionSetABL_vftable *)0xf < pOVar3) {
        puVar7 = *(undefined1 **)
                  &local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38;
      }
      *(undefined2 *)(puVar7 + (longlong)pOVar2) = 10;
    }
  }
  uVar4 = local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48;
  pOVar2 = local_38[0x32].vftablePtr;
  if ((longlong)pOVar2 - uVar4 < 0xb) {
    FUN_140006210(puVar8,0xb,local_38,"Task Marker",0xb);
  }
  else {
    local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.offset_0x48 = uVar4 + 0xb;
    if ((OptionSetABL_vftable *)0xf < pOVar2) {
      puVar8 = *(undefined1 **)&local_38[0x31].OptionSet<_anon_264A1A18::OptionsABL>_data.field_0x38
      ;
    }
    *(undefined8 *)(puVar8 + uVar4) = 0x72614d206b736154;
    *(undefined4 *)(puVar8 + uVar4 + 7) = 0x72656b72;
    puVar8[uVar4 + 0xb] = 0;
  }
  return local_38;
}

