/**
 * Function: ip_s_s
 * Address:  140be5f20
 * Signature: undefined ip_s_s(void)
 * Body size: 400 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ip_s_s(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_140b77980(param_2);
  if (0 < iVar2) {
    FUN_140c078a0(param_3,"%*s%s:\n",param_4,&DAT_1413a2ad6,param_5);
  }
  iVar7 = 0;
  iVar2 = FUN_140b77980(param_2);
  if (0 < iVar2) {
    do {
      if (0 < iVar7) {
        FUN_140b73bf0(param_3,&DAT_1413a7288);
      }
      puVar3 = (undefined8 *)FUN_140b77990(param_2,iVar7);
      FUN_140c078a0(param_3,&DAT_1413a5ce4,param_4 + 2,&DAT_1413a2ad6);
      if (*(int *)*puVar3 == 7) {
        piVar1 = *(int **)((int *)*puVar3 + 2);
        iVar2 = *piVar1;
        if (iVar2 < 0x10) {
          iVar6 = iVar2;
          if (3 < iVar2) {
            iVar6 = 4;
          }
        }
        else {
          iVar6 = 0x10;
        }
        lVar4 = invalid_lengthd(*(undefined8 *)(piVar1 + 2),iVar6);
        lVar5 = invalid_lengthd((longlong)iVar6 + *(longlong *)(piVar1 + 2),iVar2 - iVar6);
        if ((lVar4 != 0) && (lVar5 != 0)) {
          FUN_140c078a0(param_3,"IP:%s/%s",lVar4,lVar5);
        }
        FUN_140b8d990(lVar4,"crypto\\x509\\v3_ncons.c",0xf7);
        FUN_140b8d990(lVar5,"crypto\\x509\\v3_ncons.c",0xf8);
      }
      else {
        registered_id(param_3);
      }
      iVar7 = iVar7 + 1;
      iVar2 = FUN_140b77980(param_2);
    } while (iVar7 < iVar2);
  }
  return 1;
}

