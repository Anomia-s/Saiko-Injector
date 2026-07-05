/**
 * Function: table_index_is_nil
 * Address:  1406bf5f0
 * Signature: undefined table_index_is_nil(void)
 * Body size: 110 bytes
 */


void table_index_is_nil(undefined8 param_1,undefined8 param_2,double *param_3)

{
  float fVar1;
  
  fVar1 = *(float *)((longlong)param_3 + 0xc);
  if (fVar1 == 4.2039e-45) {
    if (NAN(*param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_1406c1000(*param_3,"table index is NaN");
    }
  }
  else {
    if (fVar1 == 5.60519e-45) {
      fVar1 = *(float *)param_3;
      if ((!NAN(fVar1)) && (fVar1 = *(float *)((longlong)param_3 + 4), !NAN(fVar1))) {
        fVar1 = *(float *)(param_3 + 1);
        if (!NAN(fVar1) && !NAN(fVar1)) goto LAB_1406bf649;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1406c1000(fVar1,"table index contains NaN");
    }
    if (fVar1 == 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_1406c1000(param_1,"table index is nil");
    }
  }
LAB_1406bf649:
  FUN_1406bf660();
  return;
}

