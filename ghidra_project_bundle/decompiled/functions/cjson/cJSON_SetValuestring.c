/**
 * Function: cJSON_SetValuestring
 * Address:  140581280
 * Signature: undefined cJSON_SetValuestring(void)
 * Body size: 203 bytes
 */


void * cJSON_SetValuestring(longlong param_1,char *param_2)

{
  char *_Str;
  size_t sVar1;
  size_t sVar2;
  void *_Dst;
  
                    /* 0x581280  75  cJSON_SetValuestring */
  if (((param_1 != 0) && ((*(uint *)(param_1 + 0x18) & 0x110) == 0x10)) &&
     (_Str = *(char **)(param_1 + 0x20), param_2 != (char *)0x0 && _Str != (char *)0x0)) {
    sVar1 = strlen(param_2);
    sVar2 = strlen(_Str);
    if (sVar2 < sVar1) {
      _Dst = (void *)(*(code *)PTR_malloc_14150b218)(sVar1 + 1);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_2,sVar1 + 1);
        if (*(longlong *)(param_1 + 0x20) != 0) {
          (*(code *)PTR_free_14150b220)();
        }
        *(void **)(param_1 + 0x20) = _Dst;
        return _Dst;
      }
    }
    else if (_Str + sVar2 < param_2 || param_2 + sVar1 < _Str) {
      strcpy(_Str,param_2);
      return *(void **)(param_1 + 0x20);
    }
  }
  return (void *)0x0;
}

