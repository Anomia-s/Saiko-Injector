/**
 * Function: sparsevector_deleting_end_partition
 * Address:  140a47220
 * Signature: undefined sparsevector_deleting_end_partition(void)
 * Body size: 900 bytes
 */


void sparsevector_deleting_end_partition(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_88 [40];
  void *local_48;
  
  local_48 = (void *)(DAT_1414ef3c0 ^ (ulonglong)auStack_88);
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[2];
  lVar6 = plVar2[4];
  if (lVar6 < 2) {
    lVar8 = 0;
  }
  else {
    lVar5 = lVar6 + -1;
    if (plVar2[5] < lVar6) {
      lVar8 = *plVar2 + plVar2[6] * 8;
      lVar7 = *plVar2;
    }
    else {
      lVar8 = *plVar2;
      lVar7 = lVar8;
    }
    lVar3 = *plVar1;
    lVar11 = 0;
    if (lVar3 < lVar5) {
      lVar11 = plVar1[1];
    }
    if (param_2 < lVar11 + *(longlong *)(lVar8 + -8 + lVar6 * 8)) {
      lVar8 = 0;
      do {
        while( true ) {
          lVar11 = ((lVar5 + lVar8) - (lVar5 + lVar8 + 1 >> 0x3f)) + 1 >> 1;
          if (plVar2[5] <= lVar11) break;
          plVar12 = (longlong *)(lVar7 + lVar11 * 8);
          if (lVar5 + lVar8 < -2) {
            plVar12 = plVar2 + 3;
          }
joined_r0x000140a47326:
          if (lVar11 <= lVar3) goto LAB_140a47328;
LAB_140a472ed:
          if (plVar1[1] + *plVar12 <= param_2) goto LAB_140a472b0;
LAB_140a47337:
          lVar5 = lVar11 + -1;
          if (lVar5 <= lVar8) goto LAB_140a4734c;
        }
        plVar12 = plVar2 + 3;
        if (lVar6 <= lVar11) goto joined_r0x000140a47326;
        plVar12 = (longlong *)(lVar7 + plVar2[6] * 8 + lVar11 * 8);
        if (lVar3 < lVar11) goto LAB_140a472ed;
LAB_140a47328:
        if (param_2 < *plVar12) goto LAB_140a47337;
LAB_140a472b0:
        lVar8 = lVar11;
      } while (lVar11 < lVar5);
    }
    else {
      lVar8 = lVar6 + -2;
    }
  }
LAB_140a4734c:
  if (lVar8 < lVar6 && -1 < lVar8) {
    if (lVar8 < plVar2[5]) {
      lVar5 = *plVar2;
      lVar7 = *plVar1;
    }
    else {
      lVar5 = plVar2[6] * 8 + *plVar2;
      lVar7 = *plVar1;
    }
    if (lVar7 < lVar8) {
      lVar5 = plVar1[1] + *(longlong *)(lVar5 + lVar8 * 8);
    }
    else {
      lVar5 = *(longlong *)(lVar5 + lVar8 * 8);
    }
    if (lVar5 != param_2) goto LAB_140a4754b;
  }
  else if (param_2 != 0) goto LAB_140a4754b;
  if (lVar8 != 0) {
    if (lVar8 == lVar6 + -1) {
      FUN_140a45e20(param_1);
      std::runtime_error::runtime_error
                ((runtime_error *)&stack0xffffffffffffffa0,"SparseVector: deleting end partition.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((runtime_error *)&stack0xffffffffffffffa0,(ThrowInfo *)&DAT_141457fb0);
    }
    plVar1 = (longlong *)param_1[1];
    if (lVar8 < plVar1[5]) {
      if (-1 < lVar8) {
        lVar6 = *(longlong *)(*plVar1 + lVar8 * 8);
        *(undefined8 *)(*plVar1 + lVar8 * 8) = 0;
joined_r0x000140a4742b:
        if (lVar6 != 0) {
          thunk_FUN_140b68ba8();
        }
      }
    }
    else if (lVar8 < plVar1[4]) {
      lVar5 = plVar1[6] * 8 + *plVar1;
      lVar6 = *(longlong *)(lVar5 + lVar8 * 8);
      *(undefined8 *)(lVar5 + lVar8 * 8) = 0;
      goto joined_r0x000140a4742b;
    }
    plVar1 = (longlong *)*param_1;
    lVar6 = *plVar1;
    uVar4 = lVar8 - lVar6;
    if (uVar4 == 0 || lVar8 < lVar6) {
      lVar5 = plVar1[2];
    }
    else {
      lVar5 = plVar1[1];
      if (lVar5 != 0) {
        plVar2 = (longlong *)plVar1[2];
        lVar6 = lVar6 + 1;
        uVar9 = plVar2[5] - lVar6;
        if (lVar8 < plVar2[5]) {
          uVar9 = uVar4;
        }
        if ((longlong)uVar9 < 1) {
          uVar9 = 0;
        }
        else {
          if (uVar9 != 1) {
            uVar10 = uVar9 & 0x7ffffffffffffffe;
            do {
              plVar12 = (longlong *)(*plVar2 + lVar6 * 8);
              *plVar12 = *plVar12 + lVar5;
              plVar12 = (longlong *)(*plVar2 + 8 + lVar6 * 8);
              *plVar12 = *plVar12 + lVar5;
              lVar6 = lVar6 + 2;
              uVar10 = uVar10 - 2;
            } while (uVar10 != 0);
          }
          if ((uVar9 & 1) != 0) {
            plVar12 = (longlong *)(*plVar2 + lVar6 * 8);
            *plVar12 = *plVar12 + lVar5;
            lVar6 = lVar6 + 1;
          }
        }
        if ((longlong)uVar9 < (longlong)uVar4) {
          lVar6 = lVar6 + plVar2[6];
          do {
            plVar12 = (longlong *)(*plVar2 + lVar6 * 8);
            *plVar12 = *plVar12 + lVar5;
            lVar6 = lVar6 + 1;
            uVar9 = uVar9 + 1;
          } while ((longlong)uVar9 < (longlong)uVar4);
        }
      }
      *plVar1 = lVar8;
      lVar5 = plVar1[2];
      lVar7 = *(longlong *)(lVar5 + 0x20) + -1;
      lVar6 = lVar8;
      if (lVar7 <= lVar8) {
        plVar1[1] = 0;
        lVar6 = lVar7;
      }
    }
    *plVar1 = lVar6 + -1;
    FUN_1407fe100(lVar5,lVar8,1);
    FUN_140a47020(param_1[1],lVar8,1);
    lVar8 = lVar8 + -1;
    goto LAB_140a4754b;
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1[5] < 1) {
    if (0 < plVar1[4]) {
      lVar6 = *(longlong *)(*plVar1 + plVar1[6] * 8);
      *(undefined8 *)(*plVar1 + plVar1[6] * 8) = 0;
      goto joined_r0x000140a474ce;
    }
  }
  else {
    lVar6 = *(longlong *)*plVar1;
    *(longlong *)*plVar1 = 0;
joined_r0x000140a474ce:
    if (lVar6 != 0) {
      thunk_FUN_140b68ba8();
      lVar8 = 0;
      goto LAB_140a4754b;
    }
  }
  lVar8 = 0;
LAB_140a4754b:
  if (DAT_1414ef3c0 != ((ulonglong)local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0((ulonglong)local_48 ^ (ulonglong)auStack_88);
  }
  FUN_1407fdea0(*param_1,lVar8,0xffffffffffffffff);
  return;
}

