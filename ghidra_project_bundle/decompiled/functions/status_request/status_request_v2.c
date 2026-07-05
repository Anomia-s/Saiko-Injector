/**
 * Function: status_request_v2
 * Address:  140c682c0
 * Signature: undefined status_request_v2(void)
 * Body size: 190 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 status_request_v2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 local_res18;
  
  iVar5 = 0;
  local_res18 = param_3;
  iVar1 = FUN_140b77980(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = FUN_140b77990(param_2);
      iVar1 = FUN_140bd8680(uVar2);
      uVar4 = 0;
      piVar3 = &DAT_141517b38;
      do {
        if (iVar1 == *piVar3) {
          FUN_140bc66d0(0,(&PTR_s_status_request_141517b40)[uVar4 * 2],&local_res18);
          goto LAB_140c68356;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 4;
      } while (uVar4 < 2);
      FUN_140bc6770(0,uVar2,&local_res18);
LAB_140c68356:
      iVar5 = iVar5 + 1;
      iVar1 = FUN_140b77980(param_2);
    } while (iVar5 < iVar1);
  }
  return local_res18;
}

