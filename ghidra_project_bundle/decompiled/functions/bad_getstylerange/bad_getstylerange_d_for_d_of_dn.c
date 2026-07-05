/**
 * Function: bad_getstylerange_d_for_d_of_dn
 * Address:  1407fa140
 * Signature: undefined bad_getstylerange_d_for_d_of_dn(void)
 * Body size: 196 bytes
 */


void bad_getstylerange_d_for_d_of_dn
               (char *param_1,void *param_2,ulonglong param_3,ulonglong param_4)

{
  size_t _Size;
  size_t sVar1;
  
  if (-1 < (longlong)(param_4 | param_3)) {
    if (*param_1 == '\0') {
      memset(param_2,0,param_4);
      return;
    }
    if ((longlong)(param_4 + param_3) <= *(longlong *)(param_1 + 0x68)) {
      sVar1 = *(longlong *)(param_1 + 0x70) - param_3;
      if ((longlong)param_4 < (longlong)sVar1) {
        sVar1 = param_4;
      }
      _Size = 0;
      if ((longlong)param_3 < *(longlong *)(param_1 + 0x70)) {
        _Size = sVar1;
      }
      memmove(param_2,(void *)(*(longlong *)(param_1 + 0x48) + param_3),_Size);
      memmove((void *)((longlong)param_2 + _Size),
              (void *)(param_3 + *(longlong *)(param_1 + 0x48) + _Size +
                      *(longlong *)(param_1 + 0x78)),param_4 - _Size);
      return;
    }
    httplib::ClientImpl::vfunction4();
  }
  return;
}

