/**
 * Function: s_is_not_a_valid_member_of_vector3
 * Address:  1406b7000
 * Signature: undefined s_is_not_a_valid_member_of_vector3(void)
 * Body size: 341 bytes
 */


undefined8 s_is_not_a_valid_member_of_vector3(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  char *_Str1;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar3 = (float *)FUN_1406b7990(param_1,1);
  _Str1 = (char *)FUN_1406b7610(param_1,2,0);
  cVar1 = *_Str1;
  if (cVar1 == 'B') {
    if (_Str1[1] == '\0') {
      fVar4 = pfVar3[2];
      goto LAB_1406b7127;
    }
  }
  else if (cVar1 == 'G') {
    if (_Str1[1] == '\0') {
      fVar4 = pfVar3[1];
      goto LAB_1406b7127;
    }
  }
  else if ((cVar1 == 'R') && (_Str1[1] == '\0')) {
    fVar4 = *pfVar3;
    goto LAB_1406b7127;
  }
  iVar2 = strcmp(_Str1,"Magnitude");
  if (iVar2 != 0) {
    iVar2 = strcmp(_Str1,"Unit");
    if (iVar2 == 0) {
      fVar4 = *pfVar3;
      fVar5 = pfVar3[1];
      fVar6 = pfVar3[2];
      fVar7 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
      if (fVar7 <= 1e-08) {
        fVar7 = 0.0;
        fVar5 = 0.0;
        fVar6 = 0.0;
      }
      else {
        fVar7 = 1.0 / fVar7;
        fVar6 = fVar6 * fVar7;
        fVar5 = fVar5 * fVar7;
        fVar7 = fVar7 * fVar4;
      }
      FUN_140474190(param_1,fVar7,fVar5,fVar6);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(param_1,"\'%s\' is not a valid member of Vector3",_Str1);
  }
  fVar4 = SQRT(pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]);
LAB_1406b7127:
  FUN_140474130(param_1,(double)fVar4);
  return 1;
}

