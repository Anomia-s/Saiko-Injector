/**
 * Function: vfunction62
 * Address:  1407f8550
 * Signature: SetComponentCmd<Position>_vftable * __thiscall vfunction62(ScintillaBase * this, int param_1, SetComponentCmd<Position>_vftable * param_2, SetComponentCmd<Position>_vftable * param_3)
 * Body size: 2475 bytes
 */


SetComponentCmd<Position>_vftable * __thiscall
Scintilla::ScintillaBase::vfunction62
          (ScintillaBase *this,int param_1,SetComponentCmd<Position>_vftable *param_2,
          SetComponentCmd<Position>_vftable *param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 extraout_RAX;
  longlong extraout_RAX_00;
  longlong extraout_RAX_01;
  undefined8 extraout_RAX_02;
  longlong *extraout_RAX_03;
  longlong extraout_RAX_04;
  longlong extraout_RAX_05;
  longlong extraout_RAX_06;
  longlong extraout_RAX_07;
  longlong extraout_RAX_08;
  longlong extraout_RAX_09;
  undefined8 extraout_RAX_10;
  longlong extraout_RAX_11;
  longlong extraout_RAX_12;
  longlong extraout_RAX_13;
  longlong extraout_RAX_14;
  longlong extraout_RAX_15;
  longlong extraout_RAX_16;
  undefined8 extraout_RAX_17;
  longlong extraout_RAX_18;
  longlong extraout_RAX_19;
  undefined8 extraout_RAX_20;
  undefined8 extraout_RAX_21;
  longlong extraout_RAX_22;
  longlong extraout_RAX_23;
  longlong extraout_RAX_24;
  longlong extraout_RAX_25;
  longlong extraout_RAX_26;
  undefined1 *puVar5;
  longlong extraout_RAX_27;
  longlong extraout_RAX_28;
  SetComponentCmd<Position>_vftable *pSVar6;
  longlong *plVar7;
  undefined4 in_register_00000014;
  undefined1 auStack_58 [32];
  SetComponentCmd<Position>_vftable *local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  iVar4 = (int)param_2;
  switch(param_1) {
  case 0x834:
    *(undefined4 *)&(this->ScintillaBase_data).offset_0x188 = 0;
    goto LAB_1407f87a1;
  case 0x835:
    FUN_140a4bd10(&(this->ScintillaBase_data).field_0x10);
    break;
  case 0x836:
    bVar3 = FUN_140249ad0(&(this->ScintillaBase_data).field_0x10);
    pSVar6 = (SetComponentCmd<Position>_vftable *)(ulonglong)bVar3;
    goto LAB_1407f8ed2;
  case 0x837:
    pSVar6 = *(SetComponentCmd<Position>_vftable **)&(this->ScintillaBase_data).field_0x88;
    goto LAB_1407f8ed2;
  case 0x838:
    FUN_1407f6ac0(this,0,5);
    break;
  case 0x839:
    FUN_140a4bd40(&(this->ScintillaBase_data).field_0x10,param_3);
    break;
  case 0x83a:
    FUN_140a4bee0(&(this->ScintillaBase_data).field_0x10,(ulonglong)param_2 & 0xffffffff);
    break;
  case 0x83b:
    cVar2 = FUN_14054c740(&(this->ScintillaBase_data).field_0x10);
    pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)cVar2;
    goto LAB_1407f8ed2;
  case 0x83c:
    FUN_140a4c910(&(this->ScintillaBase_data).field_0x10,param_3);
    break;
  case 0x83d:
  case 0x848:
  case 0x849:
  case 0x84a:
  case 0x84b:
  case 0x84c:
  case 0x84d:
  case 0x84e:
  case 0x84f:
  case 0x850:
  case 0x851:
  case 0x852:
  case 0x853:
  case 0x854:
  case 0x855:
  case 0x856:
  case 0x857:
  case 0x858:
  case 0x859:
  case 0x85a:
  case 0x85b:
  case 0x85c:
  case 0x85d:
  case 0x85e:
  case 0x85f:
  case 0x860:
  case 0x861:
  case 0x862:
  case 0x863:
  case 0x864:
  case 0x865:
  case 0x866:
  case 0x867:
  case 0x868:
  case 0x869:
  case 0x86a:
  case 0x86b:
  case 0x86c:
  case 0x86d:
  case 0x86e:
  case 0x86f:
  case 0x870:
  case 0x871:
  case 0x872:
  case 0x873:
  case 0x874:
  case 0x875:
  case 0x876:
  case 0x877:
  case 0x878:
  case 0x879:
  case 0x87a:
  case 0x87b:
  case 0x87c:
  case 0x87d:
  case 0x87e:
  case 0x87f:
  case 0x880:
  case 0x881:
  case 0x882:
  case 0x883:
  case 0x884:
  case 0x885:
  case 0x886:
  case 0x887:
  case 0x888:
  case 0x889:
  case 0x88a:
  case 0x88b:
  case 0x88c:
  case 0x88d:
  case 0x88e:
  case 0x88f:
  case 0x890:
  case 0x891:
  case 0x892:
  case 0x893:
  case 0x894:
  case 0x895:
  case 0x896:
  case 0x897:
  case 0x8a7:
  case 0x8a8:
  case 0x8a9:
  case 0x8aa:
  case 0x8ab:
  case 0x8ac:
  case 0x8ad:
  case 0x8ae:
  case 0x8af:
  case 0x8b0:
  case 0x8b1:
  case 0x8b2:
  case 0x8b3:
  case 0x8b4:
  case 0x8b5:
  case 0x8b6:
  case 0x8b7:
  case 0x8b8:
  case 0x8b9:
  case 0x8ba:
  case 0x8bb:
  case 0x8bc:
  case 0x8bd:
  case 0x8be:
  case 0x8bf:
  case 0x8c0:
  case 0x8c1:
  case 0x8c2:
  case 0x8c3:
  case 0x8c4:
  case 0x8c5:
  case 0x8c6:
  case 0x8c7:
  case 0x8c8:
  case 0x8c9:
  case 0x8ca:
  case 0x8cb:
  case 0x8cc:
  case 0x8cd:
  case 0x8ce:
  case 0x8cf:
  case 0x8d0:
  case 0x8d1:
  case 0x8d2:
  case 0x8d3:
  case 0x8d4:
  case 0x8d5:
  case 0x8d6:
  case 0x8d7:
  case 0x8d8:
  case 0x8d9:
  case 0x8da:
  case 0x8db:
  case 0x8dc:
  case 0x8dd:
  case 0x8e0:
  case 0x8e1:
  case 0x8e2:
  case 0x8e3:
  case 0x8e4:
  case 0x8e5:
  case 0x8e6:
  case 0x8e7:
  case 0x8e8:
  case 0x8e9:
  case 0x8ea:
  case 0x8eb:
  case 0x8ec:
  case 0x8ef:
  case 0x8f0:
  case 0x8f1:
  case 0x8f2:
  case 0x8f3:
  case 0x8f4:
  case 0x8f5:
  case 0x8f6:
  case 0x8f7:
  case 0x8f8:
  case 0x8f9:
  case 0x8fa:
  case 0x8fb:
  case 0x8fc:
  case 0x8fd:
  case 0x8fe:
  case 0x8ff:
  case 0x900:
  case 0x901:
  case 0x902:
  case 0x903:
  case 0x904:
  case 0x905:
  case 0x906:
  case 0x907:
  case 0x908:
  case 0x909:
  case 0x90a:
  case 0x90b:
  case 0x90c:
  case 0x90d:
  case 0x90e:
  case 0x90f:
  case 0x910:
  case 0x911:
  case 0x912:
  case 0x913:
  case 0x914:
  case 0x915:
  case 0x916:
  case 0x917:
  case 0x918:
  case 0x919:
  case 0x91a:
  case 0x91b:
  case 0x91c:
  case 0x91d:
  case 0x91e:
  case 0x91f:
  case 0x920:
  case 0x921:
  case 0x922:
  case 0x923:
  case 0x924:
  case 0x925:
  case 0x926:
  case 0x927:
  case 0x928:
  case 0x929:
  case 0x92a:
  case 0x92b:
  case 0x92c:
  case 0x92d:
  case 0x92e:
  case 0x92f:
  case 0x930:
  case 0x931:
  case 0x932:
  case 0x933:
  case 0x934:
  case 0x935:
  case 0x936:
  case 0x937:
  case 0x938:
  case 0x939:
  case 0x93a:
  case 0x93b:
  case 0x93c:
  case 0x93d:
  case 0x93e:
  case 0x93f:
  case 0x940:
  case 0x941:
  case 0x942:
  case 0x944:
  case 0x945:
  case 0x946:
  case 0x947:
  case 0x948:
  case 0x949:
  case 0x94a:
  case 0x94b:
  case 0x94c:
  case 0x94d:
  case 0x94e:
  case 0x94f:
  case 0x950:
  case 0x951:
  case 0x952:
  case 0x953:
  case 0x954:
  case 0x955:
  case 0x956:
  case 0x957:
  case 0x958:
  case 0x959:
  case 0x95a:
  case 0x95b:
  case 0x95c:
  case 0x95d:
  case 0x95e:
  case 0x95f:
  case 0x960:
  case 0x961:
  case 0x962:
  case 0x963:
  case 0x964:
  case 0x966:
  case 0x967:
  case 0x969:
  case 0x96a:
  case 0x96b:
  case 0x96c:
  case 0x96d:
  case 0x96e:
  case 0x96f:
  case 0x970:
  case 0x971:
  case 0x972:
  case 0x973:
  case 0x974:
  case 0x975:
  case 0x976:
  case 0x977:
  case 0x978:
  case 0x979:
  case 0x97a:
  case 0x97b:
  case 0x97c:
  case 0x97d:
  case 0x97e:
  case 0x97f:
  case 0x980:
  case 0x981:
  case 0x982:
  case 0x983:
  case 0x984:
  case 0x985:
  case 0x986:
  case 0x987:
  case 0x988:
  case 0x989:
  case 0x98a:
  case 0x98b:
  case 0x98c:
switchD_1407f8581_caseD_83d:
    if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
      pSVar6 = Editor::vfunction62((Editor *)this,param_1,param_2,param_3);
      return pSVar6;
    }
    goto LAB_1407f8eee;
  case 0x83e:
    (this->ScintillaBase_data).field_0x98 = param_2 != (SetComponentCmd<Position>_vftable *)0x0;
    break;
  case 0x83f:
    pSVar6 = (SetComponentCmd<Position>_vftable *)
             (ulonglong)(byte)(this->ScintillaBase_data).field_0x98;
    goto LAB_1407f8ed2;
  case 0x840:
    FUN_140a4be10(&(this->ScintillaBase_data).field_0x10,param_3);
    break;
  case 0x841:
    (this->ScintillaBase_data).field_0x79 = param_2 != (SetComponentCmd<Position>_vftable *)0x0;
    break;
  case 0x842:
    pSVar6 = (SetComponentCmd<Position>_vftable *)
             (ulonglong)(byte)(this->ScintillaBase_data).field_0x79;
    goto LAB_1407f8ed2;
  case 0x843:
    (this->ScintillaBase_data).field_0x78 = param_2 != (SetComponentCmd<Position>_vftable *)0x0;
    break;
  case 0x844:
    pSVar6 = (SetComponentCmd<Position>_vftable *)
             (ulonglong)(byte)(this->ScintillaBase_data).field_0x78;
    goto LAB_1407f8ed2;
  case 0x845:
    *(int *)&(this->ScintillaBase_data).offset_0x188 = iVar4;
    param_2 = (SetComponentCmd<Position>_vftable *)0x0;
