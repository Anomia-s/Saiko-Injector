/**
 * Function: couldnt_find_any_displays
 * Address:  140146a80
 * Signature: undefined couldnt_find_any_displays(void)
 * Body size: 348 bytes
 */


int couldnt_find_any_displays(int param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  local_40 = ((int)(((uint)(param_3 >> 0x1f) & 1) + (int)param_3) >> 1) + param_1;
  iStack_3c = ((int)(((uint)(param_4 >> 0x1f) & 1) + (int)param_4) >> 1) + param_2;
  if ((DAT_1415259c8 != 0) && (0 < *(int *)(DAT_1415259c8 + 800))) {
    iVar4 = 0x7fffffff;
    lVar7 = 0;
    iVar5 = 0;
    do {
      piVar1 = *(int **)(*(longlong *)(DAT_1415259c8 + 0x328) + lVar7 * 8);
      video_subsystem_has_not_been_initialized(*piVar1,&local_50);
      cVar2 = parameter_s_is_invalid(&local_40,1,&local_50,0);
      if (cVar2 != '\0') {
        iVar5 = *piVar1;
        goto LAB_140146bac;
      }
      iVar3 = local_50;
      if ((local_50 <= local_40) && (iVar3 = local_50 + local_48 + -1, local_40 < iVar3)) {
        iVar3 = local_40;
      }
      iVar6 = local_44 + local_4c + -1;
      if (iStack_3c < iVar6) {
        iVar6 = iStack_3c;
      }
      if (iStack_3c < local_4c) {
        iVar6 = local_4c;
      }
      iVar3 = (iStack_3c - iVar6) * (iStack_3c - iVar6) + (local_40 - iVar3) * (local_40 - iVar3);
      if (iVar3 < iVar4) {
        iVar5 = *piVar1;
        iVar4 = iVar3;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(DAT_1415259c8 + 800));
    if (iVar5 != 0) goto LAB_140146bac;
  }
  FUN_1400fbed0("Couldn\'t find any displays");
  iVar5 = 0;
LAB_140146bac:
  if (DAT_1414ef3c0 == (local_38 ^ (ulonglong)auStack_78)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_78);
}

