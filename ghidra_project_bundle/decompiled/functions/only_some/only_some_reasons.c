/**
 * Function: only_some_reasons
 * Address:  140be4950
 * Signature: undefined only_some_reasons(void)
 * Body size: 286 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
only_some_reasons(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  if (*param_2 != 0) {
    srelative_name_ns(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    FUN_140c078a0(param_3,"%*sOnly User Certificates\n",param_4,&DAT_1413a2ad6);
  }
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    FUN_140c078a0(param_3,"%*sOnly CA Certificates\n",param_4,&DAT_1413a2ad6);
  }
  if (0 < (int)param_2[3]) {
    FUN_140c078a0(param_3,"%*sIndirect CRL\n",param_4,&DAT_1413a2ad6);
  }
  if (param_2[2] != 0) {
    ss_ns(param_3,"Only Some Reasons",param_2[2],param_4);
  }
  if (0 < *(int *)((longlong)param_2 + 0x1c)) {
    FUN_140c078a0(param_3,"%*sOnly Attribute Certificates\n",param_4,&DAT_1413a2ad6);
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((longlong)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((longlong)param_2 + 0x1c) < 1)))) {
    FUN_140c078a0(param_3,"%*s<EMPTY>\n",param_4,&DAT_1413a2ad6);
  }
  return 1;
}

