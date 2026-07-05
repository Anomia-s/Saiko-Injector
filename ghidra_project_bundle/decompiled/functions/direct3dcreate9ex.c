/**
 * Function: direct3dcreate9ex
 * Address:  14015ded0
 * Signature: undefined direct3dcreate9ex(void)
 * Body size: 262 bytes
 */


undefined8 direct3dcreate9ex(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  lVar3 = parameter_s_is_invalid("D3D9.DLL");
  *param_1 = lVar3;
  if (lVar3 != 0) {
    cVar1 = FUN_1401106d0("SDL_WINDOWS_USE_D3D9EX",0);
    if (cVar1 != '\0') {
      pcVar4 = (code *)failed_loading_s(*param_1,"Direct3DCreate9Ex");
      if (pcVar4 != (code *)0x0) {
        iVar2 = (*pcVar4)(0x80000020,&local_40);
        if (-1 < iVar2) {
          local_38 = 0x81bdcbca;
          uStack_34 = 0x426d64d4;
          uStack_30 = 0x1ad8dae;
          uStack_2c = 0x5c27f447;
          iVar2 = (**(code **)*local_40)(local_40,&local_38,param_2);
          (**(code **)(*local_40 + 0x10))();
          if (-1 < iVar2) {
            uVar5 = 1;
            goto LAB_14015dfad;
          }
        }
      }
    }
    pcVar4 = (code *)failed_loading_s(*param_1,"Direct3DCreate9");
    if (pcVar4 != (code *)0x0) {
      lVar3 = (*pcVar4)(0x80000020);
      *param_2 = lVar3;
      uVar5 = 1;
      if (lVar3 != 0) goto LAB_14015dfad;
    }
    FUN_140165790(*param_1);
    *param_1 = 0;
  }
  *param_2 = 0;
  uVar5 = 0;
LAB_14015dfad:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_68)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_68);
}

