/**
 * Function: detected_large_progress_interval_2fs_rest_req
 * Address:  1403ccd70
 * Signature: undefined detected_large_progress_interval_2fs_rest_req(void)
 * Body size: 203 bytes
 */


void detected_large_progress_interval_2fs_rest_req(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = FUN_1400c4580(param_1,0x18,0);
  if (1.0 < *(float *)((longlong)param_1 + 0xc4)) {
    FUN_140399630(0xfffffffe,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/rest.c",
                  0x881,"detected large progress interval (%.2fs), REST request may timeout",
                  (double)*(float *)((longlong)param_1 + 0xc4));
  }
  lVar4 = FUN_1400bdbc0(*param_1);
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  if (0 < iVar2) {
    plVar5 = (longlong *)(lVar3 + 0x10);
    lVar3 = 0;
    do {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        resource_not_found(*(undefined8 *)(lVar1 + 8),
                           (float)(*(double *)(lVar4 + 0x48) - *(double *)(lVar1 + 0x30)));
        FUN_1403d0ed0(*param_1,lVar1);
        *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar4 + 0x48);
        iVar2 = *(int *)((longlong)param_1 + 0x14);
      }
      lVar3 = lVar3 + 1;
      plVar5 = plVar5 + 3;
    } while (lVar3 < iVar2);
  }
  return;
}

