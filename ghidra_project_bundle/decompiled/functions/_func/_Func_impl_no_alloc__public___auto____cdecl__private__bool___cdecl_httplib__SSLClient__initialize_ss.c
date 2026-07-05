/**
 * Function: _Func_impl_no_alloc<`public:_<auto>___cdecl_`private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64'::`1'::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64'::`1'::<lambda_1>,void>_Constructor_or_Destructor
 * Address:  1401e9da0
 * Signature: undefined8 __fastcall _Func_impl_no_alloc<`public:_<auto>___cdecl_`private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64'::`1'::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64'::`1'::<lambda_1>,void>_Constructor_or_Destructor(longlong * param_1, undefined * * param_2)
 * Body size: 815 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
std::
_Func_impl_no_alloc<`public:_<auto>___cdecl_`private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64'::`1'::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64'::`1'::<lambda_1>,void>
::
_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_Constructor_or_Destructor
          (longlong *param_1,undefined **param_2)

{
  _Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
  *p_Var1;
  vfunction6 *pvVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 uVar9;
  fd_set local_290;
  _Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
  *local_88;
  _Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
  *local_80;
  undefined8 local_78;
  vfunction1 *local_70;
  undefined4 **local_68;
  timeval local_60;
  longlong *local_58;
  undefined4 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  p_Var1 = (_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
            *)*param_1;
  if (*(char *)&p_Var1[0x16].vfunction4 == '\x01') {
    local_50 = (undefined4 *)CONCAT71(local_50._1_7_,1);
    local_290.fd_array[0] = (SOCKET)&local_50;
    local_290._0_8_ = p_Var1;
    FUN_1401ea200(&p_Var1[0x1b].vfunction1,&local_290);
    if ((char)local_50 != '\0') {
      FUN_140b6ad80(param_2,0);
      goto LAB_1401e9e18;
    }
    *(undefined4 *)param_1[1] = 9;
LAB_1401ea023:
    uVar7 = 0;
  }
  else {
LAB_1401e9e18:
    local_78 = p_Var1[10].vfunction1;
    local_70 = p_Var1[10].vfunction1;
    local_68 = *(undefined4 ***)param_1[2];
    local_80 = p_Var1;
    local_58 = param_1;
    puVar6 = (undefined4 *)FUN_140b6b070(param_2);
    if ((int)puVar6 != 1) {
      iVar5 = (int)local_68 + 1;
      local_88 = (_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
                  *)param_2;
      do {
        iVar4 = FUN_140b6b770(param_2);
        local_60.tv_sec = (long)local_78;
        local_60.tv_usec = (long)local_70;
        if (iVar4 != 3) {
          if (iVar4 == 2) {
            local_290.fd_array[0] = (SOCKET)local_68;
            local_290.fd_count = 1;
            while (iVar4 = select(iVar5,&local_290,(fd_set *)0x0,(fd_set *)0x0,&local_60), iVar4 < 0
                  ) {
              piVar8 = _errno();
              if (*piVar8 != 4) goto LAB_1401e9fe1;
              local_50 = (undefined4 *)0x1;
              FUN_140011270(&local_50);
            }
            goto LAB_1401e9fc0;
          }
LAB_1401e9fe1:
          *(undefined4 *)local_58[1] = 8;
          goto LAB_1401ea023;
        }
        local_290.fd_array[0] = (SOCKET)local_68;
        local_290.fd_count = 1;
        while (iVar4 = select(iVar5,(fd_set *)0x0,&local_290,(fd_set *)0x0,&local_60), iVar4 < 0) {
          piVar8 = _errno();
          if (*piVar8 != 4) goto LAB_1401e9fe1;
          local_50 = (undefined4 *)0x1;
          FUN_140011270(&local_50);
        }
LAB_1401e9fc0:
        param_2 = &local_88->vfunction1;
        if (iVar4 == 0) goto LAB_1401e9fe1;
        puVar6 = (undefined4 *)FUN_140b6b070(local_88);
      } while ((int)puVar6 != 1);
    }
    p_Var1 = local_80;
    if (*(char *)&local_80[0x16].vfunction4 == '\x01') {
      pvVar2 = local_80[0x17].vfunction6;
      if (pvVar2 == (vfunction6 *)0x0) {
        iVar5 = FUN_140b6bf70(param_2);
        *(int *)&p_Var1[0x1b].vfunction6 = iVar5;
        if (iVar5 != 0) goto LAB_1401ea012;
        puVar6 = (undefined4 *)FUN_140b6aec0(param_2);
        local_290._0_8_ = &vftable;
        local_290.fd_array[0] = (SOCKET)&local_50;
        local_290.fd_array[7]._0_1_ = '\x01';
        local_290.fd_array[6] = (SOCKET)&local_290;
        local_50 = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          uVar9 = 10;
LAB_1401ea095:
          puVar6 = (undefined4 *)local_58[1];
          *puVar6 = uVar9;
          bVar3 = false;
        }
        else {
          bVar3 = true;
          if (*(undefined1 *)((longlong)&p_Var1[0x16].vfunction4 + 1) == '\x01') {
            puVar6 = (undefined4 *)FUN_1401ea160(p_Var1,puVar6);
            uVar9 = 0xb;
            if ((char)puVar6 == '\0') goto LAB_1401ea095;
          }
        }
        if ((char)local_290.fd_array[7] == '\x01') {
          if ((_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
               **)local_290.fd_array[6] ==
              (_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
               **)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          puVar6 = (undefined4 *)
                   (*(*(_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
                        **)local_290.fd_array[6])->vfunction3)((void *)local_290.fd_array[6]);
        }
        if ((_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
             **)local_290.fd_array[6] !=
            (_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
             **)0x0) {
          puVar6 = (undefined4 *)
                   (*(*(_Func_impl_no_alloc<_public:_<auto>___cdecl__private:_bool___cdecl_httplib::SSLClient::initialize_ssl(httplib::ClientImpl::Socket&___ptr64,httplib::Error&___ptr64)___ptr64_::_1_::<lambda_1>::operator()(ssl_st*___ptr64)const___ptr64_::_1_::<lambda_1>,void>_vftable
                        **)local_290.fd_array[6])->vfunction5)
                             ((void *)local_290.fd_array[6],
                              (fd_set *)local_290.fd_array[6] != &local_290);
        }
        if (!bVar3) goto LAB_1401ea023;
      }
      else {
        local_290._0_8_ = param_2;
        puVar6 = (undefined4 *)(**(code **)(*(longlong *)pvVar2 + 0x10))(pvVar2,&local_290);
        if ((char)puVar6 == '\0') {
LAB_1401ea012:
          *(undefined4 *)local_58[1] = 10;
          goto LAB_1401ea023;
        }
      }
    }
    uVar7 = CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
  }
  return uVar7;
}

