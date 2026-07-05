/**
 * Function: setting_fence_event_failed
 * Address:  1403fe810
 * Signature: undefined setting_fence_event_failed(void)
 * Body size: 390 bytes
 */


undefined8
setting_fence_event_failed(longlong param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  HANDLE *lpHandles;
  longlong lVar7;
  uint7 uVar9;
  undefined8 uVar8;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar9 = (uint7)(param_4 >> 8) & 0xffffff;
  lpHandles = (HANDLE *)FUN_140160c40((param_4 & 0xffffffff) * 8);
  FUN_1401552a0(*(undefined8 *)(param_1 + 0x1e8));
  if ((DWORD)param_4 != 0) {
    uVar10 = 0;
    do {
      puVar1 = *(undefined8 **)(param_3 + uVar10 * 8);
      iVar4 = (**(code **)(*(longlong *)*puVar1 + 0x48))((longlong *)*puVar1,1,puVar1[1]);
      if (iVar4 < 0) {
        s_error_code_s_0x08lx(param_1,"Setting fence event failed",iVar4);
        goto LAB_1403fe969;
      }
      lpHandles[uVar10] = (HANDLE)puVar1[1];
      uVar10 = uVar10 + 1;
    } while ((param_4 & 0xffffffff) != uVar10);
  }
  DVar5 = WaitForMultipleObjects((DWORD)param_4,lpHandles,param_2 & 0xff,0xffffffff);
  if (DVar5 == 0xffffffff) {
    FUN_1401552c0(*(undefined8 *)(param_1 + 0x1e8));
    if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_1400fb950(9,&DAT_141339891,"Wait failed");
    }
    FUN_1400fbed0(&DAT_141339891,"Wait failed");
LAB_1403fe969:
    uVar8 = 0;
  }
  else {
    uVar6 = *(int *)(param_1 + 0x100) - 1;
    if ((int)uVar6 < 0) {
      uVar8 = CONCAT71(uVar9,1);
    }
    else {
      uVar8 = CONCAT71(uVar9,1);
      lVar11 = (ulonglong)uVar6 + 1;
      do {
        lVar7 = (**(code **)(*(longlong *)
                              **(undefined8 **)
                                (*(longlong *)(*(longlong *)(param_1 + 0xf8) + -8 + lVar11 * 8) +
                                0x68) + 0x40))();
        if (lVar7 == 1) {
          bVar3 = could_not_reset_command_list
                            (param_1,*(undefined8 *)
                                      (*(longlong *)(param_1 + 0xf8) + -8 + lVar11 * 8),0);
          uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)uVar8 != '\0' & bVar3);
        }
        lVar7 = lVar11 + -1;
        bVar2 = 0 < lVar11;
        lVar11 = lVar7;
      } while (lVar7 != 0 && bVar2);
    }
    FUN_140403d60(param_1);
    FUN_140160cf0(lpHandles);
    FUN_1401552c0(*(undefined8 *)(param_1 + 0x1e8));
  }
  return uVar8;
}

