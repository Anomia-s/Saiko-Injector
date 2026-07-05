/**
 * Function: spath_length_constraint
 * Address:  140c67490
 * Signature: undefined spath_length_constraint(void)
 * Body size: 222 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
spath_length_constraint(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  FUN_140c078a0(param_3,"%*sPath Length Constraint: ",param_4,&DAT_1413a2ad6);
  if (*param_2 == 0) {
    FUN_140c078a0(param_3,"infinite");
  }
  else {
    FUN_140cdc130();
  }
  FUN_140b73bf0(param_3,&DAT_1413a7288);
  FUN_140c078a0(param_3,"%*sPolicy Language: ",param_4,&DAT_1413a2ad6);
  FUN_140bde8c0(param_3,*(undefined8 *)param_2[1]);
  puVar1 = *(undefined4 **)(param_2[1] + 8);
  if ((puVar1 != (undefined4 *)0x0) && (*(longlong *)(puVar1 + 2) != 0)) {
    FUN_140c078a0(param_3,"\n%*sPolicy Text: %.*s",param_4,&DAT_1413a2ad6,*puVar1,
                  *(longlong *)(puVar1 + 2));
  }
  return 1;
}

