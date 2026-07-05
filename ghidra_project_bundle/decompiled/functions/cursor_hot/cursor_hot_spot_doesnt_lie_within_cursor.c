/**
 * Function: cursor_hot_spot_doesnt_lie_within_cursor
 * Address:  1401374a0
 * Signature: undefined cursor_hot_spot_doesnt_lie_within_cursor(void)
 * Body size: 390 bytes
 */


longlong *
cursor_hot_spot_doesnt_lie_within_cursor
          (char *param_1,char *param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar3 = height_pitch_would_overflow();
  if (lVar3 == 0) {
    return (longlong *)0x0;
  }
  if ((0 < param_4) && (0 < param_3)) {
    cVar8 = '\0';
    cVar7 = '\0';
    iVar6 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 0x10);
      lVar4 = *(longlong *)(lVar3 + 0x18);
      uVar9 = 0;
      do {
        if ((uVar9 & 7) == 0) {
          cVar7 = *param_1;
          param_1 = param_1 + 1;
          cVar8 = *param_2;
          param_2 = param_2 + 1;
        }
        uVar10 = 0xffffff;
        if (-1 < cVar7) {
          uVar10 = 0;
        }
        uVar2 = -(uint)(-1 < cVar7) | 0xff000000;
        if (-1 < cVar8) {
          uVar2 = uVar10;
        }
        *(uint *)(iVar1 * iVar6 + lVar4 + uVar9 * 4) = uVar2;
        cVar7 = cVar7 * '\x02';
        cVar8 = cVar8 * '\x02';
        uVar9 = uVar9 + 1;
      } while ((param_3 + 7U & 0xfffffff8) != (uint)uVar9);
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_4);
  }
  if ((((int)(param_6 | param_5) < 0) || (*(int *)(lVar3 + 8) <= (int)param_5)) ||
     (*(int *)(lVar3 + 0xc) <= (int)param_6)) {
    FUN_1400fbed0("Cursor hot spot doesn\'t lie within cursor");
LAB_1401375a8:
    plVar5 = (longlong *)0x0;
  }
  else {
    if (*(int *)(lVar3 + 4) == 0x16362004) {
      lVar4 = lVar3;
      lVar11 = 0;
    }
    else {
      lVar4 = parameter_s_is_invalid(lVar3,0x16362004);
      lVar11 = lVar4;
      if (lVar4 == 0) goto LAB_1401375a8;
    }
    if (DAT_1415257d0 == (code *)0x0) {
      plVar5 = (longlong *)FUN_140160c70(1,0x10);
    }
    else {
      plVar5 = (longlong *)(*DAT_1415257d0)(lVar4,param_5,param_6);
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)DAT_1415258b0;
      DAT_1415258b0 = plVar5;
    }
    parameter_s_is_invalid(lVar11);
  }
  parameter_s_is_invalid(lVar3);
  return plVar5;
}

