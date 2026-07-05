/**
 * Function: setwindowrgn_failed
 * Address:  140462980
 * Signature: undefined setwindowrgn_failed(void)
 * Body size: 1033 bytes
 */


undefined8 setwindowrgn_failed(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  HRGN pHVar5;
  HRGN pHVar6;
  undefined4 extraout_var;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  int y1;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_78;
  int local_74;
  longlong local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  puVar9 = *(undefined8 **)(param_2 + 0x180);
  if (param_3 == 0) {
    pHVar5 = (HRGN)0x0;
  }
  else {
    if (*(int *)(param_3 + 8) != *(int *)(param_2 + 0x20)) {
      iVar2 = *(int *)(param_2 + 0x24);
LAB_1404629ce:
      lVar3 = height_pitch_would_overflow(*(int *)(param_2 + 0x20),iVar2,0x16862004);
      if (lVar3 != 0) {
        local_88 = 1;
        cVar1 = size_too_large_for_scaling(param_3,0,lVar3,0);
        lVar11 = lVar3;
        if (cVar1 != '\0') goto LAB_140462a08;
        parameter_s_is_invalid(lVar3);
      }
      uVar7 = 0;
      goto LAB_140462d6d;
    }
    iVar2 = *(int *)(param_2 + 0x24);
    if (*(int *)(param_3 + 0xc) != iVar2) goto LAB_1404629ce;
    lVar3 = param_3;
    lVar11 = 0;
LAB_140462a08:
    local_58 = 0;
    uStack_50 = 0;
    uVar4 = video_subsystem_has_not_been_initialized(*puVar9);
    local_78 = 0;
    local_74 = 0;
    if ((uVar4 & 0x10) == 0) {
      FUN_14045cd60(puVar9[1],&local_58,0);
      local_78 = (int)local_58;
      local_74 = local_58._4_4_;
    }
    if (*(int *)(lVar3 + 0xc) < 1) {
      pHVar5 = (HRGN)0x0;
      uVar4 = video_subsystem_has_not_been_initialized(*puVar9);
      uVar7 = local_58;
    }
    else {
      iVar2 = *(int *)(lVar3 + 8);
      iVar10 = 0;
      local_70 = lVar11;
      local_68 = puVar9;
      if (0 < iVar2) {
        local_60 = (ulonglong)(uint)-local_78;
        pHVar6 = (HRGN)0x0;
        do {
          pHVar5 = pHVar6;
          if (iVar2 < 1) {
LAB_140462b83:
            if (*(int *)(lVar3 + 0xc) <= iVar10 + 1) goto LAB_140462bd2;
          }
          else {
            y1 = iVar10 - local_74;
            iVar2 = *(int *)(lVar3 + 0x10);
            lVar11 = *(longlong *)(lVar3 + 0x18);
            iVar8 = -1;
            lVar12 = 0;
            do {
              if (*(char *)(iVar2 * iVar10 + lVar11 + lVar12 * 4) == '\0') {
                if (iVar8 == -1) {
                  iVar8 = -1;
                }
                else {
                  pHVar5 = CreateRectRgn(iVar8 - local_78,y1,(int)local_60 + (int)lVar12,y1 + 1);
                  if (pHVar6 == (HRGN)0x0) {
                    pHVar6 = pHVar5;
                    iVar8 = -1;
                  }
                  else {
                    CombineRgn(pHVar6,pHVar6,pHVar5,2);
                    DeleteObject(pHVar5);
                    iVar8 = -1;
                  }
                }
              }
              else if (iVar8 == -1) {
                iVar8 = (int)lVar12;
              }
              lVar12 = lVar12 + 1;
            } while ((int)lVar12 < *(int *)(lVar3 + 8));
            pHVar5 = pHVar6;
            if (iVar8 == -1) goto LAB_140462b83;
            pHVar5 = CreateRectRgn(iVar8 - local_78,y1,(int)lVar12 + (int)local_60,y1 + 1);
            if (pHVar6 != (HRGN)0x0) {
              CombineRgn(pHVar6,pHVar6,pHVar5,2);
              DeleteObject(pHVar5);
              pHVar5 = pHVar6;
              goto LAB_140462b83;
            }
            if (*(int *)(lVar3 + 0xc) <= iVar10 + 1) goto LAB_140462bd2;
          }
          iVar10 = iVar10 + 1;
          iVar2 = *(int *)(lVar3 + 8);
          pHVar6 = pHVar5;
        } while( true );
      }
      pHVar5 = (HRGN)0x0;
LAB_140462bd2:
      puVar9 = local_68;
      lVar11 = local_70;
      uVar4 = video_subsystem_has_not_been_initialized(*local_68);
      uVar7 = local_58;
    }
    local_58 = uVar7;
    if ((uVar4 & 0x10) == 0) {
      local_58._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
      iVar10 = 1 - local_58._4_4_;
      local_58._0_4_ = (int)uVar7;
      iVar2 = *(int *)(lVar3 + 8) - (int)local_58;
      pHVar6 = CreateRectRgn(0,0,iVar2 + (int)uStack_50 + 1,iVar10);
      if (pHVar5 != (HRGN)0x0) {
        CombineRgn(pHVar5,pHVar5,pHVar6,2);
        DeleteObject(pHVar6);
        pHVar6 = pHVar5;
      }
      pHVar5 = CreateRectRgn(0,-local_58._4_4_,1 - (int)local_58,
                             (*(int *)(lVar3 + 0xc) - local_58._4_4_) + 1);
      if (pHVar6 != (HRGN)0x0) {
        CombineRgn(pHVar6,pHVar6,pHVar5,2);
        DeleteObject(pHVar5);
        pHVar5 = pHVar6;
      }
      iVar2 = *(int *)(lVar3 + 8) - (int)local_58;
      pHVar6 = CreateRectRgn(iVar2,-local_58._4_4_,(int)uStack_50 + iVar2 + 1,
                             (*(int *)(lVar3 + 0xc) - local_58._4_4_) + 1);
      if (pHVar5 != (HRGN)0x0) {
        CombineRgn(pHVar5,pHVar5,pHVar6,2);
        DeleteObject(pHVar6);
        pHVar6 = pHVar5;
      }
      iVar2 = *(int *)(lVar3 + 0xc) - local_58._4_4_;
      pHVar5 = CreateRectRgn(0,iVar2,(*(int *)(lVar3 + 8) - (int)local_58) + (int)uStack_50 + 1,
                             uStack_50._4_4_ + iVar2 + 1);
      if (pHVar6 != (HRGN)0x0) {
        CombineRgn(pHVar6,pHVar6,pHVar5,2);
        DeleteObject(pHVar5);
        pHVar5 = pHVar6;
      }
    }
    if (lVar11 != 0) {
      parameter_s_is_invalid(lVar11);
    }
  }
  iVar2 = SetWindowRgn((HWND)puVar9[1],pHVar5,1);
  uVar7 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
  if (iVar2 == 0) {
    uVar7 = FUN_1403d7710("SetWindowRgn failed");
  }
LAB_140462d6d:
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_a8);
  }
  return uVar7;
}