LAB_1407f87a1:
    FUN_1407f72a0(this,param_2,param_3);
    break;
  case 0x846:
    (this->ScintillaBase_data).field_0x99 = param_2 != (SetComponentCmd<Position>_vftable *)0x0;
    break;
  case 0x847:
    pSVar6 = (SetComponentCmd<Position>_vftable *)
             (ulonglong)(byte)(this->ScintillaBase_data).field_0x99;
    goto LAB_1407f8ed2;
  case 0x898:
    FUN_1407d8f30(this,&local_28,param_2,0);
    FUN_1407f7a20(this,local_28,param_3);
    break;
  case 0x899:
    FUN_140a4e840(&(this->ScintillaBase_data).field_0xb0);
    break;
  case 0x89a:
    pSVar6 = (SetComponentCmd<Position>_vftable *)
             (ulonglong)(byte)(this->ScintillaBase_data).field_0x148;
    goto LAB_1407f8ed2;
  case 0x89b:
    pSVar6 = *(SetComponentCmd<Position>_vftable **)&(this->ScintillaBase_data).field_0x150;
    goto LAB_1407f8ed2;
  case 0x89c:
    FUN_140a4e860(&(this->ScintillaBase_data).field_0xb0,(ulonglong)param_2 & 0xffffffff,
                  (ulonglong)param_3 & 0xffffffff);
    break;
  case 0x89d:
    *(int *)&(this->ScintillaBase_data).field_0x158 = iVar4;
    *(int *)(*(longlong *)&(this->Editor_data).field_0x60 + 0xe7c) = iVar4;
    goto LAB_1407f88ed;
  case 0x89e:
    *(int *)&(this->ScintillaBase_data).field_0x15c = iVar4;
    *(int *)(*(longlong *)&(this->Editor_data).field_0x60 + 0xe78) = iVar4;
    goto LAB_1407f88ed;
  case 0x89f:
    *(int *)&(this->ScintillaBase_data).field_0x160 = iVar4;
    goto LAB_1407f88ed;
  case 0x8a0:
    *(int *)((longlong)&(this->ScintillaBase_data).offset_0x188 + 4) = iVar4;
    break;
  case 0x8a1:
    pSVar6 = (SetComponentCmd<Position>_vftable *)
             (longlong)*(int *)((longlong)&(this->ScintillaBase_data).offset_0x188 + 4);
    goto LAB_1407f8ed2;
  case 0x8a2:
    plVar7 = *(longlong **)&(this->ScintillaBase_data).field_0x80;
    (**(code **)(*plVar7 + 0x20))(plVar7,(ulonglong)param_2 & 0xffffffff);
    break;
  case 0x8a3:
    iVar4 = (**(code **)(**(longlong **)&(this->ScintillaBase_data).field_0x80 + 0x28))();
    pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
    goto LAB_1407f8ed2;
  case 0x8a4:
    FUN_140a4e890(&(this->ScintillaBase_data).field_0xb0,(ulonglong)param_2 & 0xffffffff);
    goto LAB_1407f88ed;
  case 0x8a5:
    FUN_140a4e8a0(&(this->ScintillaBase_data).field_0xb0,
                  CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),
                           param_2 != (SetComponentCmd<Position>_vftable *)0x0));
