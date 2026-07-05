/**
 * Function: invalid_display_index
 * Address:  14015e130
 * Signature: undefined invalid_display_index(void)
 * Body size: 471 bytes
 */


undefined8 invalid_display_index(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *_Str2;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  wchar_t local_a8 [48];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_140144860();
  if (lVar3 == 0) {
    lVar3 = 0;
    _Str2 = (wchar_t *)video_subsystem_has_not_been_initialized(param_1);
    if (param_2 == (int *)0x0) goto LAB_14015e283;
LAB_14015e182:
    if (param_3 != (int *)0x0) {
      *param_2 = -1;
      *param_3 = -1;
      if (_Str2 == (wchar_t *)0x0) {
        uVar4 = FUN_1400fbed0("Invalid display index");
      }
      else if ((lVar3 == 0) || (*(longlong *)(lVar3 + 200) == 0)) {
        uVar4 = FUN_1400fbed0("Unable to create DXGI interface");
      }
      else {
        uVar4 = 1;
        if (*param_2 == -1) {
          iVar6 = 0;
          do {
            iVar1 = (**(code **)(**(longlong **)(lVar3 + 200) + 0x38))
                              (*(longlong **)(lVar3 + 200),iVar6,&local_b0);
            if (iVar1 < 0) {
              uVar4 = 1;
              if (*param_2 == -1) {
                uVar4 = FUN_1400fbed0("Couldn\'t find matching adapter");
              }
              goto LAB_14015e2a6;
            }
            if (*param_2 == -1) {
              iVar1 = 0;
              do {
                iVar2 = (**(code **)(*local_b0 + 0x38))(local_b0,iVar1,&local_b8);
                if (iVar2 < 0) break;
                iVar2 = (**(code **)(*local_b8 + 0x38))(local_b8,local_a8);
                if (-1 < iVar2) {
                  iVar2 = wcscmp(local_a8,_Str2);
                  if (iVar2 == 0) {
                    *param_2 = iVar6;
                    *param_3 = iVar1;
                  }
                }
                (**(code **)(*local_b8 + 0x10))();
                iVar1 = iVar1 + 1;
              } while (*param_2 == -1);
            }
            (**(code **)(*local_b0 + 0x10))();
            iVar6 = iVar6 + 1;
          } while (*param_2 == -1);
          uVar4 = 1;
        }
      }
      goto LAB_14015e2a6;
    }
    pcVar5 = "outputIndex";
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x678);
    _Str2 = (wchar_t *)video_subsystem_has_not_been_initialized(param_1);
    if (param_2 != (int *)0x0) goto LAB_14015e182;
LAB_14015e283:
    pcVar5 = "adapterIndex";
  }
  uVar4 = FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar5);
LAB_14015e2a6:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_d8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_d8);
}

