/**
 * Function: maxz_must_be_greater_than_or_equal_to_minz
 * Address:  1406b3de0
 * Signature: undefined maxz_must_be_greater_than_or_equal_to_minz(void)
 * Body size: 202 bytes
 */


undefined8 maxz_must_be_greater_than_or_equal_to_minz(undefined8 param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = (float *)FUN_1406b7990(param_1,1);
  pfVar2 = (float *)FUN_1406b7990(param_1,2);
  pfVar3 = (float *)FUN_1406b7990(param_1,3);
  fVar4 = *pfVar2;
  fVar5 = *pfVar3;
  if (fVar5 < fVar4) {
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,3,"max.x must be greater than or equal to min.x");
  }
  fVar8 = pfVar2[1];
  fVar6 = pfVar3[1];
  if (fVar8 <= fVar6) {
    fVar9 = pfVar2[2];
    fVar7 = pfVar3[2];
    if (fVar9 <= fVar7) {
      if (fVar9 <= pfVar1[2]) {
        fVar9 = pfVar1[2];
      }
      if (fVar9 <= fVar7) {
        fVar7 = fVar9;
      }
      if (fVar8 <= pfVar1[1]) {
        fVar8 = pfVar1[1];
      }
      if (fVar8 <= fVar6) {
        fVar6 = fVar8;
      }
      if (fVar4 <= *pfVar1) {
        fVar4 = *pfVar1;
      }
      if (fVar4 <= fVar5) {
        fVar5 = fVar4;
      }
      FUN_140474190(param_1,fVar5,fVar6,fVar7);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    invalid_argument_d_s(param_1,3,"max.z must be greater than or equal to min.z");
  }
                    /* WARNING: Subroutine does not return */
  invalid_argument_d_s(param_1,3,"max.y must be greater than or equal to min.y");
}