LAB_1407f88ed:
    FUN_1407d8400(this);
    break;
  case 0x8a6:
    *(SetComponentCmd<Position>_vftable **)&(this->ScintillaBase_data).field_0x150 = param_2;
    break;
  case 0x8de:
    (this->ScintillaBase_data).field_0x9a = param_2 != (SetComponentCmd<Position>_vftable *)0x0;
    break;
  case 0x8df:
    pSVar6 = (SetComponentCmd<Position>_vftable *)
             (ulonglong)(byte)(this->ScintillaBase_data).field_0x9a;
    goto LAB_1407f8ed2;
  case 0x8ed:
    cVar2 = FUN_140a4bf00(&(this->ScintillaBase_data).field_0x10);
    pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)cVar2;
    goto LAB_1407f8ed2;
  case 0x8ee:
    FUN_140a4bef0(&(this->ScintillaBase_data).field_0x10,(ulonglong)param_2 & 0xffffffff);
    break;
  case 0x943:
    (this->ScintillaBase_data).offset_0x0 = iVar4;
    break;
  case 0x965:
    plVar7 = *(longlong **)&(this->ScintillaBase_data).field_0x80;
    (**(code **)(*plVar7 + 0x78))(plVar7,(ulonglong)param_2 & 0xffffffff,param_3);
    break;
  case 0x968:
    plVar7 = *(longlong **)&(this->ScintillaBase_data).field_0x80;
