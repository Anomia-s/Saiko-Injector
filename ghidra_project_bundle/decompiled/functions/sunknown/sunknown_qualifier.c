/**
 * Function: sunknown_qualifier
 * Address:  140c63c20
 * Signature: undefined sunknown_qualifier(void)
 * Body size: 777 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sunknown_qualifier(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined1 *in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  undefined8 uVar11;
  int local_48;
  
  local_48 = 0;
  iVar3 = FUN_140b77980(param_2);
  if (0 < iVar3) {
    do {
      if (0 < local_48) {
        FUN_140b73bf0(param_3,&DAT_1413a7288);
      }
      puVar4 = (undefined8 *)FUN_140b77990(param_2,local_48);
      FUN_140c078a0(param_3,"%*sPolicy: ",param_4,&DAT_1413a2ad6);
      FUN_140bde8c0(param_3,*puVar4);
      if (puVar4[1] != 0) {
        FUN_140b73bf0(param_3,&DAT_1413a7288);
        uVar1 = puVar4[1];
        iVar8 = 0;
        iVar3 = FUN_140b77980(uVar1);
        if (0 < iVar3) {
          do {
            if (0 < iVar8) {
              FUN_140b73bf0(param_3,&DAT_1413a7288);
            }
            puVar4 = (undefined8 *)FUN_140b77990(uVar1,iVar8);
            iVar3 = FUN_140b964c0(*puVar4);
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
            if (iVar3 == 0xa4) {
              puVar6 = (undefined4 *)puVar4[1];
              pcVar7 = "%*sCPS: %.*s";
              iVar3 = param_4 + 2;
LAB_140c63ea6:
              in_stack_ffffffffffffffa8 = (undefined1 *)CONCAT44(uVar10,*puVar6);
              FUN_140c078a0(param_3,pcVar7,iVar3,&DAT_1413a2ad6,in_stack_ffffffffffffffa8,
                            *(undefined8 *)(puVar6 + 2));
            }
            else if (iVar3 == 0xa5) {
              FUN_140c078a0(param_3,"%*sUser Notice:\n",param_4 + 2,&DAT_1413a2ad6);
              puVar4 = (undefined8 *)puVar4[1];
              puVar2 = (undefined8 *)*puVar4;
              if (puVar2 != (undefined8 *)0x0) {
                uVar11 = *(undefined8 *)((undefined4 *)*puVar2 + 2);
                FUN_140c078a0(param_3,"%*sOrganization: %.*s\n",param_4 + 4,&DAT_1413a2ad6,
                              *(undefined4 *)*puVar2,uVar11);
                iVar3 = FUN_140b77980(puVar2[1]);
                in_stack_ffffffffffffffa8 = &DAT_1413a2ad6;
                if (1 < iVar3) {
                  in_stack_ffffffffffffffa8 = &DAT_1413a5d58;
                }
                FUN_140c078a0(param_3,"%*sNumber%s: ",param_4 + 4,&DAT_1413a2ad6,
                              in_stack_ffffffffffffffa8,uVar11);
                iVar9 = 0;
                iVar3 = FUN_140b77980(puVar2[1]);
                if (0 < iVar3) {
                  do {
                    lVar5 = FUN_140b77990(puVar2[1],iVar9);
                    if (iVar9 != 0) {
                      FUN_140b73bf0(param_3,&DAT_1413a7198);
                    }
                    if (lVar5 == 0) {
                      FUN_140b73bf0(param_3,"(null)");
                    }
                    else {
                      lVar5 = FUN_140bc6890(0,lVar5);
                      if (lVar5 == 0) goto LAB_140c63ec4;
                      FUN_140b73bf0(param_3,lVar5);
                      FUN_140b8d990(lVar5,"crypto\\x509\\v3_cpols.c",0x1ea);
                    }
                    iVar9 = iVar9 + 1;
                    iVar3 = FUN_140b77980(puVar2[1]);
                  } while (iVar9 < iVar3);
                }
                if (puVar4[1] != 0) {
                  FUN_140b73bf0(param_3,&DAT_1413a7288);
                }
              }
              uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
              puVar6 = (undefined4 *)puVar4[1];
              if (puVar6 != (undefined4 *)0x0) {
                pcVar7 = "%*sExplicit Text: %.*s";
                iVar3 = param_4 + 4;
                goto LAB_140c63ea6;
              }
            }
            else {
              FUN_140c078a0(param_3,"%*sUnknown Qualifier: ",param_4 + 4,&DAT_1413a2ad6);
              FUN_140bde8c0(param_3,*puVar4);
            }
LAB_140c63ec4:
            iVar8 = iVar8 + 1;
            iVar3 = FUN_140b77980(uVar1);
          } while (iVar8 < iVar3);
        }
      }
      local_48 = local_48 + 1;
      iVar3 = FUN_140b77980(param_2);
    } while (local_48 < iVar3);
  }
  return 1;
}

