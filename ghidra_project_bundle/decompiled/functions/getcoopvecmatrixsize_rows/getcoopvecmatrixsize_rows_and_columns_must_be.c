/**
 * Function: getcoopvecmatrixsize_rows_and_columns_must_be
 * Address:  140525f00
 * Signature: undefined8 __thiscall getcoopvecmatrixsize_rows_and_columns_must_be(void * this, undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * Body size: 382 bytes
 */


undefined8 __thiscall
getcoopvecmatrixsize_rows_and_columns_must_be
          (void *this,undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_register_00000014;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1e8))
                    (*(longlong **)((longlong)this + 0x10),
                     CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),0x17),0,0);
  if (cVar1 == '\0') {
    pcVar2 = (char *)FUN_140b65d30(0x50);
    builtin_strncpy(pcVar2,
                    "getCoopVecMatrixSize: Cooperative Vectors are not supported by the device",0x4a
                   );
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar2);
    uVar3 = 0x50;
  }
  else {
    if (0 < param_3 && 0 < param_4) {
                    /* WARNING: Could not recover jumptable at 0x00014052607b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x200))
                        (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3);
      return uVar3;
    }
    pcVar2 = (char *)FUN_140b65d30(0x40);
    builtin_strncpy(pcVar2,"getCoopVecMatrixSize: rows and columns must be positive",0x38);
    (**(code **)(**(longlong **)((longlong)this + 0x18) + 8))
              (*(longlong **)((longlong)this + 0x18),2,pcVar2);
    uVar3 = 0x40;
  }
  thunk_FUN_140b68ba8(pcVar2,uVar3);
  return 0;
}

