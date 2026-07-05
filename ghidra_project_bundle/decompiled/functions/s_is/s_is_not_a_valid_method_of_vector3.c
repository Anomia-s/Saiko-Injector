/**
 * Function: s_is_not_a_valid_method_of_vector3
 * Address:  1406b7160
 * Signature: undefined s_is_not_a_valid_method_of_vector3(void)
 * Body size: 405 bytes
 */


undefined8 s_is_not_a_valid_method_of_vector3(undefined8 param_1)

{
  double dVar1;
  int iVar2;
  float *pfVar3;
  char *_Str1;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar3 = (float *)FUN_1406b7990(param_1,1);
  _Str1 = (char *)FUN_140473cb0(param_1,0);
  iVar2 = strcmp(_Str1,"Dot");
  if (iVar2 == 0) {
    pfVar4 = (float *)FUN_1406b7990(param_1,2);
    FUN_140474130(param_1,(double)(pfVar3[2] * pfVar4[2] + *pfVar3 * *pfVar4 + pfVar3[1] * pfVar4[1]
                                  ));
  }
  else {
    iVar2 = strcmp(_Str1,"Lerp");
    if (iVar2 == 0) {
      pfVar4 = (float *)FUN_1406b7990(param_1,2);
      dVar1 = (double)FUN_1406b7730(param_1,3);
      fVar5 = (float)dVar1;
      fVar7 = (pfVar4[2] - pfVar3[2]) * fVar5 + pfVar3[2];
      fVar6 = (pfVar4[1] - pfVar3[1]) * fVar5 + pfVar3[1];
      fVar5 = (*pfVar4 - *pfVar3) * fVar5 + *pfVar3;
    }
    else {
      iVar2 = strcmp(_Str1,"Cross");
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(param_1,"\'%s\' is not a valid method of Vector3",_Str1);
      }
      pfVar4 = (float *)FUN_1406b7990(param_1,2);
      fVar7 = *pfVar3 * pfVar4[1] - pfVar3[1] * *pfVar4;
      fVar6 = *pfVar4 * pfVar3[2] - *pfVar3 * pfVar4[2];
      fVar5 = pfVar3[1] * pfVar4[2] - pfVar3[2] * pfVar4[1];
    }
    FUN_140474190(param_1,fVar5,fVar6,fVar7);
  }
  return 1;
}

