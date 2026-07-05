/**
 * Function: OptionSetHTML
 * Address:  140960d20
 * Signature: OptionSetHTML * __thiscall OptionSetHTML(OptionSetHTML * this, char param_1, char param_2)
 * Body size: 3246 bytes
 */


OptionSetHTML * __thiscall
_anon_0DA91B2E::OptionSetHTML::OptionSetHTML(OptionSetHTML *this,char param_1,char param_2)

{
  OptionSetHTML *pOVar1;
  longlong lVar2;
  void *pvVar3;
  char *pcVar4;
  void *_Dst;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  size_t _Size;
  OptionSetHTML_vftable OVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  char *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  char *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  char *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  char *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 *local_138;
  longlong *local_130;
  undefined1 *local_128;
  OptionSet<_anon_0DA91B2E::OptionsHTML>_data *local_120;
  OptionSetHTML *local_118;
  ulonglong *local_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  OptionSetHTML *local_78;
  OptionSetHTML *local_70;
  OptionSetHTML *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uVar13 = 0x20;
  if (param_1 != '\0') {
    uVar13 = 0x80;
  }
  puVar10 = &DAT_14151b340;
  if (param_1 != '\0') {
    puVar10 = &DAT_14151a340;
  }
                    /* inlined constructor: LexerHTML::LexerHTML */
  Scintilla::DefaultLexer::DefaultLexer((DefaultLexer *)this,puVar10,uVar13);
  this->vftablePtr = (OptionSetHTML_vftable *)&LexerHTML::vftable;
  *(char *)&(this->OptionSet<_anon_0DA91B2E::OptionsHTML>_data).offset_0x10 = param_1;
  *(char *)((longlong)&(this->OptionSet<_anon_0DA91B2E::OptionsHTML>_data).offset_0x10 + 1) =
       param_2;
  local_138 = &(this->OptionSet<_anon_0DA91B2E::OptionsHTML>_data).field_0x18;
  local_70 = this;
  FUN_140a8b860(local_138,0);
  local_130 = &local_70[0xc].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x10;
  FUN_140a8b860(local_130,0);
  local_128 = &local_70[0x18].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.field_0x8;
  FUN_140a8b860(local_128,0);
  local_120 = &local_70[0x24].OptionSet<_anon_0DA91B2E::OptionsHTML>_data;
  FUN_140a8b860(local_120,0);
  local_118 = local_70 + 0x30;
  FUN_140a8b860(local_118,0);
  local_110 = &local_70[0x3b].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x48;
  FUN_140a8b860(local_110,0);
  *(undefined4 *)&local_70[0x47].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x40 = 1;
  *(undefined2 *)
   ((longlong)&local_70[0x47].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x40 + 4) = 0x100;
  *(undefined8 *)
   ((longlong)&local_70[0x47].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x40 + 6) =
       0x10100000000;
                    /* inlined constructor:
                       Scintilla::OptionSet<_anon_0DA91B2E::OptionsHTML>::OptionSet<_anon_0DA91B2E::OptionsHTML>
                        */
  local_70[0x48].vftablePtr =
       (OptionSetHTML_vftable *)&Scintilla::OptionSet<_anon_0DA91B2E::OptionsHTML>::vftable;
  local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x0 = 0;
  *(undefined8 *)&local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.field_0x8 = 0;
  lVar2 = FUN_140b65d30(0x68);
  local_78 = local_70 + 0x48;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x0 = lVar2;
  local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x10 = 0;
  *(undefined8 *)&local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.field_0x18 = 0;
  local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x20 = 0;
  local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x28 = 0xf;
  local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x30 = 0;
  *(undefined8 *)&local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.field_0x38 = 0;
  local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x40 = 0;
  local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x48 = 0xf;
  local_70[0x48].vftablePtr = &vftable;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = (void *)0x0;
  uStack_100 = 0;
  pvVar3 = (void *)FUN_140b65d30(0x90);
  local_f8 = 0x83;
  uStack_f0 = 0x8f;
  local_108 = pvVar3;
  memcpy(pvVar3,
         "Script in ASP code is initially assumed to be in JavaScript. To change this to VBScript set asp.default.language to 2. Python is 3."
         ,0x83);
  *(undefined1 *)((longlong)pvVar3 + 0x83) = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  pcVar4 = (char *)FUN_140b65d30(0x90);
  local_88 = 0x83;
  uStack_80 = 0x8f;
  local_98 = pcVar4;
  memcpy(pcVar4,pvVar3,0x84);
  local_e8 = 1;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  _Dst = (void *)FUN_140b65d30(0x90);
  uStack_e0 = SUB84(_Dst,0);
  uStack_dc = (undefined4)((ulonglong)_Dst >> 0x20);
  uStack_d0 = 0x83;
  uStack_c8 = 0x8f;
  memcpy(_Dst,pcVar4,0x84);
  thunk_FUN_140b68ba8(pcVar4,0x90);
  local_88 = 0;
  uStack_80 = 0xf;
  local_98 = (char *)((ulonglong)local_98 & 0xffffffffffffff00);
  uStack_b0 = 0;
  local_b8 = (char *)FUN_140b65d30(0x20);
  local_a8 = 0x14;
  uStack_a0 = 0x1f;
  builtin_strncpy(local_b8,"asp.default.language",0x15);
  puVar5 = (undefined8 *)
           FUN_14091ae70(&local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data,&local_b8);
  *puVar5 = CONCAT44(uStack_e4,local_e8);
  uVar7 = puVar5[4];
  if (0xf < uVar7) {
    lVar2 = puVar5[1];
    uVar6 = uVar7 + 1;
    lVar9 = lVar2;
    if (0xfff < uVar6) {
      lVar9 = *(longlong *)(lVar2 + -8);
      if (0x1f < (ulonglong)((lVar2 + -8) - lVar9)) goto LAB_1409619da;
      uVar6 = uVar7 + 0x28;
    }
    thunk_FUN_140b68ba8(lVar9,uVar6);
  }
  pOVar1 = local_70;
  *(undefined4 *)(puVar5 + 3) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_d0._4_4_;
  *(undefined4 *)(puVar5 + 4) = (undefined4)uStack_c8;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_c8._4_4_;
  *(undefined4 *)(puVar5 + 1) = uStack_e0;
  *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_dc;
  *(undefined4 *)(puVar5 + 2) = uStack_d8;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_d4;
  if (0xf < uStack_a0) {
    uVar7 = uStack_a0 + 1;
    pcVar4 = local_b8;
    if (0xfff < uVar7) {
      pcVar4 = *(char **)(local_b8 + -8);
      if ((char *)0x1f < local_b8 + (-8 - (longlong)pcVar4)) {
LAB_1409619da:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = uStack_a0 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar4,uVar7);
  }
  plVar12 = &pOVar1[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x10;
  uVar7 = pOVar1[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x20;
  if (uVar7 != 0) {
    uVar6 = local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x28;
    if (uVar6 == uVar7) {
      FUN_140006210(plVar12,1,local_70,"\n",1);
    }
    else {
      local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x20 = uVar7 + 1;
      plVar11 = plVar12;
      if (0xf < uVar6) {
        plVar11 = (longlong *)local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x10
        ;
      }
      *(undefined2 *)((longlong)plVar11 + uVar7) = 10;
    }
  }
  lVar2 = local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x20;
  uVar7 = local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x28;
  if (uVar7 - lVar2 < 0x14) {
    FUN_140006210(plVar12,0x14,local_70,"asp.default.language",0x14);
  }
  else {
    local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x20 = lVar2 + 0x14;
    if (0xf < uVar7) {
      plVar12 = (longlong *)local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x10;
    }
    builtin_strncpy((char *)((longlong)plVar12 + lVar2),"asp.default.lang",0x10);
    *(undefined4 *)((longlong)plVar12 + lVar2 + 0x10) = 0x65676175;
    *(undefined1 *)((longlong)plVar12 + lVar2 + 0x14) = 0;
  }
  thunk_FUN_140b68ba8(pvVar3,0x90);
  local_f8 = 0;
  uStack_f0 = 0xf;
  local_108 = (void *)((ulonglong)local_108 & 0xffffffffffffff00);
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  pvVar3 = (void *)FUN_140b65d30(0x90);
  local_e8 = SUB84(pvVar3,0);
  uStack_e4 = (undefined4)((ulonglong)pvVar3 >> 0x20);
  uStack_d8 = 0x8c;
  uStack_d4 = 0;
  uStack_d0 = 0x8f;
  memcpy(pvVar3,
         "For XML and HTML, setting this property to 1 will make tags match in a case sensitive way which is the expected behaviour for XML and XHTML."
         ,0x8c);
  *(undefined1 *)((longlong)pvVar3 + 0x8c) = 0;
  FUN_14091a380(local_78,"html.tags.case.sensitive",4,&local_e8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (char *)0x0;
  uStack_90 = 0;
  local_98 = (char *)FUN_140b65d30(0x30);
  local_88 = 0x23;
  uStack_80 = 0x2f;
  builtin_strncpy(local_98,"Set to 0 to disable scripts in XML.",0x24);
  FUN_14091a380(local_78,"lexer.xml.allow.scripts",5,&local_98);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = (char *)0x0;
  uStack_b0 = 0;
  local_b8 = (char *)FUN_140b65d30(0x30);
  local_a8 = 0x2e;
  uStack_a0 = 0x2f;
  builtin_strncpy(local_b8,"Set to 1 to enable the mako template language.",0x2f);
  FUN_14091a380(local_78,"lexer.html.mako",6,&local_b8);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = (char *)0x0;
  uStack_1d0 = 0;
  local_1d8 = (char *)FUN_140b65d30(0x40);
  local_1c8 = 0x30;
  uStack_1c0 = 0x3f;
  builtin_strncpy(local_1d8,"Set to 1 to enable the django template language.",0x31);
  FUN_14091a380(local_78,"lexer.html.django",7,&local_1d8);
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0xf;
  FUN_14091a380(local_78,"fold",8,&local_218);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = (char *)0x0;
  uStack_1b0 = 0;
  local_1b8 = (char *)FUN_140b65d30(0x80);
  local_1a8 = 0x7a;
  uStack_1a0 = 0x7f;
  builtin_strncpy(local_1b8,
                  "Folding is turned on or off for HTML and XML files with this option. The fold option must also be on for folding to occur."
                  ,0x7b);
  FUN_14091a380(local_78,"fold.html",9,&local_1b8);
  local_188 = 0;
  uStack_180 = 0;
  local_198 = (char *)0x0;
  uStack_190 = 0;
  local_198 = (char *)FUN_140b65d30(0x70);
  local_188 = 99;
  uStack_180 = 0x6f;
  builtin_strncpy(local_198,
                  "Folding is turned on or off for scripts embedded in HTML files with this option. The default is on."
                  ,100);
  FUN_14091a380(local_78,"fold.html.preprocessor",10,&local_198);
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0xf;
  FUN_14091a380(local_78,"fold.compact",0xb,&local_1f8);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = (char *)0x0;
  uStack_170 = 0;
  local_178 = (char *)FUN_140b65d30(0x50);
  local_168 = 0x4b;
  uStack_160 = 0x4f;
  builtin_strncpy(local_178,
                  "Allow folding for comments in scripts embedded in HTML. The default is off.",0x4c
                 );
  FUN_14091a380(local_78,"fold.hypertext.comment",0xc,&local_178);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = (char *)0x0;
  uStack_150 = 0;
  local_158 = (char *)FUN_140b65d30(0x50);
  local_148 = 0x4b;
  uStack_140 = 0x4f;
  builtin_strncpy(local_158,
                  "Allow folding for heredocs in scripts embedded in HTML. The default is off.",0x4c
                 );
  FUN_14091a380(local_78,"fold.hypertext.heredoc",0xd,&local_158);
  ppuVar14 = &PTR_s_HTML_elements_and_attributes_1412a3280;
  if (param_2 != '\0') {
    ppuVar14 = &PTR_DAT_1412a32c0;
  }
  pcVar4 = *ppuVar14;
  if (pcVar4 != (char *)0x0) {
    plVar12 = &local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x30;
    lVar2 = 0;
    do {
      uVar7 = local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x40;
      if (uVar7 != 0) {
        uVar6 = local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x48;
        if (uVar6 == uVar7) {
          FUN_140006210(plVar12,1,local_70,"\n",1);
        }
        else {
          local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x40 = uVar7 + 1;
          plVar11 = plVar12;
          if (0xf < uVar6) {
            plVar11 = (longlong *)
                      local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x30;
          }
          *(undefined2 *)((longlong)plVar11 + uVar7) = 10;
        }
      }
      _Size = strlen(pcVar4);
      lVar9 = local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x40;
      uVar7 = local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x48;
      uVar6 = uVar7 - lVar9;
      if (uVar6 < _Size) {
        FUN_140006210(plVar12,_Size,uVar6,pcVar4,_Size);
      }
      else {
        local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x40 = _Size + lVar9;
        plVar11 = plVar12;
        if (0xf < uVar7) {
          plVar11 = (longlong *)
                    local_70[0x48].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x30;
        }
        memmove((void *)(lVar9 + (longlong)plVar11),pcVar4,_Size);
        *(undefined1 *)((longlong)plVar11 + _Size + lVar9) = 0;
      }
      pcVar4 = ppuVar14[lVar2 + 1];
      lVar2 = lVar2 + 1;
    } while (pcVar4 != (char *)0x0);
  }
  local_70[0x49].vftablePtr = (OptionSetHTML_vftable *)0x0;
  local_70[0x49].OptionSet<_anon_0DA91B2E::OptionsHTML>_data.offset_0x0 = 0;
  OVar8.vfunction1 = (vfunction1 *)FUN_140b65d30(0x40);
  local_68 = local_70 + 0x49;
  *(vfunction1 **)OVar8.vfunction1 = OVar8.vfunction1;
  *(vfunction1 **)(OVar8.vfunction1 + 8) = OVar8.vfunction1;
  *(vfunction1 **)(OVar8.vfunction1 + 0x10) = OVar8.vfunction1;
  *(undefined2 *)(OVar8.vfunction1 + 0x18) = 0x101;
  local_68->vftablePtr = (OptionSetHTML_vftable *)OVar8.vfunction1;
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_DAT_14151b740);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_base_14134bddc_0x2f_14151b748);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_basefont_14151b750);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_DAT_14151b758);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_DAT_14151b760);
  FUN_1409623b0(local_68,OVar8.vfunction1,&DAT_14151b768);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_embed_14151b770);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_frame_14134f7bb_0x11_14151b778);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_DAT_14151b780);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_DAT_14151b788);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_input_14132aa7c_0x1c_14151b790);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_isindex_14151b798);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_keygen_14151b7a0);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_link_141344cab_4_14151b7a8);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_meta_14135f0fc_6_14151b7b0);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_param_14134259e_9_14151b7b8);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_s_source_141353316_0x15_14151b7c0);
  FUN_1409623b0(local_68,OVar8.vfunction1,&DAT_14151b7c8);
  FUN_1409623b0(local_68,OVar8.vfunction1,&PTR_DAT_14151b7d0);
  return local_70;
}

