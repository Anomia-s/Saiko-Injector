/**
 * Function: failed_to_restore_object
 * Address:  1403676f0
 * Signature: undefined failed_to_restore_object(void)
 * Body size: 392 bytes
 */


longlong * failed_to_restore_object(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  pcVar3 = (code *)*param_3;
  iVar2 = *(int *)(param_3 + 1);
  *(undefined1 *)(param_1 + 4) = 0;
  (**(code **)(*param_2 + 8))(param_2,&local_34,4);
  cVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*param_2 + 0x18))(param_2), cVar5 == '\0')) {
    lVar6 = FUN_14009fd80(DAT_14151f520,local_34);
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_1402d9690(lVar6);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      (*pcVar3)((longlong)plVar7 + (longlong)iVar2,param_2);
      cVar5 = (**(code **)(*param_2 + 0x10))(param_2);
      if ((cVar5 == '\0') && (cVar5 = (**(code **)(*param_2 + 0x18))(param_2), cVar5 == '\0')) {
        if ((char)param_1[4] == '\x02') {
          if (0xf < (ulonglong)param_1[3]) {
            (*DAT_14151f538)(*param_1);
          }
          param_1[2] = 0;
          param_1[3] = 0xf;
        }
        else if (((char)param_1[4] == '\x01') &&
                (plVar4 = (longlong *)*param_1, plVar4 != (longlong *)0x0)) {
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,1);
          }
        }
        *(undefined1 *)(param_1 + 4) = 0;
        *param_1 = (longlong)plVar7;
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *(undefined1 *)(param_1 + 4) = 1;
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        iVar2 = (int)*plVar4;
        UNLOCK();
      }
      else {
        FUN_140367890(param_1,"Failed to restore object");
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        iVar2 = (int)*plVar4;
        UNLOCK();
      }
      if (iVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,1);
      }
      goto LAB_140367757;
    }
    pcVar8 = "Failed to create instance of type";
  }
  else {
    pcVar8 = "Failed to read type hash";
  }
  FUN_140367890(param_1,pcVar8);
LAB_140367757:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_58);
}