LAB_1407f89ff:
    (**(code **)(*plVar7 + 0x88))();
    break;
  case 0x98d:
    cVar2 = FUN_140249ad0();
    pSVar6 = (SetComponentCmd<Position>_vftable *)0xffffffffffffffff;
    if (cVar2 != '\0') {
      iVar4 = FUN_140a4c780(&(this->ScintillaBase_data).field_0x10);
      pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
    }
    goto LAB_1407f8ed2;
  default:
    switch(param_1) {
    case 0xfa1:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      FUN_1407f8210(extraout_RAX,(longlong)iVar4);
      goto LAB_1407f8ed0;
    case 0xfa2:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)*(int *)(extraout_RAX_16 + 0x3c);
      break;
    case 0xfa3:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      if (*(int *)(extraout_RAX_19 + 0x3c) == 0) {
        FUN_140804a50((this->EditModel_data).offset_0x2e8,param_2);
        param_2 = param_3;
        if (param_3 == (SetComponentCmd<Position>_vftable *)0xffffffffffffffff) {
          lVar1 = (this->EditModel_data).offset_0x2e8;
          param_2 = (SetComponentCmd<Position>_vftable *)
                    (**(code **)(*(longlong *)(lVar1 + 8) + 0x10))(lVar1 + 8);
        }
        (*this->vftablePtr->vfunction36)(this,param_2);
      }
      else {
        LexState::LexState_Constructor_or_Destructor((longlong)this);
        FUN_140803f20(extraout_RAX_20,param_2,param_3);
      }
      (*this->vftablePtr->vfunction13)(this,&param_2->vfunction1);
      goto LAB_1407f8ed0;
    case 0xfa4:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      FUN_1407f83e0(extraout_RAX_17,param_2,param_3);
      goto LAB_1407f8ed0;
    case 0xfa5:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      FUN_1407f83a0(extraout_RAX_21,(ulonglong)param_2 & 0xffffffff,param_3);
      goto LAB_1407f8ed0;
    case 0xfa6:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      FUN_1407f82e0(extraout_RAX_10,param_3);
      goto LAB_1407f8ed0;
    case 0xfa7:
    case 0xfb3:
      goto switchD_1407f8581_caseD_83d;
    case 0xfa8:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      puVar5 = (undefined1 *)FUN_140a4ed00(extraout_RAX_11 + 0x28,param_2);
      if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) goto LAB_1407f8e82;
      goto LAB_1407f8eee;
    case 0xfa9:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      iVar4 = FUN_140a4eea0(extraout_RAX_13 + 0x28,param_2,param_3);
      pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      break;
    case 0xfaa:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      iVar4 = FUN_140a4f710(extraout_RAX_09 + 0x28,param_2,(ulonglong)param_3 & 0xffffffff);
      pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      break;
    case 0xfab:
      pSVar6 = (SetComponentCmd<Position>_vftable *)&DAT_00000008;
      break;
    case 0xfac:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      if (*(longlong *)(extraout_RAX_15 + 0x20) == 0) {
        puVar5 = &DAT_1413a2ad6;
      }
      else {
        puVar5 = *(undefined1 **)(*(longlong *)(extraout_RAX_15 + 0x20) + 0x40);
      }
      goto LAB_1407f8e6b;
    case 0xfad:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      if ((*(longlong *)(extraout_RAX_08 + 8) == 0) ||
         (plVar7 = *(longlong **)(extraout_RAX_08 + 0x10), plVar7 == (longlong *)0x0))
      goto LAB_1407f8ed0;
      pSVar6 = (SetComponentCmd<Position>_vftable *)
               (**(code **)(*plVar7 + 0x50))(plVar7,(ulonglong)param_2 & 0xffffffff,param_3);
      break;
    case 0xfae:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      if (*(longlong **)(extraout_RAX_18 + 0x10) == (longlong *)0x0) {
LAB_1407f8e59:
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)(**(code **)(**(longlong **)(extraout_RAX_18 + 0x10) + 0x10))();
      }
      goto LAB_1407f8e6b;
    case 0xfaf:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_05 + 0x10);
      if (plVar7 == (longlong *)0x0) goto LAB_1407f8ed0;
      iVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
      pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      break;
    case 0xfb0:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_04 + 0x10);
      if (plVar7 == (longlong *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      }
      goto LAB_1407f8d27;
    case 0xfb1:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      if (*(longlong **)(extraout_RAX_12 + 0x10) == (longlong *)0x0) goto LAB_1407f8e59;
      puVar5 = (undefined1 *)(**(code **)(**(longlong **)(extraout_RAX_12 + 0x10) + 0x30))();
      goto LAB_1407f8e6b;
    case 0xfb2:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      iVar4 = (**(code **)(*extraout_RAX_03 + 8))(extraout_RAX_03);
      pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      break;
    case 0xfb4:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_14 + 0x10);
      pSVar6 = (SetComponentCmd<Position>_vftable *)0xffffffffffffffff;
      if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(extraout_RAX_14 + 0x38))) {
        iVar4 = (**(code **)(*plVar7 + 0x60))
                          (plVar7,(ulonglong)param_2 & 0xffffffff,(ulonglong)param_3 & 0xffffffff);
        pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      }
      break;
    case 0xfb5:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_28 + 0x10);
      pSVar6 = (SetComponentCmd<Position>_vftable *)0xffffffffffffffff;
      if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(extraout_RAX_28 + 0x38))) {
        iVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,(ulonglong)param_2 & 0xffffffff);
        pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      }
      break;
    case 0xfb6:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_24 + 0x10);
      pSVar6 = (SetComponentCmd<Position>_vftable *)0x0;
      if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(extraout_RAX_24 + 0x38))) {
        iVar4 = (**(code **)(*plVar7 + 0x70))(plVar7,(ulonglong)param_2 & 0xffffffff);
        pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      }
      break;
    case 0xfb7:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_06 + 0x10);
      pSVar6 = (SetComponentCmd<Position>_vftable *)0x0;
      if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(extraout_RAX_06 + 0x38))) goto LAB_1407f89ff;
      break;
    case 0xfb8:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      FUN_1407f8480(extraout_RAX_02,(ulonglong)param_2 & 0xffffffff,param_3);
      goto LAB_1407f8ed0;
    case 0xfb9:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      pSVar6 = (SetComponentCmd<Position>_vftable *)0x0;
      if ((*(longlong **)(extraout_RAX_22 + 0x10) != (longlong *)0x0) &&
         (0 < *(int *)(extraout_RAX_22 + 0x38))) {
        iVar4 = (**(code **)(**(longlong **)(extraout_RAX_22 + 0x10) + 0x98))();
        pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      }
      break;
    case 0xfba:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_27 + 0x10);
      puVar5 = &DAT_1413a2ad6;
      if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(extraout_RAX_27 + 0x38))) {
        puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0xa0))(plVar7,&DAT_1413a2ad6);
      }
