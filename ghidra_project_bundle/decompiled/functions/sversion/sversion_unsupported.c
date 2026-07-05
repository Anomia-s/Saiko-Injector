/**
 * Function: sversion_unsupported
 * Address:  140c65c00
 * Signature: undefined sversion_unsupported(void)
 * Body size: 301 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sversion_unsupported(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 1;
  iVar1 = FUN_140bd8560(&local_res10,*param_2);
  if ((iVar1 == 0) || (0xfffffffe < local_res10 + 0x80000000U)) {
    FUN_140c078a0(param_3,"%*sVersion: <unsupported>",param_4,&DAT_1413a2ad6);
  }
  else {
    FUN_140c078a0(param_3,"%*sVersion: %ld (0x%lX)",param_4,&DAT_1413a2ad6,
                  CONCAT44(uVar5,(int)local_res10 + 1),CONCAT44(uVar6,(int)local_res10));
  }
  iVar4 = 0;
  iVar1 = FUN_140b77980(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_140b77990(param_2[1],iVar4);
      lVar3 = FUN_140bc6890(0,*puVar2);
      if (lVar3 == 0) {
        return 0;
      }
      FUN_140c078a0(param_3,"\n%*sZone: %s, User: ",param_4,&DAT_1413a2ad6,lVar3);
      FUN_140b8d990(lVar3,"crypto\\x509\\v3_sxnet.c",0x54);
      FUN_140bdf280(param_3,puVar2[1]);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_140b77980(param_2[1]);
    } while (iVar4 < iVar1);
  }
  return 1;
}

