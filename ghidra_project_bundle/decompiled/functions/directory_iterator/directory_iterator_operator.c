/**
 * Function: directory_iterator_operator
 * Address:  14047ebb0
 * Signature: undefined directory_iterator_operator(void)
 * Body size: 225 bytes
 */


longlong * directory_iterator_operator(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_298 [40];
  undefined1 local_270 [44];
  short local_244;
  short local_242;
  short local_240;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_298;
  lVar3 = *param_1;
  do {
    iVar5 = FUN_140b6623c(*(undefined8 *)(lVar3 + 0x40),local_270);
    if (iVar5 != 0) {
      if (iVar5 == 0x12) {
        plVar4 = (longlong *)param_1[1];
        *param_1 = 0;
        param_1[1] = 0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 8))(plVar4);
            }
          }
        }
        goto LAB_14047ec1b;
      }
      FUN_14047f850("directory_iterator::operator++",iVar5);
      goto LAB_14047ec81;
    }
  } while ((local_244 == 0x2e) && ((local_242 == 0 || ((local_242 == 0x2e && (local_240 == 0))))));
  FUN_14047f540(lVar3,local_270);
LAB_14047ec1b:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_298)) {
    return param_1;
  }
LAB_14047ec81:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_298);
}