LAB_1407f8e6b:
      if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
LAB_1407f8e82:
        pSVar6 = (SetComponentCmd<Position>_vftable *)FUN_1407f0640(param_3,puVar5);
        return pSVar6;
      }
      goto LAB_1407f8eee;
    case 0xfbb:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_25 + 0x10);
      pSVar6 = (SetComponentCmd<Position>_vftable *)0x0;
      if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(extraout_RAX_25 + 0x38))) {
        iVar4 = (**(code **)(*plVar7 + 0x78))(plVar7,(ulonglong)param_2 & 0xffffffff);
        pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      }
      break;
    case 0xfbc:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_01 + 0x10);
      pSVar6 = (SetComponentCmd<Position>_vftable *)0x0;
      if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(extraout_RAX_01 + 0x38))) {
        iVar4 = (**(code **)(*plVar7 + 0x80))(plVar7,(ulonglong)param_2 & 0xffffffff);
        pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      }
      break;
    case 0xfbd:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      pSVar6 = (SetComponentCmd<Position>_vftable *)0xffffffffffffffff;
      if ((*(longlong **)(extraout_RAX_23 + 0x10) != (longlong *)0x0) &&
         (1 < *(int *)(extraout_RAX_23 + 0x38))) {
        iVar4 = (**(code **)(**(longlong **)(extraout_RAX_23 + 0x10) + 0xa8))();
        pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
      }
      break;
    case 0xfbe:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_00 + 0x10);
      puVar5 = (undefined1 *)0x0;
      if ((plVar7 != (longlong *)0x0) && (1 < *(int *)(extraout_RAX_00 + 0x38))) {
        puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0xb0))(plVar7,(ulonglong)param_2 & 0xffffffff)
        ;
      }
      goto LAB_1407f8d27;
    case 0xfbf:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_07 + 0x10);
      puVar5 = (undefined1 *)0x0;
      if ((plVar7 != (longlong *)0x0) && (1 < *(int *)(extraout_RAX_07 + 0x38))) {
        puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0xb8))(plVar7,(ulonglong)param_2 & 0xffffffff)
        ;
      }
      goto LAB_1407f8d27;
    case 0xfc0:
      LexState::LexState_Constructor_or_Destructor((longlong)this);
      plVar7 = *(longlong **)(extraout_RAX_26 + 0x10);
      puVar5 = (undefined1 *)0x0;
      if ((plVar7 != (longlong *)0x0) && (1 < *(int *)(extraout_RAX_26 + 0x38))) {
        puVar5 = (undefined1 *)(**(code **)(*plVar7 + 0xc0))(plVar7,(ulonglong)param_2 & 0xffffffff)
        ;
      }
