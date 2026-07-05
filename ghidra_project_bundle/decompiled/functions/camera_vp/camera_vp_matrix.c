/**
 * Function: camera_vp_matrix
 * Address:  1404d3120
 * Signature: undefined camera_vp_matrix(void)
 * Body size: 434 bytes
 */


ulonglong camera_vp_matrix(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1404d4c10(&local_30,*param_1,"Camera VP Matrix",0x40,9);
  plVar2 = local_30;
  local_30 = (longlong *)0x0;
  plVar3 = (longlong *)param_1[0x2a];
  param_1[0x2a] = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      (**(code **)(*plVar3 + 0x10))();
    }
    plVar2 = (longlong *)param_1[0x2a];
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_1404d4c10(&local_30,*param_1,"Camera VP Matrix",0x40,9);
    plVar2 = local_30;
    local_30 = (longlong *)0x0;
    plVar3 = (longlong *)param_1[0x2b];
    param_1[0x2b] = plVar2;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        local_30 = (longlong *)0x0;
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar2 = (longlong *)param_1[0x2b];
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_1404d4c10(&local_30,*param_1,"Camera VP Matrix",0x40,9);
      plVar2 = local_30;
      local_30 = (longlong *)0x0;
      plVar3 = (longlong *)param_1[0x2c];
      param_1[0x2c] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        plVar3 = local_30;
        if (local_30 != (longlong *)0x0) {
          local_30 = (longlong *)0x0;
          (**(code **)(*plVar3 + 0x10))();
        }
        plVar2 = (longlong *)param_1[0x2c];
      }
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_14021db90(*param_1);
        plVar3 = (longlong *)param_1[0x31];
        plVar2 = (longlong *)param_1[(ulonglong)uVar1 + 0x2a];
        uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        if (plVar3 != plVar2) {
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))(plVar2);
            plVar3 = (longlong *)param_1[0x31];
          }
          param_1[0x31] = plVar2;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        goto LAB_1404d32c7;
      }
    }
  }
  uVar4 = 0;
LAB_1404d32c7:
  return uVar4 & 0xffffffff;
}

