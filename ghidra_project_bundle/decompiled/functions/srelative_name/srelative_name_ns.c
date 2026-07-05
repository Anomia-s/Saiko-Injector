/**
 * Function: srelative_name_ns
 * Address:  140be5790
 * Signature: undefined srelative_name_ns(void)
 * Body size: 166 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 srelative_name_ns(undefined8 param_1,int *param_2,ulonglong param_3)

{
  undefined8 local_38 [5];
  undefined8 uStack_10;
  
  uStack_10 = 0x140be57a5;
  if (*param_2 == 0) {
    FUN_140c078a0(param_1,"%*sFull Name:\n");
    FUN_140bc77e0(param_1,*(undefined8 *)(param_2 + 2),param_3 & 0xffffffff);
  }
  else {
    local_38[0] = *(undefined8 *)(param_2 + 2);
    FUN_140c078a0(param_1,"%*sRelative Name:\n%*s",param_3,&DAT_1413a2ad6,(int)param_3 + 2,
                  &DAT_1413a2ad6);
    FUN_140c27030(param_1,local_38,0,0x82031f);
  }
  FUN_140b73bf0(param_1,&DAT_1413a7288);
  return 1;
}