LAB_1407f8d27:
      if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) goto LAB_1407f8e82;
      goto LAB_1407f8eee;
    default:
      switch(param_1) {
      case 0xa32:
        iVar4 = FUN_1407f7930(this,param_3);
        pSVar6 = (SetComponentCmd<Position>_vftable *)(longlong)iVar4;
        break;
      default:
        goto switchD_1407f8581_caseD_83d;
      case 0xa43:
        plVar7 = *(longlong **)&(this->ScintillaBase_data).field_0x80;
        local_38 = param_3;
        (**(code **)(*plVar7 + 0x80))
                  (plVar7,(ulonglong)param_2 & 0xffffffff,
                   (int)*(float *)&(this->Editor_data).field_0x22c,
                   (int)*(float *)&(this->Editor_data).field_0x230);
        goto LAB_1407f8ed0;
      case 0xa4a:
        *(int *)&(this->ScintillaBase_data).field_0x9c = iVar4;
        goto LAB_1407f8ed0;
      case 0xa4b:
        pSVar6 = (SetComponentCmd<Position>_vftable *)
                 (ulonglong)*(uint *)&(this->ScintillaBase_data).field_0x9c;
        break;
      case 0xa4c:
        (this->ScintillaBase_data).offset_0x190 = iVar4;
        goto LAB_1407f8ed0;
      case 0xa4d:
        pSVar6 = (SetComponentCmd<Position>_vftable *)
                 (longlong)(int)(this->ScintillaBase_data).offset_0x190;
        break;
      case 0xa64:
        *(int *)&(this->ScintillaBase_data).field_0xa8 = iVar4;
        goto LAB_1407f8ed0;
      case 0xa65:
        pSVar6 = (SetComponentCmd<Position>_vftable *)
                 (longlong)*(int *)&(this->ScintillaBase_data).field_0xa8;
      }
    }
    goto LAB_1407f8ed2;
  }
LAB_1407f8ed0:
  pSVar6 = (SetComponentCmd<Position>_vftable *)0x0;
LAB_1407f8ed2:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_58)) {
    return pSVar6;
  }
LAB_1407f8eee:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
}

