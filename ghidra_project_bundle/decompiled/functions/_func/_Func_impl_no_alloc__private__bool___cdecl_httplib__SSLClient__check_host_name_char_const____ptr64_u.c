/**
 * Function: _Func_impl_no_alloc<`private:_bool___cdecl_httplib::SSLClient::check_host_name(char_const*___ptr64,unsigned___int64)const___ptr64'::`1'::<lambda_1>,void,char_const*___ptr64,char_const*___ptr64>_Constructor_or_Destructor
 * Address:  1401ea740
 * Signature: ulonglong __fastcall _Func_impl_no_alloc<`private:_bool___cdecl_httplib::SSLClient::check_host_name(char_const*___ptr64,unsigned___int64)const___ptr64'::`1'::<lambda_1>,void,char_const*___ptr64,char_const*___ptr64>_Constructor_or_Destructor(longlong param_1, char * param_2, size_t param_3)
 * Body size: 464 bytes
 */


ulonglong std::
          _Func_impl_no_alloc<`private:_bool___cdecl_httplib::SSLClient::check_host_name(char_const*___ptr64,unsigned___int64)const___ptr64'::`1'::<lambda_1>,void,char_const*___ptr64,char_const*___ptr64>
          ::
          _Func_impl_no_alloc<_private:_bool___cdecl_httplib::SSLClient::check_host_name(char_const*___ptr64,unsigned___int64)const___ptr64_::_1_::<lambda_1>,void,char_const*___ptr64,char_const*___ptr64>_Constructor_or_Destructor
                    (longlong param_1,char *param_2,size_t param_3)

{
  void *_Buf1;
  undefined8 *puVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *_Buf2;
  char *_Buf1_00;
  ulonglong _Size;
  ulonglong uVar4;
  char *pcVar5;
  size_t unaff_R14;
  size_t sVar6;
  undefined8 *puVar7;
  _Func_impl_no_alloc<_private:_bool___cdecl_httplib::SSLClient::check_host_name(char_const*___ptr64,unsigned___int64)const___ptr64_::_1_::<lambda_1>,void,char_const*___ptr64,char_const*___ptr64>_vftable
  *local_a8;
  char **local_a0;
  _Func_impl_no_alloc<_private:_bool___cdecl_httplib::SSLClient::check_host_name(char_const*___ptr64,unsigned___int64)const___ptr64_::_1_::<lambda_1>,void,char_const*___ptr64,char_const*___ptr64>_vftable
  **local_70;
  char *local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(size_t *)(param_1 + 0x18) == param_3) {
    sVar3 = strlen(param_2);
    if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
      _Buf1 = (void *)(param_1 + 8);
    }
    else {
      _Buf1 = *(void **)(param_1 + 8);
    }
    if ((param_3 == sVar3) &&
       ((unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1), param_3 == 0 ||
        (iVar2 = memcmp(_Buf1,param_2,param_3), iVar2 == 0)))) goto LAB_1401ea916;
  }
  local_68 = (char *)0x0;
  lStack_60 = 0;
  local_58 = 0;
  local_a8 = &vftable;
  local_a0 = &local_68;
  local_70 = &local_a8;
  FUN_1401ea970(param_2,param_2 + param_3,0x2e,0xffffffffffffffff,local_70);
  puVar7 = *(undefined8 **)(param_1 + 0x520);
  puVar1 = *(undefined8 **)(param_1 + 0x528);
  pcVar5 = local_68;
  if ((longlong)puVar1 - (longlong)puVar7 == lStack_60 - (longlong)local_68) {
    for (; puVar7 != puVar1; puVar7 = puVar7 + 4) {
      if ((ulonglong)puVar7[3] < 0x10) {
        _Buf2 = puVar7;
        if (0xf < *(ulonglong *)(pcVar5 + 0x18)) goto LAB_1401ea87a;
LAB_1401ea858:
        sVar3 = puVar7[2];
        unaff_R14 = *(size_t *)(pcVar5 + 0x10);
        _Buf1_00 = pcVar5;
        sVar6 = unaff_R14;
        if (unaff_R14 != sVar3) goto LAB_1401ea8a5;
LAB_1401ea88b:
        if ((sVar3 != 0) && (iVar2 = memcmp(_Buf1_00,_Buf2,sVar3), sVar6 = unaff_R14, iVar2 != 0))
        goto LAB_1401ea8a5;
      }
      else {
        _Buf2 = (undefined8 *)*puVar7;
        if (*(ulonglong *)(pcVar5 + 0x18) < 0x10) goto LAB_1401ea858;
LAB_1401ea87a:
        _Buf1_00 = *(char **)pcVar5;
        sVar3 = puVar7[2];
        unaff_R14 = *(size_t *)(pcVar5 + 0x10);
        sVar6 = unaff_R14;
        if (unaff_R14 == sVar3) goto LAB_1401ea88b;
LAB_1401ea8a5:
        if (sVar6 == 1) {
          unaff_R14 = 0;
          if (*_Buf1_00 == '*') goto LAB_1401ea830;
        }
        else if (sVar6 == 0) goto LAB_1401ea81f;
        if (_Buf1_00[sVar6 - 1] != '*') goto LAB_1401ea81f;
        uVar4 = sVar6 - 1;
        if (sVar6 < sVar6 - 1) {
          uVar4 = sVar6;
        }
        _Size = uVar4;
        if (sVar3 < uVar4) {
          _Size = sVar3;
        }
        iVar2 = memcmp(_Buf1_00,_Buf2,_Size);
        unaff_R14 = 0;
        if ((uVar4 != sVar3) || (iVar2 != 0)) goto LAB_1401ea90d;
      }
LAB_1401ea830:
      pcVar5 = pcVar5 + 0x20;
    }
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
  }
  else {
LAB_1401ea81f:
    unaff_R14 = 0;
  }
LAB_1401ea90d:
  FUN_1400019f0(&local_68);
LAB_1401ea916:
  return unaff_R14 & 0xffffffff;
}

