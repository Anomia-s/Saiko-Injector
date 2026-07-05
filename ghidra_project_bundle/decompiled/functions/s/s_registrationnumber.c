/**
 * Function: s_registrationnumber
 * Address:  140c685f0
 * Signature: undefined s_registrationnumber(void)
 * Body size: 1118 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void s_registrationnumber(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140c6860a;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  local_e0 = param_1;
  local_d8 = param_2;
  if ((*param_2 == 0) ||
     ((((iVar1 = FUN_140c078a0(param_3,"%*sadmissionAuthority:\n",param_4,&DAT_1413a2ad6), 0 < iVar1
        && (iVar1 = FUN_140c078a0(param_3,"%*s  ",param_4,&DAT_1413a2ad6), 0 < iVar1)) &&
       (iVar1 = registered_id(param_3,*param_2), 0 < iVar1)) &&
      (iVar1 = FUN_140c078a0(param_3,&DAT_1413a7288), 0 < iVar1)))) {
    iVar1 = 0;
    local_e8 = 0;
    iVar2 = FUN_140b77980(param_2[1]);
    if (0 < iVar2) {
      do {
        plVar4 = (longlong *)FUN_140b77990(param_2[1],iVar1);
        local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar1 + 1);
        iVar2 = FUN_140c078a0(param_3,"%*sEntry %0d:\n",param_4,&DAT_1413a2ad6);
        if ((iVar2 < 1) ||
           (((*plVar4 != 0 &&
             (((iVar2 = FUN_140c078a0(param_3,"%*s  admissionAuthority:\n",param_4,&DAT_1413a2ad6),
               iVar2 < 1 ||
               (iVar2 = FUN_140c078a0(param_3,"%*s    ",param_4,&DAT_1413a2ad6), iVar2 < 1)) ||
              ((iVar2 = registered_id(param_3,*plVar4), iVar2 < 1 ||
               (iVar2 = FUN_140c078a0(param_3,&DAT_1413a7288), iVar2 < 1)))))) ||
            ((plVar4[1] != 0 &&
             (iVar2 = s_namingauthoritytext(param_1,plVar4[1],param_3,param_4 + 2), iVar2 < 1))))))
        break;
        iVar8 = 0;
        iVar2 = FUN_140b77980(plVar4[2]);
        if (0 < iVar2) {
          do {
            plVar5 = (longlong *)FUN_140b77990(plVar4[2],iVar8);
            local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar8 + 1);
            iVar1 = FUN_140c078a0(param_3,"%*s  Profession Info Entry %0d:\n",param_4,&DAT_1413a2ad6
                                 );
            if (((iVar1 < 1) ||
                ((plVar5[3] != 0 &&
                 (((iVar1 = FUN_140c078a0(param_3,"%*s    registrationNumber: ",param_4,
                                          &DAT_1413a2ad6), iVar1 < 1 ||
                   (iVar1 = FUN_140bdf280(param_3,plVar5[3]), iVar1 < 1)) ||
                  (iVar1 = FUN_140c078a0(param_3,&DAT_1413a7288), iVar1 < 1)))))) ||
               ((*plVar5 != 0 &&
                (iVar1 = s_namingauthoritytext(param_1,*plVar5,param_3,param_4 + 4), iVar1 < 1))))
            goto LAB_140c68a3a;
            if (plVar5[1] != 0) {
              iVar1 = FUN_140c078a0(param_3,"%*s    Info Entries:\n",param_4,&DAT_1413a2ad6);
              if (iVar1 < 1) goto LAB_140c68a3a;
              iVar2 = 0;
              iVar1 = FUN_140b77980(plVar5[1]);
              if (0 < iVar1) {
                do {
                  uVar6 = FUN_140b77990(plVar5[1],iVar2);
                  iVar1 = FUN_140c078a0(param_3,"%*s      ",param_4,&DAT_1413a2ad6);
                  if (((iVar1 < 1) || (iVar1 = FUN_140bdf280(param_3,uVar6), iVar1 < 1)) ||
                     (iVar1 = FUN_140c078a0(param_3,&DAT_1413a7288), iVar1 < 1)) goto LAB_140c68a3a;
                  iVar2 = iVar2 + 1;
                  iVar1 = FUN_140b77980(plVar5[1]);
                } while (iVar2 < iVar1);
              }
            }
            if (plVar5[2] != 0) {
              iVar1 = FUN_140c078a0(param_3,"%*s    Profession OIDs:\n",param_4,&DAT_1413a2ad6);
              if (iVar1 < 1) goto LAB_140c68a3a;
              iVar2 = 0;
              iVar1 = FUN_140b77980(plVar5[2]);
              if (0 < iVar1) {
                do {
                  uVar6 = FUN_140b77990(plVar5[2],iVar2);
                  uVar3 = FUN_140b964c0(uVar6);
                  puVar7 = (undefined1 *)FUN_140b96460(uVar3);
                  FUN_140b96640(local_c8,0x80,uVar6,1);
                  bVar9 = puVar7 != (undefined1 *)0x0;
                  local_f0 = &DAT_1413a2ad6;
                  if (bVar9) {
                    local_f0 = &DAT_1413a70e0;
                  }
                  local_100 = &DAT_1413a2ad6;
                  if (bVar9) {
                    local_100 = &DAT_1413a70e4;
                  }
                  local_f8 = local_c8;
                  local_108 = &DAT_1413a2ad6;
                  if (bVar9) {
                    local_108 = puVar7;
                  }
                  iVar1 = FUN_140c078a0(param_3,"%*s      %s%s%s%s\n",param_4,&DAT_1413a2ad6);
                  if (iVar1 < 1) goto LAB_140c68a3a;
                  iVar2 = iVar2 + 1;
                  iVar1 = FUN_140b77980(plVar5[2]);
                } while (iVar2 < iVar1);
              }
            }
            iVar8 = iVar8 + 1;
            iVar2 = FUN_140b77980(plVar4[2]);
            param_2 = local_d8;
            param_1 = local_e0;
            iVar1 = local_e8;
          } while (iVar8 < iVar2);
        }
        iVar1 = iVar1 + 1;
        local_e8 = iVar1;
        iVar2 = FUN_140b77980(param_2[1]);
      } while (iVar1 < iVar2);
    }
  }
LAB_140c68a3a:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_128);
}

